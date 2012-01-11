/* linux/arch/arm/mach-msm/board-shooteru.h
 *
 * Copyright (C) 2010-2011 HTC Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_SHOOTERU_H
#define __ARCH_ARM_MACH_MSM_BOARD_SHOOTERU_H

#include <mach/board.h>

#define SHOOTERU_PROJECT_NAME	"shooteru"


/* Macros assume PMIC GPIOs start at 0 */
#define PM8058_GPIO_BASE			NR_MSM_GPIOS
#define PM8058_GPIO_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8058_GPIO_BASE)
#define PM8058_GPIO_SYS_TO_PM(sys_gpio)		(sys_gpio - PM8058_GPIO_BASE)
#define PM8058_IRQ_BASE				(NR_MSM_IRQS + NR_GPIO_IRQS)

#define PM8901_GPIO_BASE			(PM8058_GPIO_BASE + \
						PM8058_GPIOS + PM8058_MPPS)
#define PM8901_GPIO_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8901_GPIO_BASE)
#define PM8901_GPIO_SYS_TO_PM(sys_gpio)		(sys_gpio - PM901_GPIO_BASE)
#define PM8901_IRQ_BASE				(PM8058_IRQ_BASE + \
						NR_PMIC8058_IRQS)

#define GPIO_EXPANDER_GPIO_BASE \
	(PM8901_GPIO_BASE + PM8901_MPPS)
#define GPIO_EXPANDER_IRQ_BASE (PM8901_IRQ_BASE + NR_PMIC8901_IRQS)

#if 0
#define MSM_LINUX_BASE1		0x04000000
#define MSM_LINUX_SIZE1		0x0C000000
#define MSM_LINUX_BASE2		0x20000000
#define MSM_LINUX_SIZE2		0x0BB00000
#define MSM_MEM_256MB_OFFSET	0x10000000

#define MSM_GPU_MEM_BASE	0x00100000
#define MSM_GPU_MEM_SIZE	0x003F0000

#define MSM_RAM_CONSOLE_BASE	0x00500000
#define MSM_RAM_CONSOLE_SIZE	0x00100000

#define MSM_PMEM_ADSP_BASE  	0x2BB00000
#define MSM_PMEM_ADSP_SIZE	0x01C00000 /* for 8M(4:3) + gpu effect */
#define PMEM_KERNEL_EBI1_BASE   0x2D700000
#define PMEM_KERNEL_EBI1_SIZE   0x00600000

#define MSM_PMEM_CAMERA_BASE	0x2DD00000
#define MSM_PMEM_CAMERA_SIZE	0x00000000

#define MSM_PMEM_MDP_BASE	0x2DD00000
#define MSM_PMEM_MDP_SIZE	0x02000000

#define MSM_FB_BASE		0x2FD00000
#define MSM_FB_SIZE		0x00300000
#endif

#define MSM_RAM_CONSOLE_BASE	MSM_HTC_RAM_CONSOLE_PHYS
#define MSM_RAM_CONSOLE_SIZE	MSM_HTC_RAM_CONSOLE_SIZE

#ifdef CONFIG_BUILD_CIQ
#define MSM_PMEM_CIQ_BASE	MSM_RAM_CONSOLE_BASE + MSM_RAM_CONSOLE_SIZE
#define MSM_PMEM_CIQ_SIZE	SZ_64K
#define MSM_PMEM_CIQ1_BASE	MSM_PMEM_CIQ_BASE
#define MSM_PMEM_CIQ1_SIZE	MSM_PMEM_CIQ_SIZE
#define MSM_PMEM_CIQ2_BASE	MSM_PMEM_CIQ_BASE
#define MSM_PMEM_CIQ2_SIZE	MSM_PMEM_CIQ_SIZE
#define MSM_PMEM_CIQ3_BASE	MSM_PMEM_CIQ_BASE
#define MSM_PMEM_CIQ3_SIZE	MSM_PMEM_CIQ_SIZE
#endif

/* GPIO definition */


/* Direct Keys */
#define SHOOTERU_GPIO_KEY_CAM_STEP1   (123)
#define SHOOTERU_GPIO_SW_LCM_3D       (64)
#define SHOOTERU_GPIO_SW_LCM_2D       (68)
#define SHOOTERU_GPIO_KEY_VOL_DOWN    (103)
#define SHOOTERU_GPIO_KEY_VOL_UP      (104)
#define SHOOTERU_GPIO_KEY_CAM_STEP2   (115)
#define SHOOTERU_GPIO_KEY_POWER       (125)

/* Battery */
#define SHOOTERU_GPIO_MBAT_IN		   (61)
#define SHOOTERU_GPIO_CHG_INT		   (126)

/* Wifi */
#define SHOOTERU_GPIO_WIFI_IRQ              (46)
#define SHOOTERU_GPIO_WIFI_SHUTDOWN_N       (96)

/* Sensors */
#define SHOOTERU_SENSOR_I2C_SDA		(72)
#define SHOOTERU_SENSOR_I2C_SCL		(73)
#define SHOOTERU_GYRO_INT            (127)

/* General */
#define SHOOTERU_GENERAL_I2C_SDA		(59)
#define SHOOTERU_GENERAL_I2C_SCL		(60)

/* Microp */

