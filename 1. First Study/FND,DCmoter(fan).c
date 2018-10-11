#include<avr/io.h>
#define F_CPU 1600000
#include<util/delay.h>

void fan();

int main(void)
{
	DDRA = 0b01111111;
	DDRB = 0b00000011;
	PORTA = 0x00;
	PORTB = 0X01;

	int num[10] = {0b1110111, 0b1000100, 0b1101011, 0b1101110, 0b1011100, 0b0111110, 0b0111111, 0b1110100, 0b1111111, 0b1111110};
	int i = 0;

	while(1)
	{
		PORTA = num[i];
		_delay_ms(10000);
		i++;
		if(i > 9){
			i = 0;
		}
		fan();

	}

}

void fan()
{
	if(PORTB == 0b00000001)
	{
		PORTB = 0b00000010;
	}
	else
	{
		PORTB = 0b00000001;
	}
}