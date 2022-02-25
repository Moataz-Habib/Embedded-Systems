#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Prog.h"
#include "DIO_reg.h"

void DIO_SetPinValue(u8 PortIdCopy,u8 PinIdCopy,u8 PinvalCopy){
	if ((PortIdCopy <= PORTD) && (PinIdCopy <=PIN7))
	{
		if (PinvalCopy == HIGH)
		{
			switch (PortIdCopy){
				case PORTA:SET_BIT(PORTA_Register,PinIdCopy);break;
				case PORTB:SET_BIT(PORTB_Register,PinIdCopy);break;
				case PORTC:SET_BIT(PORTC_Register,PinIdCopy);break;
				case PORTD:SET_BIT(PORTD_Register,PinIdCopy);break;
			}
			
			}else if(PinvalCopy == LOW){
			
			
			switch (PortIdCopy){
				case PORTA:CLR_BIT(PORTA_Register,PinIdCopy);break;
				case PORTB:CLR_BIT(PORTB_Register,PinIdCopy);break;
				case PORTC:CLR_BIT(PORTC_Register,PinIdCopy);break;
				case PORTD:CLR_BIT(PORTD_Register,PinIdCopy);break;
			}
			
			}else{
			
		}
		
		
		}else{
		
	}
}
u8 DIO_GetPinValue(u8 PortIdCopy,u8 PinIdCopy){
	u8 res;
	if ((PortIdCopy<= PORTD) && (PinIdCopy<=PIN7))
	{
		switch (PortIdCopy)
		{
			case PORTA:
			/* Your code here */
			res= GET_BIT(PINA_Register,PinIdCopy);
			break;
			case PORTB:
			res=  GET_BIT(PINB_Register,PinIdCopy);
			break;
			case PORTC:
			res= GET_BIT(PINC_Register,PinIdCopy);
			break;
			case PORTD:
			res= GET_BIT(PIND_Register,PinIdCopy);
			break;
			default:
			/* Your code here */
			break;
		}
		}else{
		
		res=0xFF;
	}
	return res;
}
void DIO_SetPinDirection(u8 PortIdCopy,u8 PinIdCopy,u8 PinDirCopy){
	if ((PortIdCopy <= PORTD) && (PinIdCopy <=PIN7))
	{
		if (PinDirCopy == OUTPUT)
		{
			switch (PortIdCopy){
				case PORTA:SET_BIT(DDRA_Register,PinIdCopy);break;
				case PORTB:SET_BIT(DDRB_Register,PinIdCopy);break;
				case PORTC:SET_BIT(DDRC_Register,PinIdCopy);break;
				case PORTD:SET_BIT(DDRD_Register,PinIdCopy);break;
			}
			
			}else if(PinDirCopy == INPUT){
			
			
			switch (PortIdCopy){
				case PORTA:CLR_BIT(DDRA_Register,PinIdCopy);break;
				case PORTB:CLR_BIT(DDRB_Register,PinIdCopy);break;
				case PORTC:CLR_BIT(DDRC_Register,PinIdCopy);break;
				case PORTD:CLR_BIT(DDRD_Register,PinIdCopy);break;
			}
			}else{
		}
		
		
	}
	
	
	
}


void DIO_SetPortDirection(u8 PortIdCopy, u8 PortDir){
	switch (PortIdCopy)
	{
		case PORTA:
		DDRA_Register=PortDir;
		break;
		case PORTB:
		DDRB_Register=PortDir;
		break;
		case PORTC:
		DDRC_Register=PortDir;
		break;
		case PORTD:
		DDRD_Register=PortDir;
		break;
		default:
		/* Your code here */
		break;
	}
}
void DIO_SetPortValue(u8 PortId,u8 ProtVal){
	switch (PortId)
	{
		case PORTA:
		PORTA_Register=ProtVal;
		break;
		case PORTB:
		PORTB_Register=ProtVal;
		break;
		case PORTC:
		PORTC_Register=ProtVal;
		break;
		case PORTD:
		PORTD_Register=ProtVal;
		break;
		default:
		/* Your code here */
		break;
	}
	
}