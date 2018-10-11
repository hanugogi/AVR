/*
 * Personal_Project.c
 *
 * Created: 2018-05-27 오후 3:00:24
 *  Author: dsm2017
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>

unsigned int catB[16] = {0x0c, 0x12, 0x12, 0xe2, 0x02, 0x31, 0x31, 0x01, 0x9f, 0x81, 0x0f, 0x02, 0xc2, 0x0c, 0x18, 0xf0};
unsigned int catF[16] = {0x30, 0x48, 0x48, 0x4f, 0x40, 0x8c, 0x8c, 0x80, 0xf8, 0x81, 0xf0, 0x40, 0x43, 0x30, 0x18, 0x0f};
unsigned int dolphinB[16] = {0x00, 0x00, 0xc0, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0x1e, 0x06, 0x0f, 0x19, 0x00, 0x00};
unsigned int dolphinF[16] = {0x00, 0x00, 0x01, 0x03, 0x0f, 0x1f, 0x27, 0x27, 0x7f, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned int rabbitB[16] = {0x00, 0x1c, 0x32, 0x24, 0x28, 0x28, 0xc8, 0x04, 0x64, 0x64, 0x04, 0xe4, 0x88, 0x90, 0x20, 0xc0};
unsigned int rabbitF[16] = {0x38, 0x24, 0x24, 0x24, 0x14, 0x14, 0x13, 0x20, 0x26, 0x26, 0x20, 0x27, 0x11, 0x09, 0x04, 0x03};
unsigned int chickenB[16] = {0x20, 0x30, 0x30, 0x78, 0xfc, 0xe6, 0xe7, 0xfc, 0xf8, 0xf8, 0xf8, 0xf0, 0xe0, 0x40, 0x40, 0x60};
unsigned int chickenF[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xe0, 0xff, 0xff, 0x3f, 0x1f, 0x0f, 0x04, 0x04, 0x06};

/*int main(void){
	
	DDRE = 0xff; //red #1
	DDRB = 0xff; //red #2
	DDRF = 0xff;
	DDRA = 0xff;
	DDRC = 0xff;
	while(1)
	{
		for(int i = 0; i < 16; i++){
			if(i < 8){
				PORTE = 0x01 << i;
				PORTB = 0x00;
			}
			else{
				PORTB = 0x01 << (i - 8);
				PORTE = 0x00;
			}
			PORTF = ~chickenB[i];
			PORTC = ~chickenB[i];
			PORTA = ~chickenF[i];
			_delay_us(200);
		}
	}
}*/

void COMMAND(unsigned char byte);
void DATA(unsigned char byte);
void LCD_INIT(void);
void LCD_String(char *str);
void Dotmatris(int i);

int main(void){

	DDRF = 0x00; //button
	DDRA = 0xff; //RED #2
	
	DDRE = 0xff; //COMMON #1
	DDRB = 0xff; //COMMON #2
	
	DDRC = 0xff; //RED #1
	DDRD = 0xff; //LCD
	
	LCD_INIT();
	_delay_ms(40);
	
	int input = 0, menu = 0;

	while(1){
		input = PINF & 0x0f;
			switch(input){
				case 0x01:	//고양이
					LCD_INIT();
					_delay_ms(40);
					LCD_String("This is a Cat");
					COMMAND(0xc0);
					LCD_String("Cats like fish");
					_delay_ms(40);
					menu = 1;
					break;
				case 0x02:	//돌고래
					LCD_INIT();
					_delay_ms(40);
					LCD_String("It's dolphine");
					COMMAND(0xc0);
					LCD_String("Dolphin can speak");
					_delay_ms(40);
					menu = 2;
					break;
				case 0x04:	//토끼
					LCD_INIT();
					_delay_ms(40);
					LCD_String("She is rabbit");
					COMMAND(0xc0);
					LCD_String("She like carrot");
					_delay_ms(40);
					menu = 3;
					break;
				case 0x08:	//닭
					LCD_INIT();
					_delay_ms(40);				
					LCD_String("He is chicken");
					COMMAND(0xc0);
					LCD_String("He has comb");
					_delay_ms(40);
					menu = 4;
					break;
			}
			while(PINF & 0x0f == 0x00 || input == PINF & 0x0f){
				Dotmatris(menu);
			}
	}
}
void COMMAND(unsigned char byte)
{
	_delay_ms(2);
	
	PORTD = byte & 0xf0;
	PORTD &= 0b11111100;
	
	_delay_us(1);
	PORTD |= 0b00000100;
	_delay_us(1);
	PORTD &= 0b11111011;
	PORTD = (byte << 4) & 0xf0;
	PORTD &= 0b11111100;
	_delay_us(1);
	PORTD |= 0b00000100;
	_delay_us(1);
	PORTD &= 0b11111011;
}

void DATA(unsigned char byte)
{
	_delay_ms(2);
	
	PORTD = byte & 0xf0;
	
	PORTD |= 0b00000001;
	PORTD &= 0b11111101;
	_delay_us(1);
	PORTD |= 0b00000100;
	_delay_us(1);
	PORTD &= 0b11111011;
	
	PORTD = (byte << 4) & 0xf0;
	
	PORTD |= 0b00000001;
	
	PORTD &= 0b11111101;
	 
	_delay_us(1);
	PORTD |= 0b00000100;
	_delay_us(1);
	PORTD &= 0b11111011;
}

void LCD_INIT(void)
{
	_delay_ms(30);
	
	COMMAND(0b00101000); //0b00101000
	_delay_us(39);
	
	COMMAND(0b00001100);
	_delay_us(39);
	
	COMMAND(0b00000001);
	_delay_ms(1.53);
	COMMAND(0b00000110);
}

void LCD_String(char *str){
	for(int i = 0; i < strlen(str); i++)
		DATA(str[i]);
}

void Dotmatris(int i){
	switch(i){
		case 1:
			for(int i = 0; i < 16; i++){
				if(i < 8){
					PORTE = 0x01 << i;
					PORTB = 0x00;	//brown line
				}
				else{
					PORTB = 0x01 << (i - 8);
					PORTE = 0x00;	//brown line
				}
				PORTC = ~catB[i];
				PORTA = ~catF[i]; //red line
				_delay_us(700);
			}
			break;
		case 2:
			for(int i = 0; i < 16; i++){
				if(i < 8){
					PORTE = 0x01 << i;
					PORTB = 0x00;
				}
				else{
					PORTB = 0x01 << (i - 8);
					PORTE = 0x00;
				}
				PORTC = ~dolphinB[i];
				PORTA = ~dolphinF[i];
				_delay_us(700);
			}
			break;
		case 3:
			for(int i = 0; i < 16; i++){
				if(i < 8){
					PORTE = 0x01 << i;
					PORTB = 0x00;
				}
				else{
					PORTB = 0x01 << (i - 8);
					PORTE = 0x00;
				}
				PORTC = ~rabbitB[i];
				PORTA = ~rabbitF[i];
				_delay_us(700);
			}
			break;
		case 4:
			for(int i = 0; i < 16; i++){
				if(i < 8){
					PORTE = 0x01 << i;
					PORTB = 0x00;
				}
				else{
					PORTB = 0x01 << (i - 8);
					PORTE = 0x00;
				}
				PORTC = ~chickenB[i];
				PORTA = ~chickenF[i];
				_delay_us(700);
			}
			break;
	}
}