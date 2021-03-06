/* Copyright (c) 2015 Microsemi Corporation

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#ifndef __SERVAL_HARDWARE_H
#define __SERVAL_HARDWARE_H

#include <asm/vcoreiii.h>

/* We use virtual memory to map the registers */
#if !defined(VTSS_IO_OFFSET1)
#define VTSS_IO_OFFSET1(offset) (map_base_switch + offset)
#endif
#if !defined(VTSS_IO_OFFSET2)
#define VTSS_IO_OFFSET2(offset) (map_base_cpu + offset)
#endif

/* We just want the addresses from VTSS_IOREG() */
#define VTSS_IOREG(t,o)	((void __iomem *)VTSS_IOADDR(t,o))

#if defined(CONFIG_VTSS_VCOREIII_SERVAL1_CLASSIC)
#include <vtss_serval_core_regs.h>
#define VTSS_TARGET_NAME "Serval1"
#define VCOREIII_CPU_CLOCK 416666666              /* 416MHz */
#elif defined(CONFIG_VTSS_VCOREIII_OCELOT)
#include <vtss_ocelot_core_regs.h>
#define VTSS_TARGET_NAME "Ocelot"
#define VCOREIII_CPU_CLOCK 500000000              /* 500MHz */
#else
#error Invalid sub-architecture type
#endif

#define VCOREIII_AHB_CLOCK (VCOREIII_CPU_CLOCK/2) /* 208MHz - half of the CPU freq */

#ifndef __ASSEMBLER__

extern void __iomem *map_base_switch;
extern void __iomem *map_base_cpu;

#endif // __ASSEMBLER__

#endif /* __VCOREIII_HARDWARE_H */
