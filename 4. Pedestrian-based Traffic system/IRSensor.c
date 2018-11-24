	/*
 * IRSensor.c
 *
 * Created: 2018-10-11 오전 10:18:12
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

extern char flag = 0;

ISR(INT4_vect){
	EIMSK &= 0b11101111;	//INT4 Disable
	TIMSK &= ~(0x01);		//TIM0 Ovf Disable
	
	flag = 1;
}

void IRSensor_Init(void){
	DDRE = 0x00;
	
	EICRB |= 0b00000011;
	EIMSK |= 0b00010000;
	sei();
}