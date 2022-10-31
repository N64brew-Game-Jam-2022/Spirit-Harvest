#include "common.h"
#include "objectDefs.h"
#include "harvesterBeach.h"
#include "collisionDefs.h"
#include "Scn06_Beach_defs.h"
#include "Scn07_Town_defs.h"

/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 7 | Town-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Town LOD0----------------------------*/ 

   EnvObject Town_town_large_home;
   EnvObject Town_palm_multi_3;
   StaticEnvObject Town_town_home_posts;
   StaticEnvObject Town_town_ground;
   StaticEnvObject Town_rock_wall_3;
   StaticEnvObject Town_town_large_home_platform;
   StaticEnvObject Town_medium_home;
   StaticEnvObject Town_small_home;
   StaticEnvObject Town_small_home_2;
   StaticEnvObject Town_small_home_3;
   StaticEnvObject Town_palm_Background;
   StaticEnvObject Town_fern_background;
   StaticEnvObject Town_fern_background_2;
   StaticEnvObject Town_rock_wall_3_LOD2;
   
/*--------------------------Town LOD1----------------------------*/ 

   StaticEnvObject Town_town_LOD1;
   StaticEnvObject Town_town_transp_LOD1;
 
/*--------------------------Town Collision Objects ----------------------------*/ 

   TriggerBox Town_SceneTrig[4] = {
   {-6076, -261, -565, 5998, 7859, 2989, 0}, //AABB Scene Object: SceneTrig_Town
   {-5377, -2055, -565, 5998, -261, 1605, 0}, //AABB Scene Object: SceneTrig_Cliff
   {-5377, -5955, -565, 5998, -2055, 1605, 0}, //AABB Scene Object: SceneTrig_Beach
   {-15270, 1744, -565, -5988, 9361, 2989, 0}, //AABB Scene Object: SceneTrig_Forest_entrance
   };
   // TriggerBox Town_SectorTrig[4] = {
   // {-6076, -261, -565, 5998, 7859, 1605, 0}, //AABB Sector Object: SceneTrig_Town
   // {-3356, -261, -565, 5998, 3094, 1605, 0}, //AABB Sector Object: SectorTrig_TownCenter
   // {-6076, 3094, -565, 5998, 7859, 1605, 0}, //AABB Sector Object: SectorTrig_TownExit
   // {-5818, 2344, -565, -1754, 7859, 2383, 0}, //AABB Sector Object: SectorTrig_Town_Bridge
   
   // //{407, -1133, 830, 1533, -203, 1168, 0}, //AABB Sector Object: SectorTrig_LargeHome
   // };
   
      TriggerBox Town_SectorTrig[4] = {
   {-2824, -261, -565, 3238, 2581, 2989, 0}, //AABB Sector Object: SceneTrig_Town
   {-2519, -58, -565, 5998, 3094, 1605, 0}, //AABB Sector Object: SectorTrig_TownCenter
   {-1754, 3094, -565, 5998, 7859, 1605, 0}, //AABB Sector Object: SectorTrig_TownExit
   {-5818, 2344, -565, -1754, 7859, 2383, 0}, //AABB Sector Object: SectorTrig_Town_Bridge
   };
   
/*--------------------------Town Manager----------------------------*/ 

   SceneManager scene_Town; 
   
       Lights2 lighting_town = gdSPDefLights2(
     60, 75, 85,
     60, 150, 175,     60, -35, 80,
     70, 65, 45,     0, 0, -90
   );

/*--------------------------------------------------------------------------*/

void init_Scene_Town(){ 
   scene_Town.isActive   = 0; //Set scene Town to inactive by default
   scene_Town.sceneInit   = init_Scene_Town;
   scene_Town.envObjInit   = init_EnvObjects_Town;
   scene_Town.renderEnvObj   = render_EnvObjects_Town;
   scene_Town.renderTranspEnvObj   = renderTransp_EnvObjects_Town;
   scene_Town.sceneTriggers   = lvl00_SceneTrig;
  // scene_Town.sectorTriggers   = SectorTriggers_Town;
   scene_Town.wallColObj   = MColObj_col_town_wall_1;
   scene_Town.groundColObj   = MColObj_col_town_ground;
   
      // scene_Beach.isActive   = 0; //Set scene Beach to inactive by default
   // scene_Beach.sceneInit   = init_Scene_Beach;
   // scene_Beach.envObjInit   = init_EnvObjects_Beach;
   // scene_Beach.renderEnvObj   = render_EnvObjects_Beach;
   // scene_Beach.renderTranspEnvObj   = renderTransp_EnvObjects_Beach;
   // scene_Beach.sceneTriggers   = lvl00_SceneTrig;
   // //scene_Beach.sectorTriggers   = SectorTriggers_Beach;
   // scene_Beach.wallColObj   = MColObj_col_beach_wall_1;
   // scene_Beach.groundColObj   = MColObj_col_beach_ground_shoreline;
   

} 
/*--------------------------Town Manager----------------------------*/ 


