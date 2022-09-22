/*****************************************************************************
*					File: GPIO_Private.h
*	 Description: defines registers of GPIO Driver
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H

/****************************************************
*					GLOBAL CONSTANT MACROS
****************************************************/
#define PORTA_APB				0x40004000
#define	PORTA_AHB				0x40058000
#define PORTB_APB				0x40005000
#define	PORTB_AHB				0x40059000
#define PORTC_APB				0x40006000
#define	PORTC_AHB				0x4005A000
#define PORTD_APB				0x40007000
#define	PORTD_AHB				0x4005B000
#define PORTE_APB				0x40024000
#define	PORTE_AHB				0x4005C000
#define PORTF_APB				0x40025000
#define	PORTF_AHB				0x4005D000

#define APB							0
#define AHB							1
#define	PORT_MASK						0x3FC

/*****************************************************/
/* General-Purpose Input/Output Run Mode Clock Gating Control */
#define RCGCGPIO				*((volatile int *)(0x400FE000+0x608))	
/* GPIO High-Performance Bus Control (APB OR AHB) */	
#define GPIOHBCTL				*((volatile int *)(0x400FE000+0x06C))
#define APB							0
#define AHB							1
/****************************************************/
#define GPIODATA_A			*((volatile int *)(PORTA_APB+0x000))	/* GPIO Data */
#define	GPIODIR_A				*((volatile int *)(PORTA_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_A				*((volatile int *)(PORTA_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_A			*((volatile int *)(PORTA_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_A			*((volatile int *)(PORTA_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_A			*((volatile int *)(PORTA_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_A			*((volatile int *)(PORTA_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_A				*((volatile int *)(PORTA_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_A				*((volatile int *)(PORTA_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_A				*((volatile int *)(PORTA_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_A				*((volatile int *)(PORTA_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_A				*((volatile int *)(PORTA_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_A			*((volatile int *)(PORTA_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_A				*((volatile int *)(PORTA_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_A			*((volatile int *)(PORTA_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_A			*((volatile int *)(PORTA_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_A		*((volatile int *)(PORTA_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_A		*((volatile int *)(PORTA_APB+0x534))	/* GPIO DMA Control */
			
