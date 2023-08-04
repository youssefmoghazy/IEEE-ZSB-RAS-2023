//MCAL Layer
#include"../MCAL/DIO/DIO_interface.h"
#include "../MCAL/ADC/ADC_interface.h"
//LIB Layer
#include"../lib/STD_TYPES/STD_TYPES.h"
#include "../HAL/LCD/LCD_interface.h"
#include<util/delay.h>
#define F_CPU 8000000UL
//HAL Layer

// Main function
int main(){
	u8 flag=1;
	u16 Local_u16DigitalValue,Local_u16AnalogValue,Local_u16TempValue,Local_u16Lasttemp;
	DIO_voidInit();
	LCD_voidInit();
	ADC_voidInit();

	while(1)
	{
		ADC_GetDigitalValueSynchNonBlocking(ADC_u8_CHANNAL_0,&Local_u16DigitalValue);
		Local_u16AnalogValue=((Local_u16DigitalValue*5000UL)/1024);
		Local_u16TempValue=Local_u16AnalogValue/10;
		if(flag)
		{
			Local_u16Lasttemp=Local_u16TempValue;
			LCD_Send_Number(Local_u16TempValue);
			flag=0;
		}
		if(Local_u16Lasttemp!=Local_u16TempValue)
		{
			LCD_u8GoToXY(LCD_u8_Line1,0);
			LCD_Send_Number(Local_u16TempValue);
			Local_u16Lasttemp=Local_u16TempValue;
		}


		if(Local_u16TempValue<=25)
		{
			//turn on led1
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_HIGH);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_LOW);

		}
		else if(Local_u16TempValue<=30)
		{
			//turn on led2
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_HIGH);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_LOW);

		}
		else if(Local_u16TempValue>30)
		{
			//turn on led3
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_HIGH);

		}
	}

    return 0;
}
