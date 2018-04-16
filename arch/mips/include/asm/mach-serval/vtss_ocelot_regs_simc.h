/* Copyright (c) 2016 Microsemi Corporation

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

#ifndef _VTSS_OCELOT_REGS_SIMC_H_
#define _VTSS_OCELOT_REGS_SIMC_H_

#include "vtss_ocelot_regs_common.h"

#define VTSS_SIMC_SIMC_CTRLR0                VTSS_IOREG(VTSS_TO_SIMC,0x0)
#define  VTSS_F_SIMC_SIMC_CTRLR0_CFS(x)       VTSS_ENCODE_BITFIELD(x,12,4)
#define  VTSS_M_SIMC_SIMC_CTRLR0_CFS          VTSS_ENCODE_BITMASK(12,4)
#define  VTSS_X_SIMC_SIMC_CTRLR0_CFS(x)       VTSS_EXTRACT_BITFIELD(x,12,4)
#define  VTSS_F_SIMC_SIMC_CTRLR0_SRL(x)       VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_SIMC_SIMC_CTRLR0_SRL          VTSS_BIT(11)
#define  VTSS_X_SIMC_SIMC_CTRLR0_SRL(x)       VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_SIMC_SIMC_CTRLR0_TMOD(x)      VTSS_ENCODE_BITFIELD(x,8,2)
#define  VTSS_M_SIMC_SIMC_CTRLR0_TMOD         VTSS_ENCODE_BITMASK(8,2)
#define  VTSS_X_SIMC_SIMC_CTRLR0_TMOD(x)      VTSS_EXTRACT_BITFIELD(x,8,2)
#define  VTSS_F_SIMC_SIMC_CTRLR0_SCPOL(x)     VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_SIMC_SIMC_CTRLR0_SCPOL        VTSS_BIT(7)
#define  VTSS_X_SIMC_SIMC_CTRLR0_SCPOL(x)     VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_SIMC_SIMC_CTRLR0_SCPH(x)      VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_SIMC_SIMC_CTRLR0_SCPH         VTSS_BIT(6)
#define  VTSS_X_SIMC_SIMC_CTRLR0_SCPH(x)      VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_SIMC_SIMC_CTRLR0_FRF(x)       VTSS_ENCODE_BITFIELD(x,4,2)
#define  VTSS_M_SIMC_SIMC_CTRLR0_FRF          VTSS_ENCODE_BITMASK(4,2)
#define  VTSS_X_SIMC_SIMC_CTRLR0_FRF(x)       VTSS_EXTRACT_BITFIELD(x,4,2)
#define  VTSS_F_SIMC_SIMC_CTRLR0_DFS(x)       VTSS_ENCODE_BITFIELD(x,0,4)
#define  VTSS_M_SIMC_SIMC_CTRLR0_DFS          VTSS_ENCODE_BITMASK(0,4)
#define  VTSS_X_SIMC_SIMC_CTRLR0_DFS(x)       VTSS_EXTRACT_BITFIELD(x,0,4)

#define VTSS_SIMC_SIMC_CTRLR1                VTSS_IOREG(VTSS_TO_SIMC,0x1)
#define  VTSS_F_SIMC_SIMC_CTRLR1_NDF(x)       VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_SIMC_SIMC_CTRLR1_NDF          VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_SIMC_SIMC_CTRLR1_NDF(x)       VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_SIMC_SIMC_SIMCEN                VTSS_IOREG(VTSS_TO_SIMC,0x2)
#define  VTSS_F_SIMC_SIMC_SIMCEN_SIMCEN(x)    VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_SIMCEN_SIMCEN       VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_SIMCEN_SIMCEN(x)    VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_MWCR                  VTSS_IOREG(VTSS_TO_SIMC,0x3)
#define  VTSS_F_SIMC_SIMC_MWCR_MHS(x)         VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_SIMC_SIMC_MWCR_MHS            VTSS_BIT(2)
#define  VTSS_X_SIMC_SIMC_MWCR_MHS(x)         VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_SIMC_SIMC_MWCR_MDD(x)         VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_SIMC_SIMC_MWCR_MDD            VTSS_BIT(1)
#define  VTSS_X_SIMC_SIMC_MWCR_MDD(x)         VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_SIMC_SIMC_MWCR_MWMOD(x)       VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_MWCR_MWMOD          VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_MWCR_MWMOD(x)       VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_SER                   VTSS_IOREG(VTSS_TO_SIMC,0x4)
#define  VTSS_F_SIMC_SIMC_SER_SER(x)          VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_SIMC_SIMC_SER_SER             VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_SIMC_SIMC_SER_SER(x)          VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_SIMC_SIMC_BAUDR                 VTSS_IOREG(VTSS_TO_SIMC,0x5)
#define  VTSS_F_SIMC_SIMC_BAUDR_SCKDV(x)      VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_SIMC_SIMC_BAUDR_SCKDV         VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_SIMC_SIMC_BAUDR_SCKDV(x)      VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_SIMC_SIMC_TXFTLR                VTSS_IOREG(VTSS_TO_SIMC,0x6)
#define  VTSS_F_SIMC_SIMC_TXFTLR_TFT(x)       VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_SIMC_SIMC_TXFTLR_TFT          VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_SIMC_SIMC_TXFTLR_TFT(x)       VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_SIMC_SIMC_RXFTLR                VTSS_IOREG(VTSS_TO_SIMC,0x7)
#define  VTSS_F_SIMC_SIMC_RXFTLR_RFT(x)       VTSS_ENCODE_BITFIELD(x,0,6)
#define  VTSS_M_SIMC_SIMC_RXFTLR_RFT          VTSS_ENCODE_BITMASK(0,6)
#define  VTSS_X_SIMC_SIMC_RXFTLR_RFT(x)       VTSS_EXTRACT_BITFIELD(x,0,6)

#define VTSS_SIMC_SIMC_TXFLR                 VTSS_IOREG(VTSS_TO_SIMC,0x8)
#define  VTSS_F_SIMC_SIMC_TXFLR_TXTFL(x)      VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_SIMC_SIMC_TXFLR_TXTFL         VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_SIMC_SIMC_TXFLR_TXTFL(x)      VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_SIMC_SIMC_RXFLR                 VTSS_IOREG(VTSS_TO_SIMC,0x9)
#define  VTSS_F_SIMC_SIMC_RXFLR_RXTFL(x)      VTSS_ENCODE_BITFIELD(x,0,6)
#define  VTSS_M_SIMC_SIMC_RXFLR_RXTFL         VTSS_ENCODE_BITMASK(0,6)
#define  VTSS_X_SIMC_SIMC_RXFLR_RXTFL(x)      VTSS_EXTRACT_BITFIELD(x,0,6)

#define VTSS_SIMC_SIMC_SR                    VTSS_IOREG(VTSS_TO_SIMC,0xa)
#define  VTSS_F_SIMC_SIMC_SR_RFF(x)           VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_SIMC_SIMC_SR_RFF              VTSS_BIT(4)
#define  VTSS_X_SIMC_SIMC_SR_RFF(x)           VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_SIMC_SIMC_SR_RFNE(x)          VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_SIMC_SIMC_SR_RFNE             VTSS_BIT(3)
#define  VTSS_X_SIMC_SIMC_SR_RFNE(x)          VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_SIMC_SIMC_SR_TFE(x)           VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_SIMC_SIMC_SR_TFE              VTSS_BIT(2)
#define  VTSS_X_SIMC_SIMC_SR_TFE(x)           VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_SIMC_SIMC_SR_TFNF(x)          VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_SIMC_SIMC_SR_TFNF             VTSS_BIT(1)
#define  VTSS_X_SIMC_SIMC_SR_TFNF(x)          VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_SIMC_SIMC_SR_BUSY(x)          VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_SR_BUSY             VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_SR_BUSY(x)          VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_IMR                   VTSS_IOREG(VTSS_TO_SIMC,0xb)
#define  VTSS_F_SIMC_SIMC_IMR_MSTIM(x)        VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_SIMC_SIMC_IMR_MSTIM           VTSS_BIT(5)
#define  VTSS_X_SIMC_SIMC_IMR_MSTIM(x)        VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_SIMC_SIMC_IMR_RXFIM(x)        VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_SIMC_SIMC_IMR_RXFIM           VTSS_BIT(4)
#define  VTSS_X_SIMC_SIMC_IMR_RXFIM(x)        VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_SIMC_SIMC_IMR_RXOIM(x)        VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_SIMC_SIMC_IMR_RXOIM           VTSS_BIT(3)
#define  VTSS_X_SIMC_SIMC_IMR_RXOIM(x)        VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_SIMC_SIMC_IMR_RXUIM(x)        VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_SIMC_SIMC_IMR_RXUIM           VTSS_BIT(2)
#define  VTSS_X_SIMC_SIMC_IMR_RXUIM(x)        VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_SIMC_SIMC_IMR_TXOIM(x)        VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_SIMC_SIMC_IMR_TXOIM           VTSS_BIT(1)
#define  VTSS_X_SIMC_SIMC_IMR_TXOIM(x)        VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_SIMC_SIMC_IMR_TXEIM(x)        VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_IMR_TXEIM           VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_IMR_TXEIM(x)        VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_ISR                   VTSS_IOREG(VTSS_TO_SIMC,0xc)
#define  VTSS_F_SIMC_SIMC_ISR_MSTIS(x)        VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_SIMC_SIMC_ISR_MSTIS           VTSS_BIT(5)
#define  VTSS_X_SIMC_SIMC_ISR_MSTIS(x)        VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_SIMC_SIMC_ISR_RXFIS(x)        VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_SIMC_SIMC_ISR_RXFIS           VTSS_BIT(4)
#define  VTSS_X_SIMC_SIMC_ISR_RXFIS(x)        VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_SIMC_SIMC_ISR_RXOIS(x)        VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_SIMC_SIMC_ISR_RXOIS           VTSS_BIT(3)
#define  VTSS_X_SIMC_SIMC_ISR_RXOIS(x)        VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_SIMC_SIMC_ISR_RXUIS(x)        VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_SIMC_SIMC_ISR_RXUIS           VTSS_BIT(2)
#define  VTSS_X_SIMC_SIMC_ISR_RXUIS(x)        VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_SIMC_SIMC_ISR_TXOIS(x)        VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_SIMC_SIMC_ISR_TXOIS           VTSS_BIT(1)
#define  VTSS_X_SIMC_SIMC_ISR_TXOIS(x)        VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_SIMC_SIMC_ISR_TXEIS(x)        VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_ISR_TXEIS           VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_ISR_TXEIS(x)        VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_RISR                  VTSS_IOREG(VTSS_TO_SIMC,0xd)
#define  VTSS_F_SIMC_SIMC_RISR_MSTIR(x)       VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_SIMC_SIMC_RISR_MSTIR          VTSS_BIT(5)
#define  VTSS_X_SIMC_SIMC_RISR_MSTIR(x)       VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_SIMC_SIMC_RISR_RXFIR(x)       VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_SIMC_SIMC_RISR_RXFIR          VTSS_BIT(4)
#define  VTSS_X_SIMC_SIMC_RISR_RXFIR(x)       VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_SIMC_SIMC_RISR_RXOIR(x)       VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_SIMC_SIMC_RISR_RXOIR          VTSS_BIT(3)
#define  VTSS_X_SIMC_SIMC_RISR_RXOIR(x)       VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_SIMC_SIMC_RISR_RXUIR(x)       VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_SIMC_SIMC_RISR_RXUIR          VTSS_BIT(2)
#define  VTSS_X_SIMC_SIMC_RISR_RXUIR(x)       VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_SIMC_SIMC_RISR_TXOIR(x)       VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_SIMC_SIMC_RISR_TXOIR          VTSS_BIT(1)
#define  VTSS_X_SIMC_SIMC_RISR_TXOIR(x)       VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_SIMC_SIMC_RISR_TXEIR(x)       VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_RISR_TXEIR          VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_RISR_TXEIR(x)       VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_TXOICR                VTSS_IOREG(VTSS_TO_SIMC,0xe)
#define  VTSS_F_SIMC_SIMC_TXOICR_TXOICR(x)    VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_TXOICR_TXOICR       VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_TXOICR_TXOICR(x)    VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_RXOICR                VTSS_IOREG(VTSS_TO_SIMC,0xf)
#define  VTSS_F_SIMC_SIMC_RXOICR_RXOICR(x)    VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_RXOICR_RXOICR       VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_RXOICR_RXOICR(x)    VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_RXUICR                VTSS_IOREG(VTSS_TO_SIMC,0x10)
#define  VTSS_F_SIMC_SIMC_RXUICR_RXUICR(x)    VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_RXUICR_RXUICR       VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_RXUICR_RXUICR(x)    VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_MSTICR                VTSS_IOREG(VTSS_TO_SIMC,0x11)
#define  VTSS_F_SIMC_SIMC_MSTICR_MSTICR(x)    VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_MSTICR_MSTICR       VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_MSTICR_MSTICR(x)    VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_ICR                   VTSS_IOREG(VTSS_TO_SIMC,0x12)
#define  VTSS_F_SIMC_SIMC_ICR_ICR(x)          VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_SIMC_SIMC_ICR_ICR             VTSS_BIT(0)
#define  VTSS_X_SIMC_SIMC_ICR_ICR(x)          VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_SIMC_SIMC_DR(ri)                VTSS_IOREG(VTSS_TO_SIMC,0x18 + (ri))
#define  VTSS_F_SIMC_SIMC_DR_DR(x)            VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_SIMC_SIMC_DR_DR               VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_SIMC_SIMC_DR_DR(x)            VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_SIMC_SIMC_RX_SAMPLE_DLY         VTSS_IOREG(VTSS_TO_SIMC,0x3c)
#define  VTSS_F_SIMC_SIMC_RX_SAMPLE_DLY_RSD(x)  VTSS_ENCODE_BITFIELD(x,0,8)
#define  VTSS_M_SIMC_SIMC_RX_SAMPLE_DLY_RSD     VTSS_ENCODE_BITMASK(0,8)
#define  VTSS_X_SIMC_SIMC_RX_SAMPLE_DLY_RSD(x)  VTSS_EXTRACT_BITFIELD(x,0,8)


#endif /* _VTSS_OCELOT_REGS_SIMC_H_ */
