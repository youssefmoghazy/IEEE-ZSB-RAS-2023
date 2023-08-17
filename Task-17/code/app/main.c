//MCAL Layer
#include"../MCAL/DIO/DIO_interface.h"
#include "../MCAL/TIMERS/TIMERS_interface.h"
#include "../MCAL/GI/GI_interface.h"
//LIB Layer
#include"../lib/STD_TYPES/STD_TYPES.h"
//HAL Layer
#include "../HAL/LCD/LCD_interface.h"
// Main function
void toggleLed(void);
int main(){
	DIO_voidInit();
	LCD_voidInit();
	GI_voidEnable();
	DIO_u8SetPinDirection(DIO_u8_PORTA, DIO_u8_PIN0, DIO_u8_OUTPUT);
	DIO_u8SetPinValue(DIO_u8_PORTA, DIO_u8_PIN0, DIO_u8_HIGH);
	TIMERS_u8TimersCTCSetCallBack(&toggleLed);
	TIMERS_voidTimer0Init();
	LCD_voidSendString("Counter: ");
	while(1);
	return 0;
}
void toggleLed(void){
	static u8 counter = 0,ledState = 0;
	LCD_u8GoToXY(LCD_u8_Line1, 9);
	LCD_Send_Number(++counter);
	if(ledState == 0){
		DIO_u8SetPinValue(DIO_u8_PORTA, DIO_u8_PIN0, DIO_u8_HIGH);
		ledState = 1;
	}else{
		DIO_u8SetPinValue(DIO_u8_PORTA, DIO_u8_PIN0, DIO_u8_LOW);
		ledState = 0;
	}
}
