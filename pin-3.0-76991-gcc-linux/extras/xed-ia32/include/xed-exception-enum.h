/*BEGIN_LEGAL 
Intel Open Source License 

Copyright (c) 2002-2016 Intel Corporation. All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.  Redistributions
in binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.  Neither the name of
the Intel Corporation nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE INTEL OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/// @file xed-exception-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_EXCEPTION_ENUM_H_)
# define _XED_EXCEPTION_ENUM_H_
#include "xed-common-hdrs.h"
typedef enum {
  XED_EXCEPTION_INVALID,
  XED_EXCEPTION_AVX512_E1,
  XED_EXCEPTION_AVX512_E10,
  XED_EXCEPTION_AVX512_E10NF,
  XED_EXCEPTION_AVX512_E11,
  XED_EXCEPTION_AVX512_E11NF,
  XED_EXCEPTION_AVX512_E12,
  XED_EXCEPTION_AVX512_E12NP,
  XED_EXCEPTION_AVX512_E1NF,
  XED_EXCEPTION_AVX512_E2,
  XED_EXCEPTION_AVX512_E3,
  XED_EXCEPTION_AVX512_E3NF,
  XED_EXCEPTION_AVX512_E4,
  XED_EXCEPTION_AVX512_E4NF,
  XED_EXCEPTION_AVX512_E5,
  XED_EXCEPTION_AVX512_E5NF,
  XED_EXCEPTION_AVX512_E6,
  XED_EXCEPTION_AVX512_E6NF,
  XED_EXCEPTION_AVX512_E7NM,
  XED_EXCEPTION_AVX512_E7NM128,
  XED_EXCEPTION_AVX512_E9NF,
  XED_EXCEPTION_AVX512_K20,
  XED_EXCEPTION_AVX512_K21,
  XED_EXCEPTION_AVX_TYPE_1,
  XED_EXCEPTION_AVX_TYPE_11,
  XED_EXCEPTION_AVX_TYPE_12,
  XED_EXCEPTION_AVX_TYPE_2,
  XED_EXCEPTION_AVX_TYPE_2D,
  XED_EXCEPTION_AVX_TYPE_3,
  XED_EXCEPTION_AVX_TYPE_4,
  XED_EXCEPTION_AVX_TYPE_4M,
  XED_EXCEPTION_AVX_TYPE_5,
  XED_EXCEPTION_AVX_TYPE_5L,
  XED_EXCEPTION_AVX_TYPE_6,
  XED_EXCEPTION_AVX_TYPE_7,
  XED_EXCEPTION_AVX_TYPE_8,
  XED_EXCEPTION_MMX_FP,
  XED_EXCEPTION_MMX_FP_16ALIGN,
  XED_EXCEPTION_MMX_MEM,
  XED_EXCEPTION_MMX_NOFP,
  XED_EXCEPTION_MMX_NOFP2,
  XED_EXCEPTION_MMX_NOMEM,
  XED_EXCEPTION_SSE_TYPE_1,
  XED_EXCEPTION_SSE_TYPE_2,
  XED_EXCEPTION_SSE_TYPE_2D,
  XED_EXCEPTION_SSE_TYPE_3,
  XED_EXCEPTION_SSE_TYPE_4,
  XED_EXCEPTION_SSE_TYPE_4M,
  XED_EXCEPTION_SSE_TYPE_5,
  XED_EXCEPTION_SSE_TYPE_7,
  XED_EXCEPTION_LAST
} xed_exception_enum_t;

/// This converts strings to #xed_exception_enum_t types.
/// @param s A C-string.
/// @return #xed_exception_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_exception_enum_t str2xed_exception_enum_t(const char* s);
/// This converts strings to #xed_exception_enum_t types.
/// @param p An enumeration element of type xed_exception_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_exception_enum_t2str(const xed_exception_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_exception_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_exception_enum_t xed_exception_enum_t_last(void);
#endif
