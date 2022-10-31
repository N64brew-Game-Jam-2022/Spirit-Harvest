# 	NuSYSTEM samples nulod Makefile
#       Copyright (C) 1997-1999, NINTENDO Co,Ltd.

include $(ROOT)/usr/include/make/PRdefs

# The directory which has the include file and library of NuSYSTEM
#

N64KITDIR   = C:\nintendo\n64kit
NUSYSINCDIR = $(N64KITDIR)/nusys/include
NUSYSLIBDIR = $(N64KITDIR)/nusys/lib

# For allocating memory.
NUSTDINCDIR = $(N64KITDIR)/nustd/include
NUSTDLIBDIR = $(N64KITDIR)/nustd/lib

#1/13/2020 OLD VERSION: changed to automatically building ENGINEFILES
#ENGINEFILES := $(foreach DIR,$(ENGINEDIRS),$(wildcard $(ENGINEDIR)/$(DIR)/*.c)) $(wildcard $(ENGINEDIR)/*.c)

#PROCESS
#build with files in src first... move files to new location (do not cut/paste)... delete .o files... rebuild at new location
#when adding new file, save file in the location where it will be stored. Then build file once. 
#After your new file builds successfully, clean project and do a clean build to make sure everything compiles as expected.

#BUILD ERROR TIP A: If getting error on build and requiring you to type 'make' again after adding a new DIRS to a DIR, try adding
#your new DIRS to the beginning of the DIRS list instead of at the end. 
#EX TESTDIRS = new-dirs old-dirs-a old-dirs-b old-dirs-c

LIB = $(ROOT)/usr/lib
LPR = $(LIB)/PR
INC = $(ROOT)/usr/include
CC  = gcc
LD  = ld
MAKEROM = mild

OBJDIR    := bin
#$(OBJDIR):
#mkdir $(OBJDIR)

DIRS = sprites

