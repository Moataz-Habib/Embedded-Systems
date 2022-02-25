
#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include "DIO_Prog.h"
#include "DIO_reg.h"

int main(void)
{
	/* Replace with your application code */
	DIO_SetPinDirection(PORTC,PIN0,OUTPUT);
	DIO_SetPinDirection(PORTC,PIN1,OUTPUT);

	DIO_SetPinDirection(PORTC,PIN2,OUTPUT);

	DIO_SetPinDirection(PORTC,PIN3,OUTPUT);

	DIO_SetPinDirection(PORTC,PIN4,OUTPUT);

	DIO_SetPinDirection(PORTC,PIN5,OUTPUT);
	DIO_SetPinDirection(PORTC,PIN6,OUTPUT);
	DIO_SetPinDirection(PORTC,PIN7,OUTPUT);

	while (1)
	{
		DIO_SetPinValue(PORTC,PIN0,HIGH);
		_delay_ms(500);
	    DIO_SetPinValue(PORTC,PIN0,LOW);

		DIO_SetPinValue(PORTC,PIN1,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN1,LOW);

		DIO_SetPinValue(PORTC,PIN2,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN2,LOW);

		DIO_SetPinValue(PORTC,PIN3,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN3,LOW);

		DIO_SetPinValue(PORTC,PIN4,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN4,LOW);

		DIO_SetPinValue(PORTC,PIN5,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN5,LOW);

		DIO_SetPinValue(PORTC,PIN6,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN6,LOW);

		DIO_SetPinValue(PORTC,PIN7,HIGH);
		_delay_ms(500);
	    DIO_SetPinValue(PORTC,PIN7,LOW);
		_delay_ms(500);

		
		
		
		
		
		
		
		DIO_SetPinValue(PORTC,PIN7,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN7,LOW);

		DIO_SetPinValue(PORTC,PIN6,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN6,LOW);

		DIO_SetPinValue(PORTC,PIN5,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN5,LOW);

		DIO_SetPinValue(PORTC,PIN4,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN4,LOW);

		DIO_SetPinValue(PORTC,PIN3,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN3,LOW);

		DIO_SetPinValue(PORTC,PIN2,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN2,LOW);

		DIO_SetPinValue(PORTC,PIN1,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN1,LOW);

		DIO_SetPinValue(PORTC,PIN0,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTC,PIN0,LOW);
		_delay_ms(500);


	}
}


