/*****************************************************************************
*					File: LED_Blinking.h
*	 Description: contains functions definitions 
*								for LED Blinking App
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								INCLUDES
*****************************************************************************/
#include "LED_Blinking_Interface.h"

/*****************************************************************************
*								FUNCTIONS DEFINITIONS
*****************************************************************************/
void Caller_Function()
{
	Dio_FlipChannel(LED_PORT, LED_PIN);
}
void LED_Blinking_Init()
{
	/* Initialize GPIO Configurations for Port */
	GPIO_ConfigType LED_Config [1] = {{LED_PORT, LED_PIN, Output, DIO, Digital, Open_Drain, MA_8}};
	GPIO_Init(LED_Config, 1);
	
	/* Initialize SYSTICK */
	Systick_Init();
	
	/* Start SYSTICK with Initial Value */
	Systick_Start(SYSTEM_CLOCK);
	
	/* set the callback function */
		Callback_Function(Caller_Function);
}

void LED_ON()
{
	uint32_t Counts;
	
	/* Calculate the required counts */
	Counts = LED_ON_SECS * SYSTEM_CLOCK;
	
	/* Reload the counts value */
	Systick_ReloadNewValue(Counts);
}

void LED_OFF()
{
	uint32_t Counts;
	
	/* Calculate the required counts */
	Counts = LED_OFF_SECS * SYSTEM_CLOCK;
	
	/* Reload the counts value */
	Systick_ReloadNewValue(Counts);
}