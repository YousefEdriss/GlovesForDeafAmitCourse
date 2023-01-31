/*
 * LCD_Config.h
 *
 *  Created on: Aug 27, 2022
 *      Author: HP
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#include "DIO_Interface.h"


//LCD Mode select
#define LCD_4Bit_Mode 4
#define LCD_8Bit_Mode 8


//LCD Data or Control
#define LCD_Data_Port PA
#define LCD_CTRL_Port PB

//LCD Pins
#define LCD_D4_Pin Pin4
#define LCD_D5_Pin Pin5
#define LCD_D6_Pin Pin6
#define LCD_D7_Pin Pin7

//LCD CTRL Pins
#define LCD_RS_Pin Pin1
#define LCD_RW_Pin Pin2
#define LCD_EN_Pin Pin3

#define LCD_Mode LCD_4Bit_Mode

#endif /* LCD_CONFIG_H_ */
