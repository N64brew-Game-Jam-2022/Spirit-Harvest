//#include "levelDefs.h"
#include "common.h"
#include "objectDefs.h"
#include "level00.h"
//#include "Scn06_Beach_defs.h"
#include "collisionDefs.h"
#include "skyboxes/Scn00_Skybox_defs.h"
#include "instancedobjs/Scn01_Instanced_defs.h"
#include "courtyard/Scn04_Courtyard_defs.h"
#include "watercave/Scn02_Cave_Defs.h"
#include "towns/Scn01_Towns_defs.h"
#include "overlook/Scn03_Overlook_defs.h"
#include "landingpad/Scn00_Landing_Pad_defs.h"
//#include "testscenes/Scn05_Player_Test_defs.h"
#include "beach/Scn06_Beach_defs.h"
#include "beach/Scn07_Town_defs.h"
#include "forestentrance/Scn05_Forest_entrance_defs.h"
#include "forestentrance/Scn02_Forest_defs.h"



/*--------------------------------------------------------------------------*/
/*---------------------------BREAKDOWN OF LEVEL00---------------------------*/
/*--------------------------------------------------------------------------*/
/*

Each LEVEL is broken up into SCENES
Each SCENE is broken up into SECTORS for triggering lighting, checking for collisions etc

							[Level00]
														
		0			1		2		3				4					
Scenes: [Courtyard]	[Cave1]	[Cave2]	[Landing Zone]	[Cliffside]
			|
			 ----------------
							 |
						[Courtyard]
Sectors: 	[sector01]	[sector02]	[sector03]
			

*/



Lights1 screenGlow = gdSPDefLights1( 
		0,255,255,
		0,0,0,
		0,0,0);
        
Lights2 env01_01_shade = gdSPDefLights2(
	50, 60, 50, // amb col 
	125, 100, 90, // col 1 side  
	0,   30,  80, // dir 1
	40, 50, 30, // col 2 ground   
	15,   -30,  -80 // dir 2
);

Lights2 env00_cave1_entrance = gdSPDefLights2(
	40, 50, 40, // amb col 
	125, 100, 90, // col 1  side
	0,   80,  50, // dir 1
	15, 40, 35, // col 2   ground
	15,   -80,  -50 // dir 2
);

Lights2 env00_light_beam = gdSPDefLights2(
	30, 35, 30, // amb col 
	170, 165, 130, // col 1  side
	25,   -25,  90, // dir 1
	15, 15, 25, // col 2   ground
	0,   80,  30 // dir 2

);


Lights2 env00_cave1_shade = gdSPDefLights2(
	30, 40, 30, // amb col 
	10, 55, 65, // col 1  side
	0,   0,  90, // dir 1
	30, 25, 10, // col 2   ground
	20,   40,  -80 // dir 2
);

Lights2 env00_cave2_pool2_light = gdSPDefLights2(
	40, 40, 35, // amb col 
    150, 110, 60, // col 1  side
	35,   -55,  20, // dir 1
	25, 15, 10, // col 2   ground
	0,   80,  30 // dir 2
);

Lights2 env00_overlook_bright = gdSPDefLights2(
	50, 50, 42, // amb col 
	165, 140, 80, // col 1  side
	35,   -55,  20, // dir 1
	30, 25, 25, // col 2   ground
	0,   80,  30 // dir 2
);



Lights2 env00_doorway_glow = gdSPDefLights2(
	20, 65, 60, // amb col 
	100, 175, 170, // col 1  side
	0,   -15,  90, // dir 1
	35, 30, 20, // col 2   ground
	0,   80,  -60 // dir 2
);

/*--------------------------------------------------------------------------*/
/*-------------------------------SKYBOX OBJECT------------------------------*/
/*--------------------------------------------------------------------------*/	
	
EnvObject lvl00_Skybox;
	
/*--------------------------------------------------------------------------*/
/*-----------------------------CAVE1 SCENE------------------------------*/
/*--------------------------------------------------------------------------*/

SceneManager scene_Cave1;

/*--------------------------------------------------------------------------*/
/*---------------------------SECURITY DOOR SCENE----------------------------*/
/*--------------------------------------------------------------------------*/
EnvObject OBJECT_Door_Cave1;
EnvObject OBJECT_Door_Cave_Glow;
EnvObject OBJECT_Door_Cave_Terminal;
EnvObject OBJECT_Door_Cave_Terminal_Screens;

