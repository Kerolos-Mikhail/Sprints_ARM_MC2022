/*****************************************************************************
*					File: main.c
*	 Description: contains Implementation for 
*               LED Blinking Project
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								INCLUDES
*****************************************************************************/
#include "LED_Blinking_Interface.h"

int main()
{
	LED_Blinking_Init();
	
	while(1)
	{
		LED_ON();
		LED_OFF();
	}

}