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

#ifndef _VTSS_OCELOT_REGS_TWI_H_
#define _VTSS_OCELOT_REGS_TWI_H_

#include "vtss_ocelot_regs_common.h"

#define VTSS_TWI_TWI_CFG                     VTSS_IOREG(VTSS_TO_TWI,0x0)
#define  VTSS_F_TWI_TWI_CFG_SLAVE_DIS(x)      VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_CFG_SLAVE_DIS         VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_CFG_SLAVE_DIS(x)      VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_CFG_RESTART_ENA(x)    VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_CFG_RESTART_ENA       VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_CFG_RESTART_ENA(x)    VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_CFG_MASTER_10BITADDR(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_CFG_MASTER_10BITADDR  VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_CFG_MASTER_10BITADDR(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_CFG_SLAVE_10BITADDR(x)  VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_CFG_SLAVE_10BITADDR   VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_CFG_SLAVE_10BITADDR(x)  VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_CFG_SPEED(x)          VTSS_ENCODE_BITFIELD(x,1,2)
#define  VTSS_M_TWI_TWI_CFG_SPEED             VTSS_ENCODE_BITMASK(1,2)
#define  VTSS_X_TWI_TWI_CFG_SPEED(x)          VTSS_EXTRACT_BITFIELD(x,1,2)
#define  VTSS_F_TWI_TWI_CFG_MASTER_ENA(x)     VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CFG_MASTER_ENA        VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CFG_MASTER_ENA(x)     VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_TAR                     VTSS_IOREG(VTSS_TO_TWI,0x1)
#define  VTSS_F_TWI_TWI_TAR_GC_OR_START_ENA(x)  VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_TWI_TWI_TAR_GC_OR_START_ENA   VTSS_BIT(11)
#define  VTSS_X_TWI_TWI_TAR_GC_OR_START_ENA(x)  VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_TWI_TWI_TAR_GC_OR_START(x)    VTSS_ENCODE_BITFIELD(!!(x),10,1)
#define  VTSS_M_TWI_TWI_TAR_GC_OR_START       VTSS_BIT(10)
#define  VTSS_X_TWI_TWI_TAR_GC_OR_START(x)    VTSS_EXTRACT_BITFIELD(x,10,1)
#define  VTSS_F_TWI_TWI_TAR_TAR(x)            VTSS_ENCODE_BITFIELD(x,0,10)
#define  VTSS_M_TWI_TWI_TAR_TAR               VTSS_ENCODE_BITMASK(0,10)
#define  VTSS_X_TWI_TWI_TAR_TAR(x)            VTSS_EXTRACT_BITFIELD(x,0,10)

#define VTSS_TWI_TWI_SAR                     VTSS_IOREG(VTSS_TO_TWI,0x2)
#define  VTSS_F_TWI_TWI_SAR_SAR(x)            VTSS_ENCODE_BITFIELD(x,0,10)
#define  VTSS_M_TWI_TWI_SAR_SAR               VTSS_ENCODE_BITMASK(0,10)
#define  VTSS_X_TWI_TWI_SAR_SAR(x)            VTSS_EXTRACT_BITFIELD(x,0,10)

#define VTSS_TWI_TWI_RESERVED1               VTSS_IOREG(VTSS_TO_TWI,0x3)
#define  VTSS_F_TWI_TWI_RESERVED1_RESERVED1(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED1_RESERVED1     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED1_RESERVED1(x)  (x)

#define VTSS_TWI_TWI_DATA_CMD                VTSS_IOREG(VTSS_TO_TWI,0x4)
#define  VTSS_F_TWI_TWI_DATA_CMD_CMD(x)       VTSS_ENCODE_BITFIELD(!!(x),8,1)
#define  VTSS_M_TWI_TWI_DATA_CMD_CMD          VTSS_BIT(8)
#define  VTSS_X_TWI_TWI_DATA_CMD_CMD(x)       VTSS_EXTRACT_BITFIELD(x,8,1)
#define  VTSS_F_TWI_TWI_DATA_CMD_DATA(x)      VTSS_ENCODE_BITFIELD(x,0,8)
#define  VTSS_M_TWI_TWI_DATA_CMD_DATA         VTSS_ENCODE_BITMASK(0,8)
#define  VTSS_X_TWI_TWI_DATA_CMD_DATA(x)      VTSS_EXTRACT_BITFIELD(x,0,8)

