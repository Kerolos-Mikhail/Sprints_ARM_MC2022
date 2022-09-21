/*****************************************************************************
*					File: SYSTICK_Program.c
*	 Description: contains Functions definitions 
*								for SYSTICK Module
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/****************************************************************************
*					INCLUDES
****************************************************************************/
#include "SYSTICK_Interface.h"
#include "../../LIB/STD_TYPES.h"

/****************************************************************************
*					DATA TYPES
****************************************************************************/

static void (* Func_ptr)(void);
/****************************************************************************
*					FUNCTIONS DEFINITIONS
****************************************************************************/
void Systick_Init()
{
	/* Control the clock source */
	STCTRL |= (1 << CLK_SRC);						/* System clock */
	
	/* Enable SCB Interrupt */
	SYSHNDCTRL |= (1 << TICK);
	
	/* Enable Peripheral Interrupt */
	STCTRL |= (1 << INTEN);
	
}

void Systick_Start(uint32_t ReloadValue)
{
	/* Reload the value */
	STRELOAD = (ReloadValue << RELOAD) & 0x00FFFFFF;
	
	/* Enable Systick */
	STCTRL |= (1 << ENABLE);
}

void Systick_Stop()
{
	/* Disable Systick */
	STCTRL &= ~(1 << ENABLE);
}

void Systick_ReloadNewValue(uint32_t NewValue)
{
	/* Reload the  new value */
	STRELOAD = (NewValue << RELOAD) & 0x00FFFFFF;
}

void Callback_Function(void (*Fptr)(void))
{
	if(Fptr != 0)
	{
			Func_ptr = Fptr;
	}
}

/* SYSIICK ISR */ 
void SysTick_Handler(){
	
		Func_ptr();
}