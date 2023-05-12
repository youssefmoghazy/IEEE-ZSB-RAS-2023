/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 21/3/2023       ******************/
/************** SWC  : LCD             ******************/
/************** Version : 1.0          ******************/
/********************************************************/


/********************************** Header Files INCLUSIONS ****************************/
/* Lib layer */
#include "STD_TYPES.h"
#include "BIT_MATH.H"
#include <util/delay.h>
/*MCAL*/
#include "DIO_interface.h" //to config pins 

/*HAL*/
#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"
/***************************************************************************************/

/*
 -----------                   ----------
 | ATmega32  |                 |   LCD    |
 |           |                 |          |
 |        PD7|---------------->|D7        |
 |        PD6|---------------->|D6        |
 |        PD5|---------------->|D5        |
 |        PD4|---------------->|D4        |
 |        PD3|---------------->|D3        |
 |        PD2|---------------->|D2        |
 |        PD1|---------------->|D1        |
 |        PD0|---------------->|D0        |
 |           |                 |          |
 |        PA2|---------------->|E         |
 |        PA1|---------------->|RW        |
 |        PA0|---------------->|RS        |
 -----------                   ----------
 */

/***************************************************************************************/
/********************************** Fucntion Definition ********************************/
/***************************************************************************************/

/***************************************************************************************/
/* Description! Apply initialization sequence for LCD module                           */
/* Input      ! Nothing                                                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void LCD_voidInit(void)   
{
	_delay_ms(35);
	/* function set command*/
	LCD_voidSendCmnd(0b00111000);
	_delay_us(40);
	/*Display on/off control*/
	LCD_voidSendCmnd(0b00001111);
	_delay_us(40);
	/*display clearing*/
	LCD_voidSendCmnd(0x01);
	_delay_ms(2);
	LCD_voidSendCmnd(0b00000110);
	
	 
}
/***************************************************************************************/
/* Description! Interface to send the configuration commands to the LCD Driver         */
/* Input      ! Command number                                                         */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void LCD_voidSendCmnd(u8 copy_u8Cmnd)
{
    /*step1 : RS=0*/
    DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RS_PIN,DIO_u8_LOW);
    /* RW =0 */
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RW_PIN,DIO_u8_LOW);
	/*Write command*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,copy_u8Cmnd);
	/* E = 1 */
    DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_E_PIN,DIO_u8_HIGH);
	_delay_us(1);
    /* E = 0  */
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_E_PIN,DIO_u8_LOW);
}
/***************************************************************************************/
/* Description! Interface to write character on LCD screen                             */
/* Input      ! Data to send                                                           */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void LCD_voidSendChar(u8 Copy_u8Char)
{
    /*step1 : RS=1*/
    DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RS_PIN,DIO_u8_HIGH);
    /* RW =0 */
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_RW_PIN,DIO_u8_LOW);
	/*Write Char*/
	DIO_u8SetPortValue(LCD_u8_DATA_PORT,Copy_u8Char);
	/* E = 1 */
    DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_E_PIN,DIO_u8_HIGH);
	_delay_us(1);
    /* E = 0  */
	DIO_u8SetPinValue(LCD_u8_CONTROL_PORT,LCD_u8_E_PIN,DIO_u8_LOW);
}
/***************************************************************************************/
/* Description! Interface to go to specific position on LCD screen                     */
/* Input      ! Data to send                                                           */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
u8 LCD_u8GoToXY(u8 Copy_u8LineNum , u8 Copy_u8Location)
{
	u8 Local_u8ErrorState;
	if(Copy_u8Location <= 39)
	{
		switch(Copy_u8LineNum)
		{
			case LCD_u8_Line1 : LCD_voidSendCmnd(0+Copy_u8Location);break;
			case LCD_u8_Line2 : LCD_voidSendCmnd(0xc0+Copy_u8Location);break;
			default			  :	Local_u8ErrorState = STD_TYPES_NOK;
		}
	}
	else
	{
		Local_u8ErrorState = STD_TYPES_NOK;
	}
}
/***************************************************************************************/
/* Description! Interface to write string on LCD screen                                */
/* Input      ! Pointer to the string                                                  */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void LCD_voidSendString(u8 *Copy_pu8String) {

	//	/* Local loop index */
	//	u8 u8Index = 0;
	u8 iteration = 0;
	//	while (pu8StringCpy[u8Index] != '\0')
	for (iteration = 0; Copy_pu8String[iteration] != '\0'; iteration++) {
		/* Write Character on LCD */
		LCD_voidSendChar(Copy_pu8String[iteration]);

		//		/* Increment local loop index */
		//		u8Index++;
	}
}