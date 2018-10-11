NOTE: AVR Code addresses are word addresses
All other addresses (including ones in FLASH) are byte addresses

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                           idata   008C   0055 =     85. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       008C  __idata_start
       00E1  __idata_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   00E2   0354 =    852. bytes (rel,con,rom)

       Addr  Global Symbol
      -----  --------------------------------
       0071  __text_start
       0071  __start
       0093  _exit
       0094  _port_init
       00A8  _timer0_init
       00B2  _timer1_init
       00CE  _timer0_ovf_isr
       0114  _timer1_ovf_isr
       0151  _init_devices
       0165  _playPongdangsong
       01A8  _playMusic
       01DE  _delay
       01F2  _main
       01F7  empy16s
       0207  push_xgset300C
       020C  pop_xgset300C
       0211  push_xgsetF000
       0216  pop_xgsetF000
       021B  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0100   0055 =     85. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0100  _freq
       0100  __data_start
       0112  _cf
       0113  _sec
       0115  _tick
       0117  _m_tick
       0119  _m_reset
       011B  _s_tick
       011D  _m_play
       0155  __data_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                          vector   0000   0044 =     68. bytes (abs,ovr,rom)

Files Linked      [ module(s) ]

C:\iccv7avr\lib\crtatmega.o	[ crtatmega.s ]
pongdang.o	[ pongdang.c ]
<library>	[ emul16s.s, gpushx.s, gpushy.s ]

User Global Definitions

ram_end = 0x10ff
hwstk_size = 0x1e

User Base Address Definitions

func_lit = 0x8c
data = 0x100
eeprom:0.4096

