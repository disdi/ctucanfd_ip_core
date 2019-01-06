/*******************************************************************************
 * 
 * CTU CAN FD IP Core
 * Copyright (C) 2015-2018
 * 
 * Authors:
 *     Ondrej Ille <ondrej.ille@gmail.com>
 *     Martin Jerabek <martin.jerabek01@gmail.com>
 * 
 * Project advisors: 
 * 	Jiri Novak <jnovak@fel.cvut.cz>
 * 	Pavel Pisa <pisa@cmp.felk.cvut.cz>
 * 
 * Department of Measurement         (http://meas.fel.cvut.cz/)
 * Faculty of Electrical Engineering (http://www.fel.cvut.cz)
 * Czech Technical University        (http://www.cvut.cz/)
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 * 
*******************************************************************************/

/* This file is autogenerated, DO NOT EDIT! */

#ifndef __CTU_CAN_FD_CAN_FD_REGISTER_MAP__
#define __CTU_CAN_FD_CAN_FD_REGISTER_MAP__

/* CAN_Registers memory map */
enum ctu_can_fd_can_registers {
	CTU_CAN_FD_DEVICE_ID              = 0x0,
	CTU_CAN_FD_VERSION                = 0x2,
	CTU_CAN_FD_MODE                   = 0x4,
	CTU_CAN_FD_COMMAND                = 0x5,
	CTU_CAN_FD_STATUS                 = 0x6,
	CTU_CAN_FD_SETTINGS               = 0x7,
	CTU_CAN_FD_INT_STAT               = 0x8,
	CTU_CAN_FD_INT_ENA_SET            = 0xc,
	CTU_CAN_FD_INT_ENA_CLR           = 0x10,
	CTU_CAN_FD_INT_MASK_SET          = 0x14,
	CTU_CAN_FD_INT_MASK_CLR          = 0x18,
	CTU_CAN_FD_BTR                   = 0x1c,
	CTU_CAN_FD_BTR_FD                = 0x20,
	CTU_CAN_FD_EWL                   = 0x24,
	CTU_CAN_FD_ERP                   = 0x25,
	CTU_CAN_FD_FAULT_STATE           = 0x26,
	CTU_CAN_FD_RXC                   = 0x28,
	CTU_CAN_FD_TXC                   = 0x2a,
	CTU_CAN_FD_ERR_NORM              = 0x2c,
	CTU_CAN_FD_ERR_FD                = 0x2e,
	CTU_CAN_FD_CTR_PRES              = 0x30,
	CTU_CAN_FD_FILTER_A_MASK         = 0x34,
	CTU_CAN_FD_FILTER_A_VAL          = 0x38,
	CTU_CAN_FD_FILTER_B_MASK         = 0x3c,
	CTU_CAN_FD_FILTER_B_VAL          = 0x40,
	CTU_CAN_FD_FILTER_C_MASK         = 0x44,
	CTU_CAN_FD_FILTER_C_VAL          = 0x48,
	CTU_CAN_FD_FILTER_RAN_LOW        = 0x4c,
	CTU_CAN_FD_FILTER_RAN_HIGH       = 0x50,
	CTU_CAN_FD_FILTER_CONTROL        = 0x54,
	CTU_CAN_FD_FILTER_STATUS         = 0x56,
	CTU_CAN_FD_RX_MEM_INFO           = 0x58,
	CTU_CAN_FD_RX_POINTERS           = 0x5c,
	CTU_CAN_FD_RX_STATUS             = 0x60,
	CTU_CAN_FD_RX_SETTINGS           = 0x62,
	CTU_CAN_FD_RX_DATA               = 0x64,
	CTU_CAN_FD_TX_STATUS             = 0x68,
	CTU_CAN_FD_TX_COMMAND            = 0x6c,
	CTU_CAN_FD_TX_PRIORITY           = 0x70,
	CTU_CAN_FD_ERR_CAPT              = 0x74,
	CTU_CAN_FD_ALC                   = 0x75,
	CTU_CAN_FD_TRV_DELAY             = 0x78,
	CTU_CAN_FD_SSP_CFG               = 0x7a,
	CTU_CAN_FD_RX_COUNTER            = 0x7c,
	CTU_CAN_FD_TX_COUNTER            = 0x80,
	CTU_CAN_FD_DEBUG_REGISTER        = 0x84,
	CTU_CAN_FD_YOLO_REG              = 0x88,
	CTU_CAN_FD_TIMESTAMP_LOW         = 0x8c,
	CTU_CAN_FD_TIMESTAMP_HIGH        = 0x90,
	CTU_CAN_FD_TXTB1_DATA_1         = 0x100,
	CTU_CAN_FD_TXTB1_DATA_2         = 0x104,
	CTU_CAN_FD_TXTB1_DATA_20        = 0x14c,
	CTU_CAN_FD_TXTB2_DATA_1         = 0x200,
	CTU_CAN_FD_TXTB2_DATA_2         = 0x204,
	CTU_CAN_FD_TXTB2_DATA_20        = 0x24c,
	CTU_CAN_FD_TXTB3_DATA_1         = 0x300,
	CTU_CAN_FD_TXTB3_DATA_2         = 0x304,
	CTU_CAN_FD_TXTB3_DATA_20        = 0x34c,
	CTU_CAN_FD_TXTB4_DATA_1         = 0x400,
	CTU_CAN_FD_TXTB4_DATA_2         = 0x404,
	CTU_CAN_FD_TXTB4_DATA_20        = 0x44c,
	CTU_CAN_FD_LOG_TRIG_CONFIG      = 0x500,
	CTU_CAN_FD_LOG_CAPT_CONFIG      = 0x504,
	CTU_CAN_FD_LOG_STATUS           = 0x508,
	CTU_CAN_FD_LOG_POINTERS         = 0x50a,
	CTU_CAN_FD_LOG_COMMAND          = 0x50c,
	CTU_CAN_FD_LOG_CAPT_EVENT_1     = 0x510,
	CTU_CAN_FD_LOG_CAPT_EVENT_2     = 0x514,
};


