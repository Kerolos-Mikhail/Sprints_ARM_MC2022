/*****************************************************************************
*					File: GPIO.C
*	 Description: contains functions definitions of GPIO Driver
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								INCLUDES
*****************************************************************************/
#include "GPIO_Interface.h"

/*****************************************************************************
*								FUNCTIONS DEFINITIONS
*****************************************************************************/
void GPIO_Init(GPIO_ConfigType * ConfigPtr, uint8_t NumOfPins)
{
	uint8_t Counts=0;
	for(; Counts < NumOfPins ; Counts++)
	{
		switch(ConfigPtr[Counts].Port){
			case PortA:
									RCGCGPIO  |= (1 << PortA);	/* Enable the clock to the port */
									/* Unlock and uncommit special pins */
									if(ConfigPtr[Counts].Pin == Pin_0 || ConfigPtr[Counts].Pin == Pin_1 ||
										ConfigPtr[Counts].Pin == Pin_2 || ConfigPtr[Counts].Pin == Pin_3  ||
										ConfigPtr[Counts].Pin == Pin_4 || ConfigPtr[Counts].Pin == Pin_5){
										GPIOLOCK_A = 0x4C4F434B;
										GPIOCR_A  |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the direction of the GPIO port pin */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_A &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_A |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_A &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_A |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_A |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_A |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_A |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_A |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_A |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_A |= (1 << ConfigPtr[Counts].Pin);
									}	
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_A |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_A |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
			case PortB:
									RCGCGPIO |= (1 << PortB);		/* Enable the clock to the port */
									/* Unlock and uncommit special pins */
									if(ConfigPtr[Counts].Pin == Pin_2 || ConfigPtr[Counts].Pin == Pin_3){
										GPIOLOCK_B = 0x4C4F434B;
										GPIOCR_B  |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the Pin to be input or output */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_B &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_B |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_B &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_B |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_B |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_B |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_B |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_B |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_B |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_B |= (1 << ConfigPtr[Counts].Pin);
									}			
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_B |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_B |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
			case PortC:
									RCGCGPIO |= (1 << PortC);		/* Enable the clock to the port */
									/* Unlock and uncommit special pins */
									if(ConfigPtr[Counts].Pin == Pin_0 || ConfigPtr[Counts].Pin == Pin_1 ||
										ConfigPtr[Counts].Pin == Pin_2 || ConfigPtr[Counts].Pin == Pin_3){
										GPIOLOCK_C = 0x4C4F434B;
										GPIOCR_C  |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the Pin to be input or output */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_C &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_C |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_C &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_C |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_C |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_C |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_C |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_C |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_C |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_C |= (1 << ConfigPtr[Counts].Pin);
									}		
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_C |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_C |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
			case PortD:
									RCGCGPIO |= (1 << PortD);		/* Enable the clock to the port */
									/* Unlock and uncommit special pins */
									if(ConfigPtr[Counts].Pin == Pin_7){
										GPIOLOCK_D = 0x4C4F434B;
										GPIOCR_D  |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the Pin to be input or output */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_D &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_D |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_D &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_D |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_D |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_D |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_D |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_D |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_D |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_D |= (1 << ConfigPtr[Counts].Pin);
									}		
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_D |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_D |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
			case PortE:
									RCGCGPIO |= (1 << PortE);		/* Enable the clock to the port */
									/* Enable the clock to the port */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_E &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_E |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_E &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_E |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_E |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_E |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_E |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_E |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_E |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_E |= (1 << ConfigPtr[Counts].Pin);
									}		
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_E |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_E |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
			case PortF:	
									RCGCGPIO |= (1 << PortF);		/* Enable the clock to the port */
									/* Unlock and uncommit special pins */
									if(ConfigPtr[Counts].Pin == Pin_0){
										GPIOLOCK_F = 0x4C4F434B;
										GPIOCR_F  |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the Pin to be input or output */
									if(ConfigPtr[Counts].Dir == Input){	 
										GPIODIR_F &= ~(1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Dir == Output){
										GPIODIR_F |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Configure the pin to be GPIO or Alternate function */
									if(ConfigPtr[Counts].Mode == DIO){
										GPIOAFSEL_F &= ~(1 << ConfigPtr[Counts].Pin);
									} else if(ConfigPtr[Counts].Mode == Alternate){
										GPIOAFSEL_F |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Set the drive strength for the pin */
									if(ConfigPtr[Counts].CurrentType == MA_2){
										GPIODR2R_F |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_4){
										GPIODR4R_F |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].CurrentType == MA_8){
										GPIODR8R_F |= (1 << ConfigPtr[Counts].Pin);
									}
									/* Control the pin to have either pull-up, pull-down, or open drain */
									if(ConfigPtr[Counts].Attach == Pull_UP){
										GPIOPUR_F |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Pull_Down){
										GPIOPDR_F |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Attach == Open_Drain){
										GPIOODR_F |= (1 << ConfigPtr[Counts].Pin);
									}	
									/* Control the pin to br digital or analog */
									if(ConfigPtr[Counts].Signal == Digital){
										GPIODEN_F |= (1 << ConfigPtr[Counts].Pin);
									}else if(ConfigPtr[Counts].Signal == Analog){
										GPIOAMSEL_F |= (1 << ConfigPtr[Counts].Pin);
									}
									break;
		}							
	}
}


DIO_LevelType Dio_ReadChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId)
{
	uint32_t PinValue;
	switch(PortId){
		case PortA:
								PinValue = *((volatile uint32_t *)(GPIODATA_PA + (1<<(ChannelId+2))));
								break;
		case PortB:
								PinValue = *((volatile uint32_t *)(GPIODATA_PB + (1<<(ChannelId+2))));
								break;
		case PortC:
								PinValue = *((volatile uint32_t *)(GPIODATA_PC + (1<<(ChannelId+2))));
													break;
		case PortD:
								PinValue = *((volatile uint32_t *)(GPIODATA_PD + (1<<(ChannelId+2))));
													break;
		case PortE:
								PinValue = *((volatile uint32_t *)(GPIODATA_PE + (1<<(ChannelId+2))));
								break;
		case PortF:
								PinValue = *((volatile uint32_t *)(GPIODATA_PF + (1<<(ChannelId+2))));
								break;
	
	}
	PinValue = (PinValue >> ChannelId);
	if(PinValue == 1){
		return High;
	}
	return Low;
}

/****************************************************************************/
void Dio_WriteChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId, DIO_LevelType Level)
{
	volatile uint32_t * RegisterPtr = 0;
	switch(PortId){
		case PortA:
								RegisterPtr = (volatile uint32_t *) (GPIODATA_PA + ((1<<ChannelId) << 2));	/* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
								break;
		case PortB:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PB + ((1<<ChannelId) << 2));	/* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
								break;
		case PortC:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PC + ((1<<ChannelId) << 2));	/* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
													break;
		case PortD:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PD + ((1<<ChannelId) << 2));	/* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
													break;
		case PortE:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PE + ((1<<ChannelId) << 2));	/* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
								break;
		case PortF:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PF + ((1<<ChannelId) << 2)); /* Address masking */
								if(Level == High){
									* RegisterPtr = (1 << ChannelId);
								}else if(Level == Low){
									* RegisterPtr = 0;
								}
								break;
	
	}
}

