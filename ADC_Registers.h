


#ifndef ADC_REGISTERS_H_
#define ADC_REGISTERS_H_

#define ADMUX	 	 (*(volatile u8*)0x27)

//ADC CONTROL AND STATUS REGISTER A
#define ADCSRA	  	 (*(volatile u8*)0x26)

//THE ADC DATA REGISTER
#define ADCL 		 (*(volatile u8*)0x24)
#define ADCH  	   	 (*(volatile u8*)0x25)
//read two data register
#define ADC_u16  	 (*(volatile u16*)0x24)

// SPECIAL FUNCTION IO REGISTER
#define SFIOR  		 (*(volatile u8*)0x50)



#endif /* ADC_REGIS_H_ */
