Project:      EX_SOUND2
Build Number: 287
Date:         Thu Aug 11 03:47:54 2011
Compiler:     ICCAVR
Version:      7.22C

NOTE: AVR Code addresses are word addresses
All other addresses (including ones in FLASH) are byte addresses

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                           idata   008C   00CC =    204. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       008C  __idata_start
       0158  __idata_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   0158   02D8 =    728. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       00AC  __text_start
       00AC  __start
       00CE  _exit
       00CF  _port_init
       00E5  _timer0_init
       00EF  _timer0_comp_isr
       0103  _delay
       0117  _init_devices
       012A  _sound
       0132  _nosound
       013D  _schoolsong2
       015F  _schoolsong
       0207  _main
       020E  push_xgsetF000
       0213  pop_xgsetF000
       0218  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0100   00CC =    204. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0100  __data_start
       0100  _SoundState
       0102  _Soundonoff
       0104  _Geurm
       0168  _DLY
       01CC  __data_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                          vector   0000   0040 =     64. bytes (abs,ovr,rom)

Files Linked      [ module(s) ]

C:\iccv7avr\lib\crtatmega.o	[ crtatmega.s ]
sound.o	[ sound.c ]
<library>	[ gpushy.s ]

User Global Definitions

ram_end = 0x10ff
hwstk_size = 0x1e

Area Definitions

-bfunc_lit:0x8c.0x10000
-bdata:0x100.0x10ff

