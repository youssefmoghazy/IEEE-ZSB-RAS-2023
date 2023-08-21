/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 21/8/2023       ******************/
/************** SWC  : WDT             ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#include "WDT_interface.h"
#include "WDT_private.h"
#include "../../lib/BIT_Math/BIT_MATH.h"
#include "../../lib/STD_TYPES/STD_TYPES.h"
void WDT_voidEnable(void){
	SET_BIT(WDTCR, WDTCR_WDE);

	/* Select Prescaler */
	SET_BIT(WDTCR, WDTCR_WDP0);
	SET_BIT(WDTCR, WDTCR_WDP1);
	SET_BIT(WDTCR, WDTCR_WDP2);
}

void WDT_voidDisable(void){
	SET_BIT(WDTCR, WDTCR_WDE);
	SET_BIT(WDTCR, WDTCR_WDTOE);

	WDTCR = WDT_u8_ZERO ;
}