#define VTSS_TWI_TWI_SS_SCL_HCNT             VTSS_IOREG(VTSS_TO_TWI,0x5)
#define  VTSS_F_TWI_TWI_SS_SCL_HCNT_SS_SCL_HCNT(x)  VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_TWI_TWI_SS_SCL_HCNT_SS_SCL_HCNT     VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_TWI_TWI_SS_SCL_HCNT_SS_SCL_HCNT(x)  VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_TWI_TWI_SS_SCL_LCNT             VTSS_IOREG(VTSS_TO_TWI,0x6)
#define  VTSS_F_TWI_TWI_SS_SCL_LCNT_SS_SCL_LCNT(x)  VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_TWI_TWI_SS_SCL_LCNT_SS_SCL_LCNT     VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_TWI_TWI_SS_SCL_LCNT_SS_SCL_LCNT(x)  VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_TWI_TWI_FS_SCL_HCNT             VTSS_IOREG(VTSS_TO_TWI,0x7)
#define  VTSS_F_TWI_TWI_FS_SCL_HCNT_FS_SCL_HCNT(x)  VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_TWI_TWI_FS_SCL_HCNT_FS_SCL_HCNT     VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_TWI_TWI_FS_SCL_HCNT_FS_SCL_HCNT(x)  VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_TWI_TWI_FS_SCL_LCNT             VTSS_IOREG(VTSS_TO_TWI,0x8)
#define  VTSS_F_TWI_TWI_FS_SCL_LCNT_FS_SCL_LCNT(x)  VTSS_ENCODE_BITFIELD(x,0,16)
#define  VTSS_M_TWI_TWI_FS_SCL_LCNT_FS_SCL_LCNT     VTSS_ENCODE_BITMASK(0,16)
#define  VTSS_X_TWI_TWI_FS_SCL_LCNT_FS_SCL_LCNT(x)  VTSS_EXTRACT_BITFIELD(x,0,16)

#define VTSS_TWI_TWI_RESERVED2(ri)           VTSS_IOREG(VTSS_TO_TWI,0x9 + (ri))
#define  VTSS_F_TWI_TWI_RESERVED2_RESERVED2(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED2_RESERVED2     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED2_RESERVED2(x)  (x)