void init_EnvObjects_Town(){ 

 
/*--------------------------Town LOD0----------------------------*/ 

   SetVector3(&Town_town_large_home.obj.pos, 997, -788,951);
   SetVector3(&Town_town_large_home.obj.rot, 0, 0,0);
   SetVector3(&Town_town_large_home.obj.scl, 1, 1,1);
   SetAnimator(&Town_town_large_home.animator, &town_large_home_PolyList, 0,0);

   SetVector3(&Town_palm_multi_3.obj.pos, 1654, 111,583);
   SetVector3(&Town_palm_multi_3.obj.rot, 0, -6,0);
   SetVector3(&Town_palm_multi_3.obj.scl, 1, 1,1);
   SetAnimator(&Town_palm_multi_3.animator, &palm_multi_3_PolyList, 0,0);

   SetVector3(&Town_town_home_posts.obj.pos, 136, -756,638);
   SetVector3(&Town_town_home_posts.obj.rot, 0, 0,0);
   SetVector3(&Town_town_home_posts.obj.scl, 1, 1,1);
   Town_town_home_posts.staticModel.displayList = town_home_posts_Static_PolyList_0;

   SetVector3(&Town_town_ground.obj.pos, 0, 0,0);
   SetVector3(&Town_town_ground.obj.rot, 0, 0,0);
   SetVector3(&Town_town_ground.obj.scl, 1, 1,1);
   Town_town_ground.staticModel.displayList = town_ground_Static_PolyList_0;

   SetVector3(&Town_rock_wall_3.obj.pos, 0, 0,0);
   SetVector3(&Town_rock_wall_3.obj.rot, 0, 0,0);
   SetVector3(&Town_rock_wall_3.obj.scl, 1, 1,1);
   Town_rock_wall_3.staticModel.displayList = rock_wall_3_Static_PolyList_0;
   
   SetVector3(&Town_town_large_home_platform.obj.pos, 997, -788,951);
   SetVector3(&Town_town_large_home_platform.obj.rot, 0, 0,0);
   SetVector3(&Town_town_large_home_platform.obj.scl, 1, 1,1);
   Town_town_large_home_platform.staticModel.displayList = town_large_home_platform_Static_PolyList_0;
   
   SetVector3(&Town_medium_home.obj.pos, -1206, 1683,724);
   SetVector3(&Town_medium_home.obj.rot, 0, 0,0);
   SetVector3(&Town_medium_home.obj.scl, 1, 1,1);
   Town_medium_home.staticModel.displayList = medium_home_Static_PolyList_0;

   // SetVector3(&Town_small_home.obj.pos, -1519, 378,724);
   // SetVector3(&Town_small_home.obj.rot, 0, 0,-15);
   // SetVector3(&Town_small_home.obj.scl, 1, 1,1);
   // Town_small_home.staticModel.displayList = small_home_Static_PolyList_0;
   
   // SetVector3(&Town_small_home_2.obj.pos, -1695, 915,706);
   // SetVector3(&Town_small_home_2.obj.rot, 0, 0,-65);
   // SetVector3(&Town_small_home_2.obj.scl, 1, 1,1);
   // Town_small_home_2.staticModel.displayList = small_home_Static_PolyList_0;

   // SetVector3(&Town_small_home_3.obj.pos, -866, 488,775);
   // SetVector3(&Town_small_home_3.obj.rot, 0, 0,-35);
   // SetVector3(&Town_small_home_3.obj.scl, 1, 1,1);
   // Town_small_home_3.staticModel.displayList = small_home_Static_PolyList_0;
   
   SetVector3(&Town_small_home_3.obj.pos, 847, 453,724);
   SetVector3(&Town_small_home_3.obj.rot, 0, 0,-2);
   SetVector3(&Town_small_home_3.obj.scl, -1, 1,1);
   Town_small_home_3.staticModel.displayList = small_home_Static_PolyList_0;

   SetVector3(&Town_small_home_2.obj.pos, -1721, 904,715);
   SetVector3(&Town_small_home_2.obj.rot, 0, 0,-62);
   SetVector3(&Town_small_home_2.obj.scl, 1, 1,1);
   Town_small_home_2.staticModel.displayList = small_home_Static_PolyList_0;

   SetVector3(&Town_small_home.obj.pos, -1519, 378,724);
   SetVector3(&Town_small_home.obj.rot, 0, 0,-40);
   SetVector3(&Town_small_home.obj.scl, 1, 1,1);
   Town_small_home.staticModel.displayList = small_home_Static_PolyList_0;
   
   SetVector3(&Town_palm_Background.obj.pos, -2192, 2637,1683);
   SetVector3(&Town_palm_Background.obj.rot, 0, -6,0);
   SetVector3(&Town_palm_Background.obj.scl, 1, 1,1);
   Town_palm_Background.staticModel.displayList = palm_Background_Static_PolyList_0;

   SetVector3(&Town_fern_background.obj.pos, -2478, 571,988);
   SetVector3(&Town_fern_background.obj.rot, 22, 29,12);
   SetVector3(&Town_fern_background.obj.scl, 1, 1,1);
   Town_fern_background.staticModel.displayList = fern_background_Static_PolyList_0;
   
   SetVector3(&Town_fern_background_2.obj.pos, -2592, 2840,1470);
   SetVector3(&Town_fern_background_2.obj.rot, 36, -20,-45);
   SetVector3(&Town_fern_background_2.obj.scl, .5f, .5f,.5f);
   Town_fern_background_2.staticModel.displayList = fern_background_Static_PolyList_0;

   
   
   /*--------------------------Town LOD1----------------------------*/ 

   SetVector3(&Town_town_LOD1.obj.pos, 0, 0,0);
   SetVector3(&Town_town_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Town_town_LOD1.obj.scl, 1, 1,1);
   Town_town_LOD1.staticModel.displayList = town_LOD1_Static_PolyList_0;

   SetVector3(&Town_town_transp_LOD1.obj.pos, 997, -788,951);
   SetVector3(&Town_town_transp_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Town_town_transp_LOD1.obj.scl, 1, 1,1);
   Town_town_transp_LOD1.staticModel.displayList = town_transp_LOD1_Static_PolyList_0;
   
   /*--------------------------Town LOD2----------------------------*/ 

   SetVector3(&Town_rock_wall_3_LOD2.obj.pos, 0, 0,0);
   SetVector3(&Town_rock_wall_3_LOD2.obj.rot, 0, 0,0);
   SetVector3(&Town_rock_wall_3_LOD2.obj.scl, 1, 1,1);
   Town_rock_wall_3_LOD2.staticModel.displayList = rock_wall_3_LOD2_Static_PolyList_0;
} 
/*--------------------------Town Manager----------------------------*/ 


