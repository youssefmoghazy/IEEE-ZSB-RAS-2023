/********************************************************/
/************** Name : Youssef Moghazy ******************/
/********************************************************/
#include "STD_TYPES.h"
#include "LCD_interface.h"
#include "DIO_Interface.h"
#include <util/delay.h>
#define DELAY 100
int main(void)
{
	
	DIO_voidInit();
	LCD_voidInit();
	
	LCD_u8GoToXY(LCD_u8_Line1,LCD_u8_FirstPostion);
	LCD_voidSendChar('Y');
	LCD_voidSendChar('o');
	LCD_voidSendChar('u');
	LCD_voidSendChar('s');
	LCD_voidSendChar('s');
	LCD_voidSendChar('e');
	LCD_voidSendChar('f');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar('Y');
	LCD_voidSendChar('o');
	LCD_voidSendChar('u');
	LCD_voidSendChar('s');
	LCD_voidSendChar('s');
	LCD_voidSendChar('e');
	LCD_voidSendChar('f');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_u8GoToXY(LCD_u8_Line2,7);
	LCD_voidSendChar('Y');
	LCD_voidSendChar('o');
	LCD_voidSendChar('u');
	LCD_voidSendChar('s');
	LCD_voidSendChar('s');
	LCD_voidSendChar('e');
	LCD_voidSendChar('f');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar(' ');
	LCD_voidSendChar('Y');
	LCD_voidSendChar('o');
	LCD_voidSendChar('u');
	LCD_voidSendChar('s');
	LCD_voidSendChar('s');
	LCD_voidSendChar('e');
	LCD_voidSendChar('f');
	
	while (DIO_u8_CONDITION_IS_TRUE)
	{
		for (u8 iteration=LCD_u8_FirstPostion;iteration <= LCD_u8_LastPostion;iteration++)
		{
			LCD_voidSendCmnd(LCD_u8_ShiftToRight);
			_delay_ms(DELAY);
			
		}//for
		for (u8 iteration=LCD_u8_FirstPostion;iteration <= LCD_u8_LastPostion;iteration++)
		{
			
			LCD_voidSendCmnd(LCD_u8_ShiftToLeft);
			_delay_ms(DELAY);
		}//for
	}//while
}//main

