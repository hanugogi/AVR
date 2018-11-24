/*
 * Joystick.c
 *
 * Created: 2018-10-11 오전 10:17:56
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

volatile extern int coordinate;

ISR(ADC_vect){
	coordinate = ADC;
}

void Joystick_Init(void){
	DDRF = 0x00;
	
	ADMUX = 0b01000000;		//AVCC, ADC0
	ADCSRA = 0b10001110;	//ADC INT Enable, 64 Div
	
	sei();
}

int Joystick_Read(void){
	ADCSRA |= 0x40;			//Start ADC0 Conversion
	
	_delay_us(1);
}