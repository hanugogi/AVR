/*
 * IRSensor.c
 *
 * Created: 2018-10-11 오전 10:18:12
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

extern char flag;

ISR(INT4_vect){
	EIMSK &= 0b11101111;	//INT4 Disable
	
	RGBLED(255, 255, 255);
	flag = 1;
	EIMSK |= 0b00010000;	//INT4 Enable again
}

void IRSensor_Init(void){
	DDRE &= 0xEF;
	
	EICRB |= 0b00000011;
	EIMSK |= 0b00010000;
	sei();
}