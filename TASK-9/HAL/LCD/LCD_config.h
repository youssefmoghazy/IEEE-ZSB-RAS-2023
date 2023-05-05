/********************************************************/
/************** Name : Youssef Moghazy ******************/
/************** Date : 21/3/2023       ******************/
/************** SWC  : LCD             ******************/
/************** Version : 1.0          ******************/
/********************************************************/
#ifndef LCD_CONFIG.H
#define LCD_CONFIG.H

#define LCD_u8_CONTROL_PORT			DIO_u8_PORTA
#define LCD_u8_RS_PIN				DIO_u8_PIN0
#define LCD_u8_RW_PIN				DIO_u8_PIN1
#define LCD_u8_E_PIN				DIO_u8_PIN2

#define LCD_u8_DATA_PORT 			DIO_u8_PORTD
/** OPTIONS: 1- LCD_u8_MODE_8_BIT
 * 			 2- LCD_u8_MODE_4_BIT
 */

#define LCD_u8_MODE					LCD_u8_MODE_4_BIT
#endif