/* Register descriptions: */
union ctu_can_fd_device_id_version {
	uint32_t u32;
	struct ctu_can_fd_device_id_version_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* DEVICE_ID */
		uint32_t device_id              : 16;
  /* VERSION */
		uint32_t ver_minor               : 8;
		uint32_t ver_major               : 8;
#else
		uint32_t ver_major               : 8;
		uint32_t ver_minor               : 8;
		uint32_t device_id              : 16;
#endif
	} s;
};

enum ctu_can_fd_device_id_device_id {
	CTU_CAN_FD_ID    = 0xcafd,
};

union ctu_can_fd_mode_command_status_settings {
	uint32_t u32;
	struct ctu_can_fd_mode_command_status_settings_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* MODE */
		uint32_t rst                     : 1;
		uint32_t lom                     : 1;
		uint32_t stm                     : 1;
		uint32_t afm                     : 1;
		uint32_t fde                     : 1;
		uint32_t rtrp                    : 1;
		uint32_t tsm                     : 1;
		uint32_t acf                     : 1;
		uint32_t reserved_8              : 1;
  /* COMMAND */
		uint32_t abt                     : 1;
		uint32_t rrb                     : 1;
		uint32_t cdo                     : 1;
		uint32_t ercrst                  : 1;
		uint32_t rxfcrst                 : 1;
		uint32_t txfcrst                 : 1;
		uint32_t reserved_15             : 1;
  /* STATUS */
		uint32_t rxne                    : 1;
		uint32_t dor                     : 1;
		uint32_t txnf                    : 1;
		uint32_t eft                     : 1;
		uint32_t rxs                     : 1;
		uint32_t txs                     : 1;
		uint32_t ewl                     : 1;
		uint32_t idle                    : 1;
  /* SETTINGS */
		uint32_t rtrle                   : 1;
		uint32_t rtrth                   : 4;
		uint32_t ilbp                    : 1;
		uint32_t ena                     : 1;
		uint32_t nisofd                  : 1;
#else
		uint32_t nisofd                  : 1;
		uint32_t ena                     : 1;
		uint32_t ilbp                    : 1;
		uint32_t rtrth                   : 4;
		uint32_t rtrle                   : 1;
		uint32_t idle                    : 1;
		uint32_t ewl                     : 1;
		uint32_t txs                     : 1;
		uint32_t rxs                     : 1;
		uint32_t eft                     : 1;
		uint32_t txnf                    : 1;
		uint32_t dor                     : 1;
		uint32_t rxne                    : 1;
		uint32_t reserved_15             : 1;
		uint32_t txfcrst                 : 1;
		uint32_t rxfcrst                 : 1;
		uint32_t ercrst                  : 1;
		uint32_t cdo                     : 1;
		uint32_t rrb                     : 1;
		uint32_t abt                     : 1;
		uint32_t reserved_8              : 1;
		uint32_t acf                     : 1;
		uint32_t tsm                     : 1;
		uint32_t rtrp                    : 1;
		uint32_t fde                     : 1;
		uint32_t afm                     : 1;
		uint32_t stm                     : 1;
		uint32_t lom                     : 1;
		uint32_t rst                     : 1;
#endif
	} s;
};

enum ctu_can_fd_mode_lom {
	LOM_DISABLED       = 0x0,
	LOM_ENABLED        = 0x1,
};

enum ctu_can_fd_mode_stm {
	STM_DISABLED       = 0x0,
	STM_ENABLED        = 0x1,
};

enum ctu_can_fd_mode_afm {
	AFM_DISABLED       = 0x0,
	AFM_ENABLED        = 0x1,
};

