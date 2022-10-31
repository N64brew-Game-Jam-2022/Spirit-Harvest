/*#include <nusys.h>
#include <nualsgi_n.h>
#include "main.h"
#include "para.h"
//#include "pack.h"
#include "malloc.h"*/
#include "main.h"
#include "levelDefs.h"

//audio
#include <nusys.h>
#include <ultra64.h>
#include <nualstl_n.h>
#include "config.h"
#include "audioDefs.h"
#include "audio.h"
musHandle seqHandle = 0;

//int img_buf[NU_AU_SAMPLE_SIZE];
int ptr_buf[NU_AU_SAMPLE_SIZE];
int tune_buf[NU_AU_SONG_SIZE];
int sfx_buf[NU_AU_SE_SIZE];

// The stage number and structure  
volatile int stage;

//Controller structure
NUContData ContTriger[NU_CONT_MAXCONTROLLERS];

// main.c */
volatile int Pause = 0;
/* Frame buffer (3 frame buffers) */
static u16*	FrameBuf3[3] = {
    (u16*)NU_GFX_FRAMEBUFFER0_ADDR,
    (u16*)NU_GFX_FRAMEBUFFER1_ADDR,
    (u16*)NU_GFX_FRAMEBUFFER2_ADDR,
};

//extern void gameTitleGFX(unsigned int pendingGfx);
extern void gameManagerGFX(unsigned int pendingGfx);
extern void render_EnvObjects_Cave_Entrance(u8 LOD);

void switchDataSegments(void);

extern SceneManager scene_Cave_Entrance;
/*--------------------------------------------------------------------------*/
/*-------------------------------Main Process-------------------------------*/
/*--------------------------------------------------------------------------*/
//From here, all other processes begin

void
mainproc(void)
{
	    nuGfxInit(); //nusys graphic initializer
		nuContInit(); //nusys controller initializer
		initAudio(); //nusys audio initializer
		nuGfxSetCfb(FrameBuf3, 3);
		stage = 1; //beginning stage number set to 0 (main menu)
				
		initGameModes(); //formerly initLevels
		initScenes();
        

		 // Read and register the sample bank and its pointers.
		Rom2Ram((void *)PBANK_START, (void *)ptr_buf, PBANK_END-PBANK_START);
		MusPtrBankInitialize(ptr_buf, WBANK_START);

		// Read and register the sound effects.
		Rom2Ram((void *)SFX_START, (void *)sfx_buf, SFX_END-SFX_START);
		MusFxBankInitialize(sfx_buf);
        
        //Song
        Rom2Ram((void *)MUSIC1_START, (void *)tune_buf, MUSIC1_END-MUSIC1_START);
        
     //  seqHandle = MusStartSong(tune_buf);
        

//TO DO NOTE ----- Set up a new function to switch to different texture libraries in ram based on the current stage.
       // Rom2Ram((void *)//Location within segment, //starting location of segment, //size of segment (subtract starting point from ending point to get the size));            
		
        
                        //Object segment:
        Rom2Ram((void *)OBJSROM_START, OBJS_START, OBJSROM_END-OBJSROM_START);
        
        //Texture segment:
        Rom2Ram((void *)TEXTUREROM_START, TEXTURE_START, TEXTUREROM_END-TEXTUREROM_START);
         
        

        
        //Player segment:
        Rom2Ram((void *)PLAYERROM_START, PLAYER_START, PLAYERROM_END-PLAYERROM_START);
//TO DO NOTE ----- Set up a new function to switch to different texture libraries in ram based on the current stage.
        
	while(1)
	{
		
	//loadGameMode will load a specific level based on the current stage.
		
	loadGameMode(stage); //inits current stage; sets stage = -1; begins NUGfxFunc	for current stage			
	nuGfxDisplayOn();
    
		
		// Wait for switching the scene 
		while(stage == -1);
		{		
			nuGfxDisplayOff(); // Clear the display 
		}
	}
		
}

void loadGameMode(unsigned int Index) //formerly loadLevel
{
	stage = -1;
    gameModes[Index]->levelInit();
 //resets stage to -1 and it will await the next stage value change
	//nuGfxFuncSet((NUGfxFunc)gameTitleGFX);
    nuGfxFuncSet((NUGfxFunc)gameModes[Index]->levelGfx);
	
}

void initGameModes(void)
{
	
	gameMode_Main.levelInit    = InitMode_Main; //formerly InitLevel01 and InitMode_Main
    gameMode_Main.levelGfx     = gameManagerGFX;
    gameModes[MODE_MAIN] = &gameMode_Main; //formerly LEVEL_00
	
}


void initScenes(void)
{
	scene_Courtyard.isActive		= 0;
	scene_Courtyard.envObjInit			= init_lvl00_Courtyard;
	scene_Courtyard.renderEnvObj			= render_lvl00_Courtyard; //render solid world objects first	
	scene_Courtyard.enemiesRender		= init_lvl00_Courtyard;
	scene_Courtyard.objectsRender		= init_lvl00_Courtyard;
	scene_Courtyard.renderTranspEnvObj	= render_lvl00_Courtyard_Transp; //rendering transparent world objects last
	scene_Courtyard.sceneTriggers		= lvl00_SceneTrig;
	//scene_Courtyard.sectorTriggers 		= lvl00_CourtyardSectorTrig;

	//TO DO NOTE: Set up references to this collision check when initiating SceneManager in main.c
	init_Scene_Courtyard();
    scenes[0] = &scene_Courtyard;
    
        
	
//SET UP SCENE_CAVE1:
	scene_Skybox.isActive		= 1;
	init_Scene_Skybox();
    scenes[1] = &scene_Skybox;
	
	//SET UP SCENE_CAVE2:
	scene_Forests.isActive		= 0;
    init_Scene_Forests();
	scenes[3] = &scene_Forests;
	
		// //SET UP SCENE_OVERLOOK:
	// scene_Overlook.isActive		= 0;
   // // init_Scene_Overlook();
    // scenes[3] = &scene_Overlook;
	
	//SET UP LANDING PAD:
	//init_Scene_Landing_Pad();
    scenes[4] = &scene_Landing_Pad;
    
    

    
    			//SET UP Door Objects:
	scene_Door_Objs.isActive		= 0;
	scenes[5] = &scene_Door_Objs;
    
    
    scene_Forest_entrance.isActive = 0;
    init_Scene_Forest_entrance();
	scenes[6] = &scene_Forest_entrance;
    
    scene_Beach.isActive = 0;
    init_Scene_Beach();
    scenes[7] = &scene_Beach;
    
    scene_Town.isActive = 0;
    init_Scene_Town();
    scenes[8] = &scene_Town;
	
	
}

void switchDataSegments(void)
{
    Rom2Ram((void *)TEXTUREROM_START, TEXTURE_START, TEXTUREROM_END-TEXTUREROM_START);
}


static u8 GetStage()
{
	return stage;
}