#define VTSS_TWI_TWI_INTR_STAT               VTSS_IOREG(VTSS_TO_TWI,0xb)
#define  VTSS_F_TWI_TWI_INTR_STAT_GEN_CALL(x)  VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_GEN_CALL    VTSS_BIT(11)
#define  VTSS_X_TWI_TWI_INTR_STAT_GEN_CALL(x)  VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_START_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),10,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_START_DET   VTSS_BIT(10)
#define  VTSS_X_TWI_TWI_INTR_STAT_START_DET(x)  VTSS_EXTRACT_BITFIELD(x,10,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_STOP_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),9,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_STOP_DET    VTSS_BIT(9)
#define  VTSS_X_TWI_TWI_INTR_STAT_STOP_DET(x)  VTSS_EXTRACT_BITFIELD(x,9,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),8,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_ACTIVITY    VTSS_BIT(8)
#define  VTSS_X_TWI_TWI_INTR_STAT_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,8,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_RX_DONE(x)  VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_RX_DONE     VTSS_BIT(7)
#define  VTSS_X_TWI_TWI_INTR_STAT_RX_DONE(x)  VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_TX_ABRT(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_TX_ABRT     VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_INTR_STAT_TX_ABRT(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_RD_REQ(x)   VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_RD_REQ      VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_INTR_STAT_RD_REQ(x)   VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_TX_EMPTY(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_TX_EMPTY    VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_INTR_STAT_TX_EMPTY(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_TX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_TX_OVER     VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_INTR_STAT_TX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_RX_FULL(x)  VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_RX_FULL     VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_INTR_STAT_RX_FULL(x)  VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_RX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_RX_OVER     VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_INTR_STAT_RX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_INTR_STAT_RX_UNDER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_INTR_STAT_RX_UNDER    VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_INTR_STAT_RX_UNDER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_INTR_MASK               VTSS_IOREG(VTSS_TO_TWI,0xc)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_GEN_CALL(x)  VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_GEN_CALL  VTSS_BIT(11)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_GEN_CALL(x)  VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_START_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),10,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_START_DET  VTSS_BIT(10)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_START_DET(x)  VTSS_EXTRACT_BITFIELD(x,10,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_STOP_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),9,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_STOP_DET  VTSS_BIT(9)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_STOP_DET(x)  VTSS_EXTRACT_BITFIELD(x,9,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),8,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_ACTIVITY  VTSS_BIT(8)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,8,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_RX_DONE(x)  VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_RX_DONE   VTSS_BIT(7)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_RX_DONE(x)  VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_TX_ABRT(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_TX_ABRT   VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_TX_ABRT(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_RD_REQ(x)  VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_RD_REQ    VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_RD_REQ(x)  VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_TX_EMPTY(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_TX_EMPTY  VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_TX_EMPTY(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_TX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_TX_OVER   VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_TX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_RX_FULL(x)  VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_RX_FULL   VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_RX_FULL(x)  VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_RX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_RX_OVER   VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_RX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_INTR_MASK_M_RX_UNDER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_INTR_MASK_M_RX_UNDER  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_INTR_MASK_M_RX_UNDER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_RAW_INTR_STAT           VTSS_IOREG(VTSS_TO_TWI,0xd)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_GEN_CALL(x)  VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_GEN_CALL  VTSS_BIT(11)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_GEN_CALL(x)  VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_START_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),10,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_START_DET  VTSS_BIT(10)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_START_DET(x)  VTSS_EXTRACT_BITFIELD(x,10,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_STOP_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),9,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_STOP_DET  VTSS_BIT(9)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_STOP_DET(x)  VTSS_EXTRACT_BITFIELD(x,9,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),8,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_ACTIVITY  VTSS_BIT(8)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,8,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_RX_DONE(x)  VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_RX_DONE  VTSS_BIT(7)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_RX_DONE(x)  VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_TX_ABRT(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_TX_ABRT  VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_TX_ABRT(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_RD_REQ(x)  VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_RD_REQ  VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_RD_REQ(x)  VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_TX_EMPTY(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_TX_EMPTY  VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_TX_EMPTY(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_TX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_TX_OVER  VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_TX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_RX_FULL(x)  VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_RX_FULL  VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_RX_FULL(x)  VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_RX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_RX_OVER  VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_RX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_RAW_INTR_STAT_R_RX_UNDER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_RAW_INTR_STAT_R_RX_UNDER  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_RAW_INTR_STAT_R_RX_UNDER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_RX_TL                   VTSS_IOREG(VTSS_TO_TWI,0xe)
#define  VTSS_F_TWI_TWI_RX_TL_RX_TL(x)        VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_TWI_TWI_RX_TL_RX_TL           VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_TWI_TWI_RX_TL_RX_TL(x)        VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_TWI_TWI_TX_TL                   VTSS_IOREG(VTSS_TO_TWI,0xf)
#define  VTSS_F_TWI_TWI_TX_TL_TX_TL(x)        VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_TWI_TWI_TX_TL_TX_TL           VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_TWI_TWI_TX_TL_TX_TL(x)        VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_TWI_TWI_CLR_INTR                VTSS_IOREG(VTSS_TO_TWI,0x10)
#define  VTSS_F_TWI_TWI_CLR_INTR_CLR_INTR(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_INTR_CLR_INTR     VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_INTR_CLR_INTR(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_RX_UNDER            VTSS_IOREG(VTSS_TO_TWI,0x11)
#define  VTSS_F_TWI_TWI_CLR_RX_UNDER_CLR_RX_UNDER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_RX_UNDER_CLR_RX_UNDER  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_RX_UNDER_CLR_RX_UNDER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_RX_OVER             VTSS_IOREG(VTSS_TO_TWI,0x12)
#define  VTSS_F_TWI_TWI_CLR_RX_OVER_CLR_RX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_RX_OVER_CLR_RX_OVER  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_RX_OVER_CLR_RX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_TX_OVER             VTSS_IOREG(VTSS_TO_TWI,0x13)
#define  VTSS_F_TWI_TWI_CLR_TX_OVER_CLR_TX_OVER(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_TX_OVER_CLR_TX_OVER  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_TX_OVER_CLR_TX_OVER(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_RD_REQ              VTSS_IOREG(VTSS_TO_TWI,0x14)
#define  VTSS_F_TWI_TWI_CLR_RD_REQ_CLR_RD_REQ(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_RD_REQ_CLR_RD_REQ  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_RD_REQ_CLR_RD_REQ(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_TX_ABRT             VTSS_IOREG(VTSS_TO_TWI,0x15)
#define  VTSS_F_TWI_TWI_CLR_TX_ABRT_CLR_TX_ABRT(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_TX_ABRT_CLR_TX_ABRT  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_TX_ABRT_CLR_TX_ABRT(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_RX_DONE             VTSS_IOREG(VTSS_TO_TWI,0x16)
#define  VTSS_F_TWI_TWI_CLR_RX_DONE_CLR_RX_DONE(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_RX_DONE_CLR_RX_DONE  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_RX_DONE_CLR_RX_DONE(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_ACTIVITY            VTSS_IOREG(VTSS_TO_TWI,0x17)
#define  VTSS_F_TWI_TWI_CLR_ACTIVITY_CLR_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_ACTIVITY_CLR_ACTIVITY  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_ACTIVITY_CLR_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_STOP_DET            VTSS_IOREG(VTSS_TO_TWI,0x18)
#define  VTSS_F_TWI_TWI_CLR_STOP_DET_CLR_STOP_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_STOP_DET_CLR_STOP_DET  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_STOP_DET_CLR_STOP_DET(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_START_DET           VTSS_IOREG(VTSS_TO_TWI,0x19)
#define  VTSS_F_TWI_TWI_CLR_START_DET_CLR_START_DET(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_START_DET_CLR_START_DET  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_START_DET_CLR_START_DET(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CLR_GEN_CALL            VTSS_IOREG(VTSS_TO_TWI,0x1a)
#define  VTSS_F_TWI_TWI_CLR_GEN_CALL_CLR_GEN_CALL(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CLR_GEN_CALL_CLR_GEN_CALL  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CLR_GEN_CALL_CLR_GEN_CALL(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_CTRL                    VTSS_IOREG(VTSS_TO_TWI,0x1b)
#define  VTSS_F_TWI_TWI_CTRL_ENABLE(x)        VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_CTRL_ENABLE           VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_CTRL_ENABLE(x)        VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_STAT                    VTSS_IOREG(VTSS_TO_TWI,0x1c)
#define  VTSS_F_TWI_TWI_STAT_SLV_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_STAT_SLV_ACTIVITY     VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_STAT_SLV_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_STAT_MST_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_STAT_MST_ACTIVITY     VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_STAT_MST_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_STAT_RFF(x)           VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_STAT_RFF              VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_STAT_RFF(x)           VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_STAT_RFNE(x)          VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_STAT_RFNE             VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_STAT_RFNE(x)          VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_STAT_TFE(x)           VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_STAT_TFE              VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_STAT_TFE(x)           VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_STAT_TFNF(x)          VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_STAT_TFNF             VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_STAT_TFNF(x)          VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_STAT_BUS_ACTIVITY(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_STAT_BUS_ACTIVITY     VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_STAT_BUS_ACTIVITY(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_TXFLR                   VTSS_IOREG(VTSS_TO_TWI,0x1d)
#define  VTSS_F_TWI_TWI_TXFLR_TXFLR(x)        VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_TWI_TWI_TXFLR_TXFLR           VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_TWI_TWI_TXFLR_TXFLR(x)        VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_TWI_TWI_RXFLR                   VTSS_IOREG(VTSS_TO_TWI,0x1e)
#define  VTSS_F_TWI_TWI_RXFLR_RXFLR(x)        VTSS_ENCODE_BITFIELD(x,0,3)
#define  VTSS_M_TWI_TWI_RXFLR_RXFLR           VTSS_ENCODE_BITMASK(0,3)
#define  VTSS_X_TWI_TWI_RXFLR_RXFLR(x)        VTSS_EXTRACT_BITFIELD(x,0,3)