enum ctu_can_fd_mode_fde {
	FDE_DISABLE       = 0x0,
	FDE_ENABLE        = 0x1,
};

enum ctu_can_fd_mode_rtrp {
	RTR_EXTRA          = 0x0,
	RTR_STANDARD       = 0x1,
};

enum ctu_can_fd_mode_tsm {
	TSM_DISABLE       = 0x0,
	TSM_ENABLE        = 0x1,
};

enum ctu_can_fd_mode_acf {
	ACF_DISABLED       = 0x0,
	ACF_ENABLED        = 0x1,
};

enum ctu_can_fd_settings_rtrle {
	RTRLE_DISABLED       = 0x0,
	RTRLE_ENABLED        = 0x1,
};

enum ctu_can_fd_settings_ilbp {
	INT_LOOP_DISABLED       = 0x0,
	INT_LOOP_ENABLED        = 0x1,
};

enum ctu_can_fd_settings_ena {
	DISABLED       = 0x0,
	ENABLED        = 0x1,
};

enum ctu_can_fd_settings_nisofd {
	ISO_FD           = 0x0,
	NON_ISO_FD       = 0x1,
};

union ctu_can_fd_int_stat {
	uint32_t u32;
	struct ctu_can_fd_int_stat_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* INT_STAT */
		uint32_t rxi                     : 1;
		uint32_t txi                     : 1;
		uint32_t ewli                    : 1;
		uint32_t doi                     : 1;
		uint32_t epi                     : 1;
		uint32_t ali                     : 1;
		uint32_t bei                     : 1;
		uint32_t lfi                     : 1;
		uint32_t rxfi                    : 1;
		uint32_t bsi                     : 1;
		uint32_t rbnei                   : 1;
		uint32_t txbhci                  : 1;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t txbhci                  : 1;
		uint32_t rbnei                   : 1;
		uint32_t bsi                     : 1;
		uint32_t rxfi                    : 1;
		uint32_t lfi                     : 1;
		uint32_t bei                     : 1;
		uint32_t ali                     : 1;
		uint32_t epi                     : 1;
		uint32_t doi                     : 1;
		uint32_t ewli                    : 1;
		uint32_t txi                     : 1;
		uint32_t rxi                     : 1;
#endif
	} s;
};

union ctu_can_fd_int_ena_set {
	uint32_t u32;
	struct ctu_can_fd_int_ena_set_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* INT_ENA_SET */
		uint32_t int_ena_set            : 12;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t int_ena_set            : 12;
#endif
	} s;
};

union ctu_can_fd_int_ena_clr {
	uint32_t u32;
	struct ctu_can_fd_int_ena_clr_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* INT_ENA_CLR */
		uint32_t int_ena_clr            : 12;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t int_ena_clr            : 12;
#endif
	} s;
};

union ctu_can_fd_int_mask_set {
	uint32_t u32;
	struct ctu_can_fd_int_mask_set_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* INT_MASK_SET */
		uint32_t int_mask_set           : 12;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t int_mask_set           : 12;
#endif
	} s;
};

union ctu_can_fd_int_mask_clr {
	uint32_t u32;
	struct ctu_can_fd_int_mask_clr_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* INT_MASK_CLR */
		uint32_t int_mask_clr           : 12;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t int_mask_clr           : 12;
#endif
	} s;
};

union ctu_can_fd_btr {
	uint32_t u32;
	struct ctu_can_fd_btr_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* BTR */
		uint32_t prop                    : 7;
		uint32_t ph1                     : 6;
		uint32_t ph2                     : 6;
		uint32_t brp                     : 8;
		uint32_t sjw                     : 5;
#else
		uint32_t sjw                     : 5;
		uint32_t brp                     : 8;
		uint32_t ph2                     : 6;
		uint32_t ph1                     : 6;
		uint32_t prop                    : 7;
#endif
	} s;
};

union ctu_can_fd_btr_fd {
	uint32_t u32;
	struct ctu_can_fd_btr_fd_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* BTR_FD */
		uint32_t prop_fd                 : 6;
		uint32_t reserved_6              : 1;
		uint32_t ph1_fd                  : 5;
		uint32_t reserved_12             : 1;
		uint32_t ph2_fd                  : 5;
		uint32_t reserved_18             : 1;
		uint32_t brp_fd                  : 8;
		uint32_t sjw_fd                  : 5;
#else
		uint32_t sjw_fd                  : 5;
		uint32_t brp_fd                  : 8;
		uint32_t reserved_18             : 1;
		uint32_t ph2_fd                  : 5;
		uint32_t reserved_12             : 1;
		uint32_t ph1_fd                  : 5;
		uint32_t reserved_6              : 1;
		uint32_t prop_fd                 : 6;
#endif
	} s;
};

