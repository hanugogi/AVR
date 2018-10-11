#include<avr/io.h>
#define F_CPU 1600000
#include<util/delay.h>

int main(void)
{
	DDRA = 0b11111111;  //A PORT 전부 출력 설정
	PORTA = 0x00; //출력 전부 0

	while(1)
	{
		PORTA = 0b000000010;
		_delay_ms(2500);
		PORTA = 0b000000001;
		_delay_ms(2500);
	}
}

