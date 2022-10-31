#include "gamemanager.h"
#include "Scn01_Instanced_defs.h"
//audio test
#include "audio.h"

/*--------------------------------------------------------------------------*/
/*--------------------------Initiate "gamemain.c"---------------------------*/
/*--------------------------------------------------------------------------*/
extern void gametitle(int pendingGfx);
extern void gamemain(int pendingGfx);
extern void UpdateCameraPosition(Dynamic* dp);

u8 initiate = 0;
float debugTimer;
u8 tempInt = 0;
//lvlGameMain
GameMode gameMode_Main;
WorldTrigger locationInWorld;

void InitMode_Main( void ) //formerly InitGame
{	
	initPlayer();
	initMainCamera();
	InitDebug();
	debugTimer = GetSeconds();
    
    audioEffects.musicVolume = 0;
    
	/*
	 DrawMap2Init();
	 initPlayer();

    View = 75; //Starting Camera Angle

    StartTime = osGetTime();
    NowTime = osGetTime();
    NowPauseTime = 0;
    Pause = 0;
    TraceIdx = 0;
    SaveIdx = 0;
    SaveOfsIdx = 0;
    UpTempo = 0;
	*/	
	initiate = 1; //reset only when loading a new level
}

void
gameManagerGFX(unsigned int pendingGfx)
{
    /* Provide the display process if there is only one task which is processing or waiting for the process. */
    if(pendingGfx < 5)
	{
		CalcSysTime();
			
		//if(initiate == 0)
			//InitGame(); //run this only at the start of each level

		MakeGameDL();	

		//Create trigger data 
		nuContDataGetExAll(&ContTriger[0]);		
			
		UpdateGame();
    }
    
    //FPSAdjust = GetFPS();
    SetAdjustAnimRate();
}

void MakeGameDL(void)
{

/*--------------------------Setup---------------------------*/	

    Dynamic* dynamicp;
	Dynamic* dynamicDebugp;

	
	
	
	
	
	
	
	
	
	/*Separate clear and build lists
	
	//possibly useful if display lists begin getting too long
	
	
	glistp = &gfx_clear_glist[gfx_gtask_no][0];
	gfxRCPInit();
	gfxClearCfb(); //clear frame and z buffer
	
	assert((glistp - gfx_clear_glist[gfx_gtask_no]) < GFX_CLEAR_GLIST_LEN);
	
	gDPFullSync(glistp++);
	gSPEndDisplayList(glistp++);
	
    nuGfxTaskStart(&gfx_clear_glist[gfx_gtask_no][0],
	 (s32)(glistp - gfx_clear_glist[gfx_gtask_no]) * sizeof (Gfx),
	 NU_GFX_UCODE_F3DEX , NU_SC_NOSWAPBUFFER);
	*/
	
	
	
	
	
	
	
    dynamicp = &gfx_dynamic[gfx_gtask_no]; //specify dynamic buffer
    glistp = &gfx_glist[gfx_gtask_no][0]; //specify display list (dl) buffer
		
    gfxRCPInit();
    gfxClearCfb(); //clear frame and z buffer
	
	    // Setting the view-matrix 
    
    if(Pause == 0){
        SetGameViewMtx( dynamicp );	
    }
	
    else if(Pause == 1){
        SetMenuViewMtx( dynamicp );	
    }

/*--------------------------END Setup---------------------------*/	

	

/*------------DRAW Game UI, Levels, Player, NPC, etc------------*/		

	//DrawPlayerModel(dynamicp);
	//	gDPPipeSync(glistp++);

	//Level01(dynamicp);	
	//Level01_Enemies_DL(dynamicp);
	//Level01_Objects(dynamicp);
			//UI_Target_Render();
			//lvls[Index]->levelInit();
			
			
			
			
			
			
			
//NOTE: 04252022 START HERE - separate functions for separate scenes


			//Pseudo code below:
			//1) COLLISION CHECK: current level
			//2) COLLISION CHECK: current scene of current level
			//3) FOR LOOP: cycle through current scenes to see if player is currently in them 
			//then call the relevant init and render function			

			lvl00_collision_scenes();	//1)
			lvl00_collision_sectors(); //2) 

				for(tempInt = 0; tempInt < 9; tempInt++) //3) 
				{
                    if( tempInt != 5 && tempInt != 2)
                    {

                        if(scenes[tempInt]->isActive > 0)
                        {
                            //scenes[tempInt]->sceneInit();
                            scenes[tempInt]->envObjInit();						
                        }
                        

                    }
                    

				}
			
            
            if(Pause == 0){
            
                //Render opaque objects first
                scenes[0]->renderEnvObj(0);

                //render player/npc/enemy/item objects second
                gDPPipeSync(glistp++);
                DrawPlayerModel(dynamicp);
                
                gDPPipeSync(glistp++);
                //render transparent objects last
                scenes[0]->renderTranspEnvObj(0);
                SpawnSummonEffect();
                
                gDPPipeSync(glistp++);
                
                
                if(playerAvatar.state.movement != 5)
                {
                    DrawUI(1);
                }
                
                else if(playerAvatar.state.movement == 5)
                {
                    DrawUI(3);
                }
            
            }
            else{
                init_EnvObjects_Menu();
                render_EnvObjects_Menu( 0);
            }

//NOTE: 04252022 START HERE - separate functions for separate scenes






			

		
	/*TO DO NOTE: Hide until region culling is functional------
		Lvl01_Env02(dynamicp);	
	/*END NOTE-------------------------------------------*/

		gDPPipeSync(glistp++);
/*----------END DRAW Game UI, Levels, Player, NPC, etc----------*/	


	FrameCount();
	
	//TO DO NOTE: Hide position light values, not currently being used
		//dynamicp->posLightValues = getPosLightValues();
	
/*-----------Wrap up display lists / swap frame buffers---------*/	
    gDPFullSync(glistp++); 
    gSPEndDisplayList(glistp++);

   
    assert((glistp - gfx_glist[gfx_gtask_no]) < GFX_GLIST_LEN);
	//assert((glistpDebugp - gfx_glistDebug[gfx_debug_gtask_no]) < GFX_GLIST_LEN);
    /* Activate the RSP task and switch display buffers. */
    nuGfxTaskStart(&gfx_glist[gfx_gtask_no][0],
		   (s32)(glistp - gfx_glist[gfx_gtask_no]) * sizeof (Gfx),
		   NU_GFX_UCODE_F3DEX2_NON  , NU_SC_SWAPBUFFER);
 
	//GetFPS_6();

	//nuGfxTaskAllEndWait();	   
		   
    /* Indicate next graphic task number  */
    gfx_gtask_no++;
    gfx_gtask_no %= GFX_GTASK_NUM;
	
	/* Wait for the task to end */
    nuGfxTaskAllEndWait();
	
	
	
	

	
    if(ContTriger[0].button & L_TRIG)
    {
       
    	if(debugTimer != GetFPS_60())
        {
            debugTimer = GetFPS_60();
            SetDebugString();	   
        }
    
        DebugPrint();	   
        
        // //NOTE: Press the L trigger button to toggle debug mode on and off. (FPS will appear by default)
        if(ContTriger[0].trigger & R_TRIG)
        {
            ToggleDebugMode();
        }
	
	}
	
	
	
	

/*---------END Wrap up display lists / swap frame buffers-------*/	

}


