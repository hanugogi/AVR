//ICC-AVR application builder : 2008-12-23 ���� 8:11:13
// Target : M128
// Crystal: 16.000Mhz

#include <iom128v.h>
#include <macros.h>
unsigned int freq[9] = {0xc440, 0xcac4, 0xd095, 0xd33b, 0xd817, 0xdc7e, 0xe100, 0xe300, 0xe562};
volatile char cf=100;
volatile int sec=0, tick=0, m_tick=0, m_reset=0, s_tick=0;
char m_play[56] = {	0x04, 0x14, 0x24, 0x24, 0x04, 0x24, 0x42, 0x52, 0x44, 
			0x04, 0x14, 0x24, 0x24, 0x04, 0x24, 0x42, 0x52, 0x44, 
			0x58, 0x44, 0x24, 0x58, 0x44, 0x24, 0x14, 0x14, 0x04, 
			0x14, 0x24, 0x44, 0x48, 0x54, 0x54, 0x44, 0x54, 0x74, 
			0x74, 0x74, 0x44, 0x44, 0x24, 0x14, 0x08, 0x14, 0x22,
			0x04, 0x24, 0x44, 0x44, 0x44, 0x14, 0x22, 0x32, 0x24, 
			0x14, 0x04};
			
void port_init(void)
{
 PORTA = 0x00;
 DDRA  = 0x00;
 PORTB = 0x00;
 DDRB  = 0x00;
 PORTC = 0x00; //m103 output only
 DDRC  = 0x00;
 PORTD = 0x00;
 DDRD  = 0x00;
 PORTE = 0x00;
 DDRE  = 0x00;
 PORTF = 0x00;
 DDRF  = 0x00;
 PORTG = 0x00;
 DDRG  = 0x00;
}
void timer0_init(void)
{
	TCCR0 = 0x00; //stop
	ASSR  = 0x00; //set async mode
	TCNT0 = 0xCE; //set count
	OCR0  = 0x32;
	TCCR0 = 0x03; //start timer
}
void timer1_init(void)
{
	TCCR1B = 0x00; //stop
	TCNT1H = 0xC4; //setup
	TCNT1L = 0x40;
	OCR1AH = 0x3B;
	OCR1AL = 0xC0;
	OCR1BH = 0x3B;
	OCR1BL = 0xC0;
	OCR1CH = 0x3B;
	OCR1CL = 0xC0;
	ICR1H  = 0x3B;
	ICR1L  = 0xC0;
	TCCR1A = 0x00;
	TCCR1B = 0x01; //start Timer
}
#pragma interrupt_handler timer0_ovf_isr:17
void timer0_ovf_isr(void)
{
	TCNT0 = 0xCE; 
	tick++;
	if(tick>10000){
		tick = 0;
		}
	
	m_tick ++; 
	if(m_reset == 1){
		m_tick = 0;
		m_reset =0;
	}
	
}
#pragma interrupt_handler timer1_ovf_isr:15
void timer1_ovf_isr(void)
{
	//TIMER1 has overflowed
	TCNT1H = (freq[cf]>>8) & 0xff; //reload counter high value
	TCNT1L = (freq[cf]) & 0xff; //reload counter low value
	if(cf < 9){
		PORTG = PORTG ^ 0x10;
	}else{
		PORTG = PORTG & 0xef;
	}
}

//call this routine to initialize all peripherals
void init_devices(void)
{
 //stop errant interrupts until set up
 CLI(); //disable all interrupts
 XDIV  = 0x00; //xtal divider
 XMCRA = 0x00; //external memory
 port_init();
 timer1_init();
 timer0_init();
 
 MCUCR = 0x00;
 EICRA = 0x00; //extended ext ints
 EICRB = 0x00; //extended ext ints
 EIMSK = 0x00;
 TIMSK = 0x45; //timer interrupt sources
 ETIMSK = 0x00; //extended timer interrupt sources
 SEI(); //re-enable interrupts
 //all peripherals are now initialized
}
void playPongdangsong(void)
{
	char i;
	int period;
	
	for(i=0; i<56; i++){
		cf = (m_play[i]>>4) & 0x0f;
		period = (m_play[i] & 0x0f) * 1000;
		m_reset = 1;
		while(m_reset == 1);
		while(m_tick < period);
		//delay(1400);
		if(PINB & 0x40){
			cf = 100;
			break;
		}
	}
	cf = 100;
}
void playMusic(void)
{
while(1){
		if(PINB & 0x80){
			cf = 0;
			
		}else if(PINB & 0x40){
			cf = 1;
			
		}else if(PINB & 0x20){
			cf = 2;
			
		}else if(PINB & 0x10){
			cf = 3;
			
		}else if(PINB & 0x08){
			cf = 4;
			
		}else if(PINB & 0x04){
			cf = 5;
			
		}else if(PINB & 0x02){
			cf = 6;
			
		}else if(PINB & 0x01){
 			cf = 7;
			
		}else{
			cf = 100;
			
		}
	}
}
void delay(int cnt){
int i, j;
for(i=0; i<cnt; i++){
for(j=0; j<600; j++) ;
}
}
//
void main(void)
{
 init_devices();
 //insert your functional code here...
 while(1) playPongdangsong();// playMusic();
}

