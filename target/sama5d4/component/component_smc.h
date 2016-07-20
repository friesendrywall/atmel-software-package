/* ---------------------------------------------------------------------------- */
/*                  Atmel Microcontroller Software Support                      */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) 2015, Atmel Corporation                                        */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Atmel's name may not be used to endorse or promote products derived from     */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR   */
/* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE   */
/* DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,      */
/* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,  */
/* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    */
/* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING         */
/* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, */
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                           */
/* ---------------------------------------------------------------------------- */

#ifndef _SAMA5D4_SMC_COMPONENT_
#define _SAMA5D4_SMC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Static Memory Controller */
/* ============================================================================= */
/** \addtogroup SAMA5D4_SMC Static Memory Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SmcCs_number hardware registers */
typedef struct {
	__IO uint32_t SMC_SETUP;   /**< \brief (SmcCs_number Offset: 0x0) SMC Setup Register */
	__IO uint32_t SMC_PULSE;   /**< \brief (SmcCs_number Offset: 0x4) SMC Pulse Register */
	__IO uint32_t SMC_CYCLE;   /**< \brief (SmcCs_number Offset: 0x8) SMC Cycle Register */
	__IO uint32_t SMC_TIMINGS; /**< \brief (SmcCs_number Offset: 0xC) SMC Timings Register */
	__IO uint32_t SMC_MODE;    /**< \brief (SmcCs_number Offset: 0x10) SMC Mode Register */
} SmcCs_number;
/** \brief SmcPmecc hardware registers */
typedef struct {
	__I uint32_t SMC_PMECC[11]; /**< \brief (SmcPmecc Offset: 0x0) PMECC Redundancy x Register */
	__I uint32_t Reserved1[5];
} SmcPmecc;
/** \brief SmcRem hardware registers */
typedef struct {
	__I uint32_t SMC_REM[12]; /**< \brief (SmcRem Offset: 0x0) PMECC Remainder x Register */
	__I uint32_t Reserved2[4];
} SmcRem;
/** \brief Smc hardware registers */
#define SMCPMECC_NUMBER 8
#define SMCREM_NUMBER 8
#define SMCCS_NUMBER_NUMBER 4
typedef struct {
	__IO uint32_t SMC_CFG;				      /**< \brief (Smc Offset: 0x000) SMC NFC Configuration Register */
	__O uint32_t SMC_CTRL;				      /**< \brief (Smc Offset: 0x004) SMC NFC Control Register */
	__I uint32_t SMC_SR;				      /**< \brief (Smc Offset: 0x008) SMC NFC Status Register */
	__O uint32_t SMC_IER;				      /**< \brief (Smc Offset: 0x00C) SMC NFC Interrupt Enable Register */
	__O uint32_t SMC_IDR;				      /**< \brief (Smc Offset: 0x010) SMC NFC Interrupt Disable Register */
	__I uint32_t SMC_IMR;				      /**< \brief (Smc Offset: 0x014) SMC NFC Interrupt Mask Register */
	__IO uint32_t SMC_ADDR;			      /**< \brief (Smc Offset: 0x018) SMC NFC Address Cycle Zero Register */
	__IO uint32_t SMC_BANK;			      /**< \brief (Smc Offset: 0x01C) SMC Bank Address Register */
	__I uint32_t Reserved1[20];
	__IO uint32_t SMC_PMECCFG;			      /**< \brief (Smc Offset: 0x070) PMECC Configuration Register */
	__IO uint32_t SMC_PMECCSAREA;			      /**< \brief (Smc Offset: 0x074) PMECC Spare Area Size Register */
	__IO uint32_t SMC_PMECCSADDR;			      /**< \brief (Smc Offset: 0x078) PMECC Start Address Register */
	__IO uint32_t SMC_PMECCEADDR;			      /**< \brief (Smc Offset: 0x07C) PMECC End Address Register */
	__I uint32_t Reserved2[1];
	__O uint32_t SMC_PMECCTRL;			      /**< \brief (Smc Offset: 0x084) PMECC Control Register */
	__I uint32_t SMC_PMECCSR;			      /**< \brief (Smc Offset: 0x088) PMECC Status Register */
	__O uint32_t SMC_PMECCIER;			      /**< \brief (Smc Offset: 0x08C) PMECC Interrupt Enable register */
	__O uint32_t SMC_PMECCIDR;			      /**< \brief (Smc Offset: 0x090) PMECC Interrupt Disable Register */
	__I uint32_t SMC_PMECCIMR;			      /**< \brief (Smc Offset: 0x094) PMECC Interrupt Mask Register */
	__I uint32_t SMC_PMECCISR;			      /**< \brief (Smc Offset: 0x098) PMECC Interrupt Status Register */
	__I uint32_t Reserved3[5];
	SmcPmecc SMC_PMECC[SMCPMECC_NUMBER];		 /**< \brief (Smc Offset: 0xB0) sec_num = 0 .. 7 */
	SmcRem SMC_REM[SMCREM_NUMBER];			 /**< \brief (Smc Offset: 0x2B0) sec_num = 0 .. 7 */
	__I uint32_t Reserved4[20];
	__IO uint32_t SMC_ELCFG;			      /**< \brief (Smc Offset: 0x500) PMECC Error Location Configuration Register */
	__I uint32_t SMC_ELPRIM;			      /**< \brief (Smc Offset: 0x504) PMECC Error Location Primitive Register */
	__O uint32_t SMC_ELEN;				      /**< \brief (Smc Offset: 0x508) PMECC Error Location Enable Register */
	__O uint32_t SMC_ELDIS;			      /**< \brief (Smc Offset: 0x50C) PMECC Error Location Disable Register */
	__I uint32_t SMC_ELSR;				      /**< \brief (Smc Offset: 0x510) PMECC Error Location Status Register */
	__O uint32_t SMC_ELIER;			      /**< \brief (Smc Offset: 0x514) PMECC Error Location Interrupt Enable register */
	__O uint32_t SMC_ELIDR;			      /**< \brief (Smc Offset: 0x518) PMECC Error Location Interrupt Disable Register */
	__I uint32_t SMC_ELIMR;			      /**< \brief (Smc Offset: 0x51C) PMECC Error Location Interrupt Mask Register */
	__I uint32_t SMC_ELISR;			      /**< \brief (Smc Offset: 0x520) PMECC Error Location Interrupt Status Register */
	__I uint32_t Reserved5[1];
	__IO uint32_t SMC_SIGMA[25];			      /**< \brief (Smc Offset: 0x528) PMECC Error Location SIGMA x Register */
	__I uint32_t SMC_ERRLOC[24];			      /**< \brief (Smc Offset: 0x58C) PMECC Error Location x Register */
	__I uint32_t Reserved6[5];
	SmcCs_number SMC_CS_NUMBER[SMCCS_NUMBER_NUMBER]; /**< \brief (Smc Offset: 0x600) CS_number = 0 .. 3 */
	__I uint32_t Reserved7[20];
	__IO uint32_t SMC_OCMS;			      /**< \brief (Smc Offset: 0x6A0) SMC Off Chip Memory Scrambling Register */
	__O uint32_t SMC_KEY1;				      /**< \brief (Smc Offset: 0x6A4) SMC Off Chip Memory Scrambling KEY1 Register */
	__O uint32_t SMC_KEY2;				      /**< \brief (Smc Offset: 0x6A8) SMC Off Chip Memory Scrambling KEY2 Register */
	__I uint32_t Reserved8[14];
	__IO uint32_t SMC_WPMR;			      /**< \brief (Smc Offset: 0x6E4) SMC Write Protection Mode Register */
	__I uint32_t SMC_WPSR;				      /**< \brief (Smc Offset: 0x6E8) SMC Write Protection Status Register */
} Smc;
#endif				/* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- SMC_CFG : (SMC Offset: 0x000) SMC NFC Configuration Register -------- */
#define SMC_CFG_PAGESIZE_Pos 0
#define SMC_CFG_PAGESIZE_Msk (0x7u << SMC_CFG_PAGESIZE_Pos) /**< \brief (SMC_CFG) Page Size of the NAND Flash Device */
#define SMC_CFG_PAGESIZE(value) ((SMC_CFG_PAGESIZE_Msk & ((value) << SMC_CFG_PAGESIZE_Pos)))
#define   SMC_CFG_PAGESIZE_PS512 (0x0u << 0) /**< \brief (SMC_CFG) Main area 512 bytes */
#define   SMC_CFG_PAGESIZE_PS1024 (0x1u << 0) /**< \brief (SMC_CFG) Main area 1024 bytes */
#define   SMC_CFG_PAGESIZE_PS2048 (0x2u << 0) /**< \brief (SMC_CFG) Main area 2048 bytes */
#define   SMC_CFG_PAGESIZE_PS4096 (0x3u << 0) /**< \brief (SMC_CFG) Main area 4096 bytes */
#define   SMC_CFG_PAGESIZE_PS8192 (0x4u << 0) /**< \brief (SMC_CFG) Main area 8192 bytes */
#define SMC_CFG_WSPARE (0x1u << 8) /**< \brief (SMC_CFG) Write Spare Area */
#define SMC_CFG_RSPARE (0x1u << 9) /**< \brief (SMC_CFG) Read Spare Area */
#define SMC_CFG_EDGECTRL (0x1u << 12) /**< \brief (SMC_CFG) Rising/Falling Edge Detection Control */
#define SMC_CFG_RBEDGE (0x1u << 13) /**< \brief (SMC_CFG) Ready/Busy Signal Edge Detection */
#define SMC_CFG_DTOCYC_Pos 16
#define SMC_CFG_DTOCYC_Msk (0xfu << SMC_CFG_DTOCYC_Pos) /**< \brief (SMC_CFG) Data Timeout Cycle Number */
#define SMC_CFG_DTOCYC(value) ((SMC_CFG_DTOCYC_Msk & ((value) << SMC_CFG_DTOCYC_Pos)))
#define SMC_CFG_DTOMUL_Pos 20
#define SMC_CFG_DTOMUL_Msk (0x7u << SMC_CFG_DTOMUL_Pos) /**< \brief (SMC_CFG) Data Timeout Multiplier */
#define SMC_CFG_DTOMUL(value) ((SMC_CFG_DTOMUL_Msk & ((value) << SMC_CFG_DTOMUL_Pos)))
#define   SMC_CFG_DTOMUL_X1 (0x0u << 20) /**< \brief (SMC_CFG) DTOCYC */
#define   SMC_CFG_DTOMUL_X16 (0x1u << 20) /**< \brief (SMC_CFG) DTOCYC x 16 */
#define   SMC_CFG_DTOMUL_X128 (0x2u << 20) /**< \brief (SMC_CFG) DTOCYC x 128 */
#define   SMC_CFG_DTOMUL_X256 (0x3u << 20) /**< \brief (SMC_CFG) DTOCYC x 256 */
#define   SMC_CFG_DTOMUL_X1024 (0x4u << 20) /**< \brief (SMC_CFG) DTOCYC x 1024 */
#define   SMC_CFG_DTOMUL_X4096 (0x5u << 20) /**< \brief (SMC_CFG) DTOCYC x 4096 */
#define   SMC_CFG_DTOMUL_X65536 (0x6u << 20) /**< \brief (SMC_CFG) DTOCYC x 65536 */
#define   SMC_CFG_DTOMUL_X1048576 (0x7u << 20)	/**< \brief (SMC_CFG) DTOCYC x 1048576 */
#define SMC_CFG_NFCSPARESIZE_Pos 24
#define SMC_CFG_NFCSPARESIZE_Msk (0x7fu << SMC_CFG_NFCSPARESIZE_Pos) /**< \brief (SMC_CFG) NAND Flash Spare Area Size Retrieved by the Host Controller */
#define SMC_CFG_NFCSPARESIZE(value) ((SMC_CFG_NFCSPARESIZE_Msk & ((value) << SMC_CFG_NFCSPARESIZE_Pos)))
/* -------- SMC_CTRL : (SMC Offset: 0x004) SMC NFC Control Register -------- */
#define SMC_CTRL_NFCEN (0x1u << 0) /**< \brief (SMC_CTRL) NAND Flash Controller Enable */
#define SMC_CTRL_NFCDIS (0x1u << 1) /**< \brief (SMC_CTRL) NAND Flash Controller Disable */
/* -------- SMC_SR : (SMC Offset: 0x008) SMC NFC Status Register -------- */
#define SMC_SR_SMCSTS (0x1u << 0) /**< \brief (SMC_SR) NAND Flash Controller Status (this field cannot be reset) */
#define SMC_SR_RB_RISE (0x1u << 4) /**< \brief (SMC_SR) Selected Ready Busy Rising Edge Detected */
#define SMC_SR_RB_FALL (0x1u << 5) /**< \brief (SMC_SR) Selected Ready Busy Falling Edge Detected */
#define SMC_SR_NFCBUSY (0x1u << 8) /**< \brief (SMC_SR) NFC Busy (this field cannot be reset) */
#define SMC_SR_NFCWR (0x1u << 11) /**< \brief (SMC_SR) NFC Write/Read Operation (this field cannot be reset) */
#define SMC_SR_NFCSID_Pos 12
#define SMC_SR_NFCSID_Msk (0x7u << SMC_SR_NFCSID_Pos)	/**< \brief (SMC_SR) NFC Chip Select ID (this field cannot be reset) */
#define SMC_SR_XFRDONE (0x1u << 16) /**< \brief (SMC_SR) NFC Data Transfer Terminated */
#define SMC_SR_CMDDONE (0x1u << 17) /**< \brief (SMC_SR) Command Done */
#define SMC_SR_DTOE (0x1u << 20) /**< \brief (SMC_SR) Data Timeout Error */
#define SMC_SR_UNDEF (0x1u << 21) /**< \brief (SMC_SR) Undefined Area Error */
#define SMC_SR_AWB (0x1u << 22) /**< \brief (SMC_SR) Accessing While Busy */
#define SMC_SR_NFCASE (0x1u << 23) /**< \brief (SMC_SR) NFC Access Size Error */
#define SMC_SR_RB_EDGE0 (0x1u << 24) /**< \brief (SMC_SR) Ready/Busy Line 0 Edge Detected */
/* -------- SMC_IER : (SMC Offset: 0x00C) SMC NFC Interrupt Enable Register -------- */
#define SMC_IER_RB_RISE (0x1u << 4) /**< \brief (SMC_IER) Ready Busy Rising Edge Detection Interrupt Enable */
#define SMC_IER_RB_FALL (0x1u << 5) /**< \brief (SMC_IER) Ready Busy Falling Edge Detection Interrupt Enable */
#define SMC_IER_XFRDONE (0x1u << 16) /**< \brief (SMC_IER) Transfer Done Interrupt Enable */
#define SMC_IER_CMDDONE (0x1u << 17) /**< \brief (SMC_IER) Command Done Interrupt Enable */
#define SMC_IER_DTOE (0x1u << 20) /**< \brief (SMC_IER) Data Timeout Error Interrupt Enable */
#define SMC_IER_UNDEF (0x1u << 21) /**< \brief (SMC_IER) Undefined Area Access Interrupt Enable */
#define SMC_IER_AWB (0x1u << 22) /**< \brief (SMC_IER) Accessing While Busy Interrupt Enable */
#define SMC_IER_NFCASE (0x1u << 23) /**< \brief (SMC_IER) NFC Access Size Error Interrupt Enable */
#define SMC_IER_RB_EDGE0 (0x1u << 24) /**< \brief (SMC_IER) Ready/Busy Line 0 Interrupt Enable */
/* -------- SMC_IDR : (SMC Offset: 0x010) SMC NFC Interrupt Disable Register -------- */
#define SMC_IDR_RB_RISE (0x1u << 4) /**< \brief (SMC_IDR) Ready Busy Rising Edge Detection Interrupt Disable */
#define SMC_IDR_RB_FALL (0x1u << 5) /**< \brief (SMC_IDR) Ready Busy Falling Edge Detection Interrupt Disable */
#define SMC_IDR_XFRDONE (0x1u << 16) /**< \brief (SMC_IDR) Transfer Done Interrupt Disable */
#define SMC_IDR_CMDDONE (0x1u << 17) /**< \brief (SMC_IDR) Command Done Interrupt Disable */
#define SMC_IDR_DTOE (0x1u << 20) /**< \brief (SMC_IDR) Data Timeout Error Interrupt Disable */
#define SMC_IDR_UNDEF (0x1u << 21) /**< \brief (SMC_IDR) Undefined Area Access Interrupt Disable */
#define SMC_IDR_AWB (0x1u << 22) /**< \brief (SMC_IDR) Accessing While Busy Interrupt Disable */
#define SMC_IDR_NFCASE (0x1u << 23) /**< \brief (SMC_IDR) NFC Access Size Error Interrupt Disable */
#define SMC_IDR_RB_EDGE0 (0x1u << 24) /**< \brief (SMC_IDR) Ready/Busy Line 0 Interrupt Disable */
/* -------- SMC_IMR : (SMC Offset: 0x014) SMC NFC Interrupt Mask Register -------- */
#define SMC_IMR_RB_RISE (0x1u << 4) /**< \brief (SMC_IMR) Ready Busy Rising Edge Detection Interrupt Mask */
#define SMC_IMR_RB_FALL (0x1u << 5) /**< \brief (SMC_IMR) Ready Busy Falling Edge Detection Interrupt Mask */
#define SMC_IMR_XFRDONE (0x1u << 16) /**< \brief (SMC_IMR) Transfer Done Interrupt Mask */
#define SMC_IMR_CMDDONE (0x1u << 17) /**< \brief (SMC_IMR) Command Done Interrupt Mask */
#define SMC_IMR_DTOE (0x1u << 20) /**< \brief (SMC_IMR) Data Timeout Error Interrupt Mask */
#define SMC_IMR_UNDEF (0x1u << 21) /**< \brief (SMC_IMR) Undefined Area Access Interrupt Mask5 */
#define SMC_IMR_AWB (0x1u << 22) /**< \brief (SMC_IMR) Accessing While Busy Interrupt Mask */
#define SMC_IMR_NFCASE (0x1u << 23) /**< \brief (SMC_IMR) NFC Access Size Error Interrupt Mask */
#define SMC_IMR_RB_EDGE0 (0x1u << 24) /**< \brief (SMC_IMR) Ready/Busy Line 0 Interrupt Mask */
/* -------- SMC_ADDR : (SMC Offset: 0x018) SMC NFC Address Cycle Zero Register -------- */
#define SMC_ADDR_ADDR_CYCLE0_Pos 0
#define SMC_ADDR_ADDR_CYCLE0_Msk (0xffu << SMC_ADDR_ADDR_CYCLE0_Pos) /**< \brief (SMC_ADDR) NAND Flash Array Address Cycle 0 */
#define SMC_ADDR_ADDR_CYCLE0(value) ((SMC_ADDR_ADDR_CYCLE0_Msk & ((value) << SMC_ADDR_ADDR_CYCLE0_Pos)))
/* -------- SMC_BANK : (SMC Offset: 0x01C) SMC Bank Address Register -------- */
#define SMC_BANK_BANK (0x1u << 0) /**< \brief (SMC_BANK) Bank Identifier */
/* -------- SMC_PMECCFG : (SMC Offset: 0x070) PMECC Configuration Register -------- */
#define SMC_PMECCFG_BCH_ERR_Pos 0
#define SMC_PMECCFG_BCH_ERR_Msk (0x7u << SMC_PMECCFG_BCH_ERR_Pos) /**< \brief (SMC_PMECCFG) Error Correcting Capability */
#define SMC_PMECCFG_BCH_ERR(value) ((SMC_PMECCFG_BCH_ERR_Msk & ((value) << SMC_PMECCFG_BCH_ERR_Pos)))
#define   SMC_PMECCFG_BCH_ERR_BCH_ERR2 (0x0u << 0) /**< \brief (SMC_PMECCFG) 2 errors */
#define   SMC_PMECCFG_BCH_ERR_BCH_ERR4 (0x1u << 0) /**< \brief (SMC_PMECCFG) 4 errors */
#define   SMC_PMECCFG_BCH_ERR_BCH_ERR8 (0x2u << 0) /**< \brief (SMC_PMECCFG) 8 errors */
#define   SMC_PMECCFG_BCH_ERR_BCH_ERR12 (0x3u << 0) /**< \brief (SMC_PMECCFG) 12 errors */
#define   SMC_PMECCFG_BCH_ERR_BCH_ERR24 (0x4u << 0) /**< \brief (SMC_PMECCFG) 24 errors */
#define SMC_PMECCFG_SECTORSZ (0x1u << 4) /**< \brief (SMC_PMECCFG) Sector Size */
#define SMC_PMECCFG_PAGESIZE_Pos 8
#define SMC_PMECCFG_PAGESIZE_Msk (0x3u << SMC_PMECCFG_PAGESIZE_Pos) /**< \brief (SMC_PMECCFG) Number of Sectors in the Page */
#define SMC_PMECCFG_PAGESIZE(value) ((SMC_PMECCFG_PAGESIZE_Msk & ((value) << SMC_PMECCFG_PAGESIZE_Pos)))
#define   SMC_PMECCFG_PAGESIZE_PAGESIZE_1SEC (0x0u << 8) /**< \brief (SMC_PMECCFG) 1 sector for main area (512 or 1024 bytes) */
#define   SMC_PMECCFG_PAGESIZE_PAGESIZE_2SEC (0x1u << 8) /**< \brief (SMC_PMECCFG) 2 sectors for main area (1024 or 2048 bytes) */
#define   SMC_PMECCFG_PAGESIZE_PAGESIZE_4SEC (0x2u << 8) /**< \brief (SMC_PMECCFG) 4 sectors for main area (2048 or 4096 bytes) */
#define   SMC_PMECCFG_PAGESIZE_PAGESIZE_8SEC (0x3u << 8) /**< \brief (SMC_PMECCFG) 8 sectors for main area (4096 or 8192 bytes) */
#define SMC_PMECCFG_NANDWR (0x1u << 12) /**< \brief (SMC_PMECCFG) NAND Write Access */
#define SMC_PMECCFG_SPAREEN (0x1u << 16) /**< \brief (SMC_PMECCFG) Spare Enable */
#define SMC_PMECCFG_AUTO (0x1u << 20) /**< \brief (SMC_PMECCFG) Automatic Mode Enable */
/* -------- SMC_PMECCSAREA : (SMC Offset: 0x074) PMECC Spare Area Size Register -------- */
#define SMC_PMECCSAREA_SPARESIZE_Pos 0
#define SMC_PMECCSAREA_SPARESIZE_Msk (0x1ffu << SMC_PMECCSAREA_SPARESIZE_Pos)	/**< \brief (SMC_PMECCSAREA) Spare Area Size */
#define SMC_PMECCSAREA_SPARESIZE(value) ((SMC_PMECCSAREA_SPARESIZE_Msk & ((value) << SMC_PMECCSAREA_SPARESIZE_Pos)))
/* -------- SMC_PMECCSADDR : (SMC Offset: 0x078) PMECC Start Address Register -------- */
#define SMC_PMECCSADDR_STARTADDR_Pos 0
#define SMC_PMECCSADDR_STARTADDR_Msk (0x1ffu << SMC_PMECCSADDR_STARTADDR_Pos)	/**< \brief (SMC_PMECCSADDR) ECC Area Start Address */
#define SMC_PMECCSADDR_STARTADDR(value) ((SMC_PMECCSADDR_STARTADDR_Msk & ((value) << SMC_PMECCSADDR_STARTADDR_Pos)))
/* -------- SMC_PMECCEADDR : (SMC Offset: 0x07C) PMECC End Address Register -------- */
#define SMC_PMECCEADDR_ENDADDR_Pos 0
#define SMC_PMECCEADDR_ENDADDR_Msk (0x1ffu << SMC_PMECCEADDR_ENDADDR_Pos) /**< \brief (SMC_PMECCEADDR) ECC Area End Address */
#define SMC_PMECCEADDR_ENDADDR(value) ((SMC_PMECCEADDR_ENDADDR_Msk & ((value) << SMC_PMECCEADDR_ENDADDR_Pos)))
/* -------- SMC_PMECCTRL : (SMC Offset: 0x084) PMECC Control Register -------- */
#define SMC_PMECCTRL_RST (0x1u << 0) /**< \brief (SMC_PMECCTRL) Reset the PMECC Module */
#define SMC_PMECCTRL_DATA (0x1u << 1) /**< \brief (SMC_PMECCTRL) Start a Data Phase */
#define SMC_PMECCTRL_USER (0x1u << 2) /**< \brief (SMC_PMECCTRL) Start a User Mode Phase */
#define SMC_PMECCTRL_ENABLE (0x1u << 4) /**< \brief (SMC_PMECCTRL) PMECC Enable */
#define SMC_PMECCTRL_DISABLE (0x1u << 5) /**< \brief (SMC_PMECCTRL) PMECC Enable */
/* -------- SMC_PMECCSR : (SMC Offset: 0x088) PMECC Status Register -------- */
#define SMC_PMECCSR_BUSY (0x1u << 0) /**< \brief (SMC_PMECCSR) The kernel of the PMECC is busy */
#define SMC_PMECCSR_ENABLE (0x1u << 4)	/**< \brief (SMC_PMECCSR) PMECC Enable bit */
/* -------- SMC_PMECCIER : (SMC Offset: 0x08C) PMECC Interrupt Enable register -------- */
#define SMC_PMECCIER_ERRIE (0x1u << 0)	/**< \brief (SMC_PMECCIER) Error Interrupt Enable */
/* -------- SMC_PMECCIDR : (SMC Offset: 0x090) PMECC Interrupt Disable Register -------- */
#define SMC_PMECCIDR_ERRID (0x1u << 0)	/**< \brief (SMC_PMECCIDR) Error Interrupt Disable */
/* -------- SMC_PMECCIMR : (SMC Offset: 0x094) PMECC Interrupt Mask Register -------- */
#define SMC_PMECCIMR_ERRIM (0x1u << 0)	/**< \brief (SMC_PMECCIMR) Error Interrupt Mask */
/* -------- SMC_PMECCISR : (SMC Offset: 0x098) PMECC Interrupt Status Register -------- */
#define SMC_PMECCISR_ERRIS_Pos 0
#define SMC_PMECCISR_ERRIS_Msk (0xffu << SMC_PMECCISR_ERRIS_Pos) /**< \brief (SMC_PMECCISR) Error Interrupt Status Register */
/* -------- SMC_PMECC[11] : (SMC Offset: N/A) PMECC Redundancy x Register -------- */
#define SMC_PMECC_ECC_Pos 0
#define SMC_PMECC_ECC_Msk (0xffffffffu << SMC_PMECC_ECC_Pos) /**< \brief (SMC_PMECC[11]) BCH Redundancy */
/* -------- SMC_REM[12] : (SMC Offset: N/A) PMECC Remainder x Register -------- */
#define SMC_REM_REM2NP1_Pos 0
#define SMC_REM_REM2NP1_Msk (0x3fffu << SMC_REM_REM2NP1_Pos) /**< \brief (SMC_REM[12]) BCH Remainder 2 * N + 1 */
#define SMC_REM_REM2NP3_Pos 16
#define SMC_REM_REM2NP3_Msk (0x3fffu << SMC_REM_REM2NP3_Pos) /**< \brief (SMC_REM[12]) BCH Remainder 2 * N + 3 */
/* -------- SMC_ELCFG : (SMC Offset: 0x500) PMECC Error Location Configuration Register -------- */
#define SMC_ELCFG_SECTORSZ (0x1u << 0)	/**< \brief (SMC_ELCFG) Sector Size */
#define SMC_ELCFG_ERRNUM_Pos 16
#define SMC_ELCFG_ERRNUM_Msk (0x1fu << SMC_ELCFG_ERRNUM_Pos) /**< \brief (SMC_ELCFG) Number of Errors */
#define SMC_ELCFG_ERRNUM(value) ((SMC_ELCFG_ERRNUM_Msk & ((value) << SMC_ELCFG_ERRNUM_Pos)))
/* -------- SMC_ELPRIM : (SMC Offset: 0x504) PMECC Error Location Primitive Register -------- */
#define SMC_ELPRIM_PRIMITIV_Pos 0
#define SMC_ELPRIM_PRIMITIV_Msk (0xffffu << SMC_ELPRIM_PRIMITIV_Pos) /**< \brief (SMC_ELPRIM) Primitive Polynomial */
/* -------- SMC_ELEN : (SMC Offset: 0x508) PMECC Error Location Enable Register -------- */
#define SMC_ELEN_ENINIT_Pos 0
#define SMC_ELEN_ENINIT_Msk (0x3fffu << SMC_ELEN_ENINIT_Pos) /**< \brief (SMC_ELEN) Error Location Enable */
#define SMC_ELEN_ENINIT(value) ((SMC_ELEN_ENINIT_Msk & ((value) << SMC_ELEN_ENINIT_Pos)))
/* -------- SMC_ELDIS : (SMC Offset: 0x50C) PMECC Error Location Disable Register -------- */
#define SMC_ELDIS_DIS (0x1u << 0) /**< \brief (SMC_ELDIS) Disable Error Location Engine */
/* -------- SMC_ELSR : (SMC Offset: 0x510) PMECC Error Location Status Register -------- */
#define SMC_ELSR_BUSY (0x1u << 0) /**< \brief (SMC_ELSR) Error Location Engine Busy */
/* -------- SMC_ELIER : (SMC Offset: 0x514) PMECC Error Location Interrupt Enable register -------- */
#define SMC_ELIER_DONE (0x1u << 0) /**< \brief (SMC_ELIER) Computation Terminated Interrupt Enable */
/* -------- SMC_ELIDR : (SMC Offset: 0x518) PMECC Error Location Interrupt Disable Register -------- */
#define SMC_ELIDR_DONE (0x1u << 0) /**< \brief (SMC_ELIDR) Computation Terminated Interrupt Disable */
/* -------- SMC_ELIMR : (SMC Offset: 0x51C) PMECC Error Location Interrupt Mask Register -------- */
#define SMC_ELIMR_DONE (0x1u << 0) /**< \brief (SMC_ELIMR) Computation Terminated Interrupt Mask */
/* -------- SMC_ELISR : (SMC Offset: 0x520) PMECC Error Location Interrupt Status Register -------- */
#define SMC_ELISR_DONE (0x1u << 0) /**< \brief (SMC_ELISR) Computation Terminated Interrupt Status */
#define SMC_ELISR_ERR_CNT_Pos 8
#define SMC_ELISR_ERR_CNT_Msk (0x1fu << SMC_ELISR_ERR_CNT_Pos) /**< \brief (SMC_ELISR) Error Counter value */
/* -------- SMC_SIGMA[25] : (SMC Offset: 0x528) PMECC Error Location SIGMA 0 Register -------- */
#define SMC_SIGMA_SIGMA_Pos 0
#define SMC_SIGMA_SIGMA_Msk (0x3fffu << SMC_SIGMA_SIGMA_Pos) /**< \brief (SMC_SIGMA[25]) Coefficient of degree x in the SIGMA polynomial. */
/* -------- SMC_ERRLOC[24] : (SMC Offset: 0x58C) PMECC Error Location 0 Register -------- */
#define SMC_ERRLOC_ERRLOCN_Pos 0
#define SMC_ERRLOC_ERRLOCN_Msk (0x3fffu << SMC_ERRLOC_ERRLOCN_Pos) /**< \brief (SMC_ERRLOC[24]) Error Position within the Set {sector area, spare area} */
/* -------- SMC_SETUP : (SMC Offset: N/A) SMC Setup Register -------- */
#define SMC_SETUP_NWE_SETUP_Pos 0
#define SMC_SETUP_NWE_SETUP_Msk (0x3fu << SMC_SETUP_NWE_SETUP_Pos) /**< \brief (SMC_SETUP) NWE Setup Length */
#define SMC_SETUP_NWE_SETUP(value) ((SMC_SETUP_NWE_SETUP_Msk & ((value) << SMC_SETUP_NWE_SETUP_Pos)))
#define SMC_SETUP_NCS_WR_SETUP_Pos 8
#define SMC_SETUP_NCS_WR_SETUP_Msk (0x3fu << SMC_SETUP_NCS_WR_SETUP_Pos) /**< \brief (SMC_SETUP) NCS Setup Length in Write Access */
#define SMC_SETUP_NCS_WR_SETUP(value) ((SMC_SETUP_NCS_WR_SETUP_Msk & ((value) << SMC_SETUP_NCS_WR_SETUP_Pos)))
#define SMC_SETUP_NRD_SETUP_Pos 16
#define SMC_SETUP_NRD_SETUP_Msk (0x3fu << SMC_SETUP_NRD_SETUP_Pos) /**< \brief (SMC_SETUP) NRD Setup Length */
#define SMC_SETUP_NRD_SETUP(value) ((SMC_SETUP_NRD_SETUP_Msk & ((value) << SMC_SETUP_NRD_SETUP_Pos)))
#define SMC_SETUP_NCS_RD_SETUP_Pos 24
#define SMC_SETUP_NCS_RD_SETUP_Msk (0x3fu << SMC_SETUP_NCS_RD_SETUP_Pos) /**< \brief (SMC_SETUP) NCS Setup Length in Read Access */
#define SMC_SETUP_NCS_RD_SETUP(value) ((SMC_SETUP_NCS_RD_SETUP_Msk & ((value) << SMC_SETUP_NCS_RD_SETUP_Pos)))
/* -------- SMC_PULSE : (SMC Offset: N/A) SMC Pulse Register -------- */
#define SMC_PULSE_NWE_PULSE_Pos 0
#define SMC_PULSE_NWE_PULSE_Msk (0x7fu << SMC_PULSE_NWE_PULSE_Pos) /**< \brief (SMC_PULSE) NWE Pulse Length */
#define SMC_PULSE_NWE_PULSE(value) ((SMC_PULSE_NWE_PULSE_Msk & ((value) << SMC_PULSE_NWE_PULSE_Pos)))
#define SMC_PULSE_NCS_WR_PULSE_Pos 8
#define SMC_PULSE_NCS_WR_PULSE_Msk (0x7fu << SMC_PULSE_NCS_WR_PULSE_Pos) /**< \brief (SMC_PULSE) NCS Pulse Length in WRITE Access */
#define SMC_PULSE_NCS_WR_PULSE(value) ((SMC_PULSE_NCS_WR_PULSE_Msk & ((value) << SMC_PULSE_NCS_WR_PULSE_Pos)))
#define SMC_PULSE_NRD_PULSE_Pos 16
#define SMC_PULSE_NRD_PULSE_Msk (0x7fu << SMC_PULSE_NRD_PULSE_Pos) /**< \brief (SMC_PULSE) NRD Pulse Length */
#define SMC_PULSE_NRD_PULSE(value) ((SMC_PULSE_NRD_PULSE_Msk & ((value) << SMC_PULSE_NRD_PULSE_Pos)))
#define SMC_PULSE_NCS_RD_PULSE_Pos 24
#define SMC_PULSE_NCS_RD_PULSE_Msk (0x7fu << SMC_PULSE_NCS_RD_PULSE_Pos) /**< \brief (SMC_PULSE) NCS Pulse Length in READ Access */
#define SMC_PULSE_NCS_RD_PULSE(value) ((SMC_PULSE_NCS_RD_PULSE_Msk & ((value) << SMC_PULSE_NCS_RD_PULSE_Pos)))
/* -------- SMC_CYCLE : (SMC Offset: N/A) SMC Cycle Register -------- */
#define SMC_CYCLE_NWE_CYCLE_Pos 0
#define SMC_CYCLE_NWE_CYCLE_Msk (0x1ffu << SMC_CYCLE_NWE_CYCLE_Pos) /**< \brief (SMC_CYCLE) Total Write Cycle Length */
#define SMC_CYCLE_NWE_CYCLE(value) ((SMC_CYCLE_NWE_CYCLE_Msk & ((value) << SMC_CYCLE_NWE_CYCLE_Pos)))
#define SMC_CYCLE_NRD_CYCLE_Pos 16
#define SMC_CYCLE_NRD_CYCLE_Msk (0x1ffu << SMC_CYCLE_NRD_CYCLE_Pos) /**< \brief (SMC_CYCLE) Total Read Cycle Length */
#define SMC_CYCLE_NRD_CYCLE(value) ((SMC_CYCLE_NRD_CYCLE_Msk & ((value) << SMC_CYCLE_NRD_CYCLE_Pos)))
/* -------- SMC_TIMINGS : (SMC Offset: N/A) SMC Timings Register -------- */
#define SMC_TIMINGS_TCLR_Pos 0
#define SMC_TIMINGS_TCLR_Msk (0xfu << SMC_TIMINGS_TCLR_Pos) /**< \brief (SMC_TIMINGS) CLE to REN Low Delay */
#define SMC_TIMINGS_TCLR(value) ((SMC_TIMINGS_TCLR_Msk & ((value) << SMC_TIMINGS_TCLR_Pos)))
#define SMC_TIMINGS_TADL_Pos 4
#define SMC_TIMINGS_TADL_Msk (0xfu << SMC_TIMINGS_TADL_Pos) /**< \brief (SMC_TIMINGS) ALE to Data Start */
#define SMC_TIMINGS_TADL(value) ((SMC_TIMINGS_TADL_Msk & ((value) << SMC_TIMINGS_TADL_Pos)))
#define SMC_TIMINGS_TAR_Pos 8
#define SMC_TIMINGS_TAR_Msk (0xfu << SMC_TIMINGS_TAR_Pos) /**< \brief (SMC_TIMINGS) ALE to REN Low Delay */
#define SMC_TIMINGS_TAR(value) ((SMC_TIMINGS_TAR_Msk & ((value) << SMC_TIMINGS_TAR_Pos)))
#define SMC_TIMINGS_OCMS (0x1u << 12) /**< \brief (SMC_TIMINGS) Off Chip Memory Scrambling Enable */
#define SMC_TIMINGS_TRR_Pos 16
#define SMC_TIMINGS_TRR_Msk (0xfu << SMC_TIMINGS_TRR_Pos) /**< \brief (SMC_TIMINGS) Ready to REN Low Delay */
#define SMC_TIMINGS_TRR(value) ((SMC_TIMINGS_TRR_Msk & ((value) << SMC_TIMINGS_TRR_Pos)))
#define SMC_TIMINGS_TWB_Pos 24
#define SMC_TIMINGS_TWB_Msk (0xfu << SMC_TIMINGS_TWB_Pos) /**< \brief (SMC_TIMINGS) WEN High to REN to Busy */
#define SMC_TIMINGS_TWB(value) ((SMC_TIMINGS_TWB_Msk & ((value) << SMC_TIMINGS_TWB_Pos)))
#define SMC_TIMINGS_RBNSEL_Pos 28
#define SMC_TIMINGS_RBNSEL_Msk (0x7u << SMC_TIMINGS_RBNSEL_Pos) /**< \brief (SMC_TIMINGS) Ready/Busy Line Selection */
#define SMC_TIMINGS_RBNSEL(value) ((SMC_TIMINGS_RBNSEL_Msk & ((value) << SMC_TIMINGS_RBNSEL_Pos)))
#define SMC_TIMINGS_NFSEL (0x1u << 31)	/**< \brief (SMC_TIMINGS) NAND Flash Selection */
/* -------- SMC_MODE : (SMC Offset: N/A) SMC Mode Register -------- */
#define SMC_MODE_READ_MODE (0x1u << 0)	/**< \brief (SMC_MODE) Selection of the Control Signal for Read Operation */
#define   SMC_MODE_READ_MODE_NCS_CTRL (0x0u << 0) /**< \brief (SMC_MODE) The Read operation is controlled by the NCS signal. */
#define   SMC_MODE_READ_MODE_NRD_CTRL (0x1u << 0) /**< \brief (SMC_MODE) The Read operation is controlled by the NRD signal. */
#define SMC_MODE_WRITE_MODE (0x1u << 1) /**< \brief (SMC_MODE) Selection of the Control Signal for Write Operation */
#define   SMC_MODE_WRITE_MODE_NCS_CTRL (0x0u << 1) /**< \brief (SMC_MODE) The Write operation is controller by the NCS signal. */
#define   SMC_MODE_WRITE_MODE_NWE_CTRL (0x1u << 1) /**< \brief (SMC_MODE) The Write operation is controlled by the NWE signal */
#define SMC_MODE_EXNW_MODE_Pos 4
#define SMC_MODE_EXNW_MODE_Msk (0x3u << SMC_MODE_EXNW_MODE_Pos) /**< \brief (SMC_MODE) NWAIT Mode */
#define SMC_MODE_EXNW_MODE(value) ((SMC_MODE_EXNW_MODE_Msk & ((value) << SMC_MODE_EXNW_MODE_Pos)))
#define   SMC_MODE_EXNW_MODE_DISABLED (0x0u << 4) /**< \brief (SMC_MODE) Disabled-The NWAIT input signal is ignored on the corresponding Chip Select. */
#define   SMC_MODE_EXNW_MODE_FROZEN (0x2u << 4) /**< \brief (SMC_MODE) Frozen Mode-If asserted, the NWAIT signal freezes the current read or write cycle. After deassertion, the read/write cycle is resumed from the point where it was stopped. */
#define   SMC_MODE_EXNW_MODE_READY (0x3u << 4)	/**< \brief (SMC_MODE) Ready Mode-The NWAIT signal indicates the availability of the external device at the end of the pulse of the controlling read or write signal, to complete the access. If high, the access normally completes. If low, the access is extended until NWAIT returns high. */
#define SMC_MODE_BAT (0x1u << 8) /**< \brief (SMC_MODE) Byte Access Type */
#define   SMC_MODE_BAT_BYTE_SELECT (0x0u << 8)	/**< \brief (SMC_MODE) Byte select access type:- Write operation is controlled using NCS, NWE, NBS0, NBS1.- Read operation is controlled using NCS, NRD, NBS0, NBS1. */
#define   SMC_MODE_BAT_BYTE_WRITE (0x1u << 8) /**< \brief (SMC_MODE) Byte write access type:- Write operation is controlled using NCS, NWR0, NWR1.- Read operation is controlled using NCS and NRD. */
#define SMC_MODE_DBW (0x1u << 12) /**< \brief (SMC_MODE) Data Bus Width */
#define   SMC_MODE_DBW_BIT_8 (0x0u << 12) /**< \brief (SMC_MODE) 8-bit bus */
#define   SMC_MODE_DBW_BIT_16 (0x1u << 12) /**< \brief (SMC_MODE) 16-bit bus */
#define SMC_MODE_TDF_CYCLES_Pos 16
#define SMC_MODE_TDF_CYCLES_Msk (0xfu << SMC_MODE_TDF_CYCLES_Pos) /**< \brief (SMC_MODE) Data Float Time */
#define SMC_MODE_TDF_CYCLES(value) ((SMC_MODE_TDF_CYCLES_Msk & ((value) << SMC_MODE_TDF_CYCLES_Pos)))
#define SMC_MODE_TDF_MODE (0x1u << 20)	/**< \brief (SMC_MODE) TDF Optimization */
/* -------- SMC_OCMS : (SMC Offset: 0x6A0) SMC Off Chip Memory Scrambling Register -------- */
#define SMC_OCMS_SMSE (0x1u << 0) /**< \brief (SMC_OCMS) Static Memory Controller Scrambling Enable */
#define SMC_OCMS_SRSE (0x1u << 1) /**< \brief (SMC_OCMS) NFC Internal SRAM Scrambling Enable */
/* -------- SMC_KEY1 : (SMC Offset: 0x6A4) SMC Off Chip Memory Scrambling KEY1 Register -------- */
#define SMC_KEY1_KEY1_Pos 0
#define SMC_KEY1_KEY1_Msk (0xffffffffu << SMC_KEY1_KEY1_Pos) /**< \brief (SMC_KEY1) Off Chip Memory Scrambling (OCMS) Key Part 1 */
#define SMC_KEY1_KEY1(value) ((SMC_KEY1_KEY1_Msk & ((value) << SMC_KEY1_KEY1_Pos)))
/* -------- SMC_KEY2 : (SMC Offset: 0x6A8) SMC Off Chip Memory Scrambling KEY2 Register -------- */
#define SMC_KEY2_KEY2_Pos 0
#define SMC_KEY2_KEY2_Msk (0xffffffffu << SMC_KEY2_KEY2_Pos) /**< \brief (SMC_KEY2) Off Chip Memory Scrambling (OCMS) Key Part 2 */
#define SMC_KEY2_KEY2(value) ((SMC_KEY2_KEY2_Msk & ((value) << SMC_KEY2_KEY2_Pos)))
/* -------- SMC_WPMR : (SMC Offset: 0x6E4) SMC Write Protection Mode Register -------- */
#define SMC_WPMR_WPEN (0x1u << 0) /**< \brief (SMC_WPMR) Write Protection Enable */
#define SMC_WPMR_WPKEY_Pos 8
#define SMC_WPMR_WPKEY_Msk (0xffffffu << SMC_WPMR_WPKEY_Pos) /**< \brief (SMC_WPMR) Write Protection Key */
#define SMC_WPMR_WPKEY(value) ((SMC_WPMR_WPKEY_Msk & ((value) << SMC_WPMR_WPKEY_Pos)))
#define   SMC_WPMR_WPKEY_PASSWD (0x534D43u << 8) /**< \brief (SMC_WPMR) Writing any other value in this field aborts the write operation of bit WPEN.Always reads as 0. */
/* -------- SMC_WPSR : (SMC Offset: 0x6E8) SMC Write Protection Status Register -------- */
#define SMC_WPSR_WPVS (0x1u << 0) /**< \brief (SMC_WPSR) Write Protection Violation Status */
#define SMC_WPSR_WPVSRC_Pos 8
#define SMC_WPSR_WPVSRC_Msk (0xffffu << SMC_WPSR_WPVSRC_Pos) /**< \brief (SMC_WPSR) Write Protection Violation Source */

/*@}*/

#endif				/* _SAMA5D4_SMC_COMPONENT_ */
