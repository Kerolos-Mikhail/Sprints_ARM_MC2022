/*****************************************************************************
*					File: LED_Blinking_Interface.h
*	 Description: contains configurations and functions 
*								prototypes of DIO Driver
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef LED_BLINKING_INTERFACE_H
#define LED_BLINKING_INTERFACE_H

/*****************************************************************************
*								INCLUDES
*****************************************************************************/
#include "LED_Blinking_Config.h"
#include "../../MCAL/GPIO/GPIO_Interface.h"
#include "../../MCAL/SYSTICK/SYSTICK_Interface.h"
#include "../../MCAL/Interrupt/INTCTRL_Interface.h"
#include "../../LIB/STD_TYPES.h"

/*****************************************************************************
*								FUNCTIONS PROTOTYPES
*****************************************************************************/

void LED_Blinking_Init(void);

void LED_ON(void);

void LED_OFF(void);

void Caller_Function(void);

void LED_CheckSwitches(void);

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/