/*
 * SecSmesterIndividualProject.c
 *
 * Created: 2018-10-11 오전 10:17:24
 * Author : KHW
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

extern char flag = 0;
int coordinate[2];

int main(void){
	
	IRSensor_Init();
	Joystick_Init();
	RGBLED_Init();
	
	LCD_Init();
	DATA_Str("Hello");
	/*while(1){
		if(!flag)
			TrafficControler();
		else{
			DATA_Str("X: ");
			DATA_Num(coordinate[0]);
			DATA_Str("Y: ");
			DATA_Num(coordinate[1]);
			COMMAND(0x01);
		}
	}*/
}

void TrafficControler(void){
	RGBLED_Green();
	_delay_ms(10000);
	RGBLED_Orange();
	_delay_ms(1500);
	RGBLED_Red();
	_delay_ms(4500);
}