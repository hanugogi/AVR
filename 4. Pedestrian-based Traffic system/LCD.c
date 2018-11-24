/*
 * LCD.c
 *
 * Created: 2018-10-15 오후 4:10:11
 *  Author: KHW
 */ 

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

void COMMAND(unsigned char byte){
	_delay_ms(2);
	
	PORTD = byte & 0xF0;
	PORTD &= 0xFC;
	_delay_us(1);
	
	PORTD |= 0x04;
	_delay_us(1);
	
	PORTD &= 0xFB;
	PORTD = (byte << 4) & 0xF0;
	PORTD &= 0xFC;
	_delay_us(1);
	
	PORTD |= 0x04;
	_delay_us(1);
	
	PORTD &= 0xFB;
	
}

void DATA(unsigned char byte){
	_delay_ms(2);
	
	PORTD = byte & 0xF0;
	PORTD |= 0x01;
	
	PORTD &= 0xFD;
	_delay_us(1);
	
	PORTD |= 0x04;
	_delay_us(1);
	
	PORTD &= 0xFC;
	PORTD = (byte << 4) & 0xF0;
	PORTD |= 0x01;
	PORTD &= 0xFD;
	_delay_us(1);
	
	PORTD |= 0x04;
	_delay_us(1);
	
	PORTD &= 0xFB;
}

void LCD_Init(){
	DDRD = 0xff;
	
	_delay_ms(30);
	
	COMMAND(0x28);
	_delay_us(39);
	
	COMMAND(0x0C);
	_delay_us(39);
	
	COMMAND(0x01);
	_delay_ms(1.53);
	
	COMMAND(0x06);
}

void DATA_Str(char *str){
	while(*str){
		DATA(*str);
		str++;
	}
}

void DATA_Num(long num){
	char temp[16];
	sprintf(temp, "%ld", num);
	
	DATA_Str(temp);
}