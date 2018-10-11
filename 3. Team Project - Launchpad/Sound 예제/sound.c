//ICC-AVR application builder : 2005-05-30 오전 1:48:51
// Target : M128
// Crystal: 16Mhz
//
// Made by New Technology Company(N.T.C) in Korea.
// DAEWOO RYU   
// Email : davidryu@newtc.co.kr
// 82-2-704-4774(TEL), 82-2-704-4733(FAX)
// http://www.NewTC.co.kr
//


#include <iom128v.h>
#include <macros.h>
#include <math.h>
//#include <stdio.h>

#define MaxLine	2
#define MaxCol	16

#define ON 1
#define OFF 2
#define DELAYTIME 1
#define DELAYTIME1 0
/* 주파수(Hz)
C1	523	// 도
C1_	554
D1	587	// 레
D1_	622
E1	659	// 미
F1	699	// 파	
F1_	740
G1	784	// 솔
G1_	831
A1	880	// 라
A1_	932
B1	988	// 시

C2	C1*2	// 도
C2_	C1_*2
D2	D1*2	// 레
D2_	D1_*2
E2	E1*2	// 미
F2	F1*2	// 파	
F2_	F1_*2
G2	G1*2	// 솔
G2_	G1_*2
A2	A2*2	// 라
A2_	A2_*2
B2	B2*2	// 시
*/

#define C1	630	// 도
#define C1_	624
#define D1	617	// 레
#define D1_	611
#define E1	606	// 미
#define F1	600	// 파	
#define F1_	595
#define G1	591	// 솔
#define G1_	586
#define A1	582	// 라
#define A1_	578
#define B1	574	// 시
#define C2	571	// 높은 도

#define DLY_1	DLY_4*4 // 온음표 
#define DLY_2	DLY_4*2	// 2분 음표
#define DLY_4	1500	// 4분 음표 
#define DLY_8	DLY_4/2	// 8분 음표
#define DLY_16	DLY_8/2	// 16분 음표*/

volatile int SoundState = ON;
volatile int Soundonoff = ON;
volatile int Geurm[50] = {G1, G1, A1, A1, G1, G1, E1, G1,G1, E1, E1, D1, G1, G1, A1, A1, G1, G1, E1, G1, E1, D1, E1, C1,};
volatile int DLY[50] ={DLY_4,DLY_4,DLY_4,DLY_4,DLY_4,DLY_4,DLY_2,DLY_4,DLY_4,DLY_4,DLY_4,DLY_1,DLY_4,DLY_4,DLY_4,DLY_4,DLY_4,DLY_4,DLY_2,DLY_4,DLY_4,DLY_4,DLY_4,DLY_1,}; 

void port_init(void)
{
 PORTA = 0x00;
 DDRA  = 0xFF;
 PORTB = 0x00;
 DDRB  = 0xff;
 PORTC = 0x00; //m103 output only
 DDRC  = 0xFF;
 PORTD = 0x00;
 DDRD  = 0xFF;
 PORTE = 0x00;
 DDRE  = 0x00;
 PORTF = 0x00;
 DDRF  = 0x00;
 PORTG = 0x00;
 DDRG  = 0x1f;
}

//TIMER0 initialize - prescale:128
// WGM: CTC
// desired value: 800Hz
// actual value: 796.178Hz (-0.5%)
void timer0_init(void)
{
 TCCR0 = 0x00; //stop
 ASSR  = 0x00; //set async mode
 TCNT0 = 0x64; //set count
 OCR0  = 0x9C;
 TCCR0 = 0x1D; //start timer
}


#pragma interrupt_handler timer0_comp_isr:iv_TIM0_COMP
void timer0_comp_isr(void)
{
 //compare occured TCNT0=OCR0
 PORTD = PORTD ^ 0x80;
}

void delay(int cnt){
	 int i, j;
	 for(i=0; i<cnt; i++){
	 	  for(j=0; j<600; j++);
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
 timer0_init();

 MCUCR = 0x00;
 EICRA = 0x00; //extended ext ints
 EICRB = 0x00; //extended ext ints
 EIMSK = 0x00;
 TIMSK = 0x02; //timer interrupt sources
 ETIMSK = 0x00; //extended timer interrupt sources
 SEI(); //re-enable interrupts
 //all peripherals are now initialized
}

void sound(int freq){
 Soundonoff=ON; 
 OCR0 = freq;
}

void nosound(void){
 Soundonoff=OFF;
 OCR0 = 0;
 delay(100);
}

void schoolsong2(void){
	 int i;
	 for(i=0;i<30;i++){
	 	sound(Geurm[i]);
	 	delay(DLY[i]);
	 	nosound();
	 }	 
}

void schoolsong(void){
     sound(G1);
	 delay(DLY_4);
	 nosound();
	
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	
	 sound(A1);
	 delay(DLY_4);
     nosound();
	
	 sound(A1);
	 delay(DLY_4);
     nosound();
	
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	
	 sound(E1);
	 delay(DLY_2);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(E1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(E1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(D1);
	 delay(DLY_1);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(A1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(A1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(E1);
	 delay(DLY_2);
	 nosound();
	 
	 sound(G1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(E1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(D1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(E1);
	 delay(DLY_4);
	 nosound();
	 
	 sound(C1);
	 delay(DLY_1);
	 nosound();	 
}


void main(void){
     init_devices();
	
	 while(1){
		 while(1){		
			schoolsong2();
			schoolsong();
		 }		 
	}	 
}
