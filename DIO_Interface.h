/*
 * DIO_Interface.h
 *
 *  Created on: Aug 25, 2022
 *      Author: Administrator
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Register.h"

#define PA 0
#define PB 1
#define PC 2
#define PD 3

#define Port_Input 0x00
#define Port_Output 0Xff

#define Port_HIGH 0xff
#define Port_LOW 0x00

#define Pin_Input 0
#define Pin_Output 1

#define Pin0 0
#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define Pin5 5
#define Pin6 6
#define Pin7 7

#define HIGH 1
#define LOW 2

void DIO_SetPortDir(u8 PortID, u8 Dir);
void DIO_SetPortVal(u8 PortID,u8 Val);
u8 DIO_GetPortVal(u8 PortID);
void DIO_SetPinDir(u8 PortID,u8 PinID ,u8 Dir);
void DIO_SetPinVal(u8 PortID,u8 PinID ,u8 Val);
u8 DIO_GetPintVal(u8 PortID , u8 PinID);


#endif /* DIO_INTERFACE_H_ */