#define VTSS_TWI_TWI_RESERVED3               VTSS_IOREG(VTSS_TO_TWI,0x1f)
#define  VTSS_F_TWI_TWI_RESERVED3_RESERVED3(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED3_RESERVED3     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED3_RESERVED3(x)  (x)

#define VTSS_TWI_TWI_TX_ABRT_SOURCE          VTSS_IOREG(VTSS_TO_TWI,0x20)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(x)  VTSS_ENCODE_BITFIELD(!!(x),15,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVRD_INTX  VTSS_BIT(15)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVRD_INTX(x)  VTSS_EXTRACT_BITFIELD(x,15,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(x)  VTSS_ENCODE_BITFIELD(!!(x),14,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST  VTSS_BIT(14)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLV_ARBLOST(x)  VTSS_EXTRACT_BITFIELD(x,14,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(x)  VTSS_ENCODE_BITFIELD(!!(x),13,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO  VTSS_BIT(13)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_SLVFLUSH_TXFIFO(x)  VTSS_EXTRACT_BITFIELD(x,13,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ARB_LOST(x)  VTSS_ENCODE_BITFIELD(!!(x),12,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ARB_LOST  VTSS_BIT(12)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ARB_LOST(x)  VTSS_EXTRACT_BITFIELD(x,12,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_MASTER_DIS(x)  VTSS_ENCODE_BITFIELD(!!(x),11,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_MASTER_DIS  VTSS_BIT(11)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_MASTER_DIS(x)  VTSS_EXTRACT_BITFIELD(x,11,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(x)  VTSS_ENCODE_BITFIELD(!!(x),10,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT  VTSS_BIT(10)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_10B_RD_NORSTRT(x)  VTSS_EXTRACT_BITFIELD(x,10,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(x)  VTSS_ENCODE_BITFIELD(!!(x),9,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT  VTSS_BIT(9)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_NORSTRT(x)  VTSS_EXTRACT_BITFIELD(x,9,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(x)  VTSS_ENCODE_BITFIELD(!!(x),8,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_NORSTRT  VTSS_BIT(8)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_NORSTRT(x)  VTSS_EXTRACT_BITFIELD(x,8,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(x)  VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET  VTSS_BIT(7)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_SBYTE_ACKDET(x)  VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_ACKDET(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_ACKDET  VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_HS_ACKDET(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_READ(x)  VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_READ  VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_READ(x)  VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_NOACK  VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_GCALL_NOACK(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(x)  VTSS_ENCODE_BITFIELD(!!(x),3,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK  VTSS_BIT(3)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_TXDATA_NOACK(x)  VTSS_EXTRACT_BITFIELD(x,3,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(x)  VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK  VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR2_NOACK(x)  VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(x)  VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK  VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_10ADDR1_NOACK(x)  VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_TX_ABRT_SOURCE_ABRT_7B_ADDR_NOACK(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_RESERVED8               VTSS_IOREG(VTSS_TO_TWI,0x21)
#define  VTSS_F_TWI_TWI_RESERVED8_RESERVED8(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED8_RESERVED8     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED8_RESERVED8(x)  (x)

