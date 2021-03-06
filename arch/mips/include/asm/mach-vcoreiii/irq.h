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

/*
 *
 * IRQ definitions
 *
 */

#ifndef __VCOREIII_IRQ_H
#define __VCOREIII_IRQ_H

#define NR_IRQS 64

/*
 * CPU core Interrupt Numbers
 */
#define MIPS_CPU_IRQ_BASE       0
#define MIPS_CPU_IRQ(x)         (MIPS_CPU_IRQ_BASE + (x))
#define MIPS_SOFTINT0_IRQ       MIPS_CPU_IRQ(0)
#define MIPS_SOFTINT1_IRQ       MIPS_CPU_IRQ(1)
#define INT0_IRQ                MIPS_CPU_IRQ(2)
#define INT1_IRQ                MIPS_CPU_IRQ(3)
#define INT2_IRQ                MIPS_CPU_IRQ(4)
#define INT3_IRQ                MIPS_CPU_IRQ(5)
#define INT4_IRQ                MIPS_CPU_IRQ(6)
#define TIMER_IRQ               MIPS_CPU_IRQ(7)

/*
 * ICPU IRQ0 Interrupt Numbers
 */
#define ICPU_IRQ0_BASE          (TIMER_IRQ + 1) /* 8 */
#define ICPU_IRQ0(x)            (ICPU_IRQ0_BASE + (x))
#define EXT0_IRQ                ICPU_IRQ0(0)
#define EXT1_IRQ                ICPU_IRQ0(1)
#define SW0_IRQ                 ICPU_IRQ0(2)
#define SW1_IRQ                 ICPU_IRQ0(3)
#define PI_SD0_IRQ              ICPU_IRQ0(4)
#define PI_SD1_IRQ              ICPU_IRQ0(5)
#define UART_IRQ                ICPU_IRQ0(6)
#define TIMER0_IRQ              ICPU_IRQ0(7)
#define TIMER1_IRQ              ICPU_IRQ0(8)
#define TIMER2_IRQ              ICPU_IRQ0(9)
#define FDMA_IRQ                ICPU_IRQ0(10)
#define TWI_IRQ                 ICPU_IRQ0(11)
#define GPIO_IRQ                ICPU_IRQ0(12)
#define SGPIO_IRQ               ICPU_IRQ0(13)
#define DEV_ALL_IRQ             ICPU_IRQ0(14)
#define BLK_ANA_IRQ             ICPU_IRQ0(15)
#define XTR_RDY0_IRQ            ICPU_IRQ0(16)
#define XTR_RDY1_IRQ            ICPU_IRQ0(17)
#define XTR_RDY2_IRQ            ICPU_IRQ0(18)
#define XTR_RDY3_IRQ            ICPU_IRQ0(19)
#define INJ_RDY0_IRQ            ICPU_IRQ0(20)
#define INJ_RDY1_IRQ            ICPU_IRQ0(21)
#define INJ_RDY2_IRQ            ICPU_IRQ0(22)
#define INJ_RDY3_IRQ            ICPU_IRQ0(23)
#define INJ_RDY4_IRQ            ICPU_IRQ0(24)
#define INTEGRITY_IRQ           ICPU_IRQ0(25)
#define PTP_SYNC_IRQ            ICPU_IRQ0(26)
#define MIIM0_INTR_IRQ          ICPU_IRQ0(27)
#define MIIM1_INTR_IRQ          ICPU_IRQ0(28)

#if defined(CONFIG_VTSS_VCOREIII_JAGUAR_DUAL)

/*
 * Slave Interrupt Numbers
 */

#define SLV_IRQ_BASE		(MIIM1_INTR_IRQ + 1) /* 37 */
#define SLV_ICPU_IRQ0(x)        (SLV_IRQ_BASE + (x))
//#define SLV_EXT0_IRQ            SLV_ICPU_IRQ0(0) - reserved
#define SLV_EXT1_IRQ            SLV_ICPU_IRQ0(1)
#define SLV_SW0_IRQ             SLV_ICPU_IRQ0(2)
#define SLV_SW1_IRQ             SLV_ICPU_IRQ0(3)
#define SLV_PI_SD0_IRQ          SLV_ICPU_IRQ0(4)
#define SLV_PI_SD1_IRQ          SLV_ICPU_IRQ0(5)
#define SLV_UART_IRQ            SLV_ICPU_IRQ0(6)
#define SLV_TIMER0_IRQ          SLV_ICPU_IRQ0(7)
#define SLV_TIMER1_IRQ          SLV_ICPU_IRQ0(8)
#define SLV_TIMER2_IRQ          SLV_ICPU_IRQ0(9)
#define SLV_FDMA_IRQ            SLV_ICPU_IRQ0(10)
#define SLV_TWI_IRQ             SLV_ICPU_IRQ0(11)
#define SLV_GPIO_IRQ            SLV_ICPU_IRQ0(12)
#define SLV_SGPIO_IRQ           SLV_ICPU_IRQ0(13)
#define SLV_DEV_ALL_IRQ         SLV_ICPU_IRQ0(14)
#define SLV_BLK_ANA_IRQ         SLV_ICPU_IRQ0(15)
#define SLV_XTR_RDY0_IRQ        SLV_ICPU_IRQ0(16)
#define SLV_XTR_RDY1_IRQ        SLV_ICPU_IRQ0(17)
#define SLV_XTR_RDY2_IRQ        SLV_ICPU_IRQ0(18)
#define SLV_XTR_RDY3_IRQ        SLV_ICPU_IRQ0(19)
#define SLV_INJ_RDY0_IRQ        SLV_ICPU_IRQ0(20)
#define SLV_INJ_RDY1_IRQ        SLV_ICPU_IRQ0(21)
#define SLV_INJ_RDY2_IRQ        SLV_ICPU_IRQ0(22)
#define SLV_INJ_RDY3_IRQ        SLV_ICPU_IRQ0(23)
#define SLV_INJ_RDY4_IRQ        SLV_ICPU_IRQ0(24)
#define SLV_INTEGRITY_IRQ       SLV_ICPU_IRQ0(25)
#define SLV_PTP_SYNC_IRQ        SLV_ICPU_IRQ0(26)
#define SLV_MIIM0_INTR_IRQ      SLV_ICPU_IRQ0(27)
#define SLV_MIIM1_INTR_IRQ      SLV_ICPU_IRQ0(28)

#undef NR_IRQS
#define NR_IRQS (SLV_MIIM1_INTR_IRQ+1)

#endif  /* CONFIG_VTSS_VCOREIII_JAGUAR_DUAL */

#include_next <irq.h>

#endif /* __VCOREIII_IRQ_H */
