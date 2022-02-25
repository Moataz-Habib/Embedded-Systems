
#include <avr/io.h>

int main(void)
{
	unsigned  char count =0;
	DDRC=0xff;
	DDRD=0x00;
	PORTC=0;
	PORTD=0xff;

    while (1) 
    {
		
		if (!(PIND&(1<<PIND0)))
		{
			if (count==9)
			{
				count=8;
			}
			PORTC=++count;
			while(!(PIND&(1<<PIND0)));
		}
		
		if (!(PIND&(1<<PIND1)))
		{
			if (count==0)
			{
				count=1;
			}
			PORTC=--count;
			while(!(PIND&(1<<PIND1)));

		}
		if (!(PIND&(1<<PIND2)))
		{
			
			count=0;
			PORTC=count;
			while(!(PIND&(1<<PIND2)));
		}
    }
}

