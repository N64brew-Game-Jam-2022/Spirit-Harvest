#include "common.h"
#include "objectDefs.h"
#include "level00.h"
#include "collisionDefs.h"
#include "Scn02_Cave_Defs.h"


/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 2 | Cave-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Cave LOD0----------------------------*/ 

   StaticEnvObject Cave_Scn02_Walls_01;
   StaticEnvObject Cave_Scn02_Walls_02;
   StaticEnvObject Cave_Scn02_Ground_01;
   StaticEnvObject Cave_Scn02_Ground_02;
   EnvObject Cave_Scn02_Water_Pool_01;
   EnvObject Cave_Scn02_Water_Pool_02;
   EnvObject Cave_Scn02_Light_Shaft_01;
   EnvObject Cave_Scn02_Power_Glow_01;
 
/*--------------------------Cave LOD1----------------------------*/ 

   StaticEnvObject Cave_Scn02_Walls_01_LOD1;
 
/*--------------------------Cave LOD2----------------------------*/ 

   EnvObject Cave_Scn02_Power_Glow_01_LOD2;
   StaticEnvObject Cave_Scn02_Walls_02_LOD2;
   StaticEnvObject Cave_Scn02_Walls_01_LOD2;
 
/*--------------------------Cave Collision Objects ----------------------------*/ 

   TriggerBox Cave_SceneTrig[5] = {
   {5206, -4647, -749, 7648, -3562, 1057, 0}, //AABB Scene Object: SceneTrig_Cave_03
   {2708, -3561, -285, 7648, -1598, 1057, 0}, //AABB Scene Object: SceneTrig_Cave_01
   {2711, -5101, -285, 4132, -3556, 1046, 0}, //AABB Scene Object: SceneTrig_Cave_02
   {6040, -6928, -749, 8166, -4645, 1226, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_03
   {6040, -8787, -749, 8528, -6912, 1694, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_02
   };
   
   TriggerBox Cave_SectorTrig[5] = {
   {1468, -4201, -284, 2770, -2572, 997, 0}, //AABB Sector Object: SectorTrig_Cave_Entrance_00
   {2769, -5158, -284, 5078, -3205, 997, 0}, //AABB Sector Object: SectorTrig_Cave_00
   {2769, -3205, -284, 5224, -1580, 997, 0}, //AABB Sector Object: SectorTrig_Cave_01
   {5224, -4708, -284, 8218, -1580, 997, 0}, //AABB Sector Object: SectorTrig_Cave_02
   {6061, -5554, -284, 8158, -4708, 997, 0}, //AABB Sector Object: SectorTrig_Cave_03
   };
   

 
/*--------------------------Cave Manager----------------------------*/ 

   extern SceneManager scene_Cave2; 

/*--------------------------------------------------------------------------*/

void init_scene_Cave2(){ 
   // scene_Cave2.isActive   = 0; //Set scene Cave to inactive by default   
    // scene_Cave2.sceneInit       =   init_scene_Cave2;
    // scene_Cave2.envObjInit				= init_lvl00_Cave2;
	// scene_Cave2.renderEnvObj				= render_lvl00_Courtyard;
	// scene_Cave2.enemiesRender			= init_lvl00_Courtyard;
	// scene_Cave2.objectsRender			= init_lvl00_Courtyard;
	// scene_Cave2.renderTranspEnvObj	= render_lvl00_Courtyard_Transp; //rendering transparent world objects last
	// scene_Cave2.sceneTriggers			= lvl00_SceneTrig;
	// //scene_Cave2.sectorTriggers 			= lvl00_CourtyardSectorTrig;
	// scene_Cave2.wallColObj				= MColObj_Cave_Wall_01;
	// scene_Cave2.groundColObj			= MColObj_Cave_Ground_01;
    // // scene_Cave2.groundColObj = MColObj_Cave_Ground_01;   
    // // scene_Cave2.wallColObj = MColObj_Cave_Wall_01; 
   

} 
/*--------------------------Cave Manager----------------------------*/ 


void init_EnvObjects_Cave(){ 

 
/*--------------------------Cave LOD0----------------------------*/ 

   // SetVector3(&Cave_Scn02_Walls_01.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Walls_01.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Walls_01.obj.scl, 1, 1,1);
   // Cave_Scn02_Walls_01.staticModel.displayList = Scn02_Walls_01_Static_PolyList_0;

   // SetVector3(&Cave_Scn02_Walls_02.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Walls_02.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Walls_02.obj.scl, 1, 1,1);
   // Cave_Scn02_Walls_02.staticModel.displayList = Scn02_Walls_02_Static_PolyList_0;

   // SetVector3(&Cave_Scn02_Ground_01.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Ground_01.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Ground_01.obj.scl, 1, 1,1);
   // Cave_Scn02_Ground_01.staticModel.displayList = Scn02_Ground_01_Static_PolyList_0;

   // SetVector3(&Cave_Scn02_Ground_02.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Ground_02.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Ground_02.obj.scl, 1, 1,1);
   // Cave_Scn02_Ground_02.staticModel.displayList = Scn02_Ground_02_Static_PolyList_0;

   // SetVector3(&Cave_Scn02_Water_Pool_01.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Water_Pool_01.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Water_Pool_01.obj.scl, 1, 1,1);
   // SetAnimator(&Cave_Scn02_Water_Pool_01.animator, &Scn02_Water_Pool_01_PolyList, 0,0);

   // SetVector3(&Cave_Scn02_Water_Pool_02.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Water_Pool_02.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Water_Pool_02.obj.scl, 1, 1,1);
   // SetAnimator(&Cave_Scn02_Water_Pool_02.animator, &Scn02_Water_Pool_02_PolyList, 0,0);

   // SetVector3(&Cave_Scn02_Light_Shaft_01.obj.pos, 3523, -3223,8);
   // SetVector3(&Cave_Scn02_Light_Shaft_01.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Light_Shaft_01.obj.scl, 1, 1,1);
   // SetAnimator(&Cave_Scn02_Light_Shaft_01.animator, &Scn02_Light_Shaft_01_PolyList, 0,0);

   // SetVector3(&Cave_Scn02_Power_Glow_01.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Power_Glow_01.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Power_Glow_01.obj.scl, 1, 1,1);
   // SetAnimator(&Cave_Scn02_Power_Glow_01.animator, &Scn02_Power_Glow_01_PolyList, 0,0);

 
// /*--------------------------Cave LOD1----------------------------*/ 

   // SetVector3(&Cave_Scn02_Walls_01_LOD1.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Walls_01_LOD1.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Walls_01_LOD1.obj.scl, 1, 1,1);
   // Cave_Scn02_Walls_01_LOD1.staticModel.displayList = Scn02_Walls_01_LOD1_Static_PolyList_0;

 
// /*--------------------------Cave LOD2----------------------------*/ 

   // SetVector3(&Cave_Scn02_Power_Glow_01_LOD2.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Power_Glow_01_LOD2.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Power_Glow_01_LOD2.obj.scl, 1, 1,1);
   // SetAnimator(&Cave_Scn02_Power_Glow_01_LOD2.animator, &Scn02_Power_Glow_01_LOD2_PolyList, 0,0);

   // SetVector3(&Cave_Scn02_Walls_02_LOD2.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Walls_02_LOD2.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Walls_02_LOD2.obj.scl, 1, 1,1);
   // Cave_Scn02_Walls_02_LOD2.staticModel.displayList = Scn02_Walls_02_LOD2_Static_PolyList_0;

   // SetVector3(&Cave_Scn02_Walls_01_LOD2.obj.pos, 3523, -3223,0);
   // SetVector3(&Cave_Scn02_Walls_01_LOD2.obj.rot, 0, 0,0);
   // SetVector3(&Cave_Scn02_Walls_01_LOD2.obj.scl, 1, 1,1);
   // Cave_Scn02_Walls_01_LOD2.staticModel.displayList = Scn02_Walls_01_LOD2_Static_PolyList_0;


} 
/*--------------------------Cave Manager----------------------------*/ 


// void render_EnvObjects_Cave(u8 LOD){ 

   // TEXTURE_FOG_VTXCOL(glistp,850,950,0,0,850,950); 
   // if(LOD == 0){


      // TEXTURE_FOG_VTXCOL(glistp,30,15,15,255,875,1000); 
         // RenderStaticEnvObj(&Cave_Scn02_Walls_01);
         // RenderStaticEnvObj(&Cave_Scn02_Ground_01);

      // TEXTURE_FOG_VTXCOL(glistp,35,25,20,255,990,1000); 
         // RenderStaticEnvObj(&Cave_Scn02_Walls_02);
         // RenderStaticEnvObj(&Cave_Scn02_Ground_02);

   // }

   // if(LOD == 1){


      // TEXTURE_FOG_VTXCOL(glistp,35,25,20,255,990,1000); 
         // RenderStaticEnvObj(&Cave_Scn02_Walls_01_LOD1);

   // }

   // if(LOD == 2){


      // TEXTURE_FOG_VTXCOL(glistp,30,15,15,255,875,1000); 
         // RenderStaticEnvObj(&Cave_Scn02_Walls_01_LOD2);

      // TEXTURE_FOG_VTXCOL(glistp,35,15,15,255,875,1000); 
         // RenderStaticEnvObj(&Cave_Scn02_Walls_02_LOD2);

   // }


// }

// void renderTransp_EnvObjects_Cave(u8 LOD){ 

   // TEXTURE_FOG_VTXCOL(glistp,850,950,0,0,850,950); 
   // if(LOD == 0){


      // TEXTURE_FOG_VTXCOL(glistp,45,40,15,75,800,750);
         // RenderEnvObj(&Cave_Scn02_Water_Pool_01);
         // RenderEnvObj(&Cave_Scn02_Water_Pool_02);

      // TEXTURE_FOG_VTXCOL(glistp,255,255,200,0,800,750);
         // RenderEnvObj(&Cave_Scn02_Light_Shaft_01);

      // TEXTURE_FOG_VTXCOL(glistp,55,225,255,75,800,900);
         // RenderEnvObj(&Cave_Scn02_Power_Glow_01);

   // }

   // if(LOD == 1){


   // }

   // if(LOD == 2){


      // TEXTURE_FOG_VTXCOL(glistp,55,225,255,75,800,900);
         // RenderEnvObj(&Cave_Scn02_Power_Glow_01_LOD2);

   // }


// }

// /*--------------------------------------------------------------------------*/

// void SceneTrig_Check_Cave(SceneTrigger *thisScene){ 

   // thisScene->LOD = 0;
   // thisScene->isActive = 0;
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);        
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]);    
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]);
        // thisScene->LOD += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]); //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...

