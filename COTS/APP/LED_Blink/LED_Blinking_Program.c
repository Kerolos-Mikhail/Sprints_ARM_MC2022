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
*								DATA TYPES
*****************************************************************************/
static uint8_t LED_ON_SECS = 0;
static uint8_t LED_OFF_SECS = 0;
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
	if(count == 0 && LED_ON_SECS > 0){
		Dio_WriteChannel(LED_PORT, LED_PIN, High);
		LED_OFF();
		count = 1;
	}
	else if(count == 1 && LED_OFF_SECS > 0){
		Dio_WriteChannel(LED_PORT, LED_PIN, Low);
		LED_ON();
		count = 0;
	}
	
}

void LED_CheckSwitches()
{
	/* Check switch1 
	* I case switch1 is pressed , Led_on period increases and Led_off period decreases
	*/
		if(Dio_ReadChannel(LED_PORT, SWITCH1_PIN) == Low){
			LED_ON_SECS++;
			if(LED_OFF_SECS > 0){
				LED_OFF_SECS--;
			}
			 while(Dio_ReadChannel(LED_PORT, SWITCH1_PIN) == Low);
		}
		
		/* Check switch2 
	* I case switch2 is pressed , Led_on period decreases and Led_off period increases
	*/
	 if(Dio_ReadChannel(LED_PORT, SWITCH2_PIN) == Low){
		 if(LED_ON_SECS > 0){
			 LED_ON_SECS--;
		 }
			LED_OFF_SECS++;
		  while(Dio_ReadChannel(LED_PORT, SWITCH2_PIN) == Low);
	 }
}

void LED_Blinking_Init()
{
	/* Initialize GPIO Configurations for Port */
	GPIO_ConfigType LED_Config [3] = {{LED_PORT, LED_PIN, Output, DIO, Digital, Open_Drain, MA_8}, 
	{LED_PORT, SWITCH1_PIN, Input, DIO, Digital, Pull_UP, MA_8}, {LED_PORT, SWITCH2_PIN, Input, DIO, Digital, Pull_UP, MA_8}};
	GPIO_Init(LED_Config, 3);
	
	/* Initialize SYSTICK */
	Systick_Init(SYSTEM_CLOCK - 1);
	
	/* Enable SYSTICK Interrupt */
	IntCtrl_Init();
	
	/* Start SYSTICK with Initial Value */
	Systick_Start();
	
	/* set the callback function */
		Callback_Function(Caller_Function);
}

