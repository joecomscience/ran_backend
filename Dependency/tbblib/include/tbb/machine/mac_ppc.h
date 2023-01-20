/*
    Copyright 2005-2007 Intel Corporation.  All Rights Reserved.

    This file is part of Threading Building Blocks.

    Threading Building Blocks is free software; you can redistribute it
    and/or modify it under the terms of the GNU General Public License
    version 2 as published by the Free Software Foundation.

    Threading Building Blocks is distributed in the hope that it will be
    useful, but WITHOUT ANY WARRANTY; without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Threading Building Blocks; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    As a special exception, you may use this file as part of a free software
    library without restriction.  Specifically, if other files instantiate
    templates or use macros or inline functions from this file, or you compile
    this file and link it with other files to produce an executable, this
    file does not by itself cause the resulting executable to be covered by
    the GNU General Public License.  This exception does not however
    invalidate any other reasons why the executable file might be covered by
    the GNU General Public License.
*/

#ifndef __TBB_machine_H
#error Do not include this file directly; include tbb_machine.h instead
#endif

#define __TBB_WORDSIZE 8
#define __TBB_BIG_ENDIAN 1

#include <stdint.h>
#include <unistd.h>

#include <sched.h>

inline int32_t __TBB_machine_cmpswp4 (volatile void *ptr, int32_t value, int32_t comparand )
{
    int32_t result;

    __asm__ __volatile__("0: lwarx %0,0,%1\n\t" /* load w/ reservation */
                         "cmpw %0,%3\n\t"       /* compare against comparand */
                         "bne- 1f\n\t"           /* exit if not same */
                         "stwcx. %2,0,%1\n\t"    /* store new_value */
                         "bne- 0b\n"             /* retry if reservation lost */
                         "1:"                   /* the exit */
                          : "=&r"(result)
                          : "r"(ptr), "r"(value), "r"(comparand)
                          : "cr0");
    return result;
}

#if defined(powerpc64) || defined(__powerpc64__) || defined(__ppc64__)

inline int64_t __TBB_machine_cmpswp8 (volatile void *ptr, int64_t value, int64_t comparand )
{
    int64_t result;
    __asm__ __volatile__("0: ldarx %0,0,%1\n\t" /* load w/ reservation */
                         "cmpd %0,%3\n\t"       /* compare against comparand */
                         "bne- 1f\n\t"           /* exit if not same */
                         "stdcx. %2,0,%1\n\t"    /* store new_value */
                         "bne- 0b\n"             /* retry if reservation lost */
                         "1:"                   /* the exit */
                          : "=&b"(result)
                          : "r"(ptr), "r"(value), "r"(comparand)
                          : "cr0");
    return result;
}

#else
#error This configuratioin is not supported yet

inline int64_t __TBB_machine_cmpswp8 (volatile void *ptr, int64_t value, int64_t comparand )
{
    int64_t result;
    __asm__ __volatile__("0: ldarx %0,0,%1\n\t" /* load w/ reservation */
                         "cmpd %0,%3\n\t"       /* compare against comparand */
                         "bne- 1f\n\t"           /* exit if not same */
                         "stdcx. %2,0,%1\n\t"    /* store new_value */
                         "bne- 0b\n"             /* retry if reservation lost */
                         "1:"                   /* the exit */
                          : "=&b"(result)
                          : "r"(ptr), "r"(value), "r"(comparand)
                          : "cr0");
    return result;
}

#endif

#define __TBB_CompareAndSwap4(P,V,C) __TBB_machine_cmpswp4(P,V,C)
#define __TBB_CompareAndSwap8(P,V,C) __TBB_machine_cmpswp8(P,V,C)
#define __TBB_CompareAndSwapW(P,V,C) __TBB_machine_cmpswp8(P,V,C)
#define __TBB_Yield() sched_yield()

