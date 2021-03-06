# $Id: Makefile.inc 2339 2010-07-23 03:35:21Z peter $

TESTS += modules/arch/x86/tests/x86_test.sh

EXTRA_DIST += modules/arch/x86/tests/x86_test.sh
EXTRA_DIST += modules/arch/x86/tests/gen-fma-test.py
EXTRA_DIST += modules/arch/x86/tests/addbyte.asm
EXTRA_DIST += modules/arch/x86/tests/addbyte.errwarn
EXTRA_DIST += modules/arch/x86/tests/addbyte.hex
EXTRA_DIST += modules/arch/x86/tests/addrop.asm
EXTRA_DIST += modules/arch/x86/tests/addrop.errwarn
EXTRA_DIST += modules/arch/x86/tests/addrop.hex
EXTRA_DIST += modules/arch/x86/tests/addrop-err.asm
EXTRA_DIST += modules/arch/x86/tests/addrop-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/aes.asm
EXTRA_DIST += modules/arch/x86/tests/aes.hex
EXTRA_DIST += modules/arch/x86/tests/amd200707.asm
EXTRA_DIST += modules/arch/x86/tests/amd200707.hex
EXTRA_DIST += modules/arch/x86/tests/amd-fma4.asm
EXTRA_DIST += modules/arch/x86/tests/amd-fma4.hex
EXTRA_DIST += modules/arch/x86/tests/arithsmall.asm
EXTRA_DIST += modules/arch/x86/tests/arithsmall.errwarn
EXTRA_DIST += modules/arch/x86/tests/arithsmall.hex
EXTRA_DIST += modules/arch/x86/tests/avx.asm
EXTRA_DIST += modules/arch/x86/tests/avx.hex
EXTRA_DIST += modules/arch/x86/tests/avx16.asm
EXTRA_DIST += modules/arch/x86/tests/avx16.hex
EXTRA_DIST += modules/arch/x86/tests/avxcc.asm
EXTRA_DIST += modules/arch/x86/tests/avxcc.hex
EXTRA_DIST += modules/arch/x86/tests/bittest.asm
EXTRA_DIST += modules/arch/x86/tests/bittest.hex
EXTRA_DIST += modules/arch/x86/tests/bswap64.asm
EXTRA_DIST += modules/arch/x86/tests/bswap64.hex
EXTRA_DIST += modules/arch/x86/tests/clmul.asm
EXTRA_DIST += modules/arch/x86/tests/clmul.hex
EXTRA_DIST += modules/arch/x86/tests/cmpxchg.asm
EXTRA_DIST += modules/arch/x86/tests/cmpxchg.hex
EXTRA_DIST += modules/arch/x86/tests/cpubasic-err.asm
EXTRA_DIST += modules/arch/x86/tests/cpubasic-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/cyrix.asm
EXTRA_DIST += modules/arch/x86/tests/cyrix.hex
EXTRA_DIST += modules/arch/x86/tests/div-err.asm
EXTRA_DIST += modules/arch/x86/tests/div-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/ea-nonzero.asm
EXTRA_DIST += modules/arch/x86/tests/ea-nonzero.hex
EXTRA_DIST += modules/arch/x86/tests/ea-over.asm
EXTRA_DIST += modules/arch/x86/tests/ea-over.errwarn
EXTRA_DIST += modules/arch/x86/tests/ea-over.hex
EXTRA_DIST += modules/arch/x86/tests/ea-warn.asm
EXTRA_DIST += modules/arch/x86/tests/ea-warn.errwarn
EXTRA_DIST += modules/arch/x86/tests/ea-warn.hex
EXTRA_DIST += modules/arch/x86/tests/ebpindex.asm
EXTRA_DIST += modules/arch/x86/tests/ebpindex.hex
EXTRA_DIST += modules/arch/x86/tests/effaddr.asm
EXTRA_DIST += modules/arch/x86/tests/effaddr.hex
EXTRA_DIST += modules/arch/x86/tests/enter.asm
EXTRA_DIST += modules/arch/x86/tests/enter.errwarn
EXTRA_DIST += modules/arch/x86/tests/enter.hex
EXTRA_DIST += modules/arch/x86/tests/eptvpid.asm
EXTRA_DIST += modules/arch/x86/tests/eptvpid.hex
EXTRA_DIST += modules/arch/x86/tests/f16c.asm
EXTRA_DIST += modules/arch/x86/tests/f16c.hex
EXTRA_DIST += modules/arch/x86/tests/far64.asm
EXTRA_DIST += modules/arch/x86/tests/far64.hex
EXTRA_DIST += modules/arch/x86/tests/farbasic.asm
EXTRA_DIST += modules/arch/x86/tests/farbasic.hex
EXTRA_DIST += modules/arch/x86/tests/farithr.asm
EXTRA_DIST += modules/arch/x86/tests/farithr.hex
EXTRA_DIST += modules/arch/x86/tests/fcmov.asm
EXTRA_DIST += modules/arch/x86/tests/fcmov.hex
EXTRA_DIST += modules/arch/x86/tests/fma.asm
EXTRA_DIST += modules/arch/x86/tests/fma.hex
EXTRA_DIST += modules/arch/x86/tests/fsgsbase.asm
EXTRA_DIST += modules/arch/x86/tests/fsgsbase.hex
EXTRA_DIST += modules/arch/x86/tests/fwdequ64.asm
EXTRA_DIST += modules/arch/x86/tests/fwdequ64.hex
EXTRA_DIST += modules/arch/x86/tests/genopcode.asm
EXTRA_DIST += modules/arch/x86/tests/genopcode.hex
EXTRA_DIST += modules/arch/x86/tests/imm64.asm
EXTRA_DIST += modules/arch/x86/tests/imm64.errwarn
EXTRA_DIST += modules/arch/x86/tests/imm64.hex
EXTRA_DIST += modules/arch/x86/tests/iret.asm
EXTRA_DIST += modules/arch/x86/tests/iret.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-1.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-1.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-2.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-2.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-3.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-3.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-4.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-4.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-5.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-5.hex
EXTRA_DIST += modules/arch/x86/tests/jmp64-6.asm
EXTRA_DIST += modules/arch/x86/tests/jmp64-6.hex
EXTRA_DIST += modules/arch/x86/tests/jmpfar.asm
EXTRA_DIST += modules/arch/x86/tests/jmpfar.hex
EXTRA_DIST += modules/arch/x86/tests/lds.asm
EXTRA_DIST += modules/arch/x86/tests/lds.hex
EXTRA_DIST += modules/arch/x86/tests/loopadsz.asm
EXTRA_DIST += modules/arch/x86/tests/loopadsz.hex
EXTRA_DIST += modules/arch/x86/tests/lsahf.asm
EXTRA_DIST += modules/arch/x86/tests/lsahf.hex
EXTRA_DIST += modules/arch/x86/tests/mem64-err.asm
EXTRA_DIST += modules/arch/x86/tests/mem64-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/mem64.asm
EXTRA_DIST += modules/arch/x86/tests/mem64.errwarn
EXTRA_DIST += modules/arch/x86/tests/mem64.hex
EXTRA_DIST += modules/arch/x86/tests/mem64hi32.asm
EXTRA_DIST += modules/arch/x86/tests/mem64hi32.hex
EXTRA_DIST += modules/arch/x86/tests/mem64rip.asm
EXTRA_DIST += modules/arch/x86/tests/mem64rip.hex
EXTRA_DIST += modules/arch/x86/tests/mixcase.asm
EXTRA_DIST += modules/arch/x86/tests/mixcase.hex
EXTRA_DIST += modules/arch/x86/tests/movbe.asm
EXTRA_DIST += modules/arch/x86/tests/movbe.hex
EXTRA_DIST += modules/arch/x86/tests/movdq32.asm
EXTRA_DIST += modules/arch/x86/tests/movdq32.hex
EXTRA_DIST += modules/arch/x86/tests/movdq64.asm
EXTRA_DIST += modules/arch/x86/tests/movdq64.hex
EXTRA_DIST += modules/arch/x86/tests/negequ.asm
EXTRA_DIST += modules/arch/x86/tests/negequ.hex
EXTRA_DIST += modules/arch/x86/tests/nomem64-err.asm
EXTRA_DIST += modules/arch/x86/tests/nomem64-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/nomem64-err2.asm
EXTRA_DIST += modules/arch/x86/tests/nomem64-err2.errwarn
EXTRA_DIST += modules/arch/x86/tests/nomem64.asm
EXTRA_DIST += modules/arch/x86/tests/nomem64.errwarn
EXTRA_DIST += modules/arch/x86/tests/nomem64.hex
EXTRA_DIST += modules/arch/x86/tests/o64.asm
EXTRA_DIST += modules/arch/x86/tests/o64.hex
EXTRA_DIST += modules/arch/x86/tests/o64loop.asm
EXTRA_DIST += modules/arch/x86/tests/o64loop.errwarn
EXTRA_DIST += modules/arch/x86/tests/o64loop.hex
EXTRA_DIST += modules/arch/x86/tests/opersize.asm
EXTRA_DIST += modules/arch/x86/tests/opersize.hex
EXTRA_DIST += modules/arch/x86/tests/opsize-err.asm
EXTRA_DIST += modules/arch/x86/tests/opsize-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/overflow.asm
EXTRA_DIST += modules/arch/x86/tests/overflow.errwarn
EXTRA_DIST += modules/arch/x86/tests/overflow.hex
EXTRA_DIST += modules/arch/x86/tests/padlock.asm
EXTRA_DIST += modules/arch/x86/tests/padlock.hex
EXTRA_DIST += modules/arch/x86/tests/pinsrb.asm
EXTRA_DIST += modules/arch/x86/tests/pinsrb.hex
EXTRA_DIST += modules/arch/x86/tests/pshift.asm
EXTRA_DIST += modules/arch/x86/tests/pshift.hex
EXTRA_DIST += modules/arch/x86/tests/push64.asm
EXTRA_DIST += modules/arch/x86/tests/push64.errwarn
EXTRA_DIST += modules/arch/x86/tests/push64.hex
EXTRA_DIST += modules/arch/x86/tests/pushf.asm
EXTRA_DIST += modules/arch/x86/tests/pushf.hex
EXTRA_DIST += modules/arch/x86/tests/pushf-err.asm
EXTRA_DIST += modules/arch/x86/tests/pushf-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/pushnosize.asm
EXTRA_DIST += modules/arch/x86/tests/pushnosize.errwarn
EXTRA_DIST += modules/arch/x86/tests/pushnosize.hex
EXTRA_DIST += modules/arch/x86/tests/rdrnd.asm
EXTRA_DIST += modules/arch/x86/tests/rdrnd.hex
EXTRA_DIST += modules/arch/x86/tests/rep.asm
EXTRA_DIST += modules/arch/x86/tests/rep.hex
EXTRA_DIST += modules/arch/x86/tests/ret.asm
EXTRA_DIST += modules/arch/x86/tests/ret.hex
EXTRA_DIST += modules/arch/x86/tests/riprel1.asm
EXTRA_DIST += modules/arch/x86/tests/riprel1.hex
EXTRA_DIST += modules/arch/x86/tests/riprel2.asm
EXTRA_DIST += modules/arch/x86/tests/riprel2.errwarn
EXTRA_DIST += modules/arch/x86/tests/riprel2.hex
EXTRA_DIST += modules/arch/x86/tests/ripseg.asm
EXTRA_DIST += modules/arch/x86/tests/ripseg.errwarn
EXTRA_DIST += modules/arch/x86/tests/ripseg.hex
EXTRA_DIST += modules/arch/x86/tests/segmov.asm
EXTRA_DIST += modules/arch/x86/tests/segmov.hex
EXTRA_DIST += modules/arch/x86/tests/segoff.asm
EXTRA_DIST += modules/arch/x86/tests/segoff.hex
EXTRA_DIST += modules/arch/x86/tests/segoff-err.asm
EXTRA_DIST += modules/arch/x86/tests/segoff-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/shift.asm
EXTRA_DIST += modules/arch/x86/tests/shift.hex
EXTRA_DIST += modules/arch/x86/tests/simd-1.asm
EXTRA_DIST += modules/arch/x86/tests/simd-1.hex
EXTRA_DIST += modules/arch/x86/tests/simd-2.asm
EXTRA_DIST += modules/arch/x86/tests/simd-2.hex
EXTRA_DIST += modules/arch/x86/tests/simd64-1.asm
EXTRA_DIST += modules/arch/x86/tests/simd64-1.hex
EXTRA_DIST += modules/arch/x86/tests/simd64-2.asm
EXTRA_DIST += modules/arch/x86/tests/simd64-2.hex
EXTRA_DIST += modules/arch/x86/tests/smx.asm
EXTRA_DIST += modules/arch/x86/tests/smx.hex
EXTRA_DIST += modules/arch/x86/tests/sse-prefix.asm
EXTRA_DIST += modules/arch/x86/tests/sse-prefix.hex
EXTRA_DIST += modules/arch/x86/tests/sse3.asm
EXTRA_DIST += modules/arch/x86/tests/sse3.hex
EXTRA_DIST += modules/arch/x86/tests/sse4.asm
EXTRA_DIST += modules/arch/x86/tests/sse4.hex
EXTRA_DIST += modules/arch/x86/tests/sse4-err.asm
EXTRA_DIST += modules/arch/x86/tests/sse4-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/ssewidth.asm
EXTRA_DIST += modules/arch/x86/tests/ssewidth.hex
EXTRA_DIST += modules/arch/x86/tests/ssse3.asm
EXTRA_DIST += modules/arch/x86/tests/ssse3.c
EXTRA_DIST += modules/arch/x86/tests/ssse3.hex
EXTRA_DIST += modules/arch/x86/tests/stos.asm
EXTRA_DIST += modules/arch/x86/tests/stos.hex
EXTRA_DIST += modules/arch/x86/tests/str.asm
EXTRA_DIST += modules/arch/x86/tests/str.hex
EXTRA_DIST += modules/arch/x86/tests/strict.asm
EXTRA_DIST += modules/arch/x86/tests/strict.errwarn
EXTRA_DIST += modules/arch/x86/tests/strict.hex
EXTRA_DIST += modules/arch/x86/tests/strict-err.asm
EXTRA_DIST += modules/arch/x86/tests/strict-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/stringseg.asm
EXTRA_DIST += modules/arch/x86/tests/stringseg.errwarn
EXTRA_DIST += modules/arch/x86/tests/stringseg.hex
EXTRA_DIST += modules/arch/x86/tests/svm.asm
EXTRA_DIST += modules/arch/x86/tests/svm.hex
EXTRA_DIST += modules/arch/x86/tests/twobytemem.asm
EXTRA_DIST += modules/arch/x86/tests/twobytemem.errwarn
EXTRA_DIST += modules/arch/x86/tests/twobytemem.hex
EXTRA_DIST += modules/arch/x86/tests/vmx.asm
EXTRA_DIST += modules/arch/x86/tests/vmx.hex
EXTRA_DIST += modules/arch/x86/tests/vmx-err.asm
EXTRA_DIST += modules/arch/x86/tests/vmx-err.errwarn
EXTRA_DIST += modules/arch/x86/tests/x86label.asm
EXTRA_DIST += modules/arch/x86/tests/x86label.hex
EXTRA_DIST += modules/arch/x86/tests/xchg64.asm
EXTRA_DIST += modules/arch/x86/tests/xchg64.hex
EXTRA_DIST += modules/arch/x86/tests/xmm64.asm
EXTRA_DIST += modules/arch/x86/tests/xmm64.hex
EXTRA_DIST += modules/arch/x86/tests/xop-all.asm
EXTRA_DIST += modules/arch/x86/tests/xop-all.hex
EXTRA_DIST += modules/arch/x86/tests/xop-basic.asm
EXTRA_DIST += modules/arch/x86/tests/xop-basic.hex
EXTRA_DIST += modules/arch/x86/tests/xop-cc.asm
EXTRA_DIST += modules/arch/x86/tests/xop-cc.hex
EXTRA_DIST += modules/arch/x86/tests/xsave.asm
EXTRA_DIST += modules/arch/x86/tests/xsave.hex

EXTRA_DIST += modules/arch/x86/tests/gas32/Makefile.inc
EXTRA_DIST += modules/arch/x86/tests/gas64/Makefile.inc

include modules/arch/x86/tests/gas32/Makefile.inc
include modules/arch/x86/tests/gas64/Makefile.inc
