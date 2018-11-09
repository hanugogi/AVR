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
int coordinate[2];

ISR(ADC_vect){
	switch (XorY){
		case 112: coordinate[0] = ADC; break;
		case 113: coordinate[1] = ADC; break;
		default: coordinate[0] = -1; coordinate[1] = -1; break;
	}
}

void Joystick_Init(void){
	DDRF = 0x00;
	
	ADMUX = 0b10000000;		//AVCC, ADC0
	ADCSRA = 0b10001111;	//ADC INT Enable, 64 Div
	
	sei();
}

int* Joystick_Read(void){
	XorY = 112;
	ADMUX &= 0b11100000;	//Reset ADCMUX
	ADCSRA |= 0x40;			//Start ADC0 Conversion
	
	_delay_ms(40);
	
	XorY = 113;
	ADMUX &= 0b11100000;	//Reset ADCMUX
	ADMUX |= 0b00000001;	//Select ADC1
	ADCSRA |= 0x40;			//Start ADC0 Conversion
	
	return coordinate;
}