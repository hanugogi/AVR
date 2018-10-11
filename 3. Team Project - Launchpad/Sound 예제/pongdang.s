	.module pongdang.c
	.area text(rom, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
_freq::
	.blkb 2
	.area idata
	.word 50240
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 51908
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 53397
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 54075
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 55319
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 56446
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 57600
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 58112
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.word 58722
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e freq _freq A[18:9]i
_cf::
	.blkb 1
	.area idata
	.byte 100
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e cf _cf c
_sec::
	.blkb 2
	.area idata
	.word 0
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e sec _sec I
_tick::
	.blkb 2
	.area idata
	.word 0
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e tick _tick I
_m_tick::
	.blkb 2
	.area idata
	.word 0
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e m_tick _m_tick I
_m_reset::
	.blkb 2
	.area idata
	.word 0
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e m_reset _m_reset I
_s_tick::
	.blkb 2
	.area idata
	.word 0
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e s_tick _s_tick I
_m_play::
	.blkb 2
	.area idata
	.byte 4,20
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,36
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 4,36
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'B,'R
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'D,4
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 20,36
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,4
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,'B
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'R,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'X,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,'X
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'D,36
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 20,20
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 4,20
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'H,'T
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'T,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'T,'t
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 't,'t
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'D,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,20
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 8,20
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 34,4
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 36,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 'D,'D
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 20,34
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 50,36
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.blkb 2
	.area idata
	.byte 20,4
	.area data(ram, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbsym e m_play _m_play A[56:56]c
	.area text(rom, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbfunc e port_init _port_init fV
	.even
_port_init::
	.dbline -1
	.dbline 19
; //ICC-AVR application builder : 2008-12-23 ¿ÀÈÄ 8:11:13
; // Target : M128
; // Crystal: 16.000Mhz
; 
; #include <iom128v.h>
; #include <macros.h>
; unsigned int freq[9] = {0xc440, 0xcac4, 0xd095, 0xd33b, 0xd817, 0xdc7e, 0xe100, 0xe300, 0xe562};
; volatile char cf=100;
; volatile int sec=0, tick=0, m_tick=0, m_reset=0, s_tick=0;
; char m_play[56] = {	0x04, 0x14, 0x24, 0x24, 0x04, 0x24, 0x42, 0x52, 0x44, 
; 			0x04, 0x14, 0x24, 0x24, 0x04, 0x24, 0x42, 0x52, 0x44, 
; 			0x58, 0x44, 0x24, 0x58, 0x44, 0x24, 0x14, 0x14, 0x04, 
; 			0x14, 0x24, 0x44, 0x48, 0x54, 0x54, 0x44, 0x54, 0x74, 
; 			0x74, 0x74, 0x44, 0x44, 0x24, 0x14, 0x08, 0x14, 0x22,
; 			0x04, 0x24, 0x44, 0x44, 0x44, 0x14, 0x22, 0x32, 0x24, 
; 			0x14, 0x04};
; 			
; void port_init(void)
; {
	.dbline 20
;  PORTA = 0x00;
	clr R2
	out 0x1b,R2
	.dbline 21
;  DDRA  = 0x00;
	out 0x1a,R2
	.dbline 22
;  PORTB = 0x00;
	out 0x18,R2
	.dbline 23
;  DDRB  = 0x00;
	out 0x17,R2
	.dbline 24
;  PORTC = 0x00; //m103 output only
	out 0x15,R2
	.dbline 25
;  DDRC  = 0x00;
	out 0x14,R2
	.dbline 26
;  PORTD = 0x00;
	out 0x12,R2
	.dbline 27
;  DDRD  = 0x00;
	out 0x11,R2
	.dbline 28
;  PORTE = 0x00;
	out 0x3,R2
	.dbline 29
;  DDRE  = 0x00;
	out 0x2,R2
	.dbline 30
;  PORTF = 0x00;
	sts 98,R2
	.dbline 31
;  DDRF  = 0x00;
	sts 97,R2
	.dbline 32
;  PORTG = 0x00;
	sts 101,R2
	.dbline 33
;  DDRG  = 0x00;
	sts 100,R2
	.dbline -2
L1:
	.dbline 0 ; func end
	ret
	.dbend
	.dbfunc e timer0_init _timer0_init fV
	.even
_timer0_init::
	.dbline -1
	.dbline 36
; }
; void timer0_init(void)
; {
	.dbline 37
; 	TCCR0 = 0x00; //stop
	clr R2
	out 0x33,R2
	.dbline 38
; 	ASSR  = 0x00; //set async mode
	out 0x30,R2
	.dbline 39
; 	TCNT0 = 0xCE; //set count
	ldi R24,206
	out 0x32,R24
	.dbline 40
; 	OCR0  = 0x32;
	ldi R24,50
	out 0x31,R24
	.dbline 41
; 	TCCR0 = 0x03; //start timer
	ldi R24,3
	out 0x33,R24
	.dbline -2
L2:
	.dbline 0 ; func end
	ret
	.dbend
	.dbfunc e timer1_init _timer1_init fV
	.even
_timer1_init::
	.dbline -1
	.dbline 44
; }
; void timer1_init(void)
; {
	.dbline 45
; 	TCCR1B = 0x00; //stop
	clr R2
	out 0x2e,R2
	.dbline 46
; 	TCNT1H = 0xC4; //setup
	ldi R24,196
	out 0x2d,R24
	.dbline 47
; 	TCNT1L = 0x40;
	ldi R24,64
	out 0x2c,R24
	.dbline 48
; 	OCR1AH = 0x3B;
	ldi R24,59
	out 0x2b,R24
	.dbline 49
; 	OCR1AL = 0xC0;
	ldi R24,192
	out 0x2a,R24
	.dbline 50
; 	OCR1BH = 0x3B;
	ldi R24,59
	out 0x29,R24
	.dbline 51
; 	OCR1BL = 0xC0;
	ldi R24,192
	out 0x28,R24
	.dbline 52
; 	OCR1CH = 0x3B;
	ldi R24,59
	sts 121,R24
	.dbline 53
; 	OCR1CL = 0xC0;
	ldi R24,192
	sts 120,R24
	.dbline 54
; 	ICR1H  = 0x3B;
	ldi R24,59
	out 0x27,R24
	.dbline 55
; 	ICR1L  = 0xC0;
	ldi R24,192
	out 0x26,R24
	.dbline 56
; 	TCCR1A = 0x00;
	out 0x2f,R2
	.dbline 57
; 	TCCR1B = 0x01; //start Timer
	ldi R24,1
	out 0x2e,R24
	.dbline -2
L3:
	.dbline 0 ; func end
	ret
	.dbend
	.area vector(rom, abs)
	.org 64
	jmp _timer0_ovf_isr
	.area text(rom, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbfunc e timer0_ovf_isr _timer0_ovf_isr fV
	.even
_timer0_ovf_isr::
	st -y,R2
	st -y,R3
	st -y,R24
	st -y,R25
	st -y,R26
	st -y,R30
	in R2,0x3f
	st -y,R2
	.dbline -1
	.dbline 61
; }
; #pragma interrupt_handler timer0_ovf_isr:17
; void timer0_ovf_isr(void)
; {
	.dbline 62
; 	TCNT0 = 0xCE; 
	ldi R24,206
	out 0x32,R24
	.dbline 63
; 	tick++;
	lds R24,_tick
	lds R25,_tick+1
	adiw R24,1
	sts _tick+1,R25
	sts _tick,R24
	.dbline 64
; 	if(tick>10000){
	ldi R24,10000
	ldi R25,39
	lds R2,_tick
	lds R3,_tick+1
	cp R24,R2
	cpc R25,R3
	brge L5
X0:
	.dbline 64
	.dbline 65
; 		tick = 0;
	clr R2
	clr R3
	sts _tick+1,R3
	sts _tick,R2
	.dbline 66
; 		}
L5:
	.dbline 68
; 	
; 	m_tick ++; 
	lds R24,_m_tick
	lds R25,_m_tick+1
	adiw R24,1
	sts _m_tick+1,R25
	sts _m_tick,R24
	.dbline 69
; 	if(m_reset == 1){
	lds R24,_m_reset
	lds R25,_m_reset+1
	cpi R24,1
	ldi R30,0
	cpc R25,R30
	brne L7
X1:
	.dbline 69
	.dbline 70
; 		m_tick = 0;
	clr R2
	clr R3
	sts _m_tick+1,R3
	sts _m_tick,R2
	.dbline 71
; 		m_reset =0;
	sts _m_reset+1,R3
	sts _m_reset,R2
	.dbline 72
; 	}
L7:
	.dbline -2
L4:
	.dbline 0 ; func end
	ld R2,y+
	out 0x3f,R2
	ld R30,y+
	ld R26,y+
	ld R25,y+
	ld R24,y+
	ld R3,y+
	ld R2,y+
	reti
	.dbend
	.area vector(rom, abs)
	.org 56
	jmp _timer1_ovf_isr
	.area text(rom, con, rel)
	.dbfile C:\example\Sound\pongdang.c
	.dbfunc e timer1_ovf_isr _timer1_ovf_isr fV
	.even
_timer1_ovf_isr::
	st -y,R1
	st -y,R2
	st -y,R24
	st -y,R25
	st -y,R30
	st -y,R31
	in R1,0x3f
	st -y,R1
	.dbline -1
	.dbline 77
; 	
; }
; #pragma interrupt_handler timer1_ovf_isr:15
; void timer1_ovf_isr(void)
; {
	.dbline 79
; 	//TIMER1 has overflowed
; 	TCNT1H = (freq[cf]>>8) & 0xff; //reload counter high value
	ldi R24,<_freq
	ldi R25,>_freq
	lds R30,_cf
	clr R31
	lsl R30
	rol R31
	add R30,R24
	adc R31,R25
	ldd R24,z+0
	ldd R25,z+1
	mov R24,R25
	clr R25
	andi R25,0
	out 0x2d,R24
	.dbline 80
; 	TCNT1L = (freq[cf]) & 0xff; //reload counter low value
	ldi R24,<_freq
	ldi R25,>_freq
	lds R30,_cf
	clr R31
	lsl R30
	rol R31
	add R30,R24
	adc R31,R25
	ldd R24,z+0
	ldd R25,z+1
	andi R25,0
	out 0x2c,R24
	.dbline 81
; 	if(cf < 9){
	lds R24,_cf
	cpi R24,9
	brsh L10
X2:
	.dbline 81
	.dbline 82
; 		PORTG = PORTG ^ 0x10;
	ldi R24,16
	lds R2,101
	eor R2,R24
	sts 101,R2
	.dbline 83
; 	}else{
	xjmp L11
L10:
	.dbline 83
	.dbline 84
; 		PORTG = PORTG & 0xef;
	lds R24,101
	andi R24,239
	sts 101,R24
	.dbline 85
; 	}
L11:
	.dbline -2
L9:
	.dbline 0 ; func end
	ld R1,y+
	out 0x3f,R1
	ld R31,y+
	ld R30,y+
	ld R25,y+
	ld R24,y+
	ld R2,y+
	ld R1,y+
	reti
	.dbend
	.dbfunc e init_devices _init_devices fV
	.even
_init_devices::
	.dbline -1
	.dbline 90
; }
; 
; //call this routine to initialize all peripherals
; void init_devices(void)
; {
	.dbline 92
;  //stop errant interrupts until set up
;  CLI(); //disable all interrupts
	cli
	.dbline 93
;  XDIV  = 0x00; //xtal divider
	clr R2
	out 0x3c,R2
	.dbline 94
;  XMCRA = 0x00; //external memory
	sts 109,R2
	.dbline 95
;  port_init();
	xcall _port_init
	.dbline 96
;  timer1_init();
	xcall _timer1_init
	.dbline 97
;  timer0_init();
	xcall _timer0_init
	.dbline 99
;  
;  MCUCR = 0x00;
	clr R2
	out 0x35,R2
	.dbline 100
;  EICRA = 0x00; //extended ext ints
	sts 106,R2
	.dbline 101
;  EICRB = 0x00; //extended ext ints
	out 0x3a,R2
	.dbline 102
;  EIMSK = 0x00;
	out 0x39,R2
	.dbline 103
;  TIMSK = 0x45; //timer interrupt sources
	ldi R24,69
	out 0x37,R24
	.dbline 104
;  ETIMSK = 0x00; //extended timer interrupt sources
	sts 125,R2
	.dbline 105
;  SEI(); //re-enable interrupts
	sei
	.dbline -2
L12:
	.dbline 0 ; func end
	ret
	.dbend
	.dbfunc e playPongdangsong _playPongdangsong fV
;              i -> R20
;         period -> R10,R11
	.even
_playPongdangsong::
	xcall push_xgset300C
	.dbline -1
	.dbline 109
;  //all peripherals are now initialized
; }
; void playPongdangsong(void)
; {
	.dbline 113
; 	char i;
; 	int period;
; 	
; 	for(i=0; i<56; i++){
	clr R20
	xjmp L17
L14:
	.dbline 113
	.dbline 114
; 		cf = (m_play[i]>>4) & 0x0f;
	ldi R24,<_m_play
	ldi R25,>_m_play
	mov R30,R20
	clr R31
	add R30,R24
	adc R31,R25
	ldd R24,z+0
	swap R24
	andi R24,#0x0F
	andi R24,15
	sts _cf,R24
	.dbline 115
; 		period = (m_play[i] & 0x0f) * 1000;
	ldi R24,<_m_play
	ldi R25,>_m_play
	mov R30,R20
	clr R31
	add R30,R24
	adc R31,R25
	ldd R18,z+0
	clr R19
	andi R18,15
	andi R19,0
	ldi R16,1000
	ldi R17,3
	xcall empy16s
	movw R10,R16
	.dbline 116
; 		m_reset = 1;
	ldi R24,1
	ldi R25,0
	sts _m_reset+1,R25
	sts _m_reset,R24
L18:
	.dbline 117
; 		while(m_reset == 1);
L19:
	.dbline 117
	lds R24,_m_reset
	lds R25,_m_reset+1
	cpi R24,1
	ldi R30,0
	cpc R25,R30
	breq L18
X3:
L21:
	.dbline 118
; 		while(m_tick < period);
L22:
	.dbline 118
	lds R2,_m_tick
	lds R3,_m_tick+1
	cp R2,R10
	cpc R3,R11
	brlt L21
X4:
	.dbline 120
; 		//delay(1400);
; 		if(PINB & 0x40){
	sbis 0x16,6
	rjmp L24
X5:
	.dbline 120
	.dbline 121
; 			cf = 100;
	ldi R24,100
	sts _cf,R24
	.dbline 122
; 			break;
	xjmp L16
L24:
	.dbline 124
; 		}
; 	}
L15:
	.dbline 113
	inc R20
L17:
	.dbline 113
	cpi R20,56
	brsh X7
	xjmp L14
X7:
X6:
L16:
	.dbline 125
; 	cf = 100;
	ldi R24,100
	sts _cf,R24
	.dbline -2
L13:
	.dbline 0 ; func end
	xjmp pop_xgset300C
	.dbsym r i 20 c
	.dbsym r period 10 I
	.dbend
	.dbfunc e playMusic _playMusic fV
	.even
_playMusic::
	.dbline -1
	.dbline 128
; }
; void playMusic(void)
; {
	xjmp L28
L27:
	.dbline 129
; while(1){
	.dbline 130
; 		if(PINB & 0x80){
	sbis 0x16,7
	rjmp L30
X8:
	.dbline 130
	.dbline 131
; 			cf = 0;
	clr R2
	sts _cf,R2
	.dbline 133
; 			
; 		}else if(PINB & 0x40){
	xjmp L31
L30:
	.dbline 133
	sbis 0x16,6
	rjmp L32
X9:
	.dbline 133
	.dbline 134
; 			cf = 1;
	ldi R24,1
	sts _cf,R24
	.dbline 136
; 			
; 		}else if(PINB & 0x20){
	xjmp L33
L32:
	.dbline 136
	sbis 0x16,5
	rjmp L34
X10:
	.dbline 136
	.dbline 137
; 			cf = 2;
	ldi R24,2
	sts _cf,R24
	.dbline 139
; 			
; 		}else if(PINB & 0x10){
	xjmp L35
L34:
	.dbline 139
	sbis 0x16,4
	rjmp L36
X11:
	.dbline 139
	.dbline 140
; 			cf = 3;
	ldi R24,3
	sts _cf,R24
	.dbline 142
; 			
; 		}else if(PINB & 0x08){
	xjmp L37
L36:
	.dbline 142
	sbis 0x16,3
	rjmp L38
X12:
	.dbline 142
	.dbline 143
; 			cf = 4;
	ldi R24,4
	sts _cf,R24
	.dbline 145
; 			
; 		}else if(PINB & 0x04){
	xjmp L39
L38:
	.dbline 145
	sbis 0x16,2
	rjmp L40
X13:
	.dbline 145
	.dbline 146
; 			cf = 5;
	ldi R24,5
	sts _cf,R24
	.dbline 148
; 			
; 		}else if(PINB & 0x02){
	xjmp L41
L40:
	.dbline 148
	sbis 0x16,1
	rjmp L42
X14:
	.dbline 148
	.dbline 149
; 			cf = 6;
	ldi R24,6
	sts _cf,R24
	.dbline 151
; 			
; 		}else if(PINB & 0x01){
	xjmp L43
L42:
	.dbline 151
	sbis 0x16,0
	rjmp L44
X15:
	.dbline 151
	.dbline 152
;  			cf = 7;
	ldi R24,7
	sts _cf,R24
	.dbline 154
; 			
; 		}else{
	xjmp L45
L44:
	.dbline 154
	.dbline 155
; 			cf = 100;
	ldi R24,100
	sts _cf,R24
	.dbline 157
; 			
; 		}
L45:
L43:
L41:
L39:
L37:
L35:
L33:
L31:
	.dbline 158
; 	}
L28:
	.dbline 129
	xjmp L27
X16:
	.dbline -2
L26:
	.dbline 0 ; func end
	ret
	.dbend
	.dbfunc e delay _delay fV
;              i -> R20,R21
;              j -> R22,R23
;            cnt -> R16,R17
	.even
_delay::
	xcall push_xgsetF000
	.dbline -1
	.dbline 160
; }
; void delay(int cnt){
	.dbline 162
; int i, j;
; for(i=0; i<cnt; i++){
	clr R20
	clr R21
	xjmp L50
L47:
	.dbline 162
	.dbline 163
; for(j=0; j<600; j++) ;
	clr R22
	clr R23
L51:
	.dbline 163
L52:
	.dbline 163
	subi R22,255  ; offset = 1
	sbci R23,255
	.dbline 163
	cpi R22,88
	ldi R30,2
	cpc R23,R30
	brlt L51
X17:
	.dbline 164
; }
L48:
	.dbline 162
	subi R20,255  ; offset = 1
	sbci R21,255
L50:
	.dbline 162
	cp R20,R16
	cpc R21,R17
	brlt L47
X18:
	.dbline -2
L46:
	.dbline 0 ; func end
	xjmp pop_xgsetF000
	.dbsym r i 20 I
	.dbsym r j 22 I
	.dbsym r cnt 16 I
	.dbend
	.dbfunc e main _main fV
	.even
_main::
	.dbline -1
	.dbline 168
; }
; //
; void main(void)
; {
	.dbline 169
;  init_devices();
	xcall _init_devices
	xjmp L57
L56:
	.dbline 171
;  //insert your functional code here...
;  while(1) playPongdangsong();// playMusic();
	xcall _playPongdangsong
L57:
	.dbline 171
	xjmp L56
X19:
	.dbline -2
L55:
	.dbline 0 ; func end
	ret
	.dbend
; }
; 
