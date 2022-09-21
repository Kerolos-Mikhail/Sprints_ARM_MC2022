/*****************************************************************************
*					File: INTCTRL_Config.h
*	 Description: contains configurations for Interrupt Control Module 							
*		Created By:	Kerolos Mikhail
*****************************************************************************/

/*****************************************************************************
*								FILE GUARDIANS
*****************************************************************************/
#ifndef		_INTCTRL_CONFIG_H_
#define		_INTCTRL_CONFIG_H_


/****************************************************************************
*					GLOBAL CONSTANT MACROS
****************************************************************************/

/* IInterrupt Type */
#define	GPIO_Port_A	 								0 						
#define	GPIO_Port_B									1
#define	GPIO_Port_C									2
#define GPIO_Port_D									3
#define	GPIO_Port_E									4
#define	UART0												5
#define	UART1												6
#define	SSI0												7
#define	I2C0												8
#define	PWM0_Generator_0 						10
#define	PWM0_Generator_1						11
#define	PWM0_Generator_2						12
#define	ADC0_Sequence_0 						14
#define	ADC0_Sequence_1							15
#define	ADC0_Sequence_2							16
#define	ADC0_Sequence_3							17
#define	Watchdog_Timers_0_1					18
#define	Timer_16_32_Bit_0A					19
#define	Timer_16_32_Bit_0B					20
#define	Timer_16_32_Bit_1A					21
#define	Timer_16_32_Bit_1B					22
#define	Timer_16_32_Bit_2A					23
#define	Timer_16_32_Bit_2B					24
#define	Analog_Comparator_0					25
#define	Analog_Comparator_1					26
#define	GPIO_Port_F  								30
#define	UART2 											33
#define	SSI1												34
#define	Timer_16_32_Bit_3A					35
#define	Timer_16_32_Bit_3B					36
#define	I2C1												37
#define	CAN0 												39
#define	CAN1 												40
#define	USB 												44
#define	PWM0_Generator_3						45
#define	ADC1_Sequence_0 						48
#define	ADC1_Sequence_1							49
#define	ADC1_Sequence_2							50
#define	ADC1_Sequence_3							51
#define	SSI2 												57
#define	SSI3 												58
#define	UART3												59
#define	UART4												60
#define	UART5												61
#define	UART6												62
#define	UART7												63
#define	I2C2 												68
#define	I2C3												69
#define	Timer_16_32_Bit_4A					70
#define	Timer_16_32_Bit_4B					71
#define	Timer_16_32_Bit_5A 				  92
#define	Timer_16_32_Bit_5B					93
#define	Timer_32_64_Bit_0A					94
#define	Timer_32_64_Bit_0B					95
#define	Timer_32_64_Bit_1A					96
#define	Timer_32_64_Bit_1B					97
#define	Timer_32_64_Bit_2A					98
#define	Timer_32_64_Bit_2B					99
#define	Timer_32_64_Bit_3A					100
#define	Timer_32_64_Bit_3B					101
#define	Timer_32_64_Bit_4A					102
#define	Timer_32_64_Bit_4B					103
#define	Timer_32_64_Bit_5A					104
#define	Timer_32_64_Bit_5B					105
#define	PWM3_Generator_0 						134
#define	PWM2_Generator_1						135
#define	PWM1_Generator_2						136
#define	PWM1_Generator_3						137

/* Configurations */
#define INTERRUPT_PERIPHERAL_GATES		I2C0

#define INTERRUPT_GROUP_PRIORITY			0

#define INTERRUPT_SUB_GROUP_PRIORITY	0

#endif
/***************************************************************************
*							END OF FILE
***************************************************************************/