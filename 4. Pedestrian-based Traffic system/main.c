/*
 * SecSmesterIndividualProject.c
 *
 * Created: 2018-10-11 오전 10:17:24
 * Author : KHW
 */ 

#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define CLEAR 0x01
#define LINE1 0x80
#define LINE2 0xC0

void Delay_ms(int num);
void Delay_us(long num);
void Timer_Init(void);
void StartTiming(void);

void IRSensor_Init(void);

void Joystick_Init(void);
int Joystick_Read(void);

void LCD_Init(void);
void COMMAND(unsigned char byte);
void DATA(unsigned char byte);
void DATA_Str(char *str);
void DATA_Num(long num);

void RGBLED_Init();
void RGBLED(int R, int G, int B);
void RGBLED_Red();
void RGBLED_Orange();
void RGBLED_Green();

extern char flag;
int coordinate;

volatile unsigned char count = 0;
volatile long speed = 0, time = 0;

ISR(TIMER0_OVF_vect){
	if(count > 8){
		Joystick_Read();
		speed += (int)(((coordinate - 512) * 5) / 512);
		
		if(speed > 130)
			speed = 130;
		
		else if(speed < 0)
			speed = 0;
		
		COMMAND(CLEAR);
		DATA_Str("Speed: ");
		DATA_Num(speed);
		DATA_Str("km/h");
		
		count = 0;
	}
	else
		count++;
}

int main(void){
	LCD_Init();
	Timer_Init();
	RGBLED_Init();
	IRSensor_Init();
	Joystick_Init();
	
	DATA_Str("Hello");
	
	while(1){
		while(!flag){
			RGBLED_Green();
			Delay_ms(3000);
			RGBLED_Orange();
			Delay_ms(2000);
			RGBLED_Red();
			Delay_ms(2000);
		}
	
		if(flag == 1){
			RGBLED(255, 255, 255);
			
			if(speed <= 60)
				time = (162000000 / speed); // = 45 / (speed / 3.6) * 1000000(us)
			else if(speed > 60)
				time = (216000000 / speed); // = 60 / (speed / 3.6) * 1000000(us)
			
			COMMAND(CLEAR);
			DATA_Num(speed);
			DATA_Str("km/h");
			
			COMMAND(LINE2);
			DATA_Num(time);
			DATA_Str("us Wait");
			
			_delay_ms(3000);
			RGBLED_Green();
			COMMAND(CLEAR);
			
			Delay_us(time);
			
			COMMAND(CLEAR);
			DATA_Str("Now Stop!");
			
			RGBLED_Red();
			_delay_ms(4500);
			
			DDRC = 0xff;
			PORTC = 0x00;
		}
	}
}

void Delay_ms(int num){
		for(int i = 0; i < num / 2 ; i++){
			if(flag) break;
			_delay_ms(1);
		}
}

void Delay_us(long num){
	long i = 0;
	for(i = 0; i < num * 0.6 ; i += 4){ //Culculated with allowable error
		_delay_us(1);
	}
}

void Timer_Init(void){
	TCCR0 = 0x00;
	TCCR0 &= (~0x48);	//Normal Mode
	TCCR0 &= (~0x30);	//OCR0 Disconnect
	TCCR0 |= 0x05;		//1024 Prescaler

	TIMSK |= 0x01;		//TIM0 Ovf Enable
	
	sei();
}