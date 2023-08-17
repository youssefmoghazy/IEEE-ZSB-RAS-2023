/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 16/7/2023       ******************/
/************** SWC  : TIMERS          ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#ifndef MCAL_TIMERS_TIMERS_PRIVATE_H_
#define MCAL_TIMERS_TIMERS_PRIVATE_H_

/*Registers Definition*/

#define TIMERS_u8_TIMSK_REG			*((volatile u8*)0x59)

#define TIMERS_u8_TIFR_REG			*((volatile u8*)0x58)

#define TIMERS_u8_TCCR0_REG			*((volatile u8*)0x53)

#define TIMERS_u8_TCNT0_REG			*((volatile u8*)0x52)

#define TIMERS_u8_TIMSK_REG			*((volatile u8*)0x59)

#define TIMERS_u8_OCR0_REG			*((volatile u8*)0x5C)

/* Timer Modes */
typedef enum
{
    Normal_mode,
    Phase_Correct_mode,
    CTC_mode,
    FAST_PWM_mode
} Timer_Mode;

/* Clock Select Options */
typedef enum
{
    No_clock_source,
    CLK_NO_Prescaling,
    CLK_8,
    CLK_64,
    CLK_256,
    CLK_1024,
    External_clock_on_FallingEdge,
    External_clock_on_RisingEdge
} Clock_Select;

#endif /* MCAL_TIMERS_TIMERS_PRIVATE_H_ */
