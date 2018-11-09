/*
 * SecSmesterIndividualProject.c
 *
 * Created: 2018-10-11 오전 10:17:24
 * Author : KHW
 */ 

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

void TrafficControler(void);

extern char flag;

int main(void){
	char str[16];
	int *coordinate;
	
	IRSensor_Init();
	Joystick_Init();
	LCD_Init();
		
	if(!flag){
		
		RGBLED_Init();
		
		_delay_ms(10);
		DATA_Str("Hello");
	}
		
	while(1){
		if(!flag)
			TrafficControler();
		else{
			COMMAND(0x01);
			_delay_ms(25);
			
			coordinate = Joystick_Read();
			
			sprintf(str, "X: %4d  Y: %4d", coordinate[0], coordinate[1]);
			
			DATA_Str(str);
			_delay_ms(500);
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