/******************************************************************************
* Copyright (C) 2022 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

/*****************************************************************************/
/**
*
* @file xdfeprach_hw.h
* @addtogroup xdfeprach_v1_3
* @{
* @cond nocomments
* Contains the register definitions for xdfeprach. This is
* created to be used initialy while waiting for IP.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- ---    -------- -----------------------------------------------
* 1.0   dc     03/08/21 Initial version
*       dc     04/21/21 Update due to restructured registers
*       dc     05/08/21 Update to common trigger
*       dc     05/18/21 Handling RachUpdate trigger
* 1.1   dc     06/30/21 Doxygen documentation update
*       dc     07/13/21 Update to common latency requirements
* 1.2   dc     10/29/21 Update doxygen comments
*       dc     11/01/21 Add multi AddCC, RemoveCC and UpdateCC
*
* </pre>
*
******************************************************************************/
#ifndef XDFEPRACH_HW_H_
#define XDFEPRACH_HW_H_

#ifdef __cplusplus
extern "C" {
#endif

/**************************** Definitions *******************************/
/* CORE functionality */
#define XDFEPRACH_VERSION_OFFSET 0x00U /**< Register offset */
#define XDFEPRACH_VERSION_PATCH_WIDTH 8U
#define XDFEPRACH_VERSION_PATCH_OFFSET 0U
#define XDFEPRACH_VERSION_REVISION_WIDTH 8U
#define XDFEPRACH_VERSION_REVISION_OFFSET 8U
#define XDFEPRACH_VERSION_MINOR_WIDTH 8U
#define XDFEPRACH_VERSION_MINOR_OFFSET 16U
#define XDFEPRACH_VERSION_MAJOR_WIDTH 8U
#define XDFEPRACH_VERSION_MAJOR_OFFSET 24U

#define XDFEPRACH_RESET_OFFSET 0x04U /**< Register offset */
#define XDFEPRACH_RESET_OFF 0x00U
#define XDFEPRACH_RESET_ON 0x01U

#define XDFEPRACH_MODEL_PARAM_OFFSET 0x08U /**< Register offset */
#define XDFEPRACH_MODEL_PARAM_NUM_ANTENNA_WIDTH 4U
#define XDFEPRACH_MODEL_PARAM_NUM_ANTENNA_OFFSET 0U
#define XDFEPRACH_MODEL_PARAM_NUM_CC_PER_ANTENNA_WIDTH 4U
#define XDFEPRACH_MODEL_PARAM_NUM_CC_PER_ANTENNA_OFFSET 4U
#define XDFEPRACH_MODEL_PARAM_NUM_SLOT_CHANNELS_WIDTH 3U
#define XDFEPRACH_MODEL_PARAM_NUM_SLOT_CHANNELS_OFFSET 8U
#define XDFEPRACH_MODEL_PARAM_NUM_SLOTS_WIDTH 4U
#define XDFEPRACH_MODEL_PARAM_NUM_SLOTS_OFFSET 12U
#define XDFEPRACH_MODEL_PARAM_NUM_RACH_CHANNELS_WIDTH 5U
#define XDFEPRACH_MODEL_PARAM_NUM_RACH_CHANNELS_OFFSET 16U
#define XDFEPRACH_MODEL_PARAM_NUM_RACH_LANES_WIDTH 2U
#define XDFEPRACH_MODEL_PARAM_NUM_RACH_LANES_OFFSET 24U
#define XDFEPRACH_MODEL_PARAM_HAS_AXIS_CTRL_WIDTH 1U
#define XDFEPRACH_MODEL_PARAM_HAS_AXIS_CTRL_OFFSET 28U
#define XDFEPRACH_MODEL_PARAM_HAS_IRQ_WIDTH 1U
#define XDFEPRACH_MODEL_PARAM_HAS_IRQ_OFFSET 29U

/* State */
#define XDFEPRACH_STATE_OPERATIONAL_OFFSET 0x10U /**< Register offset */
#define XDFEPRACH_STATE_NOT_OPERATIONAL 0U
#define XDFEPRACH_STATE_IS_OPERATIONAL 1U
#define XDFEPRACH_STATE_LOW_POWER_OFFSET 0x14U /**< Register offset */

/* Triggers */
#define XDFEPRACH_TRIGGERS_ACTIVATE_OFFSET 0x20U /**< Register offset */
#define XDFEPRACH_TRIGGERS_LOW_POWER_OFFSET 0x28U /**< Register offset */
#define XDFEPRACH_TRIGGERS_RACH_UPDATE_OFFSET 0x2CU /**< Register offset */
#define XDFEPRACH_TRIGGERS_FRAME_INIT_OFFSET 0x30U /**< Register offset */
/* Bit fields */
#define XDFEPRACH_TRIGGERS_TRIGGER_ENABLE_WIDTH 1U
#define XDFEPRACH_TRIGGERS_TRIGGER_ENABLE_OFFSET 0U
#define XDFEPRACH_TRIGGERS_TRIGGER_ENABLE_DISABLED 0U
#define XDFEPRACH_TRIGGERS_TRIGGER_ENABLE_ENABLED 1U
#define XDFEPRACH_TRIGGERS_MODE_WIDTH 2U
#define XDFEPRACH_TRIGGERS_MODE_OFFSET 4U
#define XDFEPRACH_TRIGGERS_MODE_IMMEDIATE 0U
#define XDFEPRACH_TRIGGERS_MODE_TUSER_SINGLE_SHOT 1U
#define XDFEPRACH_TRIGGERS_MODE_TUSER_CONTINUOUS 2U
#define XDFEPRACH_TRIGGERS_MODE_RESERVED 3U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_WIDTH 2U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_OFFSET 8U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_LOW 0U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_HIGH 1U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_FALING 2U
#define XDFEPRACH_TRIGGERS_TUSER_EDGE_LEVEL_RISING 3U
#define XDFEPRACH_TRIGGERS_STATE_OUTPUT_WIDTH 1U
#define XDFEPRACH_TRIGGERS_STATE_OUTPUT_OFFSET 12U
#define XDFEPRACH_TRIGGERS_STATE_OUTPUT_DISABLED 0U
#define XDFEPRACH_TRIGGERS_STATE_OUTPUT_ENABLED 1U
#define XDFEPRACH_TRIGGERS_TUSER_BIT_WIDTH 8U
#define XDFEPRACH_TRIGGERS_TUSER_BIT_OFFSET 16U

/* IRQ status */
#define XDFEPRACH_ISR 0x34U /**< Register offset */
#define XDFEPRACH_ISR_HAS_NOT_OCCURRED 0U
#define XDFEPRACH_ISR_OCCURRED 1U
#define XDFEPRACH_IER 0x38U /**< Register offset */
#define XDFEPRACH_IER_NO_CHANGE 0U
#define XDFEPRACH_IER_SET_BIT 1U
#define XDFEPRACH_IDR 0x3CU /**< Register offset */
#define XDFEPRACH_IDR_NO_CHANGE 0U
#define XDFEPRACH_IDR_RESET_BIT 1U
#define XDFEPRACH_IMR 0x40U /**< Register offset */
#define XDFEPRACH_IMR_INTERRUPT 0U
#define XDFEPRACH_IMR_NO_INTERRUPT 1U
#define XDFEPRACH_DECIMATOR_OVERFLOW_WIDTH 1U
#define XDFEPRACH_DECIMATOR_OVERFLOW_OFFSET 0U
#define XDFEPRACH_MIXER_OVERFLOW_WIDTH 1U
#define XDFEPRACH_MIXER_OVERFLOW_OFFSET 1U
#define XDFEPRACH_DECIMATOR_OVERRUN_WIDTH 1U
#define XDFEPRACH_DECIMATOR_OVERRUN_OFFSET 2U
#define XDFEPRACH_SELECTOR_OVERRUN_WIDTH 1U
#define XDFEPRACH_SELECTOR_OVERRUN_OFFSET 3U
#define XDFEPRACH_RACH_UPDATE_TRIGGERED_WIDTH 1U
#define XDFEPRACH_RACH_UPDATE_TRIGGERED_OFFSET 4U
#define XDFEPRACH_RACH_UPDATE_TRIGGERED_LOW 0U
#define XDFEPRACH_RACH_UPDATE_TRIGGERED_HIGH 1U
#define XDFEPRACH_CC_SEQUENCE_ERROR_WIDTH 1U
#define XDFEPRACH_CC_SEQUENCE_ERROR_OFFSET 5U
#define XDFEPRACH_FRAME_INIT_TRIGGERED_WIDTH 1U
#define XDFEPRACH_FRAME_INIT_TRIGGERED_OFFSET 6U
#define XDFEPRACH_FRAME_INIT_TRIGGERED_LOW 0U
#define XDFEPRACH_FRAME_INIT_TRIGGERED_HIGH 1U
#define XDFEPRACH_FRAME_ERROR_WIDTH 1U
#define XDFEPRACH_FRAME_ERROR_OFFSET 7U
#define XDFEPRACH_FRAME_ERROR_LOW 0U
#define XDFEPRACH_FRAME_ERROR_HIGH 1U
#define XDFEPRACH_IRQ_FLAGS_MASK 0xFFU

/* Latency */
#define XDFEPRACH_DELAY_OFFSET 0x80U /**< Register offset */
#define XDFEPRACH_DELAY_VALUE_WIDTH 12U
#define XDFEPRACH_DELAY_VALUE_OFFSET 0U
#define XDFEPRACH_LATENCY_OFFSET 0x84U /**< Register offset */
#define XDFEPRACH_LATENCY_VALUE_WIDTH 12U
#define XDFEPRACH_LATENCY_VALUE_OFFSET 0U

/* RACH configuration */

/* CC sequence length */
#define XDFEPRACH_CC_SEQUENCE_LENGTH_CURRENT 0x210U /**< Register offset */
#define XDFEPRACH_CC_SEQUENCE_LENGTH_NEXT 0x214U /**< Register offset */
#define XDFEPRACH_CC_SEQUENCE_LENGTH_WIDTH 0x4U
#define XDFEPRACH_CC_SEQUENCE_LENGTH_OFFSET 0x0U

/* CC sequence */
#define XDFEPRACH_CC_SEQUENCE_CURRENT 0x300U /**< Register offset */
#define XDFEPRACH_CC_SEQUENCE_NEXT 0x340U /**< Register offset */
#define XDFEPRACH_CCID_WIDTH 0x4U
#define XDFEPRACH_CCID_OFFSET 0x0U

/* CC mapping */
#define XDFEPRACH_CC_MAPPING_CURRENT 0x380U /**< Register offset */
#define XDFEPRACH_CC_MAPPING_NEXT 0x3C0U /**< Register offset */
#define XDFEPRACH_CC_MAPPING_ENABLE_WIDTH 1U
#define XDFEPRACH_CC_MAPPING_ENABLE_OFFSET 0U
#define XDFEPRACH_CC_MAPPING_DISABLED 0U
#define XDFEPRACH_CC_MAPPING_ENABLED 1U
#define XDFEPRACH_CC_MAPPING_SCS_WIDTH 4U
#define XDFEPRACH_CC_MAPPING_SCS_OFFSET 8U
#define XDFEPRACH_CC_MAPPING_SCS_15KHZ 0U
#define XDFEPRACH_CC_MAPPING_SCS_30KHZ 1U
#define XDFEPRACH_CC_MAPPING_SCS_60KHZ 2U
#define XDFEPRACH_CC_MAPPING_SCS_120KHZ 3U
#define XDFEPRACH_CC_MAPPING_SCS_240KHZ 4U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_WIDTH 2U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_OFFSET 12U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_1X 0U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_2X 1U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_4X 2U
#define XDFEPRACH_CC_MAPPING_DECIMATION_RATE_8X 3U

/* RCID mapping */
/* RCID mapping channel */
#define XDFEPRACH_RCID_MAPPING_CHANNEL_CURRENT 0x400U /**< Register offset */
#define XDFEPRACH_RCID_MAPPING_CHANNEL_NEXT 0x440U /**< Register offset */
#define XDFEPRACH_RCID_MAPPING_CHANNEL_ENABLE_WIDTH 1U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_ENABLE_OFFSET 0U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_NOT_ENABLED 0U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_ENABLED 1U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RACH_CHANNEL_WIDTH 4U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RACH_CHANNEL_OFFSET 8U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RCID_RESTART_WIDTH 1U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RCID_RESTART_OFFSET 16U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RESTART_NO 0U
#define XDFEPRACH_RCID_MAPPING_CHANNEL_RESTART_YES 1U

/* RCID mapping source */
#define XDFEPRACH_RCID_MAPPING_SOURCE_CURRENT 0x480U /**< Register offset */
#define XDFEPRACH_RCID_MAPPING_SOURCE_NEXT 0x4C0U /**< Register offset */
#define XDFEPRACH_RCID_MAPPING_SOURCE_CCID_WIDTH 4U
#define XDFEPRACH_RCID_MAPPING_SOURCE_CCID_OFFSET 0U

/* RCID schedule */
#define XDFEPRACH_RCID_SCHEDULE_STATIC_SCHEDULE 0x500U /**< Register offset */
#define XDFEPRACH_RCID_SCHEDULE_STATIC_SCHEDULE_OFF 0U
#define XDFEPRACH_RCID_SCHEDULE_STATIC_SCHEDULE_ON 1U
/* Location */
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_CURRENT 0x580U /**< Register offset */
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_NEXT 0x5C0U /**< Register offset */
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_FRAMEID_WIDTH 8U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_FRAMEID_OFFSET 0U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_SUBFRAME_ID_WIDTH 4U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_SUBFRAME_ID_OFFSET 8U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_SLOT_ID_WIDTH 4U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_SLOT_ID_OFFSET 12U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_PATTERN_PERIOD_WIDTH 8U
#define XDFEPRACH_RCID_SCHEDULE_LOCATION_PATTERN_PERIOD_OFFSET 16U
/* Length */
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_CURRENT 0x600U /**< Register offset */
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_NEXT 0x640U /**< Register offset */
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_DURATION_WIDTH 12U
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_DURATION_OFFSET 0U
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_NUM_REPEATS_WIDTH 8U
#define XDFEPRACH_RCID_SCHEDULE_LENGTH_NUM_REPEATS_OFFSET 16U

/* RACH mixer */
/* Captur Phase */
#define XDFEPRACH_RACH_MIXER_PHASE_CAPTURE 0x800U /**< Register offset */
#define XDFEPRACH_RACH_MIXER_PHASE_CAPTURE_WIDTH 1U
#define XDFEPRACH_RACH_MIXER_PHASE_CAPTURE_OFFSET 0U

/* Status */
#define XDFEPRACH_STATUS_DECIMATOR_OVERFLOW 0x804U /**< Register offset */
#define XDFEPRACH_STATUS_DECIMATOR_OVERRUN 0x808U /**< Register offset */
#define XDFEPRACH_STATUS_MIXER_OVERFLOW 0x80CU /**< Register offset */
#define XDFEPRACH_STATUS_SELECTOR_OVERRUN 0x810U /**< Register offset */
#define XDFEPRACH_STATUS_ANTENNA_WIDTH 4U
#define XDFEPRACH_STATUS_ANTENNA_OFFSET 0U
#define XDFEPRACH_STATUS_CHANNEL_WIDTH 4U
#define XDFEPRACH_STATUS_CHANNEL_OFFSET 4U

/* Channel */
#define XDFEPRACH_CHANNEL_CONFIG_RATE 0x900U /**< Register offset */
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_WIDTH 4U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_OFFSET 0U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_15KHZ 0U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_30KHZ 1U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_60KHZ 2U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_120KHZ 3U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_240KHZ 4U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_1_25KHZ 12U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_3_75KHZ 13U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_5KHZ 14U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_7_5KHZ 15U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_SCS_MAX 15U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_WIDTH 4U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_OFFSET 8U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_2X 1U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_4X 2U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_8X 3U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_16X 4U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_3X 8U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_6X 9U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_12X 10U
#define XDFEPRACH_CHANNEL_CONFIG_RATE_DECIMATION_RATE_24X 11U

#define XDFEPRACH_CHANNEL_CONFIG_GAIN 0x940U /**< Register offset */
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN0_WIDTH 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN0_OFFSET 0U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN1_WIDTH 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN1_OFFSET 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN2_WIDTH 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN2_OFFSET 2U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN3_WIDTH 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN3_OFFSET 3U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN4_WIDTH 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN4_OFFSET 4U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN5_WIDTH 2U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN5_OFFSET 5U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN_0DB 0U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN_6DB 1U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN_12DB 2U
#define XDFEPRACH_CHANNEL_CONFIG_GAIN_DECIMATION_GAIN_18DB 3U

/* Frequency */
#define XDFEPRACH_FREQUENCY_CONTROL_WORD 0x980U /**< Register offset */
#define XDFEPRACH_FREQUENCY_CONTROL_WORD_WIDTH 24U
#define XDFEPRACH_FREQUENCY_CONTROL_WORD_OFFSET 0U

/* NCO CTRL */
#define XDFEPRACH_NCO_CTRL_ADDR_STEP 0x20U
#define XDFEPRACH_NCO_NUM 8U
/* Phase */
#define XDFEPRACH_PHASE_PHASE_OFFSET 0xC00U /**< Register offset */
#define XDFEPRACH_PHASE_PHASE_OFFSET_WIDTH 18U
#define XDFEPRACH_PHASE_PHASE_OFFSET_OFFSET 0U

#define XDFEPRACH_PHASE_PHASE_ACC 0xC04U /**< Register offset */
#define XDFEPRACH_PHASE_PHASE_ACC_WIDTH 32U
#define XDFEPRACH_PHASE_PHASE_ACC_OFFSET 0U

#define XDFEPRACH_PHASE_DUAL_MOD_COUNT 0xC08U /**< Register offset */
#define XDFEPRACH_PHASE_DUAL_MOD_COUNT_WIDTH 32U
#define XDFEPRACH_PHASE_DUAL_MOD_COUNT_OFFSET 0U

#define XDFEPRACH_PHASE_DUAL_MOD_SEL 0xC0CU /**< Register offset */
#define XDFEPRACH_PHASE_DUAL_MOD_SEL_WIDTH 1U
#define XDFEPRACH_PHASE_DUAL_MOD_SEL_OFFSET 0U

#define XDFEPRACH_NCO_GAIN 0xC10U /**< Register offset */
#define XDFEPRACH_NCO_GAIN_WIDTH 2U
#define XDFEPRACH_NCO_GAIN_OFFSET 0U
#define XDFEPRACH_NCO_GAIN_ZERODB 0U
#define XDFEPRACH_NCO_GAIN_MINUS3DB 1U
#define XDFEPRACH_NCO_GAIN_MINUS6DB 2U
#define XDFEPRACH_NCO_GAIN_MINUS9DB 3U

/* Captured phase */
#define XDFEPRACH_CAPTURED_PHASE_PHASE_ACC 0xC14U /**< Register offset */
#define XDFEPRACH_CAPTURED_PHASE_PHASE_ACC_WIDTH 32U
#define XDFEPRACH_CAPTURED_PHASE_PHASE_ACC_OFFSET 0U

#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_COUNT 0xC18U /**< Register offset */
#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_COUNT_WIDTH 32U
#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_COUNT_OFFSET 0U

#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_SEL 0xC1CU /**< Register offset */
#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_SEL_WIDTH 1U
#define XDFEPRACH_CAPTURED_PHASE_DUAL_MOD_SEL_OFFSET 0U

#ifdef __cplusplus
}
#endif

#endif
/**
* @endcond
*/
/** @} */
