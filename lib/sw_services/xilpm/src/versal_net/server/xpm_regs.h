/******************************************************************************
* Copyright (c) 2018 - 2022 Xilinx, Inc.  All rights reserved.
* Copyright (c) 2022 - 2023 Advanced Micro Devices, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

#ifndef XPM_REGS_H
#define XPM_REGS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Base Addresses
 */
#define PMC_SYSMON_BASEADDR					(0xF1270000U)

/**
 * PMC IOU SLCR Module
 */
#define PMC_IOU_SLCR_SD0_DLL_DIV_MAP0_OFFSET			(0x00000458U)
#define PMC_IOU_SLCR_SD0_DLL_DIV_MAP1_OFFSET			(0x0000045CU)
#define PMC_IOU_SLCR_WPROT0_OFFSET              (0x00000828U)

/**
 * LPD IOU SLCR Module
 */
#define LPD_IOU_SLCR_WPROT0_OFFSET              (0x00000728U)

/**
 * FPD_SLCR Module
 */
#define FPD_SLCR_WPROT0_OFFSET                  (0x00000000U)

/**
 * Definitions required from pmc_tap.h
 */
#define PMC_TAP_VERSION_PLATFORM_SHIFT          (24U)
#define PMC_TAP_VERSION_PLATFORM_MASK           (0x0F000000U)
#define PMC_TAP_VERSION_PLATFORM_VERSION_SHIFT			(28U)
#define PMC_TAP_VERSION_PLATFORM_VERSION_MASK			(0xF0000000U)
#define PMC_TAP_IDCODE_SI_REV_MASK				(0xF0000000U)
#define PMC_TAP_IDCODE_SI_REV_SHIFT				(28U)

/**
 * SLR TYPES
 */
#define PMC_TAP_SLR_TYPE_OFFSET					(0x00000024U)
#define PMC_TAP_SLR_TYPE_WIDTH					(0x00000002U)
#define PMC_TAP_SLR_TYPE_MASK					(0x00000007U)

/**
 * LPD SLCR Module
 */
#define LPD_SLCR_WPROT0_OFFSET                  (0x00000000U)

/**
 * Register: LPD_SLCR_SECURE
 */
#define LPD_SLCR_SECURE_WPROT0_OFFSET				(0x00000000U)

/**
 * Register: FPD_SLCR_SECURE
 */
#define FPD_SLCR_SECURE_WPROT0_OFFSET				(0x00000000U)


/* PMC_GLOBAL registers */
#define PMC_GLOBAL_GGS4_OFFSET			(0x00000040U)
#define PMC_GLOBAL_PGGS3_OFFSET			(0x0000005CU)


#define PWR_SUPPLY_STATUS_OFFSET				(0x10CU)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_RAM_MASK		(0x00000080U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_PL_MASK		(0x00000040U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCAUX_MASK		(0x00000020U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_SOC_MASK		(0x00000010U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_LPD_MASK		(0x00000008U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_FPD_MASK		(0x00000004U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCINT_PMC_MASK		(0x00000002U)
#define PMC_GLOBAL_PWR_SUPPLY_STATUS_VCCAUX_PMC_MASK		(0x00000001U)
/**
 * PMC Global GIC Proxy Module
 */
#define PMC_GLOBAL_GIC_PROXY_BASE_OFFSET			(0x30000U)
#define GIC_PROXY_GROUP_OFFSET(g)				(0x14U * (g))

#define PMC_GLOBAL_GICP_IRQ_ENABLE_OFFSET			(0x300A8U)
#define PMC_GLOBAL_GICP_IRQ_DISABLE_OFFSET			(0x300ACU)

/**
 * GIC Proxy register offsets
 */
#define GIC_PROXY_IRQ_STATUS_OFFSET				(0x0U)
#define GIC_PROXY_IRQ_MASK_OFFSET				(0x4U)
#define GIC_PROXY_IRQ_ENABLE_OFFSET				(0x8U)
#define GIC_PROXY_IRQ_DISABLE_OFFSET				(0xCU)
#define GIC_PROXY_ALL_MASK					(0xFFFFFFFFU)