/****************************************************/
#define GPIODATA_B			*((volatile int *)(PORTB_APB+0x000))	/* GPIO Data */
#define	GPIODIR_B				*((volatile int *)(PORTB_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_B				*((volatile int *)(PORTB_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_B			*((volatile int *)(PORTB_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_B			*((volatile int *)(PORTB_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_B			*((volatile int *)(PORTB_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_B			*((volatile int *)(PORTB_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_B				*((volatile int *)(PORTB_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_B				*((volatile int *)(PORTB_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_B				*((volatile int *)(PORTB_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_B				*((volatile int *)(PORTB_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_B				*((volatile int *)(PORTB_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_B			*((volatile int *)(PORTB_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_B				*((volatile int *)(PORTB_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_B			*((volatile int *)(PORTB_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_B			*((volatile int *)(PORTB_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_B		*((volatile int *)(PORTB_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_B		*((volatile int *)(PORTB_APB+0x534))	/* GPIO DMA Control */
/****************************************************/
#define GPIODATA_C			*((volatile int *)(PORTC_APB+0x000))	/* GPIO Data */
#define	GPIODIR_C				*((volatile int *)(PORTC_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_C				*((volatile int *)(PORTC_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_C			*((volatile int *)(PORTC_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_C			*((volatile int *)(PORTC_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_C			*((volatile int *)(PORTC_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_C			*((volatile int *)(PORTC_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_C				*((volatile int *)(PORTC_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_C				*((volatile int *)(PORTC_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_C				*((volatile int *)(PORTC_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_C				*((volatile int *)(PORTC_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_C				*((volatile int *)(PORTC_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_C			*((volatile int *)(PORTC_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_C				*((volatile int *)(PORTC_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_C			*((volatile int *)(PORTC_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_C			*((volatile int *)(PORTC_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_C		*((volatile int *)(PORTC_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_C		*((volatile int *)(PORTC_APB+0x534))	/* GPIO DMA Control */
/****************************************************/
#define GPIODATA_D			*((volatile int *)(PORTD_APB+0x000))	/* GPIO Data */
#define	GPIODIR_D				*((volatile int *)(PORTD_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_D				*((volatile int *)(PORTD_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_D			*((volatile int *)(PORTD_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_D			*((volatile int *)(PORTD_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_D			*((volatile int *)(PORTD_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_D			*((volatile int *)(PORTD_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_D				*((volatile int *)(PORTD_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_D				*((volatile int *)(PORTD_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_D				*((volatile int *)(PORTD_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_D				*((volatile int *)(PORTD_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_D				*((volatile int *)(PORTD_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_D			*((volatile int *)(PORTD_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_D				*((volatile int *)(PORTD_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_D			*((volatile int *)(PORTD_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_D			*((volatile int *)(PORTD_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_D		*((volatile int *)(PORTD_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_D		*((volatile int *)(PORTD_APB+0x534))	/* GPIO DMA Control */
/****************************************************/
#define GPIODATA_E			*((volatile int *)(PORTE_APB+0x000))	/* GPIO Data */
#define	GPIODIR_E				*((volatile int *)(PORTE_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_E				*((volatile int *)(PORTE_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_E			*((volatile int *)(PORTE_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_E			*((volatile int *)(PORTE_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_E			*((volatile int *)(PORTE_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_E			*((volatile int *)(PORTE_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_E				*((volatile int *)(PORTE_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_E				*((volatile int *)(PORTE_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_E				*((volatile int *)(PORTE_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_E				*((volatile int *)(PORTE_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_E				*((volatile int *)(PORTE_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_E			*((volatile int *)(PORTE_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_E				*((volatile int *)(PORTE_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_E			*((volatile int *)(PORTE_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_E			*((volatile int *)(PORTE_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_E		*((volatile int *)(PORTE_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_E		*((volatile int *)(PORTE_APB+0x534))	/* GPIO DMA Control */
/****************************************************/
#define GPIODATA_F			*((volatile int *)(PORTF_APB+0x000))	/* GPIO Data */
#define	GPIODIR_F				*((volatile int *)(PORTF_APB+0x400))	/* GPIO Direction */
#define	GPIOIM_F				*((volatile int *)(PORTF_APB+0x410))	/* GPIO Interrupt Mask */
#define	GPIOAFSEL_F			*((volatile int *)(PORTF_APB+0x420))	/* GPIO Alternate Function Select */
#define	GPIODR2R_F			*((volatile int *)(PORTF_APB+0x500))	/* GPIO 2-mA Drive Select */
#define	GPIODR4R_F			*((volatile int *)(PORTF_APB+0x504))	/* GPIO 4-mA Drive Select */
#define	GPIODR8R_F			*((volatile int *)(PORTF_APB+0x508))	/* GPIO 8-mA Drive Select */
#define	GPIOODR_F				*((volatile int *)(PORTF_APB+0x50C))	/* GPIO Open Drain Select */
#define	GPIOPUR_F				*((volatile int *)(PORTF_APB+0x510))	/* GPIO Pull-Up Selec */
#define	GPIOPDR_F				*((volatile int *)(PORTF_APB+0x514))	/* GPIO Pull-Down Select */
#define	GPIOSLR_F				*((volatile int *)(PORTF_APB+0x518))	/* GPIO Slew Rate Control Select */
#define	GPIODEN_F				*((volatile int *)(PORTF_APB+0x51C))	/* GPIO Digital Enable */
#define	GPIOLOCK_F			*((volatile int *)(PORTF_APB+0x520))	/* GPIO Lock */
#define	GPIOCR_F				*((volatile int *)(PORTF_APB+0x524))	/* GPIO Commit */
#define	GPIOAMSEL_F			*((volatile int *)(PORTF_APB+0x528))	/* GPIO Analog Mode Select */
#define	GPIOPCTL_F			*((volatile int *)(PORTF_APB+0x52C))	/* GPIO Port Control */
#define	GPIOADCCTL_F		*((volatile int *)(PORTF_APB+0x530))	/* GPIO ADC Control	*/
#define	GPIODMACTL_F		*((volatile int *)(PORTF_APB+0x534))	/* GPIO DMA Control */
/****************************************************/
#define GPIODATA_PA			(PORTA_APB+0x000)	/* GPIO Data address for port A */
#define GPIODATA_PB			(PORTB_APB+0x000)	/* GPIO Data address for port B */
#define GPIODATA_PC			(PORTC_APB+0x000)	/* GPIO Data address for port C */
#define GPIODATA_PD			(PORTD_APB+0x000)	/* GPIO Data address for port D */
#define GPIODATA_PE			(PORTE_APB+0x000)	/* GPIO Data address for port E */
#define GPIODATA_PF			(PORTF_APB+0x000)	/* GPIO Data address for port F */
			
#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/