INCDIR = include
HFILES = $(foreach DIR,$(DIRS), $(wildcard $(INCDIR)/$(DIR)/*.h) $(wildcard $(INCDIR)/*.h))

# INCLVLDIR = src/scenes/level00/scenes
# HLVLFILES = $(foreach DIR,$(DIRS), $(wildcard $(INCLVLDIR)/$(DIR)/*.h) $(wildcard $(INCLVLDIR)/*.h))

SRCDIR = src
CODEFILES = $(foreach DIR,$(DIRS), $(wildcard $(SRCDIR)/$(DIR)/*.c)) $(wildcard $(SRCDIR)/*.c) 

# PLAYERDIR := src/player/plranimr
# #PLAYERDIRS := plranimr
# PLAYERFILES = $(foreach DIR,$(DIRS), $(wildcard $(PLAYERDIR)/$(DIR)/*.c)) $(wildcard $(PLAYERDIR)/*.c)
# #PLAYERFILES := $(foreach DIR,$(PLAYERDIRS),$(wildcard $(PLAYERDIR)/$(DIR)/*.c))


NEWPLAYERDIR := src/player
NEWPLAYERDIRS := plranimr
# PLAYERFILES = $(foreach DIR,$(DIRS), $(wildcard $(PLAYERDIR)/$(DIR)/*.c)) $(wildcard $(PLAYERDIR)/*.c)
NEWPLAYERFILES := $(foreach DIR,$(NEWPLAYERDIRS),$(wildcard $(NEWPLAYERDIR)/$(DIR)/*.c))

PLAYERDIR := src/player
PLAYERDIRS := animfrm plrtex
# # # PLAYERFILES = $(foreach DIR,$(DIRS), $(wildcard $(PLAYERDIR)/$(DIR)/*.c)) $(wildcard $(PLAYERDIR)/*.c)
PLAYERFILES := $(foreach DIR,$(PLAYERDIRS),$(wildcard $(PLAYERDIR)/$(DIR)/*.c))

ENGINEDIR := src/engine
ENGINEDIRS := tools gfxsettings debug mainfunc collisions
ENGINEFILES := $(foreach DIR,$(ENGINEDIRS),$(wildcard $(ENGINEDIR)/$(DIR)/*.c))

SCENEDIR := src/scenes
SCENEDIRS := levelobjs level00
SCENEFILES := $(foreach DIR,$(SCENEDIRS),$(wildcard $(SCENEDIR)/$(DIR)/*.c))

OBJDIRS :=
OBJFILES := $(foreach DIR,$(OBJDIRS),$(wildcard $(SCENEDIR)/$(DIR)/*.c))

ENEMYDIR := src/enemies
ENEMYDIRS := spawners
ENEMYFILES := $(foreach DIR,$(ENEMYDIRS),$(wildcard $(ENEMYDIR)/$(DIR)/*.c))

TEXTUREDIR = src/textures
TEXTUREFILES = $(foreach DIR,$(DIRS), $(wildcard $(TEXTUREDIR)/$(DIR)/*.c)) $(wildcard $(TEXTUREDIR)/*.c) 

AUDIODIR = src/audio
AUDIODIRS = controller
AUDIOFILES = $(foreach DIR,$(AUDIODIRS),$(wildcard $(AUDIODIR)/$(DIR)/*.c))

SUBDIR = src/scenes/level00/scenes
SUBFILES = $(foreach DIR,$(DIRS),$(wildcard $(SUBDIR)/$(DIR)/*.c)) $(wildcard $(SUBDIR)/*.c)



#----- WARNING / NOTE ----- when adding a new folder, add it to the beginning of the below list next to :=. 
#-------------------------- Adding a new folder to the middle or end of the scenes list will cause errors (I don't know why but w/e)

LVL00DIR := src/scenes/level00
#LVL00SCENES := forestentrance courtyard watercave beach skyboxes
LVL00SCENES := forestentrance courtyard overlook beach skyboxes
LVL00SCENEFILES := $(foreach DIR,$(LVL00SCENES),$(wildcard $(LVL00DIR)/$(DIR)/*.c))

LVL0SCENEDIR := src/scenes/level00
LVLSCENEFILES := landingpad watercave
LEVELFILES := $(foreach DIR,$(LVLSCENEFILES),$(wildcard $(LVL0SCENEDIR)/$(DIR)/*.c))

#----- WARNING / NOTE ----- when adding a new folder, add it to the beginning of the below list next to :=. 
#-------------------------- Adding a new folder to the middle or end of the scenes list will cause errors (I don't know why but w/e)



LCDEFS = -DNU_DEBUG -DF3DEX_GBI_2
LCINCS = -I$(NUSYSINCDIR) -I$(ROOT)/usr/include/PR -I$(INCDIR)
#LCOPTS = -G 0 -o $@
LCOPTS = -G 0 -O3 -ffast-math -o $@
#LCOPTS = -G 0 -O1 -o $@

NUAUDIOLIB = -lnualstl_n_d -ln_gmus_d -ln_gaudio_sc

LDFLAGS = $(MKDEPOPT) -L$(LIB) -L$(NUSTDLIBDIR) -L$(NUSYSLIBDIR) $(NUAUDIOLIB) -lnusys_d -lnustd_d -lgultra_d -L$(GCCDIR)/mipse/lib -lkmc

OPTIMIZER =	-g

BIN_PATH := bin/
OBJ_PATH = bin/objects/

APP = $(BIN_PATH)harvestdemo.out

TARGETS = $(BIN_PATH)harvestdemo.n64

#CODEOBJECTS:= $(ENGINEFILES:.c=.o) $(NEWPLAYERFILES:.c=.o) $(SCENEFILES:.c=.o) $(ENEMYFILES:.c=.o) $(TEXTUREFILES:.c=.o) $(AUDIOFILES:.c=.o) $(SUBFILES:.c=.o) $(NUSYSLIBDIR)/nusys.o

#TEXTUREOBJECTS:= $(TEXTUREFILES:.c=.o)OBJFILES

CODEOBJECTS:= $(ENGINEFILES:.c=.o) $(NEWPLAYERFILES:.c=.o) $(SUBFILES:.c=.o) $(LVL00SCENEFILES:.c=.o) $(AUDIOFILES:.c=.o) $(NUSYSLIBDIR)/nusys.o

OBJECTOBJECTS:= $(LEVELFILES:.c=.o) $(SCENEFILES:.c=.o) $(ENEMYFILES:.c=.o)

PLAYEROBJECTS:= $(PLAYERFILES:.c=.o)

TEXTUREOBJECTS:= $(TEXTUREFILES:.c=.o)

#$(addprefix $(OBJ_PATH),$(CODESEGMENT))

#$(OBJ_PATH)%.o:= $(ENEMYFILES)%.c 

#Last working version:
#CODEOBJECTS = $(CODEFILES:.c=.o) $(ENGINEFILES:.c=.o) $(MESHFILES:.c=.o) $(TEXTUREFILES:.c=.o) $(SCENEFILES:.c=.o) $(AUDIOFILES:.c=.o) $(ENEMYFILES:.c=.o) $(NUSYSLIBDIR)/nusys.o

CODESEGMENT = codesegment.o
PLAYERSEGMENT = playersegment.o
TEXTURESEGMENT = texturesegment.o
OBJECTSEGMENT = objectsegment.o

CODESEGMENT_B = $(BIN_PATH)codesegment.o

default: $(TARGETS)

include $(COMMONRULES)

$(CODESEGMENT):	$(CODEOBJECTS) Makefile		
#$(BUILDROOT)/$(CODESEGMENT):	$(CODEOBJECTS) Makefile
		$(LD) -o $(CODESEGMENT) -r $(CODEOBJECTS) $(LDFLAGS)
        
$(OBJECTSEGMENT):	$(OBJECTOBJECTS) Makefile		
        $(LD) -o $(OBJECTSEGMENT) -r $(OBJECTOBJECTS) $(LDFLAGS)
        
$(PLAYERSEGMENT):	$(PLAYEROBJECTS) Makefile		
        $(LD) -o $(PLAYERSEGMENT) -r $(PLAYEROBJECTS) $(LDFLAGS)
        
$(TEXTURESEGMENT):	$(TEXTUREOBJECTS) Makefile		
        $(LD) -o $(TEXTURESEGMENT) -r $(TEXTUREOBJECTS) $(LDFLAGS)
        

$(TARGETS):	 $(CODESEGMENT) $(OBJECTSEGMENT) $(PLAYERSEGMENT) $(TEXTURESEGMENT)
		$(MAKEROM) spec -I$(NUSYSINCDIR) -s 128 -r $(TARGETS) -e $(APP)
		makemask $(TARGETS)
