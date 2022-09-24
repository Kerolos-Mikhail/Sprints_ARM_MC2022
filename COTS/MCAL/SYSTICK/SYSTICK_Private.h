/*****************************************************************************
*					File: SYSTICK_Private.h
*	 Description: contains Registers definitions for SYSTICK Module					
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef	_SYSTICK_PRIVATE_H_
#define	_SYSTICK_PRIVATE_H_

/****************************************************************************
*					CONSTANT MACROS
****************************************************************************/
#define CORE_PERIPHERALS_BASE_ADDRESS								0xE000E000

#define SYSHNDCTRL	*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0xD24)) /* System Handler Control and State */
#define TICK				11		/* SysTick Exception Active */


#define STCTRL			*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x010)) /* SysTick Control and Status Register */
#define COUNT				16		/* Count Flag */
#define CLK_SRC			2			/* Clock Source */
#define ENABLE			0			/* Systick Enable */

#define STRELOAD		*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x014)) /* SysTick Reload Value Register */
#define RELOAD			0			/* Reload Value */

#define STCURRENT		*((volatile int *)(CORE_PERIPHERALS_BASE_ADDRESS + 0x018)) /* SysTick Current Value Register */

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/