union ctu_can_fd_ewl_erp_fault_state {
	uint32_t u32;
	struct ctu_can_fd_ewl_erp_fault_state_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* EWL */
		uint32_t ew_limit                : 8;
  /* ERP */
		uint32_t erp_limit               : 8;
  /* FAULT_STATE */
		uint32_t era                     : 1;
		uint32_t erp                     : 1;
		uint32_t bof                     : 1;
		uint32_t reserved_31_19         : 13;
#else
		uint32_t reserved_31_19         : 13;
		uint32_t bof                     : 1;
		uint32_t erp                     : 1;
		uint32_t era                     : 1;
		uint32_t erp_limit               : 8;
		uint32_t ew_limit                : 8;
#endif
	} s;
};

union ctu_can_fd_rxc_txc {
	uint32_t u32;
	struct ctu_can_fd_rxc_txc_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* RXC */
		uint32_t rxc_val                : 16;
  /* TXC */
		uint32_t txc_val                : 16;
#else
		uint32_t txc_val                : 16;
		uint32_t rxc_val                : 16;
#endif
	} s;
};

union ctu_can_fd_err_norm_err_fd {
	uint32_t u32;
	struct ctu_can_fd_err_norm_err_fd_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* ERR_NORM */
		uint32_t err_norm_val           : 16;
  /* ERR_FD */
		uint32_t err_fd_val             : 16;
#else
		uint32_t err_fd_val             : 16;
		uint32_t err_norm_val           : 16;
#endif
	} s;
};

union ctu_can_fd_ctr_pres {
	uint32_t u32;
	struct ctu_can_fd_ctr_pres_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* CTR_PRES */
		uint32_t ctpv                    : 9;
		uint32_t ptx                     : 1;
		uint32_t prx                     : 1;
		uint32_t enorm                   : 1;
		uint32_t efd                     : 1;
		uint32_t reserved_31_13         : 19;
#else
		uint32_t reserved_31_13         : 19;
		uint32_t efd                     : 1;
		uint32_t enorm                   : 1;
		uint32_t prx                     : 1;
		uint32_t ptx                     : 1;
		uint32_t ctpv                    : 9;
#endif
	} s;
};

union ctu_can_fd_filter_a_mask {
	uint32_t u32;
	struct ctu_can_fd_filter_a_mask_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_A_MASK */
		uint32_t bit_mask_a_val         : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_mask_a_val         : 29;
#endif
	} s;
};

union ctu_can_fd_filter_a_val {
	uint32_t u32;
	struct ctu_can_fd_filter_a_val_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_A_VAL */
		uint32_t bit_val_a_val          : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_val_a_val          : 29;
#endif
	} s;
};

union ctu_can_fd_filter_b_mask {
	uint32_t u32;
	struct ctu_can_fd_filter_b_mask_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_B_MASK */
		uint32_t bit_mask_b_val         : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_mask_b_val         : 29;
#endif
	} s;
};

union ctu_can_fd_filter_b_val {
	uint32_t u32;
	struct ctu_can_fd_filter_b_val_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_B_VAL */
		uint32_t bit_val_b_val          : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_val_b_val          : 29;
#endif
	} s;
};

union ctu_can_fd_filter_c_mask {
	uint32_t u32;
	struct ctu_can_fd_filter_c_mask_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_C_MASK */
		uint32_t bit_mask_c_val         : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_mask_c_val         : 29;
#endif
	} s;
};

union ctu_can_fd_filter_c_val {
	uint32_t u32;
	struct ctu_can_fd_filter_c_val_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_C_VAL */
		uint32_t bit_val_c_val          : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_val_c_val          : 29;
#endif
	} s;
};

union ctu_can_fd_filter_ran_low {
	uint32_t u32;
	struct ctu_can_fd_filter_ran_low_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_RAN_LOW */
		uint32_t bit_ran_low_val        : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_ran_low_val        : 29;
#endif
	} s;
};

union ctu_can_fd_filter_ran_high {
	uint32_t u32;
	struct ctu_can_fd_filter_ran_high_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_RAN_HIGH */
		uint32_t bit_ran_high_val       : 29;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t bit_ran_high_val       : 29;
#endif
	} s;
};

