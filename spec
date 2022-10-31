#include "include/main.h"
#include <nusys.h>

beginseg
	name	"code"
	flags	BOOT OBJECT
	entry 	nuBoot
	address NU_SPEC_BOOT_ADDR
    stack   NU_SPEC_BOOT_STACK
	include "codesegment.o"
	include "$(ROOT)/usr/lib/PR/rspboot.o"
	include "$(ROOT)/usr/lib/PR/gspF3DEX2.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspL3DEX2.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspF3DEX2.Rej.fifo.o"
    include "$(ROOT)/usr/lib/PR/aspMain.o"
    include "$(ROOT)/usr/lib/PR/n_aspMain.o"
    include "$(ROOT)/usr/lib/PR/gspF3DEX2.NoN.fifo.o"
    include "$(ROOT)/usr/lib/PR/gspF3DLX2.Rej.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspS2DEX2.fifo.o"
endseg

beginseg
    name "objects"
	flags OBJECT
    after	"code"
    include "objectsegment.o"

endseg

beginseg
    name "player"
	flags OBJECT
    after	"objects"
    include "playersegment.o"

endseg

beginseg
	name "textures"
	flags OBJECT
    after	"player"
    include "texturesegment.o"

endseg

beginseg
	name "pbank"
	flags RAW
	include "src/audio/soundbanks/bank_sfx.ptr"
endseg

beginseg
	name "wbank"
	flags RAW
	include "src/audio/soundbanks/bank_sfx.wbk"
endseg

beginseg
	name "song1"
	flags RAW
	include "src/audio/soundbanks/comb_song.bin"
endseg

beginseg
	name "sfx"
	flags RAW
	include "src/audio/soundbanks/bank_sfx.bfx"
endseg


beginwave
	name	"harvestdemo"
	include	"code"
    include	"objects"
    include	"player"
    include	"textures"
	
	include "bank_sfx_pbank"
	include "bank_sfx_wbank"
    include "song1"
	include "bank_sfx_sfx"
endwave