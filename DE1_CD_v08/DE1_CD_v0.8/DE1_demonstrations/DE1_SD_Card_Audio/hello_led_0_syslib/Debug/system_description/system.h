/* system.h
 *
 * Machine generated for a CPU named "cpu_0" as defined in:
 * D:\keith_temp\quartusII\DE1_QIIv71\DE1_demonstrations\DE1_SD_Card_Audio\system_0.ptf
 *
 * Generated: 2007-06-27 18:58:29.203
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "system_0"
#define ALT_CPU_NAME "cpu_0"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "CYCLONE"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x004810D0
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x004810D0
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x004810D0
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 100000000
#define ALT_IRQ_BASE NULL

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_BIG_ENDIAN 0

#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_LINE_SIZE 4
#define NIOS2_DCACHE_LINE_SIZE_LOG2 2
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x00800020
#define NIOS2_RESET_ADDR 0x00000000
#define NIOS2_BREAK_ADDR 0x00480020

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_AVALON_TRI_STATE_BRIDGE
#define __ALTERA_AVALON_CFI_FLASH
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_EPCS_FLASH_CONTROLLER
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_UART
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_PIO
#define __SEG7_LUT_8
#define __SRAM_16BIT_512K
#define __AUDIO_DAC_FIFO

/*
 * tri_state_bridge_0 configuration
 *
 */

#define TRI_STATE_BRIDGE_0_NAME "/dev/tri_state_bridge_0"
#define TRI_STATE_BRIDGE_0_TYPE "altera_avalon_tri_state_bridge"
#define ALT_MODULE_CLASS_tri_state_bridge_0 altera_avalon_tri_state_bridge

/*
 * cfi_flash_0 configuration
 *
 */

#define CFI_FLASH_0_NAME "/dev/cfi_flash_0"
#define CFI_FLASH_0_TYPE "altera_avalon_cfi_flash"
#define CFI_FLASH_0_BASE 0x00000000
#define CFI_FLASH_0_SPAN 4194304
#define CFI_FLASH_0_SETUP_VALUE 40
#define CFI_FLASH_0_WAIT_VALUE 160
#define CFI_FLASH_0_HOLD_VALUE 40
#define CFI_FLASH_0_TIMING_UNITS "ns"
#define CFI_FLASH_0_UNIT_MULTIPLIER 1
#define CFI_FLASH_0_SIZE 4194304
#define CFI_FLASH_0_CONTENTS_INFO "SIMDIR/cfi_flash_0.dat 1130817963"
#define ALT_MODULE_CLASS_cfi_flash_0 altera_avalon_cfi_flash

/*
 * sdram_0 configuration
 *
 */

#define SDRAM_0_NAME "/dev/sdram_0"
#define SDRAM_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_0_BASE 0x00800000
#define SDRAM_0_SPAN 8388608
#define SDRAM_0_REGISTER_DATA_IN 1
#define SDRAM_0_SIM_MODEL_BASE 1
#define SDRAM_0_SDRAM_DATA_WIDTH 16
#define SDRAM_0_SDRAM_ADDR_WIDTH 12
#define SDRAM_0_SDRAM_ROW_WIDTH 12
#define SDRAM_0_SDRAM_COL_WIDTH 8
#define SDRAM_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_0_SDRAM_NUM_BANKS 4
#define SDRAM_0_REFRESH_PERIOD 15.625
#define SDRAM_0_POWERUP_DELAY 100
#define SDRAM_0_CAS_LATENCY 3
#define SDRAM_0_T_RFC 70
#define SDRAM_0_T_RP 20
#define SDRAM_0_T_MRD 3
#define SDRAM_0_T_RCD 20
#define SDRAM_0_T_AC 5.5
#define SDRAM_0_T_WR 14
#define SDRAM_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_0_INIT_NOP_DELAY 0
#define SDRAM_0_SHARED_DATA 0
#define SDRAM_0_STARVATION_INDICATOR 0
#define SDRAM_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_0_IS_INITIALIZED 1
#define SDRAM_0_SDRAM_BANK_WIDTH 2
#define SDRAM_0_CONTENTS_INFO "SIMDIR/sdram_0.dat 1130817965"
#define ALT_MODULE_CLASS_sdram_0 altera_avalon_new_sdram_controller

/*
 * epcs_controller configuration
 *
 */

