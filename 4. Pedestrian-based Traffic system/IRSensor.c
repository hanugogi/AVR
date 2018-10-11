/*
 * IRSensor.c
 *
 * Created: 2018-10-11 오전 10:18:12
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

ISR(INT4_vect){
	EIMSK &= 0b11101111;	//INT4 Disable
	
	
	
	EIMSK |= 0b00010000;	//INT4 Enable again
}

void IRSensor_Init(void){
	DDRE &= 0xF0;
	
	EICRB |= 0b00000011;
	sei();
}