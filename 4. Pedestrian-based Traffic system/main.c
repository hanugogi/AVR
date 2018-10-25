/*
 * SecSmesterIndividualProject.c
 *
 * Created: 2018-10-11 오전 10:17:24
 * Author : KHW
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

volatile extern char flag;
int *coordinate;

void TrafficControler(void);

int main(void){
	char *strX;
	char *strY;
	
	if(!flag){
		IRSensor_Init();
		Joystick_Init();
		RGBLED_Init();
		LCD_Init();
		
		_delay_ms(10);
		DATA_Str("Hello");
	}
		
	while(1){
		if(!flag)
			TrafficControler();
		else{
			COMMAND(0x01);
			_delay_ms(10);
			
			coordinate = Joystick_Read();
			
			itoa(coordinate[0], strX, 10);
			itoa(coordinate[1], strY, 10);
			
			COMMAND(0x80);
			DATA_Str(strX);
			COMMAND(0xC0);
			DATA_Str(strY);
			_delay_ms(990);
		}
	}
}

void TrafficControler(void){
	RGBLED_Green();
	_delay_ms(10000);
	RGBLED_Orange();
	_delay_ms(1500);
	RGBLED_Red();
	_delay_ms(4500);
}