#define EPCS_CONTROLLER_NAME "/dev/epcs_controller"
#define EPCS_CONTROLLER_TYPE "altera_avalon_epcs_flash_controller"
#define EPCS_CONTROLLER_BASE 0x00480800
#define EPCS_CONTROLLER_SPAN 2048
#define EPCS_CONTROLLER_IRQ 0
#define EPCS_CONTROLLER_DATABITS 8
#define EPCS_CONTROLLER_TARGETCLOCK 20
#define EPCS_CONTROLLER_CLOCKUNITS "MHz"
#define EPCS_CONTROLLER_CLOCKMULT 1000000
#define EPCS_CONTROLLER_NUMSLAVES 1
#define EPCS_CONTROLLER_ISMASTER 1
#define EPCS_CONTROLLER_CLOCKPOLARITY 0
#define EPCS_CONTROLLER_CLOCKPHASE 0
#define EPCS_CONTROLLER_LSBFIRST 0
#define EPCS_CONTROLLER_EXTRADELAY 0
#define EPCS_CONTROLLER_TARGETSSDELAY 100
#define EPCS_CONTROLLER_DELAYUNITS "us"
#define EPCS_CONTROLLER_DELAYMULT "1e-006"
#define EPCS_CONTROLLER_PREFIX "epcs_"
#define EPCS_CONTROLLER_REGISTER_OFFSET 0x200
#define EPCS_CONTROLLER_CLOCKUNIT "kHz"
#define EPCS_CONTROLLER_CONTENTS_INFO "SIMDIR/epcs_controller_boot_rom.hex 1130817967 SIMDIR/epcs_controller_boot_rom.dat 1130817967"
#define EPCS_CONTROLLER_DELAYUNIT "us"
#define EPCS_CONTROLLER_USE_ASMI_ATOM 1
#define ALT_MODULE_CLASS_epcs_controller altera_avalon_epcs_flash_controller

/*
 * jtag_uart_0 configuration
 *
 */

#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_BASE 0x004810D0
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_IRQ 1
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_READ_CHAR_STREAM ""
#define JTAG_UART_0_SHOWASCII 1
#define JTAG_UART_0_READ_LE 0
#define JTAG_UART_0_WRITE_LE 0
#define JTAG_UART_0_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 0
#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart

/*
 * uart_0 configuration
 *
 */

#define UART_0_NAME "/dev/uart_0"
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_BASE 0x00481000
#define UART_0_SPAN 32
#define UART_0_IRQ 2
#define UART_0_BAUD 115200
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_PARITY 'N'
#define UART_0_STOP_BITS 1
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_FREQ 100000000
#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart

/*
 * timer_0 configuration
 *
 */

#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_TYPE "altera_avalon_timer"
#define TIMER_0_BASE 0x00481020
#define TIMER_0_SPAN 32
#define TIMER_0_IRQ 3
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_MULT 0.001
#define TIMER_0_FREQ 100000000
#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer

/*
 * timer_1 configuration
 *
 */

#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_TYPE "altera_avalon_timer"
#define TIMER_1_BASE 0x00481040
#define TIMER_1_SPAN 32
#define TIMER_1_IRQ 4
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "ms"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_MULT 0.001
#define TIMER_1_FREQ 100000000
#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer

/*
 * led_red configuration
 *
 */

#define LED_RED_NAME "/dev/led_red"
#define LED_RED_TYPE "altera_avalon_pio"
#define LED_RED_BASE 0x00481060
#define LED_RED_SPAN 16
#define LED_RED_DO_TEST_BENCH_WIRING 0
#define LED_RED_DRIVEN_SIM_VALUE 0x0000
#define LED_RED_HAS_TRI 0
#define LED_RED_HAS_OUT 1
#define LED_RED_HAS_IN 0
#define LED_RED_CAPTURE 0
#define LED_RED_EDGE_TYPE "NONE"
#define LED_RED_IRQ_TYPE "NONE"
#define LED_RED_DATA_WIDTH 10
#define LED_RED_FREQ 100000000
#define ALT_MODULE_CLASS_led_red altera_avalon_pio

/*
 * led_green configuration
 *
 */

#define LED_GREEN_NAME "/dev/led_green"
#define LED_GREEN_TYPE "altera_avalon_pio"
#define LED_GREEN_BASE 0x00481070
#define LED_GREEN_SPAN 16
#define LED_GREEN_DO_TEST_BENCH_WIRING 0
#define LED_GREEN_DRIVEN_SIM_VALUE 0x0000
#define LED_GREEN_HAS_TRI 0
#define LED_GREEN_HAS_OUT 1
#define LED_GREEN_HAS_IN 0
#define LED_GREEN_CAPTURE 0
#define LED_GREEN_EDGE_TYPE "NONE"
#define LED_GREEN_IRQ_TYPE "NONE"
#define LED_GREEN_DATA_WIDTH 8
#define LED_GREEN_FREQ 100000000
#define ALT_MODULE_CLASS_led_green altera_avalon_pio

/*
 * button_pio configuration
 *
 */

#define BUTTON_PIO_NAME "/dev/button_pio"
#define BUTTON_PIO_TYPE "altera_avalon_pio"
#define BUTTON_PIO_BASE 0x00481080
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_IRQ 5
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0x0000
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_EDGE_TYPE "FALLING"
#define BUTTON_PIO_IRQ_TYPE "EDGE"
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_FREQ 100000000
#define ALT_MODULE_CLASS_button_pio altera_avalon_pio

/*
 * switch_pio configuration
 *
 */

