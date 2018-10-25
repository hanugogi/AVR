/*
 * Joystick.c
 *
 * Created: 2018-10-11 오전 10:17:56
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

char XorY = 0;
int coordinate[2] = {-10, -10};

ISR(ADC_vect){
	switch (XorY){
		case 112: coordinate[0] = (ADCH << 8) + ADCL; break;
		case 113: coordinate[1] = (ADCH << 8) + ADCL; break;
		default: coordinate[0] = -1; coordinate[1] = -1; break;
	}
}

void Joystick_Init(void){
	DDRF = 0x00;
	
	ADMUX = 0b10000000;		//AVCC, ADC0
	ADCSRA = 0b10001101;	//ADC INT Enable, 64 Div
	
	sei();
	
	ADCSRA |= 0x04;
}

int* Joystick_Read(void){
	XorY = 112;
	ADMUX &= 0b11100000;	//Reset ADCMUX
	ADCSRA |= 0x40;			//Start ADC0 Conversion
	
	XorY = 113;
	ADMUX &= 0b11100000;	//Reset ADCMUX
	ADMUX |= 0b00000001;	//Select ADC1
	ADCSRA |= 0x40;			//Start ADC0 Conversion
	
	return coordinate;
}