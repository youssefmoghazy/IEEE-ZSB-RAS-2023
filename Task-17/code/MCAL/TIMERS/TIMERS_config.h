/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 16/7/2023       ******************/
/************** SWC  : TIMERS          ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#ifndef MCAL_TIMERS_TIMERS_CONFIG_H_
#define MCAL_TIMERS_TIMERS_CONFIG_H_
/* Select Mode
Timer_mode:
    1- Normal_mode
    2- Phase_Correct_mode
    3- CTC_mode
    4- FAST_PWM_mode
*/
#define Timer0_mode                 CTC_mode

#define Timer0_Prescaler_Value      External_clock_on_RisingEdge

#define Preload_Value               192

#define Compare_Match_Value         0

#endif /* MCAL_TIMERS_TIMERS_CONFIG_H_ */
