/*
 *  Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "settings.h"
#include "fft.h"
#include "codec.h"
#include <math.h>

static double costab1[FRAMESAMPLES_HALF];
static double sintab1[FRAMESAMPLES_HALF];
static double costab2[FRAMESAMPLES_QUARTER];
static double sintab2[FRAMESAMPLES_QUARTER];

#if defined(WEBRTC_LINUX)
extern long int lrint(double x); /* Note! This declaration is missing in math.h, that is why it is declared as extern*/
#define WebRtcIsac_lrint lrint
#elif defined(WEBRTC_MAC)
extern long int lrint(double x); /* Note! This declaration is missing in math.h, that is why it is declared as extern*/
#define WebRtcIsac_lrint lrint
#elif defined(X64)
static __inline WebRtc_Word32 WebRtcIsac_lrint(double flt) {
  WebRtc_Word32 intgr;
  intgr = (WebRtc_Word32)floor(flt+.499999999999);
  return intgr ;
}
#elif defined(WEBRTC_TARGET_PC)

static __inline WebRtc_Word32 WebRtcIsac_lrint(double flt) {

  WebRtc_Word32 intgr;

  _asm
  {
    fld flt
        fistp intgr
 } ;

  return intgr ;
}
#else// Do a slow but correct implementation of lrint

static __inline WebRtc_Word32 WebRtcIsac_lrint(double flt) {
  WebRtc_Word32 intgr;
  intgr = (WebRtc_Word32)floor(flt+.499999999999);
  return intgr ;
}
#endif

void WebRtcIsac_InitTransform()
{
  int k;
  double fact, phase;

  fact = PI / (FRAMESAMPLES_HALF);
  phase = 0.0;
  for (k = 0; k < FRAMESAMPLES_HALF; k++) {
    costab1[k] = cos(phase);
    sintab1[k] = sin(phase);
    phase += fact;
  }

  fact = PI * ((double) (FRAMESAMPLES_HALF - 1)) / ((double) FRAMESAMPLES_HALF);
  phase = 0.5 * fact;
  for (k = 0; k < FRAMESAMPLES_QUARTER; k++) {
    costab2[k] = cos(phase);
    sintab2[k] = sin(phase);
    phase += fact;
  }
}


void WebRtcIsac_Time2Spec(double *inre1,
                         double *inre2,
                         WebRtc_Word16 *outreQ7,
                         WebRtc_Word16 *outimQ7,
                         FFTstr *fftstr_obj)
{

  int k;
  int dims[1];
  double tmp1r, tmp1i, xr, xi, yr, yi, fact;
  double tmpre[FRAMESAMPLES_HALF], tmpim[FRAMESAMPLES_HALF];


  dims[0] = FRAMESAMPLES_HALF;


  /* Multiply with complex exponentials and combine into one complex vector */
  fact = 0.5 / sqrt(FRAMESAMPLES_HALF);
  for (k = 0; k < FRAMESAMPLES_HALF; k++) {
    tmp1r = costab1[k];
    tmp1i = sintab1[k];
    tmpre[k] = (inre1[k] * tmp1r + inre2[k] * tmp1i) * fact;
    tmpim[k] = (inre2[k] * tmp1r - inre1[k] * tmp1i) * fact;
  }


  /* Get DFT */
  WebRtcIsac_Fftns(1, dims, tmpre, tmpim, -1, 1.0, fftstr_obj);

  /* Use symmetry to separate into two complex vectors and center frames in time around zero */
  for (k = 0; k < FRAMESAMPLES_QUARTER; k++) {
    xr = tmpre[k] + tmpre[FRAMESAMPLES_HALF - 1 - k];
    yi = -tmpre[k] + tmpre[FRAMESAMPLES_HALF - 1 - k];
    xi = tmpim[k] - tmpim[FRAMESAMPLES_HALF - 1 - k];
    yr = tmpim[k] + tmpim[FRAMESAMPLES_HALF - 1 - k];

    tmp1r = costab2[k];
    tmp1i = sintab2[k];
    outreQ7[k] = (WebRtc_Word16)WebRtcIsac_lrint((xr * tmp1r - xi * tmp1i) * 128.0);
    outimQ7[k] = (WebRtc_Word16)WebRtcIsac_lrint((xr * tmp1i + xi * tmp1r) * 128.0);
    outreQ7[FRAMESAMPLES_HALF - 1 - k] = (WebRtc_Word16)WebRtcIsac_lrint((-yr * tmp1i - yi * tmp1r) * 128.0);
    outimQ7[FRAMESAMPLES_HALF - 1 - k] = (WebRtc_Word16)WebRtcIsac_lrint((-yr * tmp1r + yi * tmp1i) * 128.0);
  }
}


void WebRtcIsac_Spec2time(double *inre, double *inim, double *outre1, double *outre2, FFTstr *fftstr_obj)
{

  int k;
  double tmp1r, tmp1i, xr, xi, yr, yi, fact;

  int dims;

  dims = FRAMESAMPLES_HALF;

  for (k = 0; k < FRAMESAMPLES_QUARTER; k++) {
    /* Move zero in time to beginning of frames */
    tmp1r = costab2[k];
    tmp1i = sintab2[k];
    xr = inre[k] * tmp1r + inim[k] * tmp1i;
    xi = inim[k] * tmp1r - inre[k] * tmp1i;
    yr = -inim[FRAMESAMPLES_HALF - 1 - k] * tmp1r - inre[FRAMESAMPLES_HALF - 1 - k] * tmp1i;
    yi = -inre[FRAMESAMPLES_HALF - 1 - k] * tmp1r + inim[FRAMESAMPLES_HALF - 1 - k] * tmp1i;

    /* Combine into one vector,  z = x + j * y */
    outre1[k] = xr - yi;
    outre1[FRAMESAMPLES_HALF - 1 - k] = xr + yi;
    outre2[k] = xi + yr;
    outre2[FRAMESAMPLES_HALF - 1 - k] = -xi + yr;
  }


  /* Get IDFT */
  WebRtcIsac_Fftns(1, &dims, outre1, outre2, 1, FRAMESAMPLES_HALF, fftstr_obj);


  /* Demodulate and separate */
  fact = sqrt(FRAMESAMPLES_HALF);
  for (k = 0; k < FRAMESAMPLES_HALF; k++) {
    tmp1r = costab1[k];
    tmp1i = sintab1[k];
    xr = (outre1[k] * tmp1r - outre2[k] * tmp1i) * fact;
    outre2[k] = (outre2[k] * tmp1r + outre1[k] * tmp1i) * fact;
    outre1[k] = xr;
  }
}