/**
 * IPI register masks
 */
#define PMC_IPI_MASK						(0x00000002U)
#define IPI_0_MASK						(0x00000004U)
#define IPI_1_MASK						(0x00000008U)
#define IPI_2_MASK						(0x00000010U)
#define IPI_3_MASK						(0x00000020U)
#define IPI_4_MASK						(0x00000040U)
#define IPI_5_MASK						(0x00000080U)
#define IPI_6_MASK						(0x00000200U)

/**
 * IPI registers
 */
#define IPI_PMC_IER				(IPI_BASEADDR + 0x20018U)
#define IPI_PMC_IDR				(IPI_BASEADDR + 0x2001CU)

#define RPU_0_CFG_OFFSET					(0x00000000U)
#define RPU_1_CFG_OFFSET					(0x00000000U)

#define PMC_GLOBAL_PMC_GSW_ERR_OFFSET		(0x00000064U)
#define PMC_GLOBAL_PMC_GSW_ERR_CR_FLAG_SHIFT	(30U)
/* PSM GLOBAL registers */
#define PSM_GLOBAL_REG_BASEADDR			(0xEBC90000U)
#define PSM_GLOBAL_PGGS0_OFFSET			(0x00000050U)
#define PSM_GLOBAL_PGGS1_OFFSET			(0x00000054U)
#define PSMX_GLOBAL_MEM_CLEAR_TRIGGER		(PSM_GLOBAL_REG_BASEADDR + 0x00000900U)
#define PSMX_GLOBAL_SCAN_CLEAR_TRIGGER		(PSM_GLOBAL_REG_BASEADDR + 0x00000920U)
#define APU0_CORE0_PWRDWN_MASK			BIT(0)
#define APU0_CORE1_PWRDWN_MASK			BIT(1)
#define APU0_CORE2_PWRDWN_MASK			BIT(2)
#define APU0_CORE3_PWRDWN_MASK			BIT(3)
#define APU1_CORE0_PWRDWN_MASK			BIT(4)
#define APU1_CORE1_PWRDWN_MASK			BIT(5)
#define APU1_CORE2_PWRDWN_MASK			BIT(6)
#define APU1_CORE3_PWRDWN_MASK			BIT(7)
#define APU2_CORE0_PWRDWN_MASK			BIT(8)
#define APU2_CORE1_PWRDWN_MASK			BIT(9)
#define APU2_CORE2_PWRDWN_MASK			BIT(10)
#define APU2_CORE3_PWRDWN_MASK			BIT(11)
#define APU3_CORE0_PWRDWN_MASK			BIT(12)
#define APU3_CORE1_PWRDWN_MASK			BIT(13)
#define APU3_CORE2_PWRDWN_MASK			BIT(14)
#define APU3_CORE3_PWRDWN_MASK			BIT(15)

#define PSM_ERR1_STATUS_OFFSET					(0x1000U)
#define PSM_ERR1_STATUS_APLL1_LOCK_MASK				(0x00000100U)
#define PSM_ERR1_STATUS_APLL2_LOCK_MASK				(0x00000200U)
#define PSM_ERR1_STATUS_RPLL_LOCK_MASK				(0x00000400U)
#define PSM_ERR1_STATUS_FLXPLL_LOCK_MASK			(0x00000800U)

#define XPM_RPU_CLUSTER_LOCKSTEP_DISABLE (0x1U)
#define XPM_RPU_CLUSTER_LOCKSTEP_ENABLE (0x0U)
#define XPM_A78_CLUSTER_CONFIGURED 		(1U)
#define XPM_R52_CLUSTER_CONFIGURED 		(1U)

#define XPM_APU_CLUSTER_LOCKSTEP_DISABLE	(0U)
#define XPM_APU_CLUSTER_LOCKSTEP_ENABLE	(1U)

#define RPU_CLUSTER_CORE_CFG0_OFFSET		(0x0U)
#define RPU_CLUSTER_CORE_CFG0_REMAP_MASK	(0x00000020U)
#define RPU_CLUSTER_CORE_CFG0_CPU_HALT_MASK	(0x00000001U)

