CC = iccavr
LIB = ilibw
CFLAGS =  -e -D__ICC_VERSION=722 -D__BUILD=287 -DATMega128  -l -g -MLongJump -MHasMul -MEnhanced -Wf-use_elpm 
ASFLAGS = $(CFLAGS) 
LFLAGS =  -g -nb:287 -e:0x20000 -ucrtatmega.o -bfunc_lit:0x8c.0x10000 -dram_end:0x10ff -bdata:0x100.0x10ff -dhwstk_size:30 -beeprom:0.4096 -fihx_coff -S2
FILES = sound.o 

EX_SOUND2:	$(FILES)
	$(CC) -o EX_SOUND2 $(LFLAGS) @EX_SOUND2.lk   -lcatm128
sound.o: C:\iccv7avr\include\iom128v.h C:\iccv7avr\include\macros.h C:\iccv7avr\include\AVRdef.h C:\iccv7avr\include\math.h
sound.o:	sound.c
	$(CC) -c $(CFLAGS) sound.c