Vector3 ghostPosition; // for testing local audio loop
Vector3 firePosition;
Vector3 oceanPosition;
void UpdateGame()
{
	Dynamic* dynamicp;

	//dynamicp = &gfx_dynamic[gfx_gtask_no]; //specify dynamic buffer
	
    // PAUSE/UN-PAUSE 
    
    if(playerAvatar.state.movement == 5)
    {
        if(ContTriger[0].trigger & START_BUTTON)
        {	
            //Starts the game
        }
    }
    
    
    else{
        if(ContTriger[0].trigger & START_BUTTON)
        {	
            if(Pause == 0)
                Pause = 1;
                
            else if(Pause == 1)
                Pause = 0;
            //trigger for pause 
        }
    }

	if(ContTriger[0].trigger & U_CBUTTONS)
	{
		//trigger for debug
	}	
	
	if( Pause == 0 )
	{
		UpdateCameraPosition(dynamicp); 	
		updatePlayer(dynamicp);	
        UpdateUI(1);	

		//Level01_Enemies_Update();
		//UI_Target_Update();
	}
    
    else
    {    
        //You can toggle graphics settings while paused...

        PausePrint();
        
        if(ContTriger[0].trigger & A_BUTTON)
        {
            if(wideScreen == 1)
                wideScreen = 0;
                
            else if(wideScreen == 0)
                wideScreen = 1;
        }
    }
    
	
	//play music loop:
	//PlayAmbientLoop(8, audioEffects.musicVolume);
    PlayTownLoop(8, audioEffects.musicVolume);
    //seqHandle = MusStartSong(tune_buf);
	//play water at waterfall
	// ghostPosition.x = -4441; ghostPosition.y = 5086; ghostPosition.z = 1598;
	// PlayAmbientLoopLocal(0, 4, 125, 3000, ghostPosition);
    
    firePosition.x = -2097; firePosition.y = -2753; firePosition.z = 419;
    PlayAmbientLoopLocal(20, 3, 100, 2500, firePosition);
    
    oceanPosition.x = -550; oceanPosition.y = -4800; oceanPosition.z = 119;
    PlayAmbientLoopLocal(FX_WAVES, 4, 80, 5500, oceanPosition);
    
    ghostPosition.x = -12763; ghostPosition.y = 6514; ghostPosition.z = 968;
    PlayAmbientLoopLocal(FX_SPIRIT1, 5, 100, 3000, ghostPosition);
       //PlayAmbientLoopLocal(FX_SPOTTED, 5, 45, 3000, ghostPosition); 
	
	//if(ContTriger[0].trigger & B_BUTTON)
	//	PlayAmbientLoopMore(3);
}