#define VTSS_TWI_TWI_RESERVED4               VTSS_IOREG(VTSS_TO_TWI,0x22)
#define  VTSS_F_TWI_TWI_RESERVED4_RESERVED4(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED4_RESERVED4     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED4_RESERVED4(x)  (x)

#define VTSS_TWI_TWI_RESERVED5               VTSS_IOREG(VTSS_TO_TWI,0x23)
#define  VTSS_F_TWI_TWI_RESERVED5_RESERVED5(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED5_RESERVED5     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED5_RESERVED5(x)  (x)

#define VTSS_TWI_TWI_RESERVED6               VTSS_IOREG(VTSS_TO_TWI,0x24)
#define  VTSS_F_TWI_TWI_RESERVED6_RESERVED6(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED6_RESERVED6     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED6_RESERVED6(x)  (x)

#define VTSS_TWI_TWI_SDA_SETUP               VTSS_IOREG(VTSS_TO_TWI,0x25)
#define  VTSS_F_TWI_TWI_SDA_SETUP_SDA_SETUP(x)  VTSS_ENCODE_BITFIELD(x,0,8)
#define  VTSS_M_TWI_TWI_SDA_SETUP_SDA_SETUP     VTSS_ENCODE_BITMASK(0,8)
#define  VTSS_X_TWI_TWI_SDA_SETUP_SDA_SETUP(x)  VTSS_EXTRACT_BITFIELD(x,0,8)

