/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 16/7/2023       ******************/
/************** SWC  : TIMERS          ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#ifndef MCAL_TIMERS_TIMERS_INTERFACE_H_
#define MCAL_TIMERS_TIMERS_INTERFACE_H_

void TIMERS_voidTimer0Init(void);

u8 TIMERS_u8TimersSetCallBack(void(*Copy_pf)(void));

u8 TIMERS_u8TimersCTCSetCallBack(void(*Copy_pf)(void));

#endif /* MCAL_TIMERS_TIMERS_INTERFACE_H_ */