void render_EnvObjects_Town(u8 LOD){

   //TEXTURE_FOG_VTXCOL(glistp,40,70,85,255,900,1500); 
   //TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,935,1010);  
   TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g,viewSettings.fogColor.b,255, viewSettings.fogNear,viewSettings.fogFar);

   if(LOD == 0){
         RenderEnvObj(&Town_town_large_home);
         RenderEnvObj(&Town_palm_multi_3);
         RenderStaticEnvObj(&Town_town_home_posts);
         RenderStaticEnvObj(&Town_town_ground);
         RenderStaticEnvObj(&Town_rock_wall_3);         
         RenderStaticEnvObj(&Town_medium_home);
         RenderStaticEnvObj(&Town_small_home);
         RenderStaticEnvObj(&Town_small_home_2);
         RenderStaticEnvObj(&Town_small_home_3);
         
         RenderStaticEnvObj(&Town_palm_Background);

         
         
          //RenderStaticEnvObj(&Town_town_large_home_platform);

/*Render Layer: 1*/   

/*Render Layer: 2*/   
   }
   
   if(LOD == 1){
    TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g,viewSettings.fogColor.b,255, viewSettings.fogNear,viewSettings.fogFar);
         RenderStaticEnvObj(&Town_town_LOD1);
        // RenderStaticEnvObj(&Town_town_transp_LOD1);
   }
   
    if(LOD == 2){
    TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g,viewSettings.fogColor.b,255, viewSettings.fogNear,viewSettings.fogFar);
         RenderStaticEnvObj(&Town_rock_wall_3_LOD2);
        // RenderStaticEnvObj(&Town_town_transp_LOD1);
   }
}

void renderTransp_EnvObjects_Town(u8 LOD){

  TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,935,1010); 
  //TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,930,1000);
  
     if(LOD == 0){
RenderStaticEnvObj(&Town_town_large_home_platform);
         RenderStaticEnvObj(&Town_fern_background);
         RenderStaticEnvObj(&Town_fern_background_2);
   }
   
      if(LOD == 1){
        RenderStaticEnvObj(&Town_town_transp_LOD1);
   }
}


/*--------------------------------------------------------------------------*/

void SceneTrig_Check_Town(SceneTrigger *thisScene){ 

   thisScene->LOD = 0;
   thisScene->isActive = 0;
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
        thisScene->LOD += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]); //If player is on the beach, switch to LOD 1        
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]);
        if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]))
            thisScene->LOD = 2;

}
void SectorTrig_Update_Town(SceneTrigger *thisScene){ 

   if(scene_Town.isActive > 0){

   

        

      if(thisScene->sectorTrig[0].isActive > 0){
        playerAvatar.playerLighting = lighting_town;   
      }

      if(thisScene->sectorTrig[1].isActive > 0){
        scene_Town.groundColObj = MColObj_col_town_ground;   
        scene_Town.wallColObj = MColObj_col_town_wall_1;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
      }

      if(thisScene->sectorTrig[2].isActive > 0){
        scene_Town.groundColObj = MColObj_col_townExit_ground;   
        scene_Town.wallColObj = MColObj_col_townExit_wall;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
        
      }
      
        if(thisScene->sectorTrig[3].isActive > 0){
            scene_Town.groundColObj = MColObj_col_townExit_ground;   
            scene_Town.wallColObj = MColObj_col_townExit_wall; 
            SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire            
            
            if(audioEffects.musicVolume < 40)
            {
                audioEffects.musicVolume = 40; 
            }
            
        }
    
      
      
   }

}