EnvObject OBJECT_Door_Part01;
EnvObject OBJECT_Door_Part02;
EnvObject OBJECT_Door_Part03;

EnvObject OBJECT_Door_LandingPad;
EnvObject OBJECT_Door_LandingPad_Glow;
EnvObject OBJECT_Door02_Part01;
EnvObject OBJECT_Door02_Part02;
EnvObject OBJECT_Door02_Part03;

/*--------------------------------------------------------------------------*/
/*-----------------------------CAVE2 SCENE------------------------------*/
/*--------------------------------------------------------------------------*/

SceneManager scene_Cave2;

/*--------------------------------------------------------------------------*/
/*-----------------------------OVERLOOK SCENE-------------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
/*----------------------------LANDING PAD SCENE-----------------------------*/
/*--------------------------------------------------------------------------*/

SceneManager scene_Landing_Pad;

/*--------------------------------------------------------------------------*/
/*-----------------------------COURTYARD SCENE------------------------------*/
/*--------------------------------------------------------------------------*/

SceneManager scene_Courtyard;

/*--------------------------------------------------------------------------*/
/*------------------------------LEVEL OBJECTS-------------------------------*/
/*--------------------------------------------------------------------------*/

SceneManager scene_Door_Objs; //All of the doorway wall collisions in the current level

void lvl00_loading_zone_scene_triggers();



TriggerBox lvl00_doorway_Triggers[2] =
{
	{2744, -5423, -538, 4040, -4685, 1301, 0}, // doorway collision 
    {1456, -4025, -285, 2194, -2728, 1049, 0}, // doorway collision 
};
   
TriggerBox DoorwaysLVL01_SectorTrig[2] = {
   {2744, -5423, -538, 4040, -4685, 1301, 0 }, //AABB Sector Object: lvl01_scn02_cave2_toCave1_col_TrigBox
   {1456, -4025, -285, 2194, -2728, 1049, 0}, //AABB Sector Object: lvl01_scn02_cave2_toPad_col_TrigBox
   };  
   

//DOOR WAY TRIGGERS FROM GOING TO CAVE1 to CAVE2
TriggerBox landing_Pad_door_open_trigger[4] =
{
	{2744, -5423, -538, 4040, -4685, 1301, 0}, //Trigger for opening the door itself
	{2744, -5757, -538, 4040, -5054, 1301, 0}, //trigger for cave1 side of door environment load - load cave2 side as well if the door is open
	{2744, -5054, -538, 4040, -4104, 1301, 0}, //Trigger for cave2 side of door environment load - load cave1 side as well if the door is open
	{2744, -5158, -538, 4040, -4950, 1301, 0} //Trigger for cave2 side of door environment load - load cave1 side as well if the door is open
};
    
//DOOR WAY TRIGGERS FROM GOING TO CAVE1 to CAVE2
TriggerBox cave1_door_open_trigger[4] =
{
	{1456, -4025, -285, 2194, -2728, 1049, 0}, //Trigger for opening the door itself
	{1121, -4025, -285, 1825, -2728, 1049, 0}, //trigger for cave1 side of door environment load - load cave2 side as well if the door is open
	{1825, -4025, -285, 2775, -2728, 1049, 0}, //Trigger for cave2 side of door environment load - load cave1 side as well if the door is open
	{1733, -4025, -285, 1917, -2728, 1049, 0} //Trigger for cave2 side of door environment load - load cave1 side as well if the door is open
};




SceneManager* scenes[9];

SceneTrigger lvl00_SceneTrig[9] = {	
//NOTE ON USE: {	(scene)isAct ive,	(scene)trigBox,	sectorCount(in scene),	sectorTrig(in scene)		}	
//Scenes in level 00 = courtyard, cave1, landing zone
	//-----Scene [0]: Courtyard-----
	{0,	Courtyard_SceneTrig, 0,	4, Courtyard_SectorTrig},  //scene01----lvl00SceneTrig[0] Courtyard----
	{0,	Skybox_SceneTrig, 0,	1, Skybox_SectorTrig},  //scene00----Cave1----
	{0,	Forest_SceneTrig, 0,	1, Forest_SectorTrig},  //scene02----Cave2----
	{0,	Forest_SceneTrig, 0,	2, Forest_SectorTrig},  //scene03----Overlook----
	{0,	Landing_Pad_SceneTrig, 0,	6, Landing_Pad_SectorTrig},  //scene04----Landing Pad----
	{0, lvl00_doorway_Triggers, 0, 3,  DoorwaysLVL01_SectorTrig }, //Level 1 all door collisions
    {0, Forest_entrance_SceneTrig, 0, 5,  Forest_entrance_SectorTrig }, //Level 1 all door collisions
    {0, Beach_SceneTrig, 0, 8,  Beach_SectorTrig }, //Level 1 all door collisions
    {0, Town_SceneTrig, 0, 4,  Town_SectorTrig } //Level 1 all door collisions
};

