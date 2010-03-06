/* linux/arch/arm/plat-s5pc1xx/include/mach/regs-gpio.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *      Ben Dooks <ben@simtec.co.uk>
 *      http://armlinux.simtec.co.uk/
 *
 * S5PC1XX - GPIO register definitions
 */

#ifndef __ASM_PLAT_S5PC1XX_REGS_GPIO_H
#define __ASM_PLAT_S5PC1XX_REGS_GPIO_H __FILE__

/* Base addresses for each of the banks */

#define S5PC1XX_GPA0_BASE	(S5PC1XX_VA_GPIO + 0x0000)
#define S5PC1XX_GPA1_BASE	(S5PC1XX_VA_GPIO + 0x0020)
#define S5PC1XX_GPB_BASE	(S5PC1XX_VA_GPIO + 0x0040)
#define S5PC1XX_GPC_BASE	(S5PC1XX_VA_GPIO + 0x0060)
#define S5PC1XX_GPD_BASE	(S5PC1XX_VA_GPIO + 0x0080)
#define S5PC1XX_GPE0_BASE	(S5PC1XX_VA_GPIO + 0x00A0)
#define S5PC1XX_GPE1_BASE	(S5PC1XX_VA_GPIO + 0x00C0)
#define S5PC1XX_GPF0_BASE	(S5PC1XX_VA_GPIO + 0x00E0)
#define S5PC1XX_GPF1_BASE	(S5PC1XX_VA_GPIO + 0x0100)
#define S5PC1XX_GPF2_BASE	(S5PC1XX_VA_GPIO + 0x0120)
#define S5PC1XX_GPF3_BASE	(S5PC1XX_VA_GPIO + 0x0140)
#define S5PC1XX_GPG0_BASE	(S5PC1XX_VA_GPIO + 0x0160)
#define S5PC1XX_GPG1_BASE	(S5PC1XX_VA_GPIO + 0x0180)
#define S5PC1XX_GPG2_BASE	(S5PC1XX_VA_GPIO + 0x01A0)
#define S5PC1XX_GPG3_BASE	(S5PC1XX_VA_GPIO + 0x01C0)
#define S5PC1XX_GPH0_BASE	(S5PC1XX_VA_GPIO + 0x0C00)
#define S5PC1XX_GPH1_BASE	(S5PC1XX_VA_GPIO + 0x0C20)
#define S5PC1XX_GPH2_BASE	(S5PC1XX_VA_GPIO + 0x0C40)
#define S5PC1XX_GPH3_BASE	(S5PC1XX_VA_GPIO + 0x0C60)
#define S5PC1XX_GPI_BASE	(S5PC1XX_VA_GPIO + 0x01E0)
#define S5PC1XX_GPJ0_BASE	(S5PC1XX_VA_GPIO + 0x0200)
#define S5PC1XX_GPJ1_BASE	(S5PC1XX_VA_GPIO + 0x0220)
#define S5PC1XX_GPJ2_BASE	(S5PC1XX_VA_GPIO + 0x0240)
#define S5PC1XX_GPJ3_BASE	(S5PC1XX_VA_GPIO + 0x0260)
#define S5PC1XX_GPJ4_BASE	(S5PC1XX_VA_GPIO + 0x0280)
#define S5PC1XX_GPK0_BASE	(S5PC1XX_VA_GPIO + 0x02A0)
#define S5PC1XX_GPK1_BASE	(S5PC1XX_VA_GPIO + 0x02C0)
#define S5PC1XX_GPK2_BASE	(S5PC1XX_VA_GPIO + 0x02E0)
#define S5PC1XX_GPK3_BASE	(S5PC1XX_VA_GPIO + 0x0300)
#define S5PC1XX_MP00_BASE	(S5PC1XX_VA_GPIO + 0x0320)
#define S5PC1XX_MP01_BASE	(S5PC1XX_VA_GPIO + 0x0340)
#define S5PC1XX_MP02_BASE	(S5PC1XX_VA_GPIO + 0x0360)
#define S5PC1XX_MP03_BASE	(S5PC1XX_VA_GPIO + 0x0380)
#define S5PC1XX_MP04_BASE	(S5PC1XX_VA_GPIO + 0x03A0)

#endif /* __ASM_PLAT_S5PC1XX_REGS_GPIO_H */

