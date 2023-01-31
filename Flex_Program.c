
#define F_CPU 16000000UL
#include <util/delay.h>


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_Interface.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "LCD_Config.h"
#include "FLEX_interface.h"


extern u16 AnalogVal2,AnalogVal4,AnalogVal5,AnalogVal6,AnalogVal7;



void FLEX_init(void)
{
	DIO_SetPinDir(PA,Pin2,Pin_Input);
	DIO_SetPinDir(PA,Pin4,Pin_Input);
	DIO_SetPinDir(PA,Pin5,Pin_Input);
	DIO_SetPinDir(PA,Pin6,Pin_Input);
	DIO_SetPinDir(PA,Pin7,Pin_Input);
}

void FLEX_GetAnalogValue(void)
{
		ADC_GetAnalogValue(ADC_CH_2,&AnalogVal2);
		ADC_GetAnalogValue(ADC_CH_4,&AnalogVal4);
		ADC_GetAnalogValue(ADC_CH_5,&AnalogVal5);
		ADC_GetAnalogValue(ADC_CH_6,&AnalogVal6);
		ADC_GetAnalogValue(ADC_CH_7,&AnalogVal7);
}

void FLEX_Translation(void) //NEED TO CHANGE
{
	  if ((FINGER1>860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"I Love You <3");

	  }

	  else if ((FINGER1>860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"That's Awesome !");
	  }

	  else if ((FINGER1>860)  && (FINGER2>980)  && (FINGER3>980)  && (FINGER4>950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"HELLO !");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4<950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"Good Job");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3>980)  && (FINGER4>950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"I'm Watching You");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"You !");
	  }

	  else if ((FINGER1>860)  && (FINGER2<980)  && (FINGER3>980)  && (FINGER4>950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"I Really Love U");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4<950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"Sorry");
	  }

	  else if ((FINGER1>860)  && (FINGER2>980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"Like ");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"Brother");
	  }

	  else if ((FINGER1>860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4<950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"Phone");
	  }

	  else if ((FINGER1>860)  && (FINGER2>980)  && (FINGER3>980)  && (FINGER4<950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"Perfect");
	  }

	  else if ((FINGER1>860)  && (FINGER2<980)  && (FINGER3<980)  && (FINGER4<950)  && (FINGER5<425))
	  {
		  LCD_sendString((u8*)"End");
	  }

	  else if ((FINGER1<860)  && (FINGER2<980)  && (FINGER3>980)  && (FINGER4>950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"Gun");
	  }

	  else if ((FINGER1>860)  && (FINGER2>980)  && (FINGER3<980)  && (FINGER4>950)  && (FINGER5>425))
	  {
		  LCD_sendString((u8*)"Favorite");
	  }


	  else
	  {
		  LCD_sendString((u8*)"Reading");
		  _delay_ms(55);
		  LCD_sendChar('.');
		  _delay_ms(55);
		  LCD_sendChar('.');
		  _delay_ms(55);
		  LCD_sendChar('.');
		  _delay_ms(55);
		  LCD_sendChar('.');
		  _delay_ms(30);
		  LCD_sendChar('.');
		  _delay_ms(30);
		  LCD_sendChar('.');
	  }

}

void FLEX_DisplayValue(void)//NEED TO CHANGE
{
	//write: >
	LCD_goToSpecificPosition(LCD_LINE_ONE,0);
	LCD_sendChar('>');
	LCD_goToSpecificPosition(LCD_LINE_ONE,6);
	LCD_sendChar('>');
	LCD_goToSpecificPosition(LCD_LINE_ONE,12);
	LCD_sendChar('>');

	LCD_goToSpecificPosition(LCD_LINE_TWO,0);
	LCD_sendChar('>');
	LCD_goToSpecificPosition(LCD_LINE_TWO,6);
	LCD_sendChar('>');





	//write analog Values
	LCD_goToSpecificPosition(LCD_LINE_ONE,1);
	LCD_writeNumber(AnalogVal4);
	LCD_goToSpecificPosition(LCD_LINE_ONE,7);
	LCD_writeNumber(AnalogVal5);
	LCD_goToSpecificPosition(LCD_LINE_ONE,13);
	LCD_writeNumber(AnalogVal2);


	LCD_goToSpecificPosition(LCD_LINE_TWO,1);
	LCD_writeNumber(AnalogVal6);
	LCD_goToSpecificPosition(LCD_LINE_TWO,7);
	LCD_writeNumber(AnalogVal7);


	LCD_goToSpecificPosition(LCD_LINE_TWO,15);
}
