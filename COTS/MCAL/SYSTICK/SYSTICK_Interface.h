/*****************************************************************************
*					File: SYSTICK_Interface.h
*	 Description: contains Configurations and functions prototypes 
*								for SYSTICK Module
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef	_SYSTICK_INTERFACE_H_
#define	_SYSTICK_INTERFACE_H_

/****************************************************************************
*					INCLUDES
****************************************************************************/
#include "SYSTICK_Private.h"
#include "../../LIB/STD_TYPES.h"


/****************************************************************************
*					FUNCTIONS PROTOTYPES
****************************************************************************/
void Systick_Init(uint32_t ReloadValue);

void Systick_Start(void);

void Systick_Stop(void);

void Systick_ReloadNewValue(uint32_t NewValue); 

void SysTick_Handler (void);

void Callback_Function(void(* Fptr)(void));

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/