#define SWITCH_PIO_NAME "/dev/switch_pio"
#define SWITCH_PIO_TYPE "altera_avalon_pio"
#define SWITCH_PIO_BASE 0x00481090
#define SWITCH_PIO_SPAN 16
#define SWITCH_PIO_DO_TEST_BENCH_WIRING 0
#define SWITCH_PIO_DRIVEN_SIM_VALUE 0x0000
#define SWITCH_PIO_HAS_TRI 0
#define SWITCH_PIO_HAS_OUT 0
#define SWITCH_PIO_HAS_IN 1
#define SWITCH_PIO_CAPTURE 0
#define SWITCH_PIO_EDGE_TYPE "NONE"
#define SWITCH_PIO_IRQ_TYPE "NONE"
#define SWITCH_PIO_DATA_WIDTH 18
#define SWITCH_PIO_FREQ 100000000
#define ALT_MODULE_CLASS_switch_pio altera_avalon_pio

/*
 * SEG7_Display configuration
 *
 */

#define SEG7_DISPLAY_NAME "/dev/SEG7_Display"
#define SEG7_DISPLAY_TYPE "seg7_lut_8"
#define SEG7_DISPLAY_BASE 0x004810D8
#define SEG7_DISPLAY_SPAN 4
#define SEG7_DISPLAY_HDL_PARAMETERS ""
#define ALT_MODULE_CLASS_SEG7_Display seg7_lut_8

/*
 * sram_0 configuration
 *
 */

#define SRAM_0_NAME "/dev/sram_0"
#define SRAM_0_TYPE "sram_16bit_512k"
#define SRAM_0_BASE 0x00400000
#define SRAM_0_SPAN 524288
#define SRAM_0_HDL_PARAMETERS ""
#define ALT_MODULE_CLASS_sram_0 sram_16bit_512k

/*
 * Audio_0 configuration
 *
 */

#define AUDIO_0_NAME "/dev/Audio_0"
#define AUDIO_0_TYPE "audio_dac_fifo"
#define AUDIO_0_BASE 0x004810DC
#define AUDIO_0_SPAN 4
#define ALT_MODULE_CLASS_Audio_0 audio_dac_fifo

/*
 * SD_DAT configuration
 *
 */

#define SD_DAT_NAME "/dev/SD_DAT"
#define SD_DAT_TYPE "altera_avalon_pio"
#define SD_DAT_BASE 0x004810A0
#define SD_DAT_SPAN 16
#define SD_DAT_DO_TEST_BENCH_WIRING 0
#define SD_DAT_DRIVEN_SIM_VALUE 0x0000
#define SD_DAT_HAS_TRI 1
#define SD_DAT_HAS_OUT 0
#define SD_DAT_HAS_IN 0
#define SD_DAT_CAPTURE 0
#define SD_DAT_EDGE_TYPE "NONE"
#define SD_DAT_IRQ_TYPE "NONE"
#define SD_DAT_DATA_WIDTH 1
#define SD_DAT_FREQ 100000000
#define ALT_MODULE_CLASS_SD_DAT altera_avalon_pio

/*
 * SD_CMD configuration
 *
 */

#define SD_CMD_NAME "/dev/SD_CMD"
#define SD_CMD_TYPE "altera_avalon_pio"
#define SD_CMD_BASE 0x004810B0
#define SD_CMD_SPAN 16
#define SD_CMD_DO_TEST_BENCH_WIRING 0
#define SD_CMD_DRIVEN_SIM_VALUE 0x0000
#define SD_CMD_HAS_TRI 1
#define SD_CMD_HAS_OUT 0
#define SD_CMD_HAS_IN 0
#define SD_CMD_CAPTURE 0
#define SD_CMD_EDGE_TYPE "NONE"
#define SD_CMD_IRQ_TYPE "NONE"
#define SD_CMD_DATA_WIDTH 1
#define SD_CMD_FREQ 100000000
#define ALT_MODULE_CLASS_SD_CMD altera_avalon_pio

/*
 * SD_CLK configuration
 *
 */

#define SD_CLK_NAME "/dev/SD_CLK"
#define SD_CLK_TYPE "altera_avalon_pio"
#define SD_CLK_BASE 0x004810C0
#define SD_CLK_SPAN 16
#define SD_CLK_DO_TEST_BENCH_WIRING 0
#define SD_CLK_DRIVEN_SIM_VALUE 0x0000
#define SD_CLK_HAS_TRI 0
#define SD_CLK_HAS_OUT 1
#define SD_CLK_HAS_IN 0
#define SD_CLK_CAPTURE 0
#define SD_CLK_EDGE_TYPE "NONE"
#define SD_CLK_IRQ_TYPE "NONE"
#define SD_CLK_DATA_WIDTH 1
#define SD_CLK_FREQ 100000000
#define ALT_MODULE_CLASS_SD_CLK altera_avalon_pio

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       SRAM_0
#define ALT_RODATA_DEVICE     SRAM_0
#define ALT_RWDATA_DEVICE     SRAM_0
#define ALT_EXCEPTIONS_DEVICE SDRAM_0
#define ALT_RESET_DEVICE      CFI_FLASH_0


#endif /* __SYSTEM_H_ */