// extern TriggerBox Forest_SceneTrig[1];
// extern TriggerBox Forest_SectorTrig[1];

void init_lvl00_Courtyard() 
{

}


//Initiate Cave1 Environment
void init_lvl00_Cave1() 
{
	int tempInt = 180;
	

}

//Initiate Cave2 Environment
void init_lvl00_Cave2() 
{
	int tempInt = 0;

    
}
//extern Vtx lvl01_scn03_PanelArray_VertList_0 [];
//extern void lvl01_scn03_PanelArray_PolyList( u8 animFrame );

void init_lvl00_Overlook()
{
    

    
}

void init_lvl00_Landing_Pad()
{
    init_EnvObjects_Landing_Pad();
}

int panelAnimationTimer;

void render_lvl00_Courtyard(u8 LOD)
{
	int level = 0;
	int scene = 0;
	int sector = 0;
	
	int tempAnimationTimer = 0;

	/*-----------------------------COURTYARD SCENE------------------------------*/		
	/*--------------------------------------------------------------------------*/
	/*------------------------------SOLID OBJECTS-------------------------------*/
	for(scene = 0; scene < 9; scene++)
	{
				if(lvl00_SceneTrig[0].isActive > 0 && scene == 0)
				//NOTE: Check each scene in level to see if player is within this region 
				//to see if it should be rendered
				{
                    //render_EnvObjects_Beach(lvl00_SceneTrig[0].LOD);
                   //render_EnvObjects_Courtyard(lvl00_SceneTrig[0].LOD);

				}	

				if(lvl00_SceneTrig[1].isActive > 0 && scene == 1)
				//NOTE: Check each scene in level to see if player is within this region 
				//to see if it should be rendered
				{
                    render_EnvObjects_Skybox(lvl00_SceneTrig[1].LOD);
                  //  render_EnvObjects_Cave(lvl00_SceneTrig[2].LOD);
                
				}

                
                if(lvl00_SceneTrig[2].isActive > 0 && scene == 2)
				//NOTE: Check each scene in level to see if player is within this region 
				//to see if it should be rendered
				{
                
                   // render_EnvObjects_Forests(lvl00_SceneTrig[2].LOD);

				}
                
                
				if(lvl00_SceneTrig[3].isActive > 0 && scene == 3)
				//NOTE: Check each scene in level to see if player is within this region 
				//to see if it should be rendered
				{
                   // render_EnvObjects_Overlook(lvl00_SceneTrig[3].LOD);    
                    render_EnvObjects_Forests(lvl00_SceneTrig[3].LOD);                   
                
				}
				
				
				if(lvl00_SceneTrig[4].isActive > 0 && scene == 4)
				//NOTE: Check each scene in level to see if player is within this region 
				//to see if it should be rendered
				{                
                    //render_EnvObjects_Landing_Pad(lvl00_SceneTrig[4].LOD);
				}
                
                if(lvl00_SceneTrig[6].isActive > 0 && scene == 6)
                {            
                   render_EnvObjects_Forest_entrance(lvl00_SceneTrig[6].LOD);
                }
                
                if(lvl00_SceneTrig[7].isActive > 0 && scene == 7)
                {            
                   render_EnvObjects_Beach(lvl00_SceneTrig[7].LOD);
                }
                
                if(lvl00_SceneTrig[8].isActive > 0 && scene == 8)
                {            
                   render_EnvObjects_Town(lvl00_SceneTrig[8].LOD);
                }

	}
    
    //render_EnvObjects_Player_Test(lvl00_SceneTrig[6].LOD);

	// if(lvl00_SceneTrig[2].isActive > 0 || lvl00_SceneTrig[1].isActive > 0)
		// {			
			// TEXTURE_FOG_VTXCOL(glistp, 10, 15, 15, 255,950,1000); //call only once for all similar env objects
			
            
			

		// }

	// if(lvl00_SceneTrig[2].isActive > 0 || lvl00_SceneTrig[4].isActive > 0)
		// {			
			// TEXTURE_FOG_VTXCOL(glistp, 10, 15, 15, 255,950,1000); //call only once for all similar env objects
            
		// }
		
	// if(lvl00_SceneTrig[0].isActive > 0 || lvl00_SceneTrig[1].isActive > 0 || lvl00_SceneTrig[3].isActive > 0)
		// {			
			// TEXTURE_FOG_VTXCOL(glistp, 255, 230, 200, 100,980,1000); //call only once for all similar env objects
			// //RenderEnvObj(&lvl00_Skybox);			
		// }

	//Courtyard
	if(scenes[0]->isActive > 0)
	{	
      // SectorTrig_Update_Courtyard(&lvl00_SceneTrig[0]); //Inside a separate script in the scenes folder
	}
	
	//Cave1
	
	if(scenes[1]->isActive > 0)
	{
        SectorTrig_Update_Skybox(&lvl00_SceneTrig[1]);
    
	}
	
	
	
	//Cave2
	
	
	if(scenes[2]->isActive > 0)
	{     
        //SectorTrig_Update_Forests(&lvl00_SceneTrig[2]);        
	}
	
	
	if(scenes[3]->isActive > 0)
	{
       // SectorTrig_Update_Overlook(&lvl00_SceneTrig[3]);
       SectorTrig_Update_Forests(&lvl00_SceneTrig[3]); 
	}
	
	if(scenes[4]->isActive > 0)
	{    
     //   SectorTrig_Update_Landing_Pad(&lvl00_SceneTrig[4]); //Inside a separate script in the scenes folder
	}
    
    if(scenes[6]->isActive > 0)
	{    
        SectorTrig_Update_Forest_entrance(&lvl00_SceneTrig[6]); //Inside a separate script in the scenes folder
	}
    
    if(scenes[7]->isActive > 0)
	{    
       SectorTrig_Update_Beach(&lvl00_SceneTrig[7]); //Inside a separate script in the scenes folder
	}
    
    if(scenes[8]->isActive > 0)
	{    
       SectorTrig_Update_Town(&lvl00_SceneTrig[8]); //Inside a separate script in the scenes folder
	}
    
    
    
	
	if(scenes[5]->isActive > 0)
    {
		// //if(lvl00_SceneTrig[5].sectorTrig[0].isActive > 0)
        // if(lvl00_SceneTrig[5].sectorTrig[0].isActive > 0)
		// //NOTE: Check each sector in a scene to see if the player is in this sector 
		// //to determine whether the associated collisions should be checked
		// {
			// //TO DO NOTE: Set up SectorTrigger for ground collision
			// scene_Door_Objs.wallColObj = scn02_landingPad_SecurityDoor_MColObj;
			// scene_Door_Objs.groundColObj	= lvl00_scn00_col_ground01_MColObj;			
		// }
        
        // //if(lvl00_SceneTrig[5].sectorTrig[1].isActive > 0)
        // else if(lvl00_SceneTrig[5].sectorTrig[1].isActive > 0)
		// //NOTE: Check each sector in a scene to see if the player is in this sector 
		// //to determine whether the associated collisions should be checked
		// {
			// //TO DO NOTE: Set up SectorTrigger for ground collision
			// scene_Door_Objs.wallColObj = scn02_cave2_SecurityDoor_MColObj;
			// scene_Door_Objs.groundColObj	= lvl00_scn00_col_ground01_MColObj;			
		// }
    }
	
	//LIGHT CHECK FOR DOORWAYS
	if(scenes[4]->isActive > 0 || scenes[2]->isActive > 0 || scenes[1]->isActive > 0)
	{
    
		// if(cave1_door_open_trigger[3].isActive > 0)			
			// playerAvatar.playerLighting = env00_doorway_glow;
		// else if(landing_Pad_door_open_trigger[3].isActive > 0)			
			// playerAvatar.playerLighting = env00_doorway_glow;			

	}
}


