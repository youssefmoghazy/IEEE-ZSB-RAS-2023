//MCAL Layer
#include"../MCAL/DIO/DIO_interface.h"
#include "../MCAL/UART/UART_interface.h"
//LIB Layer
#include"../lib/STD_TYPES/STD_TYPES.h"
#include "../HAL/LCD/LCD_interface.h"
#include<util/delay.h>
//HAL Layer

// Main function
int main(){
	u8 local_u8Data;
	DIO_voidInit();
	UART_voidinit();
	while(1)
	{
		UART_void_resive_databyte(&local_u8Data);
		if(local_u8Data== 'a')
		{
			DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_HIGH);
			_delay_ms(500);
		}
		if(local_u8Data== 'b')
		{
			DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_LOW);
		}
	}

    return 0;
}
