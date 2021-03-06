/*
 *  Copyright (c) 2011 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef NETEQTEST_NETEQCLASS_H
#define NETEQTEST_NETEQCLASS_H

#include <stdio.h>
#include <vector>

#include "webrtc_neteq.h"
#include "webrtc_neteq_internal.h"

#include "NETEQTEST_RTPpacket.h"

#ifdef WIN32
#define WINDOWS_TIMING // complexity measurement only implemented for windows
//TODO(hlundin):Add complexity testing for Linux.
#include <windows.h>
#endif

class NETEQTEST_NetEQClass
{
public:
    NETEQTEST_NetEQClass();
    NETEQTEST_NetEQClass(enum WebRtcNetEQDecoder *usedCodec, int noOfCodecs, 
        WebRtc_UWord16 fs = 8000, WebRtcNetEQNetworkType nwType = kTCPLargeJitter);
    ~NETEQTEST_NetEQClass();

    int assign();
    int init(WebRtc_UWord16 fs = 8000);
    int assignBuffer(enum WebRtcNetEQDecoder *usedCodec, int noOfCodecs, WebRtcNetEQNetworkType nwType = kTCPLargeJitter);
    int loadCodec(WebRtcNetEQ_CodecDef & codecInst);
    int recIn(NETEQTEST_RTPpacket & rtp);
    WebRtc_Word16 recOut(WebRtc_Word16 *outData, void *msInfo = NULL, enum WebRtcNetEQOutputType *outputType = NULL);
    WebRtc_UWord32 getSpeechTimeStamp();

    void * instance() { return (_inst); };
    void usePreparseRTP( bool useIt = true ) { _preparseRTP = useIt; };
    bool usingPreparseRTP() { return (_preparseRTP); };
    void setMaster( bool isMaster = true ) { _isMaster = isMaster; };
    void setSlave() { _isMaster = false; };
    bool isMaster() { return (_isMaster); };
    bool isSlave() { return (!_isMaster); };

#ifdef WINDOWS_TIMING
    double getRecInTime() { return (static_cast<double>( _totTimeRecIn.QuadPart )); };
    double getRecOutTime() { return (static_cast<double>( _totTimeRecOut.QuadPart )); };
#else
    double getRecInTime() { return (0.0); };
    double getRecOutTime() { return (0.0); };

#endif

    void printError();
    void printError(NETEQTEST_RTPpacket & rtp);

private:
    void *          _inst;
    WebRtc_Word8 *    _instMem;
    WebRtc_Word8 *    _bufferMem;
    bool            _preparseRTP;
    int             _fsmult;
    bool            _isMaster;
#ifdef WINDOWS_TIMING
    LARGE_INTEGER   _totTimeRecIn;
    LARGE_INTEGER   _totTimeRecOut;
#endif
};



//class NETEQTEST_NetEQVector
//{
//public:
//    NETEQTEST_NetEQVector(int numChannels);
//    NETEQTEST_NetEQVector(int numChannels, enum WebRtcNetEQDecoder *usedCodec, int noOfCodecs, 
//        WebRtc_UWord16 fs = 8000, WebRtcNetEQNetworkType nwType = kTCPLargeJitter);
//    ~NETEQTEST_NetEQVector();
//
//private:
//    std::vector<NETEQTEST_NetEQClass *> channels;
//};

#endif //NETEQTEST_NETEQCLASS_H