#define VTSS_TWI_TWI_ACK_GEN_CALL            VTSS_IOREG(VTSS_TO_TWI,0x26)
#define  VTSS_F_TWI_TWI_ACK_GEN_CALL_ACK_GEN_CALL(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_ACK_GEN_CALL_ACK_GEN_CALL  VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_ACK_GEN_CALL_ACK_GEN_CALL(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_ENABLE_STATUS           VTSS_IOREG(VTSS_TO_TWI,0x27)
#define  VTSS_F_TWI_TWI_ENABLE_STATUS_SLV_FIFO_FILLED_AND_FLUSHED(x)  VTSS_ENCODE_BITFIELD(!!(x),2,1)
#define  VTSS_M_TWI_TWI_ENABLE_STATUS_SLV_FIFO_FILLED_AND_FLUSHED  VTSS_BIT(2)
#define  VTSS_X_TWI_TWI_ENABLE_STATUS_SLV_FIFO_FILLED_AND_FLUSHED(x)  VTSS_EXTRACT_BITFIELD(x,2,1)
#define  VTSS_F_TWI_TWI_ENABLE_STATUS_SLV_RX_ABORTED(x)  VTSS_ENCODE_BITFIELD(!!(x),1,1)
#define  VTSS_M_TWI_TWI_ENABLE_STATUS_SLV_RX_ABORTED  VTSS_BIT(1)
#define  VTSS_X_TWI_TWI_ENABLE_STATUS_SLV_RX_ABORTED(x)  VTSS_EXTRACT_BITFIELD(x,1,1)
#define  VTSS_F_TWI_TWI_ENABLE_STATUS_BUSY(x)  VTSS_ENCODE_BITFIELD(!!(x),0,1)
#define  VTSS_M_TWI_TWI_ENABLE_STATUS_BUSY    VTSS_BIT(0)
#define  VTSS_X_TWI_TWI_ENABLE_STATUS_BUSY(x)  VTSS_EXTRACT_BITFIELD(x,0,1)

