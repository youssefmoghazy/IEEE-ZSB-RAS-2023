//    »”„ «··Â «·—Õ„‰ «·—ÕÌ„
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include <util/delay.h>
#define DIO_u8_case1   0X01
#define DIO_u8_case2   0X02
#define DIO_u8_case3   0X04
int main(void)
{
	DIO_voidInit();
	while(1)
	{
		u8  dip_switch ;
		  DIO_u8GetPortValue(DIO_u8_PORTB, &dip_switch);
		//Flashing every 500 ms 
		if(  dip_switch == DIO_u8_case1)
			{
			DIO_u8SetPortValue(DIO_u8_PORTD,0XFF);
			_delay_ms(500);
			DIO_u8SetPortValue(DIO_u8_PORTD, 0X00);
			_delay_ms(500);
			}
			//Shifting Right every 500 ms 
			else if( dip_switch == DIO_u8_case2 )
			{
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
			_delay_ms(500);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_LOW);
			}
			//Shifting Left every 500 ms 
			else if( dip_switch == DIO_u8_case3 )
			{
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_HIGH);
				_delay_ms(500);
				DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_LOW);
			}
			else
			{
				DIO_u8SetPortValue(DIO_u8_PORTD, 0X00);
			}
			
	}
return 0;	
}