// }
// void SectorTrig_Update_Cave(SceneTrigger *thisScene){ 

   // if(scene_Cave2.isActive > 0){

      // if(thisScene->sectorTrig[0].isActive > 0){
        // scene_Cave2.groundColObj = MColObj_Cave_Ground_01;   
        // scene_Cave2.wallColObj = MColObj_Cave_Wall_01;   
        // playerAvatar.playerLighting = env00_cave1_shade;   
      // }

      // if(thisScene->sectorTrig[1].isActive > 0){
        // scene_Cave2.groundColObj = MColObj_Cave_Ground_01;   
        // scene_Cave2.wallColObj = MColObj_Cave_Wall_01;   
        // playerAvatar.playerLighting = env00_cave1_shade;   
      // }

      // if(thisScene->sectorTrig[2].isActive > 0){
        // scene_Cave2.groundColObj = MColObj_Cave_Ground_01;   
        // scene_Cave2.wallColObj = MColObj_Cave_Wall_01;   
        // playerAvatar.playerLighting = env00_cave1_shade;   
      // }

      // if(thisScene->sectorTrig[3].isActive > 0){
        // scene_Cave2.groundColObj = MColObj_Cave_Ground_02;   
        // scene_Cave2.wallColObj = MColObj_Cave_Wall_02;   
        // playerAvatar.playerLighting = env00_cave2_pool2_light;   
      // }

      // if(thisScene->sectorTrig[4].isActive > 0){
        // scene_Cave2.groundColObj = MColObj_Cave_Ground_02;   
        // scene_Cave2.wallColObj = MColObj_Cave_Wall_02;   
        // playerAvatar.playerLighting = env00_cave2_pool2_light;   
      // }
   // }

// }
