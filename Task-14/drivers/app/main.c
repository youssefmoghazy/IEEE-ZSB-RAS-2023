#include "../lib/BIT_Math/BIT_MATH.h"
#include "../lib/STD_TYPES/STD_TYPES.h"
#include "../MCAL/DIO/DIO_Interface.h"
#include "../HAL/LCD/LCD_interface.h"
#include "../HAL/KPD/KPD_interface.h"
#include "../HAL/Stepper_motor/stepper_motor_interface.h"
#include <util/delay.h>
#define F_CPU 8000000UL
#define pass	 {'1','2','3','4'}
#define passlenght	4
int main(void)
{
	u8 Local_u8Key,counter=0,flag=0;
	u8 password[]=pass;
	u8 userpass[passlenght];
	DIO_voidInit();
	LCD_voidInit();
	stepperMotor_VoidInti();
	
	LCD_voidSendString("Welcome..");
	_delay_ms(500);
	LCD_voidClear();
	LCD_u8GoToXY(LCD_u8_Line1,0);
	LCD_voidSendString("Enter password");
	_delay_ms(500);
	LCD_u8GoToXY(LCD_u8_Line2,5);
	while (1)
	{
		KPD_u8GetKeyState(&Local_u8Key);
		
		if (Local_u8Key!=KPD_u8_KEY_NOT_PRESSED)
		{
			LCD_voidSendChar('*');
			userpass[counter]=Local_u8Key;
			counter++;	
		}
		if (counter==passlenght)
		{
			for (int internal=0;internal<passlenght;internal++)
			{
				if (password[internal]!=userpass[internal])
				{
					flag=1;
					break;
				}
			}
			if (flag)
			{
				LCD_voidClear();
				LCD_u8GoToXY(LCD_u8_Line1,0);
				LCD_voidSendString("Wrong password!");
				_delay_ms(1000);
			}
			else
			{
				LCD_voidClear();
				LCD_voidSendString("Correct Password");
				_delay_ms(1000);
				stepperMotor_u8RotateBy(45,ROTATE_CW);

			}
		}
	}
}