#define VTSS_TWI_TWI_RESERVED7(ri)           VTSS_IOREG(VTSS_TO_TWI,0x28 + (ri))
#define  VTSS_F_TWI_TWI_RESERVED7_RESERVED7(x)  (x)
#define  VTSS_M_TWI_TWI_RESERVED7_RESERVED7     0xffffffff
#define  VTSS_X_TWI_TWI_RESERVED7_RESERVED7(x)  (x)

#define VTSS_TWI_TWI_COMP_PARAM_1            VTSS_IOREG(VTSS_TO_TWI,0x3d)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_TX_BUFFER_DEPTH(x)  VTSS_ENCODE_BITFIELD(x,16,8)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_TX_BUFFER_DEPTH     VTSS_ENCODE_BITMASK(16,8)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_TX_BUFFER_DEPTH(x)  VTSS_EXTRACT_BITFIELD(x,16,8)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_RX_BUFFER_DEPTH(x)  VTSS_ENCODE_BITFIELD(x,8,8)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_RX_BUFFER_DEPTH     VTSS_ENCODE_BITMASK(8,8)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_RX_BUFFER_DEPTH(x)  VTSS_EXTRACT_BITFIELD(x,8,8)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_ADD_ENCODED_PARAMS(x)  VTSS_ENCODE_BITFIELD(!!(x),7,1)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_ADD_ENCODED_PARAMS  VTSS_BIT(7)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_ADD_ENCODED_PARAMS(x)  VTSS_EXTRACT_BITFIELD(x,7,1)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_HAS_DMA(x)  VTSS_ENCODE_BITFIELD(!!(x),6,1)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_HAS_DMA  VTSS_BIT(6)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_HAS_DMA(x)  VTSS_EXTRACT_BITFIELD(x,6,1)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_INTR_IO(x)  VTSS_ENCODE_BITFIELD(!!(x),5,1)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_INTR_IO  VTSS_BIT(5)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_INTR_IO(x)  VTSS_EXTRACT_BITFIELD(x,5,1)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_HC_COUNT_VALUES(x)  VTSS_ENCODE_BITFIELD(!!(x),4,1)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_HC_COUNT_VALUES  VTSS_BIT(4)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_HC_COUNT_VALUES(x)  VTSS_EXTRACT_BITFIELD(x,4,1)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_MAX_SPEED_MODE(x)  VTSS_ENCODE_BITFIELD(x,2,2)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_MAX_SPEED_MODE     VTSS_ENCODE_BITMASK(2,2)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_MAX_SPEED_MODE(x)  VTSS_EXTRACT_BITFIELD(x,2,2)
#define  VTSS_F_TWI_TWI_COMP_PARAM_1_APB_DATA_WIDTH(x)  VTSS_ENCODE_BITFIELD(x,0,2)
#define  VTSS_M_TWI_TWI_COMP_PARAM_1_APB_DATA_WIDTH     VTSS_ENCODE_BITMASK(0,2)
#define  VTSS_X_TWI_TWI_COMP_PARAM_1_APB_DATA_WIDTH(x)  VTSS_EXTRACT_BITFIELD(x,0,2)

#define VTSS_TWI_TWI_COMP_VERSION            VTSS_IOREG(VTSS_TO_TWI,0x3e)
#define  VTSS_F_TWI_TWI_COMP_VERSION_COMP_VERSION(x)  (x)
#define  VTSS_M_TWI_TWI_COMP_VERSION_COMP_VERSION     0xffffffff
#define  VTSS_X_TWI_TWI_COMP_VERSION_COMP_VERSION(x)  (x)

#define VTSS_TWI_TWI_COMP_TYPE               VTSS_IOREG(VTSS_TO_TWI,0x3f)
#define  VTSS_F_TWI_TWI_COMP_TYPE_COMP_TYPE(x)  (x)
#define  VTSS_M_TWI_TWI_COMP_TYPE_COMP_TYPE     0xffffffff
#define  VTSS_X_TWI_TWI_COMP_TYPE_COMP_TYPE(x)  (x)


#endif /* _VTSS_OCELOT_REGS_TWI_H_ */
