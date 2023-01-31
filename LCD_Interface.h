/*
 * LCD_Interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: HP
 */


#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_


#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

// MACROS For LCD Line Number
#define LCD_LINE_ONE 1
#define LCD_LINE_TWO 2


/* LCD HW Pins */
#define RS 4
#define RW 5
#define E  6
#define LCD_CTRL_PORT PORTD
#define LCD_CTRL_PORT_DIR DDRD
#define LCD_DATA_PORT PORTC
#define LCD_DATA_PORT_DIR DDRC

/* LCD Commands */
#define CLEAR_COMMAND 0x01
#define HOME 0x02
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80
#define LCD_DisOff_CursOff 0x08

void LCD_sendCommand(unsigned char command);
void LCD_displayCharacter(unsigned char data);
void LCD_displayString(const char *Str);
void LCD_init(void);
void LCD_clearScreen(void);
void LCD_displayStringRowColumn(unsigned char row,unsigned char col,const char *Str);
void LCD_goToRowColumn(unsigned char row,unsigned char col);
void LCD_intgerToString(int data);



//EXTRAS
void LCD_sendString(u8* data);
void LCD_typeString(u8* data);  //Send string with typing effect
void LCD_writeNumber(u32 number);
void LCD_clear(void);
void LCD_shift(u8 shiftDirection);
void LCD_goToSpecificPosition(u8 lineNumber,u8 position);
void LCD_setPinDirections(void);
void LCD_init(void);
void LCD_sendCmnd(u8 cmnd);
void LCD_sendChar(u8 data);

#endif /* LCD_H_ */