union ctu_can_fd_filter_control_filter_status {
	uint32_t u32;
	struct ctu_can_fd_filter_control_filter_status_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* FILTER_CONTROL */
		uint32_t fanb                    : 1;
		uint32_t fane                    : 1;
		uint32_t fafb                    : 1;
		uint32_t fafe                    : 1;
		uint32_t fbnb                    : 1;
		uint32_t fbne                    : 1;
		uint32_t fbfb                    : 1;
		uint32_t fbfe                    : 1;
		uint32_t fcnb                    : 1;
		uint32_t fcne                    : 1;
		uint32_t fcfb                    : 1;
		uint32_t fcfe                    : 1;
		uint32_t frnb                    : 1;
		uint32_t frne                    : 1;
		uint32_t frfb                    : 1;
		uint32_t frfe                    : 1;
  /* FILTER_STATUS */
		uint32_t sfa                     : 1;
		uint32_t sfb                     : 1;
		uint32_t sfc                     : 1;
		uint32_t sfr                     : 1;
		uint32_t reserved_31_20         : 12;
#else
		uint32_t reserved_31_20         : 12;
		uint32_t sfr                     : 1;
		uint32_t sfc                     : 1;
		uint32_t sfb                     : 1;
		uint32_t sfa                     : 1;
		uint32_t frfe                    : 1;
		uint32_t frfb                    : 1;
		uint32_t frne                    : 1;
		uint32_t frnb                    : 1;
		uint32_t fcfe                    : 1;
		uint32_t fcfb                    : 1;
		uint32_t fcne                    : 1;
		uint32_t fcnb                    : 1;
		uint32_t fbfe                    : 1;
		uint32_t fbfb                    : 1;
		uint32_t fbne                    : 1;
		uint32_t fbnb                    : 1;
		uint32_t fafe                    : 1;
		uint32_t fafb                    : 1;
		uint32_t fane                    : 1;
		uint32_t fanb                    : 1;
#endif
	} s;
};

union ctu_can_fd_rx_mem_info {
	uint32_t u32;
	struct ctu_can_fd_rx_mem_info_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* RX_MEM_INFO */
		uint32_t rx_buff_size           : 13;
		uint32_t reserved_15_13          : 3;
		uint32_t rx_mem_free            : 13;
		uint32_t reserved_31_29          : 3;
#else
		uint32_t reserved_31_29          : 3;
		uint32_t rx_mem_free            : 13;
		uint32_t reserved_15_13          : 3;
		uint32_t rx_buff_size           : 13;
#endif
	} s;
};

union ctu_can_fd_rx_pointers {
	uint32_t u32;
	struct ctu_can_fd_rx_pointers_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* RX_POINTERS */
		uint32_t rx_wpp                 : 12;
		uint32_t reserved_15_12          : 4;
		uint32_t rx_rpp                 : 12;
		uint32_t reserved_31_28          : 4;
#else
		uint32_t reserved_31_28          : 4;
		uint32_t rx_rpp                 : 12;
		uint32_t reserved_15_12          : 4;
		uint32_t rx_wpp                 : 12;
#endif
	} s;
};

union ctu_can_fd_rx_status_rx_settings {
	uint32_t u32;
	struct ctu_can_fd_rx_status_rx_settings_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* RX_STATUS */
		uint32_t rxe                     : 1;
		uint32_t rxf                     : 1;
		uint32_t reserved_3_2            : 2;
		uint32_t rxfrc                  : 11;
		uint32_t reserved_15             : 1;
  /* RX_SETTINGS */
		uint32_t rtsop                   : 1;
		uint32_t reserved_31_17         : 15;
#else
		uint32_t reserved_31_17         : 15;
		uint32_t rtsop                   : 1;
		uint32_t reserved_15             : 1;
		uint32_t rxfrc                  : 11;
		uint32_t reserved_3_2            : 2;
		uint32_t rxf                     : 1;
		uint32_t rxe                     : 1;
#endif
	} s;
};

enum ctu_can_fd_rx_settings_rtsop {
	RTS_END       = 0x0,
	RTS_BEG       = 0x1,
};

union ctu_can_fd_rx_data {
	uint32_t u32;
	struct ctu_can_fd_rx_data_s {
  /* RX_DATA */
		uint32_t rx_data                : 32;
	} s;
};

union ctu_can_fd_tx_status {
	uint32_t u32;
	struct ctu_can_fd_tx_status_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* TX_STATUS */
		uint32_t tx1s                    : 4;
		uint32_t tx2s                    : 4;
		uint32_t tx3s                    : 4;
		uint32_t tx4s                    : 4;
		uint32_t reserved_31_16         : 16;
#else
		uint32_t reserved_31_16         : 16;
		uint32_t tx4s                    : 4;
		uint32_t tx3s                    : 4;
		uint32_t tx2s                    : 4;
		uint32_t tx1s                    : 4;
#endif
	} s;
};

enum ctu_can_fd_tx_status_tx1s {
	TXT_RDY        = 0x1,
	TXT_TRAN       = 0x2,
	TXT_ABTP       = 0x3,
	TXT_TOK        = 0x4,
	TXT_ERR        = 0x6,
	TXT_ABT        = 0x7,
	TXT_ETY        = 0x8,
};

union ctu_can_fd_tx_command {
	uint32_t u32;
	struct ctu_can_fd_tx_command_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* TX_COMMAND */
		uint32_t txce                    : 1;
		uint32_t txcr                    : 1;
		uint32_t txca                    : 1;
		uint32_t reserved_7_3            : 5;
		uint32_t txb1                    : 1;
		uint32_t txb2                    : 1;
		uint32_t txb3                    : 1;
		uint32_t txb4                    : 1;
		uint32_t reserved_31_12         : 20;
#else
		uint32_t reserved_31_12         : 20;
		uint32_t txb4                    : 1;
		uint32_t txb3                    : 1;
		uint32_t txb2                    : 1;
		uint32_t txb1                    : 1;
		uint32_t reserved_7_3            : 5;
		uint32_t txca                    : 1;
		uint32_t txcr                    : 1;
		uint32_t txce                    : 1;
#endif
	} s;
};