/****************************************************************************/
uint8_t Dio_ReadPort(GPIO_PortType PortId)
{
	volatile uint32_t * RegisterPtr;
	uint8_t PortValue;
	switch(PortId){
			case PortA:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PA + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
									break;
			case PortB:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PB + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
									break;
			case PortC:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PC + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
														break;
			case PortD:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PD + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
														break;
			case PortE:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PE + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
									break;
			case PortF:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PF + PORT_MASK);
									PortValue = (uint8_t) (* RegisterPtr);
									break;
		
		}
	return PortValue;
}

/****************************************************************************/
void Dio_WritePort(GPIO_PortType PortId, uint8_t PortValue) 
{
	volatile uint32_t * RegisterPtr;
	switch(PortId){
			case PortA:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PA + PORT_MASK);
								* RegisterPtr = PortValue;
									break;
			case PortB:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PB + PORT_MASK);
								* RegisterPtr = PortValue;
									break;
			case PortC:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PC + PORT_MASK);
								* RegisterPtr = PortValue;
														break;
			case PortD:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PD + PORT_MASK);
								* RegisterPtr = PortValue;
														break;
			case PortE:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PE + PORT_MASK);
								* RegisterPtr = PortValue;
									break;
			case PortF:
									RegisterPtr = (volatile uint32_t *)(GPIODATA_PF + PORT_MASK);
								* RegisterPtr = PortValue;
									break;
		
		}
}

/****************************************************************************/
void Dio_FlipChannel(GPIO_PortType PortId, GPIO_ChannelType ChannelId) 
{
	volatile uint32_t * RegisterPtr;
	switch(PortId){
		case PortA:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PA + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
								break;
		case PortB:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PB + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
								break;
		case PortC:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PC + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
													break;
		case PortD:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PD + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
													break;
		case PortE:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PE + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
								break;
		case PortF:
								RegisterPtr = (volatile uint32_t *)(GPIODATA_PF + (1<<(ChannelId+2)));
							* RegisterPtr ^= (1 << ChannelId);
								break;
	
	}
}