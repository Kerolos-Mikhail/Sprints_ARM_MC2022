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
void LED_ON()
{
	uint32_t Counts;
	
	/* Calculate the required counts */
	Counts = LED_ON_SECS * SYSTEM_CLOCK;
	
	/* Reload the counts value */
	Systick_ReloadNewValue(Counts-1);
}

void LED_OFF()
{
	uint32_t Counts;
	
	/* Calculate the required counts */
	Counts = LED_OFF_SECS * SYSTEM_CLOCK;
	
	/* Reload the counts value */
	Systick_ReloadNewValue(Counts-1);
}

void Caller_Function()
{
	static uint8_t count = 0; 
	if(count == 0){
		Dio_WriteChannel(LED_PORT, LED_PIN, High);
		LED_OFF();
		count = 1;
	}
	else{
		Dio_WriteChannel(LED_PORT, LED_PIN, Low);
		LED_ON();
		count = 0;
	}
	
}
void LED_Blinking_Init()
{
	/* Initialize GPIO Configurations for Port */
	GPIO_ConfigType LED_Config [1] = {{LED_PORT, LED_PIN, Output, DIO, Digital, Open_Drain, MA_8}};
	GPIO_Init(LED_Config, 1);
	
	/* Initialize SYSTICK */
	Systick_Init(SYSTEM_CLOCK - 1);
	
	/* Start SYSTICK with Initial Value */
	Systick_Start();
	
	/* set the callback function */
		Callback_Function(Caller_Function);
}