union ctu_can_fd_tx_priority {
	uint32_t u32;
	struct ctu_can_fd_tx_priority_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* TX_PRIORITY */
		uint32_t txt1p                   : 3;
		uint32_t reserved_3              : 1;
		uint32_t txt2p                   : 3;
		uint32_t reserved_7              : 1;
		uint32_t txt3p                   : 3;
		uint32_t reserved_11             : 1;
		uint32_t txt4p                   : 3;
		uint32_t reserved_31_15         : 17;
#else
		uint32_t reserved_31_15         : 17;
		uint32_t txt4p                   : 3;
		uint32_t reserved_11             : 1;
		uint32_t txt3p                   : 3;
		uint32_t reserved_7              : 1;
		uint32_t txt2p                   : 3;
		uint32_t reserved_3              : 1;
		uint32_t txt1p                   : 3;
#endif
	} s;
};

union ctu_can_fd_err_capt_alc {
	uint32_t u32;
	struct ctu_can_fd_err_capt_alc_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* ERR_CAPT */
		uint32_t err_pos                 : 5;
		uint32_t err_type                : 3;
  /* ALC */
		uint32_t alc_bit                 : 5;
		uint32_t alc_id_field            : 3;
		uint32_t reserved_31_16         : 16;
#else
		uint32_t reserved_31_16         : 16;
		uint32_t alc_id_field            : 3;
		uint32_t alc_bit                 : 5;
		uint32_t err_type                : 3;
		uint32_t err_pos                 : 5;
#endif
	} s;
};

enum ctu_can_fd_err_capt_err_pos {
	ERC_POS_SOF         = 0x0,
	ERC_POS_ARB         = 0x1,
	ERC_POS_CTRL        = 0x2,
	ERC_POS_DATA        = 0x3,
	ERC_POS_CRC         = 0x4,
	ERC_POS_ACK         = 0x5,
	ERC_POS_INTF        = 0x6,
	ERC_POS_ERR         = 0x7,
	ERC_POS_OVRL        = 0x8,
	ERC_POS_OTHER      = 0x1f,
};

enum ctu_can_fd_err_capt_err_type {
	ERC_BIT_ERR        = 0x0,
	ERC_CRC_ERR        = 0x1,
	ERC_FRM_ERR        = 0x2,
	ERC_ACK_ERR        = 0x3,
	ERC_STUF_ERR       = 0x4,
};

enum ctu_can_fd_alc_alc_id_field {
	ALC_BASE_ID         = 0x0,
	ALC_SRR_RTR         = 0x1,
	ALC_IDE             = 0x2,
	ALC_EXTENSION       = 0x3,
	ALC_RTR             = 0x4,
};

union ctu_can_fd_trv_delay_ssp_cfg {
	uint32_t u32;
	struct ctu_can_fd_trv_delay_ssp_cfg_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* TRV_DELAY */
		uint32_t trv_delay_value        : 16;
  /* SSP_CFG */
		uint32_t ssp_offset              : 7;
		uint32_t reserved_23             : 1;
		uint32_t ssp_src                 : 2;
		uint32_t reserved_31_26          : 6;
#else
		uint32_t reserved_31_26          : 6;
		uint32_t ssp_src                 : 2;
		uint32_t reserved_23             : 1;
		uint32_t ssp_offset              : 7;
		uint32_t trv_delay_value        : 16;
#endif
	} s;
};

enum ctu_can_fd_ssp_cfg_ssp_src {
	SSP_SRC_MEASURED            = 0x0,
	SSP_SRC_MEAS_N_OFFSET       = 0x1,
	SSP_SRC_OFFSET              = 0x2,
};

union ctu_can_fd_rx_counter {
	uint32_t u32;
	struct ctu_can_fd_rx_counter_s {
  /* RX_COUNTER */
		uint32_t rx_counter_val         : 32;
	} s;
};

union ctu_can_fd_tx_counter {
	uint32_t u32;
	struct ctu_can_fd_tx_counter_s {
  /* TX_COUNTER */
		uint32_t tx_counter_val         : 32;
	} s;
};