void render_lvl00_Courtyard_Transp(u8 LOD)
{ //Render transparent objects in scene
	/*-----------------------------COURTYARD SCENE------------------------------*/		
	/*--------------------------------------------------------------------------*/
	/*---------------------------TRANSPARENT OBJECTS----------------------------*/	
	int level = 0;
	int scene = 0;
	int sector = 0;
    
    int tempAnimationTimer = 0;
    AnimCycle();

	for(scene = 0; scene < 9; scene++)
	{
			if(lvl00_SceneTrig[0].isActive > 0 && scene == 0)
			//NOTE: Check each scene in level to see if player is within this region 
			//to see if it should be rendered
			{		
                
             //renderTransp_EnvObjects_Courtyard(lvl00_SceneTrig[0].LOD);
                
			}	
            
            if(lvl00_SceneTrig[1].isActive > 0 && scene == 1)
			//NOTE: Check each scene in level to see if player is within this region 
			//to see if it should be rendered
			{		
                
                renderTransp_EnvObjects_Skybox(lvl00_SceneTrig[1].LOD);
            }
						

            if(lvl00_SceneTrig[2].isActive > 0 && scene == 2)
			{                        
              //renderTransp_EnvObjects_Forests(lvl00_SceneTrig[2].LOD);
			}

            if(lvl00_SceneTrig[3].isActive > 0 && scene == 3)
			{
                renderTransp_EnvObjects_Forests(lvl00_SceneTrig[3].LOD);
               // renderTransp_EnvObjects_Overlook(lvl00_SceneTrig[3].LOD);
                
                
                // if(lvl00_SceneTrig[3].LOD == 0)
                // {
                    // TEXTURE_FOG_VTXCOL(glistp, 130, 95, 70, 50,965,1000);
                    
                    // RenderStaticEnvObj(&lvl_01_scn03_PanelArray_Overlay);                    
                // }

			}
			
			if(lvl00_SceneTrig[4].isActive > 0 && scene == 4)
			{            
              // renderTransp_EnvObjects_Landing_Pad(lvl00_SceneTrig[4].LOD);
			}
            
            if(lvl00_SceneTrig[6].isActive > 0 && scene == 6)
			{            
                renderTransp_EnvObjects_Forest_entrance(lvl00_SceneTrig[6].LOD);
			}
            
            if(lvl00_SceneTrig[7].isActive > 0 && scene == 7)
                {            
                    //render_EnvObjects_Beach(lvl00_SceneTrig[7].LOD);
                    renderTransp_EnvObjects_Beach(lvl00_SceneTrig[7].LOD);
                }
                

			
	}
    
    if(lvl00_SceneTrig[8].isActive > 0)
    {            
        //render_EnvObjects_Beach(lvl00_SceneTrig[7].LOD);
        renderTransp_EnvObjects_Town(lvl00_SceneTrig[8].LOD);
    }
	
	// if(lvl00_SceneTrig[2].isActive > 0 || lvl00_SceneTrig[1].isActive > 0)
	// {			
       // if(lvl00_SceneTrig[1].LOD == 0) 
       // {
       
            // // gSPSetLights2(glistp++, screenGlow);
            
            // // if( OBJECT_Door_Part01.animator.animFrame < 5)
            // // {			
                // // TEXTURE_FOG_LIGHT(glistp, 55, 225, 255, 75,800,900); //NOTE: this setting removes detail closer to the camera 

                // // RenderEnvObj(&OBJECT_Door_Cave_Glow);	
            // // }
            
            // // TEXTURE_FOG_LIGHT(glistp, 25,45,60,50,900,980);	//Fog and texture settings	
            // // RenderEnvObj(&OBJECT_Door_Cave_Terminal_Screens);
        // }
	// }
	
	// if(lvl00_SceneTrig[2].isActive > 0 || lvl00_SceneTrig[4].isActive > 0)
	// {			
    
		// // gSPSetLights2(glistp++, screenGlow);
		
		// // if( OBJECT_Door02_Part01.animator.animFrame < 5)
		// // {			
			// // TEXTURE_FOG_LIGHT(glistp, 55, 225, 255, 75,800,900); //NOTE: this setting removes detail closer to the camera 

			// // RenderEnvObj(&OBJECT_Door_LandingPad_Glow);	
		// // }
	// }

}