#define RPU_CLUSTER_CORE_VECTABLE_OFFSET	(0x10U)
#define RPU_CLUSTER_CORE_VECTABLE_MASK		(0xFFFFFFE0U)
#define XPM_RPU_CLUSTER_CFG_OFFSET			(0x00000000U)

#define PSX_CRL_BASEADDR		(0xEB5E0000U)
#define CRL_RST_RPU_ADDR		(PSX_CRL_BASEADDR + 0x310U)
#define CRL_PSM_RST_MODE_OFFSET		(0x00000380U)
#define CRL_PSM_RST_WAKEUP_MASK		(0x4U)

#define RPU_A_TOPRESET_MASK		(0x00010000U)
#define RPU_A_DBGRST_MASK		(0x00100000U)
#define RPU_A_DCLS_TOPRESET_MASK	(0x00040000U)
#define RPU_CORE0A_POR_MASK		(0x00000100U)
#define RPU_CORE0A_RESET_MASK		(0x00000001U)

/* EFUSE_CACHE registers */
/* putting def guard because , xplmi_hw.h already defined this */
#ifndef EFUSE_CACHE_BASEADDR
#define EFUSE_CACHE_BASEADDR			(0xF1250000U)
#endif
#define EFUSE_CACHE_TRIM_BRAM_OFFSET				(0x00000098U)
#define EFUSE_CACHE_TRIM_URAM_OFFSET				(0x0000009CU)

#define EFUSE_CACHE_TRIM_CFRM_VGG_0_OFFSET	(0x000001B4U)
#define EFUSE_CACHE_TRIM_CFRM_VGG_1_OFFSET	(0x000001B8U)
#define EFUSE_CACHE_TRIM_CFRM_VGG_2_OFFSET	(0x000001BCU)
#define EFUSE_CACHE_TRIM_CRAM_OFFSET		(0x000001C0U)

#define EFUSE_CACHE_TBITS1_BISR_RSVD_OFFSET	(0x00000500U)
#define EFUSE_CACHE_BISR_RSVD_0_OFFSET		(0x00000504U)
#define EFUSE_CACHE_TBITS2_BISR_RSVD_OFFSET	(0x00000BFCU)

#define GetRpuRstMask(Mask, ClusterNum, CoreNum)  (Mask << ((2U * ClusterNum)\
						+ CoreNum))

#define XPM_RPU_CORE0	(0U)
#define XPM_RPU_CORE1	(1U)

/*Registers*/
/*
 * Definitions required for RPU_CLUSTER
 */
#define RPU_CLUSTER_OFFSET		(0x10000U)
#define XPM_RPU_CLUSTER_CORE_OFFSET		(0x4000U)
#define RPU_CLUSTER_A0_ADDR	((u32)0xEB588000)

#define XPM_GET_RPU_CLUSTER_CORE_REG(ClusterNum, CoreNum, Offset) \
		GET_REGISTER_ADDR(RPU_CLUSTER_A0_ADDR, \
		(ClusterNum) * RPU_CLUSTER_OFFSET, Offset, \
		(CoreNum) * XPM_RPU_CLUSTER_CORE_OFFSET)

#define GET_RPU_CLUSTER_REG(ClusterNum, Offset) \
		GET_REGISTER_ADDR(RPU_CLUSTER_BASEADDR, \
		(ClusterNum) * RPU_CLUSTER_OFFSET, Offset, 0U)

/*
 * Definitions required for FPX_SLCR
 */
#define FPX_SLCR_APU_CTRL_OFFSET	(0x1000U)

/**
 * OSPI Mux select related macros
 */
#define XPM_OSPI_MUX_SEL_OFFSET					(0x00000504U)
#define XPM_OSPI_MUX_SEL_MASK					(0x2U)
#define XPM_OSPI_MUX_SEL_SHIFT					(0x1U)

/**
 * CRP_RESET_REASON
 */
