/*****************************************************************************
*					File: INTCTRL__Private.h
*	 Description: contains registers definitions for 
*								Interrupt Control Module
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef		_INTCTRL_PRIVATE_H_
#define		_INTCTRL_PRIVATE_H_

/****************************************************************************
*					GLOBAL CONSTANT MACROS
****************************************************************************/
#define CORE_PERIPHERALS_BASE_ADDRESS								0xE000E000

/******************************* NVIC REGISTERS ****************************/
#define EN0					*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x100)) /* Interrupt 0-31 Set Enable */
#define EN1					*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x104)) /* Interrupt 32-63 Set Enable */
#define EN2					*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x108)) /* Interrupt 64-95 Set Enable */
#define EN3					*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x10C)) /* Interrupt 96-127 Set Enable */
#define EN4					*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x110)) /* Interrupt 128-138 Set Enable */
#define DIS0				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x180)) /* Interrupt 0-31 Clear Enable */
#define DIS1				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x184)) /* Interrupt 32-63 Clear Enable */
#define DIS2				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x188)) /* Interrupt 64-95 Clear Enable */
#define DIS3				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x18C)) /* Interrupt 96-127 Clear Enable */
#define DIS4				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x190)) /* Interrupt 128-138 Clear Enable */

#define SWTRIG			*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0xF00)) /*  Software Trigger Interrupt */
	
#define PRI0				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x400)) /* Interrupt 0-3 Priority */
#define PRI1				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x404)) /* Interrupt 4-7 Priority */
#define PRI2				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x408)) /* Interrupt 8-11 Priority */
#define PRI3				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x40C)) /* Interrupt 12-15 Priority */
#define PRI4				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x410)) /* Interrupt 16-19 Priority */
#define PRI5				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x414)) /* Interrupt 20-23 Priority */
#define PRI6				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x418)) /* Interrupt 24-27 Priority */
#define PRI7				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x41C)) /* Interrupt 28-31 Priority */
#define PRI8				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x420)) /* Interrupt 32-35 Priority */
#define PRI9				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x424)) /* Interrupt 36-39 Priority */
#define PRI10				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x428)) /* Interrupt 40-43 Priority */
#define PRI11				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x42C)) /* Interrupt 44-47 Priority */
#define PRI12				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x430)) /* Interrupt 48-51 Priority */
#define PRI13				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x434)) /* Interrupt 52-55 Priority */
#define PRI14				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x438)) /* Interrupt 56-59 Priority */
#define PRI15				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x43C)) /* Interrupt 60-63 Priority */
#define PRI16				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x440)) /* Interrupt 64-67 Priority */
#define PRI17				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x444)) /* Interrupt 68-71 Priority */
#define PRI18				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x448)) /* Interrupt 72-75 Priority */
#define PRI19				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x44C)) /* Interrupt 76-79 Priority */
#define PRI20				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x450)) /* Interrupt 80-83 Priority */
#define PRI21				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x454)) /* Interrupt 84-87 Priority */
#define PRI22				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x458)) /* Interrupt 88-91 Priority */
#define PRI23				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x45C)) /* Interrupt 92-95 Priority */
#define PRI24				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x460)) /* Interrupt 96-99 Priority */
#define PRI25				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x464)) /* Interrupt 100-103 Priority */
#define PRI26				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x468)) /* Interrupt 104-107 Priority */
#define PRI27				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x46C)) /* Interrupt 108-111 Priority */
#define PRI28				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x470)) /* Interrupt 112-115 Priority */
#define PRI29				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x474)) /* Interrupt 116-119 Priority */
#define PRI30				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x478)) /* Interrupt 120-123 Priority */
#define PRI31				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x47C)) /* Interrupt 124-127 Priority */
#define PRI32				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x480)) /* Interrupt 128-131 Priority */
#define PRI33				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x484)) /* Interrupt 132-135 Priority */
#define PRI34				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x488)) /* Interrupt 136-138 Priority */
#define INTA							5
#define INTB							13
#define INTC							21
#define INTD							29
#define GROUP_PRIORITY 		7
/******************************* SCB REGISTERS *****************************/
#define CFGCTRL			*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0xD14)) /* Configuration and Control */
#define BASETHR			0			/*	Thread State Control */
#define MAINPEND		1			/*  Allow Main Interrupt Trigger */

#define APINT				*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0xD0C)) /* Application Interrupt */
#define VECTKEY			16		/* Register Key (write 0x05FA to change the bits in the register) */
#define PRIGROUP		8			/* Interrupt Priority Grouping */

#define SYSHNDCTRL	*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0xD24)) /* System Handler Control and State */
#define BUS				17		/* Bus Fault Enable */
#define MEM				16		/* Memory Management Fault Enable */
#define TICK				11		/* SysTick Exception Active */
#define BUSA				1		/* Bus Fault Active */
#define MEMA				0		/* Memory Management Fault Active */

#define STCTRL			*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x010)) /* SysTick Control and Status Register */
#define INTEN				1			/* interrupt Enable */

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/