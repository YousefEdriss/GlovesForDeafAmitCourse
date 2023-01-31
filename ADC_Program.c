#include "ADC_Interface.h"

void ADC_init(void)
{

	SET_BIT(ADMUX,6);
	CLR_BIT(ADMUX,7);

	//SELECT RIGHT ADJUSTMENT
	CLR_BIT(ADMUX,5);

	//SINGLE CONVERSATION MODE
	CLR_BIT(ADCSRA,5);

	//PRESCALER 128 FOR 16MHZ =125KHZ
	SET_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);

	//ADC ENABLE
	SET_BIT(ADCSRA,7);
}

void ADC_GetDigitalValue(u8 channelNum, u16* digitalValue)
{
	//CLEAR ADMUX CHANNEL BITS
	ADMUX &=0b11100000;
	//SELECT CHANNE NUMBER
	ADMUX |= channelNum;
	//start conversation
	SET_BIT(ADCSRA,6);
	//WAIT FOR THE FLAG OF ADC
	while (0== GET_BIT(ADCSRA,4));
	//CLEAR FLAG
	SET_BIT(ADCSRA,4);
	//READ DIGITAL VALUE
	*digitalValue=ADC_u16;

}

void ADC_GetAnalogValue(u8 channelNum, u16* analogReading)
	{
			u16 digitalVal;
			ADC_GetDigitalValue(channelNum ,&digitalVal);

			*analogReading=(((u32)digitalVal*5000UL)/(1024));

	}













