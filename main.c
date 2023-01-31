/*
 * main.c
 *
 *  Created on: Aug 27, 2022
 *      Author: HP
 */

#define F_CPU 16000000UL
#include <util/delay.h>

	/*UTILES LIB*/
	#include "STD_TYPES.h"
	#include "BIT_MATH.h"


	/* MCAL */
	#include "ADC_Interface.h"
	#include "DIO_Interface.h"
	#include "LCD_Interface.h"
	#include "LCD_Config.h"


	/* HAL */
	#include "FLEX_interface.h"

u16 AnalogVal2,AnalogVal4,AnalogVal5,AnalogVal6,AnalogVal7;

int main(void)
{

    LCD_setPinDirections();
	FLEX_init();
	ADC_init();
	LCD_init();



	while (1)
    {

 FLEX_GetAnalogValue();

 FLEX_Translation();




   _delay_ms(400);
   LCD_clear();

	}


}