/*--------------------------------------------------------------------------*/
/*--------------------------------- LIGHTING -------------------------------*/
/*--------------------------------------------------------------------------*/
void render_lvl00_Courtyard_Lights(u8 LOD)
{ //for checking lighting trigger boxes

	if(lvl00_SceneTrig[0].sectorTrig[0].isActive > 0 || lvl00_SceneTrig[0].sectorTrig[1].isActive > 0 ||lvl00_SceneTrig[0].sectorTrig[2].isActive > 0)
	{
		playerAvatar.playerLighting = env01_01_shade;
	}
	
	else
	{
		playerAvatar.playerLighting = env00_cave1_shade;
	}
	
}

/*--------------------------------------------------------------------------*/
/*--------------------------------- COLLISION ------------------------------*/
/*--------------------------------------------------------------------------*/


	//------------Collision Structs-------------
	

	
//extern void SceneTrig_Check_Beach(SceneTrigger *thisScene);
//NOTE ABOUT USAGE: 'collision_scenes' Scenes within a region would be such as the courtyard scene or the landing zone scene. 
//This will be a series of medium sized TriggerBox objects to determine the scenes that the player is near
//Used to determine what display lists to render in the current scene. 
//Used to narrow down what collision might be checked 

void lvl00_collision_scenes() 
{
    
   // SceneTrig_Check_Courtyard(&lvl00_SceneTrig[0]); //Inside a separate script in the scenes folder
    
    
    
    SceneTrig_Check_Skybox(&lvl00_SceneTrig[1]); //Inside a separate script in the scenes folder
    
    SceneTrig_Check_Forests(&lvl00_SceneTrig[3]);

    //SceneTrig_Check_Cave(&lvl00_SceneTrig[2]); //Inside a separate script in the scenes folder
    
    //SceneTrig_Check_Overlook(&lvl00_SceneTrig[3]);

  //  SceneTrig_Check_Landing_Pad(&lvl00_SceneTrig[4]); //Inside a separate script in the scenes folder
    
    SceneTrig_Check_Forest_entrance(&lvl00_SceneTrig[6]); //Inside a separate script in the scenes folder
    
    SceneTrig_Check_Beach(&lvl00_SceneTrig[7]); //Inside a separate script in the scenes folder
    SceneTrig_Check_Town(&lvl00_SceneTrig[8]); //Inside a separate script in the scenes folder
    
    
    // lvl00_SceneTrig[5].isActive = 0;	//reset landing pad trigger each time the function is called
	// lvl00_SceneTrig[5].isActive += triggerBoundBox(&playerAvatar.obj.pos, &lvl00_SceneTrig[5].trigBox[0]); //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...
	// lvl00_SceneTrig[5].isActive += triggerBoundBox(&playerAvatar.obj.pos, &lvl00_SceneTrig[5].trigBox[1]); //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...
    
	//CHECK DOOR TRIGGERS TO SEE IF A SCENE SHOULD BE LOADED EARLY
	//lvl00_loading_zone_scene_triggers();

	//scenes[0]->isActive = lvl00_SceneTrig[0].isActive;
	//scenes[1]->isActive = lvl00_SceneTrig[1].isActive;
    scenes[1]->isActive = lvl00_SceneTrig[1].isActive;
	//scenes[2]->isActive = lvl00_SceneTrig[2].isActive;
	scenes[3]->isActive = lvl00_SceneTrig[3].isActive;
	scenes[4]->isActive = lvl00_SceneTrig[4].isActive; //set to match cave2 trigger for now
    scenes[5]->isActive = lvl00_SceneTrig[5].isActive; //set to match cave2 trigger for now
    scenes[6]->isActive = lvl00_SceneTrig[6].isActive; //set to match cave2 trigger for now
    scenes[7]->isActive = lvl00_SceneTrig[7].isActive; //set to match cave2 trigger for now
    scenes[8]->isActive = lvl00_SceneTrig[8].isActive; //set to match cave2 trigger for now
}


