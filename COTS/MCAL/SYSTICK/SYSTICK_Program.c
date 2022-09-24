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

static void (* Callback_Fptr)(void) = 0;

/****************************************************************************
*					FUNCTIONS DEFINITIONS
****************************************************************************/
void Systick_Init(uint32_t ReloadValue)
{
	/* Control the clock source */
	STCTRL |= (1 << CLK_SRC);						/* System clock */
	
	/* Reload the value */
	STRELOAD = (ReloadValue << RELOAD) & 0x00FFFFFF;
	
	/* Clear the current value */
	STCURRENT = 0;
	
}

void Systick_Start()
{
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

void Callback_Function(void(* Fptr)(void))
{
		if(Fptr != 0){
			Callback_Fptr = Fptr;
		}
}


/* SYSIICK ISR */ 
void SysTick_Handler(){
	
	Callback_Fptr();
}