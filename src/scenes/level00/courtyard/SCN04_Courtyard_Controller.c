#include "common.h"
#include "objectDefs.h"
#include "level00.h"
#include "collisionDefs.h"
#include "Scn04_Courtyard_defs.h"

/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 4 | Courtyard-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Courtyard LOD0----------------------------*/ 

   StaticEnvObject Courtyard_Scn04_BreakRock;
   StaticEnvObject Courtyard_Scn04_Trees;
   StaticEnvObject Courtyard_Scn04_Walls_01;
   StaticEnvObject Courtyard_Scn04_Arches_02;
   StaticEnvObject Courtyard_Scn04_Ground;

   StaticEnvObject Courtyard_Scn04_Trees_Fungus;
   StaticEnvObject Courtyard_Scn04_RiverWalk;
   EnvObject Courtyard_Scn04_Waterfall;
   EnvObject Courtyard_Scn04_River02;
 
 
    void render_EnvObjects_Courtyard(u8 LOD);
    extern Lights2 env00_cave1_entrance;
    extern Lights2 env01_01_shade;
    
    
    /*--------------------------Courtyard Animation Cycle----------------------------*/ 
    extern int animCoordCycleH;
	extern int animCoordCycleV;		
    
    
    extern void AnimCycle();
 
/*--------------------------Courtyard Collision Objects ----------------------------*/ 

   TriggerBox Courtyard_SceneTrig[3] = {
   {-2675, -462, -284, 2511, 689, 997, 0}, //AABB Scene Object: SceneTrig_Courtyard_00
   {-642, -4200, -284, 642, -433, 997, 0}, //AABB Scene Object: SceneTrig_Courtyard_01
   {515, -4198, -285, 1842, -2014, 1046, 0}, //AABB Scene Object: SceneTrig_Courtyard_02
   };
   
   TriggerBox Courtyard_SectorTrig[4] = {
   {-1922, -451, -284, -552, 689, 997, 0}, //AABB Sector Object: SectorTrig_Courtyard_00
   {-552, -451, -284, 194, 689, 997, 0}, //AABB Sector Object: SectorTrig_Courtyard_01
   {194, -451, -284, 1481, 689, 997, 0}, //AABB Sector Object: SectorTrig_Courtyard_02
   {-892, -1900, -284, 636, -451, 997, 0}, //AABB Sector Object: SectorTrig_Courtyard_03
   };
 
/*--------------------------Courtyard Manager----------------------------*/ 

   extern SceneManager scene_Courtyard; 

/*--------------------------------------------------------------------------*/

void init_Scene_Courtyard(){ 

   // scene_Courtyard.isActive   = 0; //Set scene Courtyard to inactive by default
   // scene_Courtyard.sceneInit   = init_Scene_Courtyard;
   // scene_Courtyard.envObjInit   = init_EnvObjects_Courtyard;
   
   // //scene_Courtyard.renderEnvObj   = render_EnvObjects_Courtyard;
   // scene_Courtyard.enemiesRender		= init_lvl00_Courtyard;
   // scene_Courtyard.objectsRender		= init_lvl00_Courtyard;
   // //scene_Courtyard.renderTranspEnvObj   = renderTransp_EnvObjects_Courtyard;
   // // scene_Courtyard.sceneTriggers		= lvl00_SceneTrig;
   // // scene_Courtyard.sectorTriggers 		= lvl00_CourtyardSectorTrig;
   // scene_Courtyard.wallColObj   = MColObj_Courtyard_Wall_00;
   // scene_Courtyard.groundColObj   = MColObj_Courtyard_Ground_00;
  

} 
/*--------------------------Courtyard Manager----------------------------*/ 


// void init_EnvObjects_Courtyard(){ 

 
// /*--------------------------Courtyard LOD0----------------------------*/ 

   // SetVector3(&Courtyard_Scn04_BreakRock.obj.pos, 1166, 25,97);
   // SetVector3(&Courtyard_Scn04_BreakRock.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_BreakRock.obj.scl, 1, 1,1);
   // Courtyard_Scn04_BreakRock.staticModel.displayList = Scn04_BreakRock_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Trees.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Trees.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Trees.obj.scl, 1, 1,1);
   // Courtyard_Scn04_Trees.staticModel.displayList = Scn04_Trees_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Walls_01.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Walls_01.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Walls_01.obj.scl, 1, 1,1);
   // Courtyard_Scn04_Walls_01.staticModel.displayList = Scn04_Walls_01_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Arches_02.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Arches_02.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Arches_02.obj.scl, 1, 1,1);
   // Courtyard_Scn04_Arches_02.staticModel.displayList = Scn04_Arches_02_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Ground.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Ground.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Ground.obj.scl, 1, 1,1);
   // Courtyard_Scn04_Ground.staticModel.displayList = Scn04_Ground_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Trees_Fungus.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Trees_Fungus.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Trees_Fungus.obj.scl, 1, 1,1);
   // Courtyard_Scn04_Trees_Fungus.staticModel.displayList = Scn04_Trees_Fungus_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_RiverWalk.obj.pos, 0, -1789,0);
   // SetVector3(&Courtyard_Scn04_RiverWalk.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_RiverWalk.obj.scl, 1, 1,1);
   // Courtyard_Scn04_RiverWalk.staticModel.displayList = Scn04_RiverWalk_Static_PolyList_0;

   // SetVector3(&Courtyard_Scn04_Waterfall.obj.pos, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Waterfall.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_Waterfall.obj.scl, 1, 1,1);
   // SetAnimator(&Courtyard_Scn04_Waterfall.animator, &Scn04_Waterfall_PolyList, 0,0);

   // SetVector3(&Courtyard_Scn04_River02.obj.pos, 0, 0,-8);
   // SetVector3(&Courtyard_Scn04_River02.obj.rot, 0, 0,0);
   // SetVector3(&Courtyard_Scn04_River02.obj.scl, 1, 1,1);
   // SetAnimator(&Courtyard_Scn04_River02.animator, &Scn04_River02_PolyList, 0,0);


