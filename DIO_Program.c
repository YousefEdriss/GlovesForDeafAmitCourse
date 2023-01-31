/*
 * DIO_Program.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Administrator
 */

#include "DIO_Interface.h"


void DIO_SetPortDir(u8 PortID, u8 Dir)
 {
	 switch (PortID)
	 {
	 case PA :
		 DDRA=Dir;
		 break;
	 case PB :
		 DDRB=Dir;
		 break;
	 case PC :
		 DDRC=Dir;
		 break;
	 case PD :
		 DDRD=Dir;
		 break;
	 default : break;


	 }
 }

void DIO_SetPortVal(u8 PortID,u8 Val)
{
	switch (PortID)
	{
	case PA :
		PORTA=Val;
		break;
	case PB :
			PORTB=Val;
			break;
	case PC :
			PORTC=Val;
			break;
	case PD :
			PORTD=Val;
			break;
	default : break;
	}
}
u8 DIO_GetPortVal(u8 PortID)
{
	u8 result;
	switch (PortID)
	{
	case PA :
		result=PORTA;
		break;
	case PB :
		result=PORTB;
		break;
	case PC :
		result=PORTC;
		break;
	case PD :
		result=PORTD;
		break;
	default :
		break;
	}
	return result;
}
void DIO_SetPinDir(u8 PortID,u8 PinID ,u8 Dir)
{
	if (Dir==Pin_Input)
	{
		switch(PortID)
		{
		case PA :
			CLR_BIT(DDRA,PinID);
			break;
		case PB :
			CLR_BIT(DDRB,PinID);
			break;
		case PC :
			CLR_BIT(DDRC,PinID);
			break;
		case PD :
			CLR_BIT(DDRD,PinID);
			break;
		default :break;
		}
	}
	else if (Dir==Pin_Output)
	{
		switch(PortID){
        case PA :
			SET_BIT(DDRA,PinID);
			break;
		case PB :
			SET_BIT(DDRB,PinID);
			break;
		case PC :
			SET_BIT(DDRC,PinID);
			break;
		case PD :
			SET_BIT(DDRD,PinID);
			break;
		default :break;
		}
	}
}
void DIO_SetPinVal(u8 PortID,u8 PinID ,u8 Val)
{
	if (Val==LOW)
		{
			switch(PortID)
			{
			case PA :
				CLR_BIT(PORTA,PinID);
				break;
			case PB :
				CLR_BIT(PORTB,PinID);
				break;
			case PC :
				CLR_BIT(PORTC,PinID);
				break;
			case PD :
				CLR_BIT(PORTD,PinID);
				break;
			default :break;
			}
		}
		else if (Val==HIGH)
		{
			switch(PortID){
	        case PA :
				SET_BIT(PORTA,PinID);
				break;
			case PB :
				SET_BIT(PORTB,PinID);
				break;
			case PC :
				SET_BIT(PORTC,PinID);
				break;
			case PD :
				SET_BIT(PORTD,PinID);
				break;
			default :break;
			}
		}
}
u8 DIO_GetPintVal(u8 PortID , u8 PinID)
{
	u8 result;
	switch(PortID){
	        case PA :
				result=GET_BIT(PINA,PinID);
				break;
			case PB :
				result=GET_BIT(PINB,PinID);
				break;
			case PC :
				result=GET_BIT(PINC,PinID);
				break;
			case PD :
				result=GET_BIT(PIND,PinID);
				break;
			default :break;
	}
	return result;
}
