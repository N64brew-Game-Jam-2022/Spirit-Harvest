#include "common.h"
#include "objectDefs.h"
#include "level00.h"
#include "collisionDefs.h"
#include "Scn00_Landing_Pad_defs.h"


/*--------------------------------------------------------------------------*/
/*----------------------------LANDING PAD SCENE-----------------------------*/
/*--------------------------------------------------------------------------*/

/*---------------------------LANDING PAD LOD0----------------------------*/


	// SetVector3(&Scn04_Landing_Walls.obj.pos, 3523,-3223,8); 
	// SetVector3(&Scn04_Landing_Walls.obj.rot, 0,0,0);
	// SetVector3(&Scn04_Landing_Walls.obj.scl, 1,1,1);

   StaticEnvObject Scn04_Ship;
   EnvObject Scn04_Light_Ray;
   StaticEnvObject Scn04_Landing_Ground2;
   StaticEnvObject Scn04_Landing_Ground;
   StaticEnvObject Scn04_Landing_Platform;
   StaticEnvObject Scn04_Landing_Stone_Door;
   StaticEnvObject Scn04_Landing_Spires;
   StaticEnvObject Scn04_Ship_Glow;
   StaticEnvObject Scn04_Landing_Walls;

// StaticEnvObject Scn04_Ship;
// StaticEnvObject Scn04_Ship_Glow;
//StaticEnvObject Scn04_Landing_Spires;

/*--------------------------LANDING PAD LOD1----------------------------*/

