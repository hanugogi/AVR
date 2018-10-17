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

int main(void){
	
	IRSensor_Init();
	Joystick_Init();
	RGBLED_Init();
	
	while (1){
		if(!flag)
			TrafficControler();
		DATA_Str("X: ");
		DATA_Str("Y: ");
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