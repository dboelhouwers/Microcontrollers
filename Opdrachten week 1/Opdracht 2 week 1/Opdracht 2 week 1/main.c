#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

void wait( int ms )
{
	for (int i=0; i<ms; i++)
	{
		_delay_ms( 1 );		// library function (max 30 ms at 8MHz)
	}
}

int main( void )
{
	DDRD = 0b11111111; // All pins PORTD are set to output
	
	while (1)
	{
		PORTD = 0b00000000;
		wait(1000);
		PORTD = 0b10000000;
		wait(1000);
	}
}