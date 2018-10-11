/*
 * Joystick.c
 *
 * Created: 2018-10-11 오전 10:17:56
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

char XorY = 0;
int coordinate[2] = {0, 0};

ISR(ADC_vect){
	switch (XorY){
		case 112: coordinate[0] = (ADCH << 8) + ADCL; break;
		case 113: coordinate[1] = (ADCH << 8) + ADCL; break;
		default: coordinate[0] = -1; coordinate[1] = -1; break;
	}
}

void Joystick_Init(void){
	DDRF = 0x00;
	
	ADMUX = 0b01000000;		//AVCC, ADC0
	ADCSRA = 0b10001110;	//ADC INT Enable, 64 Div
	
	sei();
}

int* Joystick_Read(void){
	XorY = 112;
	ADMUX &= 0b11100000;	//Select ADC0
	ADCSRA |= 1 << ADSC;	//Start ADC0 Conversion
	
	XorY = 113;
	ADMUX &= 0b11100000;	//Reset Mux
	ADMUX |= 0b00000001;	//Select ADC1
	ADCSRA |= 1 << ADSC;	//Start ADC0 Conversion
	
	return coordinate;
}