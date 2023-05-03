#ifndef H_MIPS
#define H_MIPS
#include <stdint.h>

typedef enum Register {
    r0 = 0,
    r1,
    r2,
    r3,
    r4,
    r5,
    r6,
    r7,
    r8,
    r9,
    r10,
    r11,
    r12,
    r13,
    r14,
    r15,
    r16,
    r17,
    r18,
    r19,
    r20,
    r21,
    r22,
    r23,
    r24,
    r25,
    r26,
    r27,
    r28,
    r29,
    r30,
    r31,
    zero = r0,
    at = r1,
    v0 = r2,
    v1 = r3,
    a0 = r4,
    a1 = r5,
    a2 = r6,
    a3 = r7,
    t0 = r8,
    t1 = r9,
    t2 = r10,
    t3 = r11,
    t4 = r12,
    t5 = r13,
    t6 = r14,
    t7 = r15,
    s0 = r16,
    s1 = r17,
    s2 = r18,
    s3 = r19,
    s4 = r20,
    s5 = r21,
    s6 = r22,
    s7 = r23,
    t8 = r24,
    t9 = r25,
    k0 = r26,
    k1 = r27,
    gp = r28,
    sp = r29,
    fp = r30,
    ra = r31,
    InvalidGPRReg = -1,
} RegisterID;

typedef enum SPRegister {
    fir = 0,
    fccr = 25,
    fexr = 26,
    fenr = 28,
    fcsr = 31,
    pc
} SPRegisterID;

typedef enum FPRegister {
    f0,
    f1,
    f2,
    f3,
    f4,
    f5,
    f6,
    f7,
    f8,
    f9,
    f10,
    f11,
    f12,
    f13,
    f14,
    f15,
    f16,
    f17,
    f18,
    f19,
    f20,
    f21,
    f22,
    f23,
    f24,
    f25,
    f26,
    f27,
    f28,
    f29,
    f30,
    f31,
    InvalidFPRReg = -1,
} FPRegisterID;

enum {
    OP_SH_RD = 11,
    OP_SH_RT = 16,
    OP_SH_RS = 21,
    OP_SH_SHAMT = 6,
    OP_SH_CODE = 16,
    OP_SH_FD = 6,
    OP_SH_FS = 11,
    OP_SH_FT = 16,
    OP_SH_MSB = 11,
    OP_SH_LSB = 6
};

enum {
    FP_CAUSE_INVALID_OPERATION = 1 << 16 // FCSR Bits
};

uint32_t lui(RegisterID rt, int32_t imm);
uint32_t ori(RegisterID rt, RegisterID rs, int32_t imm);

/*
 * https://github.com/WebKit/webkit/blob/master/Source/JavaScriptCore/assembler/MIPSAssembler.h
 * Copyright (C) 2009-2017 Apple Inc. All rights reserved.
 * Copyright (C) 2009 University of Szeged
 * All rights reserved.
 * Copyright (C) 2010 MIPS Technologies, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY MIPS TECHNOLOGIES, INC. ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MIPS TECHNOLOGIES, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

 /*
  * https://github.com/71/asmdot/blob/master/languages/cpp/src/mips.cpp
  * The MIT License
  *
  * Copyright (c) 2018 Gregoire Geis
  *
  * Permission is hereby granted, free of charge, to any person obtaining a copy
  * of this software and associated documentation files (the "Software"), to deal
  * in the Software without restriction, including without limitation the rights
  * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  * copies of the Software, and to permit persons to whom the Software is
  * furnished to do so, subject to the following conditions:
  *
  * The above copyright notice and this permission notice shall be included in
  * all copies or substantial portions of the Software.
  *
  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  * THE SOFTWARE.
  */
#endif
