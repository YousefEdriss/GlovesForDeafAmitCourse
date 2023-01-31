#ifndef FINAL_INTERFACE_H_
#define FINAL_INTERFACE_H_


// (FINGER_1>860)  && (FINGER_2>980)  && (FINGER_3>980)  && (FINGER_4>950)  && (FINGER_5>425)   [ ideal  values for analog Readings ]


/* MACROS FOR FINGERS ANALOG VALUES */
#define FINGER1  AnalogVal5
#define FINGER2  AnalogVal4
#define FINGER3  AnalogVal7
#define FINGER4  AnalogVal6
#define FINGER5  AnalogVal2



void FLEX_init(void);
void FLEX_GetAnalogValue(void);
void FLEX_Translation(void);
void FLEX_DisplayValue(void);




#endif /* FINAL_INTERFACE_H_ */