#define LAST_RESET_REASON_REG					(CRP_BASEADDR + 0x224)
#define CRP_RESET_REASON_MASK					(0x0000FFFFU)
#define CRP_RESET_REASON_SLR_SYS_MASK				(0x00000400U)
#define CRP_RESET_REASON_SW_SYS_MASK				(0x00000200U)
#define CRP_RESET_REASON_ERR_SYS_MASK				(0x00000100U)
#define CRP_RESET_REASON_DAP_SYS_MASK				(0x00000080U)
#define CRP_RESET_REASON_ERR_POR_MASK				(0x00000008U)
#define CRP_RESET_REASON_SLR_POR_MASK				(0x00000004U)
#define CRP_RESET_REASON_SW_POR_MASK				(0x00000002U)
#define CRP_RESET_REASON_EXTERNAL_POR_MASK			(0x00000001U)

/**
 * CRP CFU Registers
 */
#define CRP_CFU_REF_CTRL_OFFSET				(0x00000108U)
#define CRP_CFU_REF_CTRL_DIVISOR0_SHIFT			(8U)
#define CRP_CFU_REF_CTRL_DIVISOR0_WIDTH			(10U)
#define CRP_CFU_REF_CTRL_DIVISOR0_MASK		(BITNMASK( \
							CRP_CFU_REF_CTRL_DIVISOR0_SHIFT, \
							CRP_CFU_REF_CTRL_DIVISOR0_WIDTH \
							) \
						)
/**
 * USB registers
 */
#define XPM_USB0_CUR_PWR_OFFSET					(0x00000600U)
#define XPM_USB0_PWR_REQ_OFFSET					(0x00000608U)
#define XPM_USB1_CUR_PWR_OFFSET					(0x00000650U)
#define XPM_USB1_PWR_REQ_OFFSET					(0x00000658U)

/*
 * Definitions required for APU_CLUSTER
 */
#define APU_CLUSTER_BASEADDR		(0xECC00000U)
#define APU_CLUSTER_OFFSET		    (0x00100000U)
#define APU_CLUSTER2_OFFSET		    (0x00E00000U)

#define APU_CLUSTER_RVBARADDR0L_OFFSET	(0x00000040U)
#define APU_CLUSTER_RVBARADDR0H_OFFSET	(0x00000044U)

/*
 * Definitions required for APU_PCLI
 */
#define APU_PCLI_BASEADDR		    (0xECB10000U)
#define APU_PCLI_CORE_OFFSET		(0x00000030U)
#define APU_PCLI_CLUSTER_OFFSET		(0x00001000U)
#define APU_PCLI_CLUSTER_PREQ_OFFSET		(0x00008004U)
#define APU_PCLI_CLUSTER_PREQ_PREQ_MASK		(0x00000001U)
#define APU_PCLI_CLUSTER_PSTATE_OFFSET		(0x00008008U)
#define APU_PCLI_CLUSTER_PSTATE_PSTATE_MASK	(0x0000007FU)
#define APU_PCLI_CLUSTER_PACTIVE_OFFSET		(0x0000800CU)
#define APU_PCLI_CLUSTER_PACTIVE_PACCEPT_MASK	(0x01000000U)
#define APU_CLUSTER_PSTATE_FULL_ON_VAL		(0x00000048U)
#define APU_PCLI_CORE_PREQ_OFFSET		(0x00000004U)
#define APU_PCLI_CORE_PREQ_PREQ_MASK		(0x00000001U)
#define APU_PCLI_CORE_PSTATE_OFFSET		(0x00000008U)
#define APU_PCLI_CORE_PSTATE_PSTATE_MASK	(0x0000003FU)
#define APU_PCLI_CORE_PACTIVE_OFFSET		(0x0000000CU)
#define APU_PCLI_CORE_PACTIVE_PACCEPT_MASK	(0x01000000U)
#define APU_CORE_PSTATE_FULL_ON_VAL		(0x00000038U)

#define GET_APU_CLUSTER_REG(ClusterNum, Offset)		\
	GET_REGISTER_ADDR(APU_CLUSTER_BASEADDR,		\
	((ClusterNum / 2U) * APU_CLUSTER2_OFFSET) + 	\
	((ClusterNum % 2U) * APU_CLUSTER_OFFSET), Offset, 0U)