void lvl00_loading_zone_scene_triggers() 
{	//CHECK DOOR TRIGGERS TO SEE IF A SCENE SHOULD BE LOADED EARLY
	//doorway 1 - cave1 to cave2
        
        // cave1_door_open_trigger[0].isActive = 0; //re-set each frame
        // cave1_door_open_trigger[0].isActive += triggerBoundBox(&playerAvatar.obj.pos, &cave1_door_open_trigger[0]);
        
        // cave1_door_open_trigger[1].isActive = 0; //re-set each frame
        // cave1_door_open_trigger[1].isActive += triggerBoundBox(&playerAvatar.obj.pos, &cave1_door_open_trigger[1]);  
        
        // cave1_door_open_trigger[2].isActive = 0; //re-set each frame
        // cave1_door_open_trigger[2].isActive += triggerBoundBox(&playerAvatar.obj.pos, &cave1_door_open_trigger[2]);
        
        // cave1_door_open_trigger[3].isActive = 0; //re-set each frame
        // cave1_door_open_trigger[3].isActive += triggerBoundBox(&playerAvatar.obj.pos, &cave1_door_open_trigger[3]);
        
        // if( cave1_door_open_trigger[1].isActive > 0 ) //cave1 side of door load geom trigger
        // {
            // lvl00_SceneTrig[1].isActive += 1;
        
            // if(OBJECT_Door_Part01.animator.animID > 0)
            // {
                // lvl00_SceneTrig[2].isActive += 1;
                // lvl00_SceneTrig[2].LOD = 2; //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...

            // }
        // }
        
        // if( cave1_door_open_trigger[2].isActive > 0 ) //cave2 side of door load geom trigger
        // {		
                // lvl00_SceneTrig[2].isActive += 1;
                
            // if(OBJECT_Door_Part01.animator.animID > 0)
                // lvl00_SceneTrig[1].isActive += 1;
        // }
        
        // landing_Pad_door_open_trigger[0].isActive = 0; //re-set each frame
        // landing_Pad_door_open_trigger[0].isActive += triggerBoundBox(&playerAvatar.obj.pos, &landing_Pad_door_open_trigger[0]);
        
        // landing_Pad_door_open_trigger[1].isActive = 0; //re-set each frame
        // landing_Pad_door_open_trigger[1].isActive += triggerBoundBox(&playerAvatar.obj.pos, &landing_Pad_door_open_trigger[1]);  
        
        // landing_Pad_door_open_trigger[2].isActive = 0; //re-set each frame
        // landing_Pad_door_open_trigger[2].isActive += triggerBoundBox(&playerAvatar.obj.pos, &landing_Pad_door_open_trigger[2]);
        
        // landing_Pad_door_open_trigger[3].isActive = 0; //re-set each frame
        // landing_Pad_door_open_trigger[3].isActive += triggerBoundBox(&playerAvatar.obj.pos, &landing_Pad_door_open_trigger[3]);
        
        // if( landing_Pad_door_open_trigger[1].isActive > 0 ) //cave1 side of door load geom trigger
        // {
            // lvl00_SceneTrig[4].isActive += 1;
        
            // if(OBJECT_Door02_Part01.animator.animID > 0)
            // {
                // lvl00_SceneTrig[2].isActive += 1;
                // lvl00_SceneTrig[2].LOD = 2; //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...
            // }
                // //lvl00_SceneTrig[2].isActive += 1;
        // }
        
        // if( landing_Pad_door_open_trigger[2].isActive > 0 ) //cave2 side of door load geom trigger
        // {		
                // lvl00_SceneTrig[2].isActive += 1;
                
            // if(OBJECT_Door02_Part01.animator.animID > 0)
                // lvl00_SceneTrig[4].isActive += 1;
        // }

}

void lvl00_collision_sectors() 
{
	//check scene triggerbox to load geometry
	int scene = 0;
	int sector = 0;
	// lvl00Triggers[0].sceneCount
	//for(scene = 0; scene < lvl00_SceneTrig[0].sectorCount; scene++)	
	for(scene = 0; scene < 9; scene++)	
	{		
		//-----For each scene in the level, -----
        
        
        if(lvl00_SceneTrig[scene].isActive)	
            {
                //for(sector = 0; sector < lvl00Triggers[0].sceneCount; sector++)	
                for(sector = 0; sector < lvl00_SceneTrig[scene].sectorCount; sector++)	
                {
                    lvl00_SceneTrig[scene].sectorTrig[sector].isActive = 0;
                    //lvl00_SceneTrig[scene].sectorTrig[sector].isActive = triggerBoundBox(&playerAvatar.obj.pos, lvl00_SceneTrig[scene].sectorTrig[sector].trigBox);
                    lvl00_SceneTrig[scene].sectorTrig[sector].isActive = triggerBoundBox(&playerAvatar.obj.pos, &lvl00_SceneTrig[scene].sectorTrig[sector]);
                }
                
            }	
        
	}
}