StaticEnvObject Scn04_Landing_LOD1;
SceneManager scene_Landing_Pad;


   TriggerBox Landing_Pad_SceneTrig[3] = {
   {2728, -8353, -285, 6128, -5098, 1938, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_01
   {6040, -8787, -749, 8528, -6912, 1694, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_02
   {6040, -6928, -749, 8166, -4645, 1226, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_03
   };
   TriggerBox Landing_Pad_SectorTrig[6] = {
   {4029, -7091, 117, 5154, -5692, 270, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_Ship
   {2769, -8252, -312, 4029, -5158, 270, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_00
   {2769, -8252, -312, 6152, -5158, 270, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_01
   {2769, -8252, 270, 6152, -5158, 1679, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_02
   {2769, -8252, 270, 4461, -5158, 1679, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_03
   {4523, -6245, -321, 5060, -5227, 281, 0}, //AABB Sector Object: SectorTrig_Landing_Pad_Light
   };


void init_Scene_Landing_Pad()
{
    // scene_Landing_Pad.isActive		= 0;
    // scene_Landing_Pad.sceneInit				= init_Scene_Landing_Pad;
	// scene_Landing_Pad.envObjInit			= init_EnvObjects_Landing_Pad;
	// scene_Landing_Pad.renderEnvObj		    = render_EnvObjects_Landing_Pad;
	// scene_Landing_Pad.enemiesRender			= init_lvl00_Courtyard;
	// scene_Landing_Pad.objectsRender			= init_lvl00_Courtyard;
	// scene_Landing_Pad.renderTranspEnvObj	= renderTransp_EnvObjects_Landing_Pad; //rendering transparent world objects last
	// scene_Landing_Pad.sceneTriggers			= lvl00_SceneTrig;
	// //scene_Landing_Pad.sectorTriggers 		= lvl00_CourtyardSectorTrig;
	// scene_Landing_Pad.wallColObj			= MColObj_Landing_Pad_Wall_01;
	// scene_Landing_Pad.groundColObj			= MColObj_Landing_Pad_Ground_01;
}


// u8 testVar = 0;

void init_EnvObjects_Landing_Pad()
{
    // if(testVar == 0)
    // {
        
// /*--------------------------Landing_Pad LOD0----------------------------*/ 

   // SetVector3(&Scn04_Ship.obj.pos, 4720, -6540,92);
   // SetVector3(&Scn04_Ship.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Ship.obj.scl, 1, 1,1);
   // Scn04_Ship.staticModel.displayList = Player_Ship_V2001_Static_PolyList_0;

   // SetVector3(&Scn04_Light_Ray.obj.pos, 3523, -3223,8);
   // SetVector3(&Scn04_Light_Ray.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Light_Ray.obj.scl, 1, 1,1);
   // SetAnimator(&Scn04_Light_Ray.animator, &lvl01_scn04_landing_pad_light_shaft_PolyList, 0,0);

   // SetVector3(&Scn04_Landing_Ground2.obj.pos, 3523, -3223,0);
   // SetVector3(&Scn04_Landing_Ground2.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Ground2.obj.scl, 1, 1,1);
   // Scn04_Landing_Ground2.staticModel.displayList = lvl01_scn04_landing_pad_ground02_Static_PolyList_0;

   // SetVector3(&Scn04_Landing_Ground.obj.pos, 3523, -3223,0);
   // SetVector3(&Scn04_Landing_Ground.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Ground.obj.scl, 1, 1,1);
   // Scn04_Landing_Ground.staticModel.displayList = lvl01_scn04_landing_pad_ground_Static_PolyList_0;

   // SetVector3(&Scn04_Landing_Platform.obj.pos, 4632, -6501,0);
   // SetVector3(&Scn04_Landing_Platform.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Platform.obj.scl, 1, 1,1);
   // Scn04_Landing_Platform.staticModel.displayList = lvl01_scn04_landing_pad_platform_Static_PolyList_0;

   // SetVector3(&Scn04_Landing_Stone_Door.obj.pos, 3935, -7382,767);
   // SetVector3(&Scn04_Landing_Stone_Door.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Stone_Door.obj.scl, 1, 1,1);
   // Scn04_Landing_Stone_Door.staticModel.displayList = lvl01_scn04_landing_pad_stone_door_Static_PolyList_0;

   // SetVector3(&Scn04_Landing_Spires.obj.pos, 4632, -6501,0);
   // SetVector3(&Scn04_Landing_Spires.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Spires.obj.scl, 1, 1,1);
   // Scn04_Landing_Spires.staticModel.displayList = lvl01_scn04_landing_pad_spires_Static_PolyList_0;

   // SetVector3(&Scn04_Ship_Glow.obj.pos, 4720, -6540,92);
   // SetVector3(&Scn04_Ship_Glow.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Ship_Glow.obj.scl, 1, 1,1);
   // Scn04_Ship_Glow.staticModel.displayList = Scn04_Ship_Glow_Static_PolyList_0;

   // SetVector3(&Scn04_Landing_Walls.obj.pos, 3523, -3223,8);
   // SetVector3(&Scn04_Landing_Walls.obj.rot, 0, 0,0);
   // SetVector3(&Scn04_Landing_Walls.obj.scl, 1, 1,1);
   // Scn04_Landing_Walls.staticModel.displayList = scn04_landing_pad_walls_Static_PolyList_0;

 
// /*--------------------------Landing_Pad LOD1----------------------------*/ 

            // /*--------------------------LANDING PAD LOD1----------------------------*/

            // SetVector3(&Scn04_Landing_LOD1.obj.pos, 3523,-3223,0); 
            // SetVector3(&Scn04_Landing_LOD1.obj.rot, 0,0,0);
            // SetVector3(&Scn04_Landing_LOD1.obj.scl, 1,1,1);
            // Scn04_Landing_LOD1.staticModel.displayList = lvl01_scn04_landing_pad_LOD1_Static_PolyList_0;
    
// //TO DO NOTE: Create a reset so that this code is not constantly called. Move this to be part of the "sceneManager" and control it from the gameManager script.
// //EXAMPLE: if a player triggers a new scene, on first init, this script will run. After being initialized, this script should NOT run again until the player leaves the trigger.
    // testVar = 1; 
    
    
    // }

}



// void render_EnvObjects_Landing_Pad(u8 LOD){

   // TEXTURE_FOG_VTXCOL(glistp,29,22,12,245,900,1000); 

   // if(LOD == 0){
         // RenderStaticEnvObj(&Scn04_Ship);
         // RenderStaticEnvObj(&Scn04_Landing_Ground2);
         // RenderStaticEnvObj(&Scn04_Landing_Ground);
         // RenderStaticEnvObj(&Scn04_Landing_Platform);
         // RenderStaticEnvObj(&Scn04_Landing_Stone_Door);
         // RenderStaticEnvObj(&Scn04_Landing_Spires);
         // RenderStaticEnvObj(&Scn04_Landing_Walls);

// /*Render Layer: 1*/   

// /*Render Layer: 2*/   
   // }

   // if(LOD == 1){

      // TEXTURE_FOG_VTXCOL(glistp,20,10,10,255,875,1000); 
         // RenderStaticEnvObj(&Scn04_Landing_LOD1);
   // }
// }

// void renderTransp_EnvObjects_Landing_Pad(u8 LOD){

   // TEXTURE_FOG_VTXCOL(glistp,29,22,12,245,900,1000); 

   // if(LOD == 0){
         // RenderStaticEnvObj(&Scn04_Ship_Glow);

      // TEXTURE_FOG_VTXCOL(glistp,255,255,200,0,930,880);
         // RenderEnvObj(&Scn04_Light_Ray);
   // }
// }




// // void render_EnvObjects_Landing_Pad(u8 LOD)
// // {
   // // TEXTURE_FOG_VTXCOL(glistp,29,22,12,245,900,1000); 
   // // if(LOD == 0){

         // // RenderStaticEnvObj(&Scn04_Ship);
         // // RenderStaticEnvObj(&Scn04_Landing_Ground2);
         // // RenderStaticEnvObj(&Scn04_Landing_Ground);
         // // RenderStaticEnvObj(&Scn04_Landing_Platform);
         // // RenderStaticEnvObj(&Scn04_Landing_Stone_Door);
         // // RenderStaticEnvObj(&Scn04_Landing_Spires);
         // // //RenderStaticEnvObj(&Scn04_Ship_Glow);
         // // RenderStaticEnvObj(&Scn04_Landing_Walls);

   // // }

    // // if(LOD == 1)
    // // {
        // // TEXTURE_FOG_VTXCOL(glistp, 20, 10, 10, 255,875,1000); //call only once for all similar env objects
        // // RenderStaticEnvObj(&Scn04_Landing_LOD1);
    // // }
// // }

// // void renderTransp_EnvObjects_Landing_Pad(u8 LOD)
// // {
    // // if(LOD == 0)
    // // {
        // // TEXTURE_FOG_VTXCOL(glistp, 255, 255, 200, 0,930,880); //NOTE: this setting removes detail closer to the camera
        // // RenderEnvObj(&Scn04_Light_Ray);        

        // // TEXTURE_FOG_VTXCOL(glistp, 50, 100, 175, 0,930,880); //NOTE: this setting removes detail closer to the camera
        // // RenderStaticEnvObj(&Scn04_Ship_Glow);    
    // // }
// // }


// //void sceneCol_Scn04_Landing_Pad()
// void SceneTrig_Check_Landing_Pad(SceneTrigger *thisScene)
// {
            
    // thisScene->LOD = 0;
    // thisScene->isActive = 0;
    // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
    // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
    // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
        // thisScene->LOD += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);

// }

// void SectorTrig_Update_Landing_Pad(SceneTrigger *thisScene)
// {



   // // if(scene_Landing_Pad.isActive > 0)
   // // {
   
      // // //if(thisScene->sectorTrig[0].isActive > 0){
      // // if(thisScene->sectorTrig[0].isActive > 0){
      
        // // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_01;   
        // // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_01;   
        // // playerAvatar.playerLighting = env00_cave1_shade;   
      // // }

      // // //if(thisScene->sectorTrig[1].isActive > 0){
      // // else if(thisScene->sectorTrig[1].isActive > 0){
        // // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_02;   
        // // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_02;   
        // // playerAvatar.playerLighting = env00_cave2_pool2_light;   
      // // }

      // // //if(thisScene->sectorTrig[2].isActive > 0){
      // // if(thisScene->sectorTrig[2].isActive > 0){
        // // playerAvatar.playerLighting = env00_light_beam;   
      // // }
   // // }

   
   
   
   
      // if(scene_Landing_Pad.isActive > 0){


          // if(thisScene->sectorTrig[0].isActive > 0){
            // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ship_Ground;   
            // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Ship_Walls;   
            // playerAvatar.playerLighting = env00_light_beam;   
          // }

          // else if(thisScene->sectorTrig[1].isActive > 0){
            // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_00;   
            // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_00;   
            // playerAvatar.playerLighting = env00_cave1_shade;   
          // }

          // else if(thisScene->sectorTrig[2].isActive > 0){
            // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_01;   
            // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_01;   
            // playerAvatar.playerLighting = env00_cave1_shade;   
          // }

          // else if(thisScene->sectorTrig[3].isActive > 0){
            // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_02;   
            // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_02;   
            // playerAvatar.playerLighting = env00_cave2_pool2_light;   
          // }

          // else if(thisScene->sectorTrig[4].isActive > 0){
            // scene_Landing_Pad.groundColObj = MColObj_Landing_Pad_Ground_00;   
            // scene_Landing_Pad.wallColObj = MColObj_Landing_Pad_Wall_03;   
            // playerAvatar.playerLighting = env00_cave1_shade;   
          // }

          // if(thisScene->sectorTrig[5].isActive > 0){
            // playerAvatar.playerLighting = env00_light_beam;   
          // }
        // }

// }