#define GET_APU_PCLI_CLUSTER_REG(CoreNum, Offset)		\
	GET_REGISTER_ADDR(APU_PCLI_BASEADDR, 0U, Offset, \
		(CoreNum) * APU_PCLI_CLUSTER_OFFSET)

#define GET_APU_PCLI_CORE_REG(CoreNum, Offset)		\
	GET_REGISTER_ADDR(APU_PCLI_BASEADDR, 0U, Offset, \
		(CoreNum) * APU_PCLI_CORE_OFFSET)

#define XPM_R52_0A_TCMA_BASE_ADDR	(0xEBA00000U)
#define XPM_R52_1A_TCMA_BASE_ADDR	(0xEBA40000U)
#define XPM_R52_0B_TCMA_BASE_ADDR	(0xEBA80000U)
#define XPM_R52_1B_TCMA_BASE_ADDR	(0xEBAC0000U)
#define XPM_R52_TCM_CLUSTER_OFFSET	(0x00080000U)

/*
 * TCM address for R52
 */
#define XPM_R52_TCMA_LOAD_ADDRESS	(0x0U)
#define XPM_R52_TCM_TOTAL_LENGTH	(0x30000U)


#define XPM_R52_0_TCMA_ECC_DONE     (0x00000001U)
#define XPM_R52_1_TCMA_ECC_DONE 	(0x00000002U)

/**
 * AFI port control registers
 */
#define AFI_FM_PORT_EN_MASK		(0x80000000U)
#define AFI_FM_WR_CTRL_OFFSET		(0x00000020U)
#define AFI_FS_PORT_EN_MASK		(0x00000001U)
#define CHI_FPD_PORT_EN_MASK		(0x00000001U)
#define ACP_APU0_PORT_EN_MASK		(0x00000020U)
#define PS_DTI0_PORT_EN_MASK		(0x00000001U)

/**
 * CRP_RST_NONPS
 */
#define CRP_RST_NONPS_NOC_RESET_MASK				(0x00000040U)
#define CRP_RST_NONPS_NOC_POR_MASK				(0x00000020U)

#define CRP_RST_NONPS_SYS_RST_1_MASK				(0x00000004U)
#define CRP_RST_NONPS_SYS_RST_2_MASK				(0x00000002U)
#define CRP_RST_NONPS_SYS_RST_3_MASK				(0x00000001U)

#define CRP_RST_PS_PL_POR_MASK			(0x00000020U)
#define CRP_RST_PS_PS_POR_MASK			(0x00000040U)
#define CRP_RST_PS_PL_SRST_MASK			(0x00000002U)
/*
 * Definitions required for NPI
 */
#define NPI_PCSR_UNLOCK_VAL                                     (0xF9E8D7C6U)
#define NPI_PCSR_LOCK_OFFSET                                    (0x0000000CU)
#define NPI_PCSR_MASK_OFFSET                                    (0x00000000U)
#define NPI_PCSR_CONTROL_OFFSET                                 (0x00000004U)
#define NPI_PCSR_STATUS_OFFSET                                  (0x00000008U)

/*
 * GTY PCSR Module
 */
#define GTY_PCSR_MASK_OFFSET					(0x00000000U)
#define GTY_PCSR_CONTROL_OFFSET					(0x00000004U)
#define GTY_PCSR_STATUS_OFFSET					(0x00000008U)
#define GTY_PCSR_BISR_TRIGGER_MASK				(0x20000000U)
#define GTY_PCSR_STATUS_BISR_DONE_MASK				(0x00080000U)
#define GTY_PCSR_STATUS_BISR_PASS_MASK				(0x00100000U)

/**
 * SysMon Registers
 */
#define PMC_SYSMON_SUPPLY0				PMC_SYSMON_BASEADDR + (0x00001040U)
#define PMC_SYSMON_SUPPLY0_TH_LOWER		PMC_SYSMON_BASEADDR + (0x00001980U)
#define PMC_SYSMON_NEW_DATA_FLAG0		PMC_SYSMON_BASEADDR + (0x00001000U)

#ifdef __cplusplus
}
#endif

#endif /* XPM_REGS_H */
