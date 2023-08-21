/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 21/8/2023       ******************/
/************** SWC  : WDT             ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#ifndef MCAL_WDT_WDT_PRIVATE_H_
#define MCAL_WDT_WDT_PRIVATE_H_

#define		WDTCR			*((volatile u8 *)(0x41))			// Watchdog Timer Control Register
#define 	WDTCR_WDP0		0									// Watchdog Timer Prescaler 0
#define 	WDTCR_WDP1		1									// Watchdog Timer Prescaler 1
#define 	WDTCR_WDP2		2									// Watchdog Timer Prescaler 2
#define 	WDTCR_WDE		3									// Watchdog Timer Enable
#define 	WDTCR_WDTOE		4									// Watchdog Timer Turn-off Enable

#define 	WDT_u8_ZERO		0X00

#endif /* MCAL_WDT_WDT_PRIVATE_H_ */