union ctu_can_fd_debug_register {
	uint32_t u32;
	struct ctu_can_fd_debug_register_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* DEBUG_REGISTER */
		uint32_t stuff_count             : 3;
		uint32_t destuff_count           : 3;
		uint32_t pc_arb                  : 1;
		uint32_t pc_con                  : 1;
		uint32_t pc_dat                  : 1;
		uint32_t pc_crc                  : 1;
		uint32_t pc_eof                  : 1;
		uint32_t pc_ovr                  : 1;
		uint32_t pc_int                  : 1;
		uint32_t reserved_31_13         : 19;
#else
		uint32_t reserved_31_13         : 19;
		uint32_t pc_int                  : 1;
		uint32_t pc_ovr                  : 1;
		uint32_t pc_eof                  : 1;
		uint32_t pc_crc                  : 1;
		uint32_t pc_dat                  : 1;
		uint32_t pc_con                  : 1;
		uint32_t pc_arb                  : 1;
		uint32_t destuff_count           : 3;
		uint32_t stuff_count             : 3;
#endif
	} s;
};

union ctu_can_fd_yolo_reg {
	uint32_t u32;
	struct ctu_can_fd_yolo_reg_s {
  /* YOLO_REG */
		uint32_t yolo_val               : 32;
	} s;
};

union ctu_can_fd_timestamp_low {
	uint32_t u32;
	struct ctu_can_fd_timestamp_low_s {
  /* TIMESTAMP_LOW */
		uint32_t timestamp_low          : 32;
	} s;
};

union ctu_can_fd_timestamp_high {
	uint32_t u32;
	struct ctu_can_fd_timestamp_high_s {
  /* TIMESTAMP_HIGH */
		uint32_t timestamp_high         : 32;
	} s;
};

union ctu_can_fd_log_trig_config {
	uint32_t u32;
	struct ctu_can_fd_log_trig_config_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* LOG_TRIG_CONFIG */
		uint32_t t_sof                   : 1;
		uint32_t t_arbl                  : 1;
		uint32_t t_rev                   : 1;
		uint32_t t_trv                   : 1;
		uint32_t t_ovl                   : 1;
		uint32_t t_err                   : 1;
		uint32_t t_brs                   : 1;
		uint32_t t_usrw                  : 1;
		uint32_t t_arbs                  : 1;
		uint32_t t_ctrs                  : 1;
		uint32_t t_dats                  : 1;
		uint32_t t_crcs                  : 1;
		uint32_t t_ackr                  : 1;
		uint32_t t_acknr                 : 1;
		uint32_t t_ewlr                  : 1;
		uint32_t t_erpc                  : 1;
		uint32_t t_trs                   : 1;
		uint32_t t_res                   : 1;
		uint32_t reserved_31_18         : 14;
#else
		uint32_t reserved_31_18         : 14;
		uint32_t t_res                   : 1;
		uint32_t t_trs                   : 1;
		uint32_t t_erpc                  : 1;
		uint32_t t_ewlr                  : 1;
		uint32_t t_acknr                 : 1;
		uint32_t t_ackr                  : 1;
		uint32_t t_crcs                  : 1;
		uint32_t t_dats                  : 1;
		uint32_t t_ctrs                  : 1;
		uint32_t t_arbs                  : 1;
		uint32_t t_usrw                  : 1;
		uint32_t t_brs                   : 1;
		uint32_t t_err                   : 1;
		uint32_t t_ovl                   : 1;
		uint32_t t_trv                   : 1;
		uint32_t t_rev                   : 1;
		uint32_t t_arbl                  : 1;
		uint32_t t_sof                   : 1;
#endif
	} s;
};

union ctu_can_fd_log_capt_config {
	uint32_t u32;
	struct ctu_can_fd_log_capt_config_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* LOG_CAPT_CONFIG */
		uint32_t c_sof                   : 1;
		uint32_t c_arbl                  : 1;
		uint32_t c_rev                   : 1;
		uint32_t c_trv                   : 1;
		uint32_t c_ovl                   : 1;
		uint32_t c_err                   : 1;
		uint32_t c_brs                   : 1;
		uint32_t c_arbs                  : 1;
		uint32_t c_ctrs                  : 1;
		uint32_t c_dats                  : 1;
		uint32_t c_crcs                  : 1;
		uint32_t c_ackr                  : 1;
		uint32_t c_acknr                 : 1;
		uint32_t c_ewlr                  : 1;
		uint32_t c_erc                   : 1;
		uint32_t c_trs                   : 1;
		uint32_t c_res                   : 1;
		uint32_t c_syne                  : 1;
		uint32_t c_stuff                 : 1;
		uint32_t c_destuff               : 1;
		uint32_t c_ovr                   : 1;
		uint32_t reserved_31_21         : 11;
#else
		uint32_t reserved_31_21         : 11;
		uint32_t c_ovr                   : 1;
		uint32_t c_destuff               : 1;
		uint32_t c_stuff                 : 1;
		uint32_t c_syne                  : 1;
		uint32_t c_res                   : 1;
		uint32_t c_trs                   : 1;
		uint32_t c_erc                   : 1;
		uint32_t c_ewlr                  : 1;
		uint32_t c_acknr                 : 1;
		uint32_t c_ackr                  : 1;
		uint32_t c_crcs                  : 1;
		uint32_t c_dats                  : 1;
		uint32_t c_ctrs                  : 1;
		uint32_t c_arbs                  : 1;
		uint32_t c_brs                   : 1;
		uint32_t c_err                   : 1;
		uint32_t c_ovl                   : 1;
		uint32_t c_trv                   : 1;
		uint32_t c_rev                   : 1;
		uint32_t c_arbl                  : 1;
		uint32_t c_sof                   : 1;
#endif
	} s;
};

