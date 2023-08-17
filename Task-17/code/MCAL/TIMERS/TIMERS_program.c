/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 16/7/2023       ******************/
/************** SWC  : TIMERS          ******************/
/************** Version : 1.0          ******************/
/********************************************************/
/*LIB*/
#include "../../lib/STD_TYPES/STD_TYPES.h"
#include "../../lib/BIT_Math/BIT_MATH.h"
#include "TIMERS_config.h"
#include "TIMERS_interface.h"
#include "TIMERS_private.h"

/*Global pointer to function of Timer0 OVF*/
static void (*TIMERS_PFTimer0OVF)(void)=NULL;
static void (*TIMERS_PFTimer0CTC)(void)=NULL;
/************************************************************************/
/************************************************************************/
/************************************************************************/
void TIMERS_voidTimer0Init(void)
{
/* Select Mode
Timer0_mode:
    1- Normal_mode
    2- Phase_Correct_mode
    3- CTC_mode
    4- FAST_PWM_mode
*/
#if Timer0_mode == Normal_mode
    CLR_BIT(TIMERS_u8_TCCR0_REG, 6);
    CLR_BIT(TIMERS_u8_TCCR0_REG, 3);
    /* Enable OVF Interrupt*/
    SET_BIT(TIMERS_u8_TIMSK_REG, 0);
    /* set PreLoadValue*/
    TIMERS_u8_TCNT0_REG = Preload_Value;

#elif Timer0_mode == Phase_Correct_mode

    SET_BIT(TIMERS_u8_TCCR0_REG, 6);
    CLR_BIT(TIMERS_u8_TCCR0_REG, 3);

#elif Timer0_mode == CTC_mode

    CLR_BIT(TIMERS_u8_TCCR0_REG, 6);
    SET_BIT(TIMERS_u8_TCCR0_REG, 3);
    /* Enable CTC Interrupt */
    SET_BIT(TIMERS_u8_TIMSK_REG, 1);
    /* Compare Match Unit Value */
    TIMERS_u8_OCR0_REG = Compare_Match_Value;

#elif Timer0_mode == FAST_PWM_mode

    SET_BIT(TIMERS_u8_TCCR0_REG, 6);
    SET_BIT(TIMERS_u8_TCCR0_REG, 3);

#endif
    /* Set PreScaler Value */
    TIMERS_u8_TCCR0_REG |= Timer0_Prescaler_Value;
}
/************************************************************************/
/************************************************************************/
/************************************************************************/
u8 TIMERS_u8TimersSetCallBack(void(*Copy_pf)(void))
{
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf!=NULL)
	{
		TIMERS_PFTimer0OVF=Copy_pf;
	}
	else
	{
		Local_u8ErrorState=STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}
/************************************************************************/
/************************************************************************/
/************************************************************************/
u8 TIMERS_u8TimersCTCSetCallBack(void(*Copy_pf)(void))
{
	u8 Local_u8ErrorState = STD_TYPES_OK;
	if(Copy_pf!=NULL)
	{
		TIMERS_PFTimer0CTC=Copy_pf;
	}
	else
	{
		Local_u8ErrorState=STD_TYPES_NOK;
	}
	return Local_u8ErrorState;
}
/************************************************************************/
/************************************************************************/
/************************************************************************/
/* Prototype for ISR of Timer0 OVF*/
void __vector_11(void) __attribute__((signal));
void __vector_11(void)
{
    static u16 Local_u16CouterOVF = 0;
    Local_u16CouterOVF++;
    if (Local_u16CouterOVF == 3907)
    {
        /* Update PreLoadValue */
        TIMERS_u8_TCNT0_REG = Preload_Value;
        /* clear the counter */
        Local_u16CouterOVF = 0;
        /* Call Application Function*/
        if (TIMERS_PFTimer0OVF != NULL)
        {
        	TIMERS_PFTimer0OVF();
        }
    }
}
/************************************************************************/
/************************************************************************/
/************************************************************************/
/* Prototype for ISR of Timer0 CTC */
void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
#if Compare_Match_Value != 0
    static Local_u16_counterCTC = 0;
    Local_u16_counterCTC++;
    if (Local_u16_counterCTC == 10000)
    {
        /* Clear Counter */
        Local_u16_counterCTC = 0;
        /* Call Back Function */
        if (TIMERS_PFTimer0CTC != NULL)
        {
        	TIMERS_PFTimer0CTC();
        }
    }
#else
    if (TIMERS_PFTimer0CTC != NULL)
    {
    	TIMERS_PFTimer0CTC();
    }
#endif
}






