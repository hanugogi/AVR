/*
 * RGBLED.c
 *
 * Created: 2018-10-11 오전 10:18:26
 *  Author: KHW
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

#define RED PORTB5		//OC1A
#define GREEN PORTB6	//OC1B
#define BLUE PORTB7		//OC1C

void RGBLED_Init(){
	DDRB = 0xFF;
	
	TCCR1A = 0b10101001; //Toggle OC1x, 8-bit Fast PWM
	TCCR1B = 0b00001100; //256 Prescaler
	TCCR1C = 0x00;
	
	TCNT1 = 0;
}

void RGBLED(int R, int G, int B){
	OCR1A = R;
	OCR1B = G;
	OCR1C = B;
}

void RGBLED_Red(){
	RGBLED(0xFF, 0x00, 0x00);
}

void RGBLED_Orange(){
	RGBLED(0xFF, 0x7F, 0x00);
	
}

void RGBLED_Green(){
	RGBLED(0x00, 0xFF, 0x00);	
}