union ctu_can_fd_log_status_log_pointers {
	uint32_t u32;
	struct ctu_can_fd_log_status_log_pointers_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* LOG_STATUS */
		uint32_t log_cfg                 : 1;
		uint32_t log_rdy                 : 1;
		uint32_t log_run                 : 1;
		uint32_t reserved_6_3            : 4;
		uint32_t log_exist               : 1;
		uint32_t log_size                : 8;
  /* LOG_POINTERS */
		uint32_t log_wpp                 : 8;
		uint32_t log_rpp                 : 8;
#else
		uint32_t log_rpp                 : 8;
		uint32_t log_wpp                 : 8;
		uint32_t log_size                : 8;
		uint32_t log_exist               : 1;
		uint32_t reserved_6_3            : 4;
		uint32_t log_run                 : 1;
		uint32_t log_rdy                 : 1;
		uint32_t log_cfg                 : 1;
#endif
	} s;
};

union ctu_can_fd_log_command {
	uint32_t u32;
	struct ctu_can_fd_log_command_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* LOG_COMMAND */
		uint32_t log_str                 : 1;
		uint32_t log_abt                 : 1;
		uint32_t log_up                  : 1;
		uint32_t log_down                : 1;
		uint32_t reserved_31_4          : 28;
#else
		uint32_t reserved_31_4          : 28;
		uint32_t log_down                : 1;
		uint32_t log_up                  : 1;
		uint32_t log_abt                 : 1;
		uint32_t log_str                 : 1;
#endif
	} s;
};

union ctu_can_fd_log_capt_event_1 {
	uint32_t u32;
	struct ctu_can_fd_log_capt_event_1_s {
  /* LOG_CAPT_EVENT_1 */
		uint32_t event_ts_48_16         : 32;
	} s;
};

union ctu_can_fd_log_capt_event_2 {
	uint32_t u32;
	struct ctu_can_fd_log_capt_event_2_s {
#ifdef __LITTLE_ENDIAN_BITFIELD
  /* LOG_CAPT_EVENT_2 */
		uint32_t evnt_type               : 5;
		uint32_t evnt_den                : 3;
		uint32_t evnt_det                : 5;
		uint32_t evnt_dea                : 3;
		uint32_t event_ts_15_0          : 16;
#else
		uint32_t event_ts_15_0          : 16;
		uint32_t evnt_dea                : 3;
		uint32_t evnt_det                : 5;
		uint32_t evnt_den                : 3;
		uint32_t evnt_type               : 5;
#endif
	} s;
};

enum ctu_can_fd_log_capt_event_2_evnt_type {
	SOF_EVNT         = 0x1,
	ARBL_EVNT        = 0x2,
	FREC_EVNT        = 0x3,
	TRANV_EVNT       = 0x4,
	OVRL_EVNT        = 0x5,
	ERR_EVNT         = 0x6,
	BRS_EVNT         = 0x7,
	ARBS_EVNT        = 0x8,
	CONS_EVNT        = 0x9,
	DATS_EVNT        = 0xa,
	CRCS_EVNT        = 0xb,
	ACKR_EVNT        = 0xc,
	ACKN_EVNT        = 0xd,
	EWLR_EVNT        = 0xe,
	FCSC_EVNT        = 0xf,
	TS_EVNT         = 0x10,
	RS_EVNT         = 0x11,
	SE_EVNT         = 0x12,
	STF_EVNT        = 0x13,
	DSTF_EVNT       = 0x14,
	DOR_EVNT        = 0x15,
};

enum ctu_can_fd_log_capt_event_2_evnt_det {
	ISN_FDSTF       = 0x0,
	ISN_FSTF        = 0x0,
	BIT_ERR         = 0x1,
	S_UP            = 0x1,
	IS_SYNC         = 0x1,
	IS_FDSTF        = 0x1,
	IS_FSTF         = 0x1,
	ST_ERR          = 0x2,
	S_DOWN          = 0x2,
	IS_PROP         = 0x2,
	CRC_ERR         = 0x4,
	IS_PH1          = 0x4,
	ACK_ERR         = 0x8,
	IS_PH2          = 0x8,
	FRM_ERR        = 0x10,
};

enum ctu_can_fd_log_capt_event_2_evnt_dea {
	NO_SNC       = 0x0,
	HA_SNC       = 0x1,
	RE_SNC       = 0x2,
};

#endif
