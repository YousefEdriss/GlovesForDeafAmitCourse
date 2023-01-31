

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "ADC_Registers.h"
#define ADC_CH_0	0
#define ADC_CH_1	1
#define ADC_CH_2	2
#define ADC_CH_3	3
#define ADC_CH_4	4
#define ADC_CH_5	5
#define ADC_CH_6	6
#define ADC_CH_7	7

void ADC_init(void);
void ADC_GetDigitalValue(u8 channelNum, u16* digitalValue);
void ADC_GetAnalogValue(u8 channelNum, u16* analogReading);



#endif /* ADC_INTERFACE_H_ */ /* ADC_H_ */
