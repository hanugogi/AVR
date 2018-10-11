CC = iccavr
CFLAGS =  -e -D__ICC_VERSION="7.14C" -DATMEGA -DATMega128  -l -g -Mavr_enhanced -Wf-use_elpm 
ASFLAGS = $(CFLAGS)  -Wa-g
LFLAGS =  -g -e:0x20000 -ucrtatmega.o -bfunc_lit:0x8c.0x20000 -dram_end:0x10ff -bdata:0x100.0x10ff -dhwstk_size:30 -beeprom:0.4096 -fihx_coff -S2
FILES = pongdang.o 

PONGDANGX2:	$(FILES)
	$(CC) -o PONGDANGX2 $(LFLAGS) @PONGDANGX2.lk   -lcatm128
pongdang.o: C:\iccv7avr\include\iom128v.h C:\iccv7avr\include\macros.h
pongdang.o:	C:\example\Sound\pongdang.c
	$(CC) -c $(CFLAGS) C:\example\Sound\pongdang.c
