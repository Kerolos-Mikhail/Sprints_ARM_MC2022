/*****************************************************************************
*					File: GPIO.h
*	 Description: contains configurations and functions 
*								prototypes of GPIO Driver
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef _GPIO_H
#define _GPIO_H
/*****************************************************************************
*								INCLUDES
*****************************************************************************/
#include "GPIO_Private.h"
#include "../../LIB/STD_TYPES.h"
/*****************************************************************************
*								ENUMS AND STRUCTURES
*****************************************************************************/
typedef enum
{
	Pin_0,
	Pin_1,
	Pin_2,
	Pin_3,
	Pin_4,
	Pin_5,
	Pin_6,
	Pin_7
}GPIO_ChannelType;

typedef enum
{
	PortA,
	PortB,
	PortC,
	PortD,
	PortE,
	PortF
}GPIO_PortType;

typedef enum
{
	High,
	Low
}DIO_LevelType;

typedef enum 
{
	Input,
	Output
}GPIO_PinDirectionType;

typedef enum
{
	DIO						,
	Alternate
}GPIO_PinModeType;

typedef enum
{
	Digital,
	Analog
}GPIO_PinSignalType;

typedef enum
{
	Pull_UP,
	Pull_Down,
	Open_Drain
}GPIO_PinInternalAttachType;

typedef enum
{
	MA_2,
	MA_4,
	MA_8
}GPIO_PinOutputCurrentType;

typedef struct 
{
	GPIO_PortType	Port											;
	GPIO_ChannelType	Pin										;
	GPIO_PinDirectionType	Dir								;
	GPIO_PinModeType	Mode									;
	GPIO_PinSignalType Signal								;
	GPIO_PinInternalAttachType	Attach			;
	GPIO_PinOutputCurrentType		CurrentType	;
}GPIO_ConfigType;

/*****************************************************************************
*								FUNCTIONS PROTOTYPES
*****************************************************************************/
/*****************************************************************************
*				Function: void Port_Init(GPIO_ConfigType * ConfigPtr)
*		 Description: initializes configurations of defined pins
*									in some Port
*			Parameters: ConfigPtr - array of GPIO_ConfigType Structures
*															for number of Pins
*									NumOfPins - number of Pins
*		Return Value: None
*/			
void GPIO_Init(GPIO_ConfigType * ConfigPtr, uint8_t NumOfPins);

/*****************************************************************************
*				Function: Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
*		 Description: returns the input value of some pin
*									in some port
*			Parameters: PortId - Dio_PortType variable to define 
*													 the port type
*									ChannelId - Dio_ChannelType variable to define
*															the pin type
*		Return Value: Dio_LevelType value 
*/			
DIO_LevelType Dio_ReadChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId) ;

/*****************************************************************************
*				Function: void Dio_WriteChannel(Dio_PortType PortId, Dio_ChannelType ChannelId, Dio_LevelType Level)
*		 Description: writes digital value to some pin
*									in some port
*			Parameters: PortId - Dio_PortType variable to define 
*													 the port type
*									ChannelId - Dio_ChannelType variable to define
*															the pin type
*									Level	- Dio_LevelType	variable holds the digital value
*		Return Value: None 
*/			
void Dio_WriteChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId, DIO_LevelType Level) ;

/*****************************************************************************
*				Function: uint8 Dio_ReadPort(Dio_PortType PortId)
*		 Description: reads the value of some port
*			Parameters: PortId - Dio_PortType variable to define 
*													 the port type								
*		Return Value: uint8 value  
*/			
uint8_t Dio_ReadPort(GPIO_PortType PortId) ;

/*****************************************************************************
*				Function: void Dio_WritePort(Dio_PortType PortId, uint8 PortValue)
*		 Description: writes value to some port
*			Parameters: PortId - Dio_PortType variable to define 
*													 the port type
*									PortLevel	- uint8 variable holds the new value 
*															for port
*		Return Value: None 
*/			
void Dio_WritePort(GPIO_PortType PortId, uint8_t PortValue) ;

/*****************************************************************************
*				Function: void Dio_FlipChannel(Dio_PortType PortId, Dio_ChannelType ChannelId)
*		 Description: toggles digital value to some pin
*									in some port
*			Parameters: PortId - Dio_PortType variable to define 
*													 the port type
*									ChannelId - Dio_ChannelType variable to define
*															the pin type
*		Return Value: None 
*/			
void Dio_FlipChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId) ;

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/