/* TP */
#define SHOOTERU_TP_I2C_SDA           (51)
#define SHOOTERU_TP_I2C_SCL           (52)
#define SHOOTERU_TP_ATT_N          (57)

/* LCD */

/* Audio */
#define SHOOTERU_AUD_CODEC_RST        (67)
#define SHOOTERU_AUD_CDC_LDO_SEL      (116)
/* BT */
#define SHOOTERU_GPIO_BT_HOST_WAKE      (45)
#define SHOOTERU_GPIO_BT_UART1_TX       (53)
#define SHOOTERU_GPIO_BT_UART1_RX       (54)
#define SHOOTERU_GPIO_BT_UART1_CTS      (55)
#define SHOOTERU_GPIO_BT_UART1_RTS      (56)
#define SHOOTERU_GPIO_BT_SHUTDOWN_N     (100)
#define SHOOTERU_GPIO_BT_CHIP_WAKE      (130)
#define SHOOTERU_GPIO_BT_RESET_N        (142)

/* USB */
#define SHOOTERU_GPIO_USB_ID        (63)
#define SHOOTERU_GPIO_MHL_RESET        (70)
#define SHOOTERU_GPIO_MHL_USB_EN         (139)
#define SHOOTERU_GPIO_MHL_USB_SW        (99)

/* Camera */

/* Flashlight */
#define SHOOTERU_FLASH_EN             (29)
#define SHOOTERU_TORCH_EN             (30)

/* Accessory */
#define SHOOTERU_GPIO_AUD_HP_DET        (31)

/* SPI */
#define SHOOTERU_SPI_DO                 (33)
#define SHOOTERU_SPI_DI                 (34)
#define SHOOTERU_SPI_CS                 (35)
#define SHOOTERU_SPI_CLK                (36)

/* LCM */
#define SHOOTERU_CTL_3D_1		(131)
#define SHOOTERU_CTL_3D_2		(132)
#define SHOOTERU_CTL_3D_3		(133)
#define SHOOTERU_CTL_3D_4		(134)
//#define SHOOTERU_LCM_3D_PDz		(135)

/* CAMERA SPI */
#define SHOOTERU_SP3D_SPI_DO                 (41)
#define SHOOTERU_SP3D_SPI_DI                 (42)
#define SHOOTERU_SP3D_SPI_CS                 (43)
#define SHOOTERU_SP3D_SPI_CLK                (44)


/* CAMERA GPIO */
#define SHOOTERU_CAM_I2C_SDA           (47)
#define SHOOTERU_CAM_I2C_SCL           (48)
#define SHOOTERU_SP3D_GATE              (107)
#define SHOOTERU_SP3D_CORE_GATE         (58)
#define SHOOTERU_SP3D_SYS_RST           (102)
#define SHOOTERU_SP3D_PDX               (137)
#define SHOOTERU_S5K4E1_PD				(137)
#define SHOOTERU_S5K4E1_INTB				(102)
#define SHOOTERU_S5K4E1_VCM_PD			(58)
#define SHOOTERU_SP3D_MCLK           (32)
#define SHOOTERU_WEBCAM_STB          (140)
#define SHOOTERU_WEBCAM_RST           (138)
#define SHOOTERU_CAM_SEL           (141)
#define SHOOTERU_SP3D_INT	(106)

/* LCM */
#define SHOOTERU_CTL_3D_1		(131)
#define SHOOTERU_CTL_3D_2		(132)
#define SHOOTERU_CTL_3D_3		(133)
#define SHOOTERU_CTL_3D_4		(134)
//#define SHOOTERU_LCM_3D_PDz		(135)
#define GPIO_LCM_ID	50
#define GPIO_LCM_RST_N	66

/* PMIC */

/* PMIC GPIO definition */
#define PMGPIO(x) (x-1)
#define SHOOTERU_VOL_UP             (104)
#define SHOOTERU_VOL_DN             (103)
#define SHOOTERU_AUD_HANDSET_ENO    PMGPIO(18)
#define SHOOTERU_AUD_SPK_ENO        PMGPIO(19)
#define SHOOTERU_3DLCM_PD           PMGPIO(20)
#define SHOOTERU_PS_VOUT            PMGPIO(22)
#define SHOOTERU_GREEN_LED          PMGPIO(24)
#define SHOOTERU_AMBER_LED          PMGPIO(25)
#define SHOOTERU_3DCLK              PMGPIO(26)
#define SHOOTERU_AUD_MIC_SEL        PMGPIO(14)
#define SHOOTERU_CHG_STAT	     PMGPIO(33)
//#define SHOOTERU_PLS_INT            PMGPIO(35)
#define SHOOTERU_WIFI_BT_SLEEP_CLK  PMGPIO(38)
#define SHOOTERU_TP_RST             PMGPIO(23)
#define SHOOTERU_TORCH_SET1         PMGPIO(40)
#define SHOOTERU_TORCH_SET2         PMGPIO(31)
#define SHOOTERU_AUD_REMO_EN        PMGPIO(15)
#define SHOOTERU_AUD_REMO_PRES      PMGPIO(37)

int __init shooteru_init_mmc(void);
void __init shooteru_audio_init(void);
int __init shooteru_init_keypad(void);
int __init shooteru_wifi_init(void);
int __init shooteru_init_panel(struct resource *res, size_t size);

#endif /* __ARCH_ARM_MACH_MSM_BOARD_SHOOTERU_H */
