//MCAL Layer
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/TIMERS/TIMERS_interface.h"
#include "../MCAL/GI/GI_interface.h"
#include "../MCAL/ADC/ADC_interface.h"
//LIB Layer
#include"../lib/STD_TYPES/STD_TYPES.h"
//HAL Layer
#include "../HAL/LCD/LCD_interface.h"

int main(void){
	u16 digitalValue, servoValue;
	DIO_u8SetPinDirection(DIO_u8_PORTA, DIO_u8_PIN0, DIO_u8_INPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD, DIO_u8_PIN5, DIO_u8_OUTPUT);

	TIMERS_voidTimer0Init();
	TIMERS_voidTimer1Init();
	ADC_voidInit();

	while(1){
		ADC_GetDigitalValueSynchNonBlocking(ADC_u8_CHANNAL_0, &digitalValue);
		servoValue = (digitalValue * 1000UL) / 1023;
		TIMERS_voidTIMER1SetCompareMatchValueA(servoValue);
	}
	return 0;
}