// }

// /*--------------------------Courtyard Manager----------------------------*/ 


// void render_EnvObjects_Courtyard(u8 LOD){ 


   // TEXTURE_FOG_VTXCOL(glistp,75,75,55,125,980,1000);
   // if(LOD == 0){

         // RenderStaticEnvObj(&Courtyard_Scn04_BreakRock);
         // RenderStaticEnvObj(&Courtyard_Scn04_Trees);
         // RenderStaticEnvObj(&Courtyard_Scn04_Walls_01);
         // RenderStaticEnvObj(&Courtyard_Scn04_Arches_02);
         // RenderStaticEnvObj(&Courtyard_Scn04_Ground);
         
        // TEXTURE_FOG_VTXCOL(glistp,75,75,55,50,980,1000);
         // RenderStaticEnvObj(&Courtyard_Scn04_RiverWalk);

      // // TEXTURE_FOG_VTXCOL(glistp,75,75,55,50,980,1000); 
         // // RenderStaticEnvObj(&Courtyard_Scn04_Trees_Fungus);

   // }

   
   

// }

// void renderTransp_EnvObjects_Courtyard(u8 LOD){ 

   // // TEXTURE_FOG_VTXCOL(glistp,75,75,55,125,980,1000);
   // if(LOD == 0){
        // TEXTURE_FOG_VTXCOL(glistp,75,75,55,50,980,1000); 
        // RenderStaticEnvObj(&Courtyard_Scn04_Trees_Fungus);
// //TEXTURE_FOG_LIGHT(glistp, 20, 40, 255, 0,2000,2500); //NOTE: this setting removes detail closer to the camera
        // //TEXTURE_FOG_LIGHT(glistp,20,40,255,0,2000,2500);
        // TEXTURE_FOG_LIGHT(glistp, 80, 80, 85, 225,800,700); //NOTE: this setting removes detail closer to the camera 
         // RenderEnvObj(&Courtyard_Scn04_Waterfall);
         // RenderEnvObj(&Courtyard_Scn04_River02);
         


   // }


// }

// /*--------------------------------------------------------------------------*/

// void SceneTrig_Check_Courtyard(SceneTrigger *thisScene){ 

   // thisScene->LOD = 0;
   // thisScene->isActive = 0;
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
   // thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);

// }
// void SectorTrig_Update_Courtyard(SceneTrigger *thisScene){ 

   // if(scene_Courtyard.isActive > 0){

      // if(thisScene->sectorTrig[0].isActive > 0){
        // scene_Courtyard.groundColObj = MColObj_Courtyard_Ground_00;   
        // scene_Courtyard.wallColObj = MColObj_Courtyard_Wall_00;   
        // playerAvatar.playerLighting = env01_01_shade;   
      // }

      // if(thisScene->sectorTrig[1].isActive > 0){
        // scene_Courtyard.groundColObj = MColObj_Courtyard_Ground_01;   
        // scene_Courtyard.wallColObj = MColObj_Courtyard_Wall_01;   
       // playerAvatar.playerLighting = env01_01_shade;   
      // }

      // if(thisScene->sectorTrig[2].isActive > 0){
        // scene_Courtyard.groundColObj = MColObj_Courtyard_Ground_02;   
        // scene_Courtyard.wallColObj = MColObj_Courtyard_Wall_02;   
       // playerAvatar.playerLighting = env01_01_shade;   
      // }

      // if(thisScene->sectorTrig[3].isActive > 0){
        // scene_Courtyard.groundColObj = MColObj_Courtyard_Ground_03;   
        // scene_Courtyard.wallColObj = MColObj_Courtyard_Wall_03;   
       // playerAvatar.playerLighting = env01_01_shade;   
      // }
   // }

// }