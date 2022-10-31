#include "common.h"
#include "objectDefs.h"
#include "harvesterBeach.h"
#include "collisionDefs.h"
#include "Scn06_Beach_defs.h"
#include "Scn07_Town_defs.h"


/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 6 | Beach-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Beach LOD0----------------------------*/ 
    EnvObject Beach_Sky_Moon;
   StaticEnvObject Beach_shoreline;
   EnvObject Beach_fire_pit_flames;
   EnvObject Beach_fire_pit_base;
   EnvObject Beach_ocean_water;
   StaticEnvObject Beach_destroyed_home;
   StaticEnvObject Beach_rotting_dock;
   StaticEnvObject Beach_weathered_home;
   StaticEnvObject Beach_rock_wall_0;
   StaticEnvObject Beach_rock_wall_1;
   StaticEnvObject Beach_dock_posts_1;
   StaticEnvObject Beach_cliff_edge;
   StaticEnvObject Beach_sea_wall;
   //StaticEnvObject Beach_ocean_water;
   StaticEnvObject Beach_dock_net;
   StaticEnvObject Beach_beach_boat;
   EnvObject Beach_palm_single;
   EnvObject Beach_palm_multi_3;
   EnvObject Beach_hanging_lamp_full;
   StaticEnvObject Beach_dock_posts_2;
   
   
   
   /*--------------------------Beach LOD1----------------------------*/ 

   StaticEnvObject Beach_cliff_edge;
   EnvObject Beach_palm_multi_3;
   EnvObject Beach_palm_single;
   EnvObject Beach_beach_LOD1;
   StaticEnvObject Beach_beach_transp_LOD1;
   
   
   /*--------------------------Beach LOD2----------------------------*/ 

   StaticEnvObject Beach_beach_LOD2;
   
    Lights2 lighting_beach = gdSPDefLights2(
     60, 75, 85,
     60, 150, 175,     60, -35, 80,
     70, 65, 45,     0, 0, -90
   );
   
   Lights2 lighting_bonfire = gdSPDefLights2(
     95, 85, 60,
     165, 175, 80,     0, -15, -90,
     30, 100, 125,     60, -35, 80
   );
   
   Lights2 lighting_lamp = gdSPDefLights2(
     65, 115, 110,
     85, 195, 185,     0, 15, 90,
     30, 100, 125,     60, -35, 80
   );
   
  // extern void player_body_PolyList(u8 animFrame); 
 
/*--------------------------Beach Collision Objects ----------------------------*/ 

   // TriggerBox Beach_SceneTrig[3] = {
   // {-5377, -5955, -565, 5998, 213, 1605, 0}, //AABB Scene Object: SceneTrig_Beach
   // {-6076, -261, -565, 5998, 7859, 1605, 0}, //AABB Scene Object: SceneTrig_Town
   // {407, -1133, 830, 1533, -203, 1168, 0}, //AABB Sector Object: SectorTrig_LargeHome
   // };
   
   
   TriggerBox Beach_SceneTrig[5] = {
   //{-5377, -5955, -565, 5998, -2055, 1605, 0}, //AABB Scene Object: SceneTrig_Beach
   {-5377, -5955, -565, 5998, 213, 1605, 0}, //AABB Scene Object: SceneTrig_Beach 
   {-2824, -261, -565, 3238, 2581, 2989, 0}, //AABB Scene Object: SceneTrig_Town
   {407, -1133, 830, 1533, -203, 1168, 0}, //AABB Sector Object: SectorTrig_LargeHome   
   {-1467, 2560, -565, 5149, 7859, 2383, 0}, //AABB Scene Object: SceneTrig_Town_Exit
   {-6113, 2560, -565, -1467, 7859, 2383, 0}, //AABB Scene Object: SceneTrig_Town_Bridge
   };

   // TriggerBox Beach_SectorTrig[6] = {
   // {-5377, -5955, -565, 5998, 213, 1605, 0}, //AABB Sector Object: SceneTrig_Beach
   // {-5377, -5955, -565, 5998, -2467, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline
   // {-5377, -2467, -565, 5998, -261, 1605, 0}, //AABB Sector Object: SectorTrig_Cliff
   // {-2367, -3032, 133, -1813, -2496, 633, 0}, //AABB Sector Object: SectorTrig_Light_Bonfire
   // {-36, -2635, 169, 203, -2404, 529, 0}, //AABB Sector Object: SectorTrig_Light_Lamp1
   // {407, -1133, 830, 1533, -203, 1168, 0}, //AABB Sector Object: SectorTrig_LargeHome
   // };
   
   
   TriggerBox Beach_SectorTrig[8] = {
   {-5377, -5955, -565, 5998, -2055, 1605, 0}, //AABB Sector Object: SceneTrig_Beach
   {-2367, -3032, 133, -1813, -2496, 633, 0}, //AABB Sector Object: SectorTrig_Light_Bonfire
   {-36, -2635, 169, 203, -2404, 529, 0}, //AABB Sector Object: SectorTrig_Light_Lamp1
   {-5377, -5955, -565, -1, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_3
   {-1, -5955, -565, 1607, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_2
   {1607, -5955, -565, 5998, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_1
   {-5377, -1741, -565, 198, -58, 1605, 0}, //AABB Sector Object: SectorTrig_Cliff_2
   {198, -1741, -565, 5998, -58, 1605, 0}, //AABB Sector Object: SectorTrig_Cliff_1
   };
   
   
   
       // {-5377, -5955, -565, 5998, 213, 1605, 0}, //AABB Sector Object: SceneTrig_Beach
   // {-2367, -3032, 133, -1813, -2496, 633, 0}, //AABB Sector Object: SectorTrig_Light_Bonfire
   // {-36, -2635, 169, 203, -2404, 529, 0}, //AABB Sector Object: SectorTrig_Light_Lamp1
   // {-5377, -5955, -565, -1, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_3
   // {-1, -5955, -565, 1607, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_2
   // {1607, -5955, -565, 5998, -1741, 1605, 0}, //AABB Sector Object: SectorTrig_Shoreline_1
   // {-5377, -1741, -565, 198, -261, 1605, 0}, //AABB Sector Object: SectorTrig_Cliff_2
   // {198, -1741, -565, 5998, -261, 1605, 0}, //AABB Sector Object: SectorTrig_Cliff_1
   
 
/*--------------------------Beach Manager----------------------------*/ 

   SceneManager scene_Beach; 

/*--------------------------------------------------------------------------*/

void init_Scene_Beach(){ 
   scene_Beach.isActive   = 0; //Set scene Beach to inactive by default
   scene_Beach.sceneInit   = init_Scene_Beach;
   scene_Beach.envObjInit   = init_EnvObjects_Beach;
   scene_Beach.renderEnvObj   = render_EnvObjects_Beach;
   scene_Beach.renderTranspEnvObj   = renderTransp_EnvObjects_Beach;
   scene_Beach.sceneTriggers   = lvl00_SceneTrig;
   //scene_Beach.sectorTriggers   = SectorTriggers_Beach;
   scene_Beach.wallColObj   = MColObj_col_beach_wall_1;
   scene_Beach.groundColObj   = MColObj_col_beach_ground_cliff_1;

} 
/*--------------------------Beach Manager----------------------------*/ 


void init_EnvObjects_Beach(){ 

 
/*--------------------------Beach LOD0----------------------------*/ 

   //SetVector3(&Beach_Sky_Moon.obj.pos, 3332, -6685,1592);
  // // SetVector3(&Beach_Sky_Moon.obj.pos, 2416, -6228,1702);
  // SetVector3(&Beach_Sky_Moon.obj.pos, playerAvatar.obj.pos.x + 1000, playerAvatar.obj.pos.y - 4000, 1602);
   // SetVector3(&Beach_Sky_Moon.obj.rot, 0, 0,0);
   // SetVector3(&Beach_Sky_Moon.obj.scl, 1, 1,1);
   // SetAnimator(&Beach_Sky_Moon.animator, &Sky_Moon_PolyList, 0,0);

 SetVector3(&Beach_shoreline.obj.pos, 0, 0,0);
   SetVector3(&Beach_shoreline.obj.rot, 0, 0,0);
   SetVector3(&Beach_shoreline.obj.scl, 1, 1,1);
   Beach_shoreline.staticModel.displayList = shoreline_Static_PolyList_0;

   SetVector3(&Beach_fire_pit_flames.obj.pos, -2102, -2736,361);
   SetVector3(&Beach_fire_pit_flames.obj.rot, 0, 2,0);
   SetVector3(&Beach_fire_pit_flames.obj.scl, 1, 1,1);
   SetAnimator(&Beach_fire_pit_flames.animator, &fire_pit_flames_PolyList, 0,0);

   SetVector3(&Beach_fire_pit_base.obj.pos, -2118, -2721,338);
   SetVector3(&Beach_fire_pit_base.obj.rot, 0, 0,0);
   SetVector3(&Beach_fire_pit_base.obj.scl, 1, 1,1);
   SetAnimator(&Beach_fire_pit_base.animator, &fire_pit_base_PolyList, 0,0);

   SetVector3(&Beach_destroyed_home.obj.pos, -2142, -2741,342);
   SetVector3(&Beach_destroyed_home.obj.rot, 0, 0,0);
   SetVector3(&Beach_destroyed_home.obj.scl, 1, 1,1);
   Beach_destroyed_home.staticModel.displayList = destroyed_home_Static_PolyList_0;

   SetVector3(&Beach_rotting_dock.obj.pos, 210, -1529,813);
   SetVector3(&Beach_rotting_dock.obj.rot, 0, 0,0);
   SetVector3(&Beach_rotting_dock.obj.scl, 1, 1,1);
   Beach_rotting_dock.staticModel.displayList = rotting_dock_Static_PolyList_0;

   SetVector3(&Beach_weathered_home.obj.pos, -1607, -2044,591);
   SetVector3(&Beach_weathered_home.obj.rot, 0, 0,0);
   SetVector3(&Beach_weathered_home.obj.scl, 1, 1,1);
   Beach_weathered_home.staticModel.displayList = weathered_home_Static_PolyList_0;

   SetVector3(&Beach_rock_wall_0.obj.pos, 0, 0,0);
   SetVector3(&Beach_rock_wall_0.obj.rot, 0, 0,0);
   SetVector3(&Beach_rock_wall_0.obj.scl, 1, 1,1);
   Beach_rock_wall_0.staticModel.displayList = rock_wall_0_Static_PolyList_0;

   SetVector3(&Beach_rock_wall_1.obj.pos, 0, 0,0);
   SetVector3(&Beach_rock_wall_1.obj.rot, 0, 0,0);
   SetVector3(&Beach_rock_wall_1.obj.scl, 1, 1,1);
   Beach_rock_wall_1.staticModel.displayList = rock_wall_1_Static_PolyList_0;

   SetVector3(&Beach_dock_posts_1.obj.pos, 136, -2454,582);
   SetVector3(&Beach_dock_posts_1.obj.rot, 0, 0,0);
   SetVector3(&Beach_dock_posts_1.obj.scl, 1, 1,1);
   Beach_dock_posts_1.staticModel.displayList = dock_posts_1_Static_PolyList_0;

   SetVector3(&Beach_cliff_edge.obj.pos, 0, 0,0);
   SetVector3(&Beach_cliff_edge.obj.rot, 0, 0,0);
   SetVector3(&Beach_cliff_edge.obj.scl, 1, 1,1);
   Beach_cliff_edge.staticModel.displayList = cliff_edge_Static_PolyList_0;

   SetVector3(&Beach_sea_wall.obj.pos, -920, -1231,732);
   SetVector3(&Beach_sea_wall.obj.rot, 0, 0,0);
   SetVector3(&Beach_sea_wall.obj.scl, 1, 1,1);
   Beach_sea_wall.staticModel.displayList = sea_wall_Static_PolyList_0;
   
      // SetVector3(&Beach_ocean_water.obj.pos, -11, -4275,212);
   // SetVector3(&Beach_ocean_water.obj.rot, 0, 0,0);
   // SetVector3(&Beach_ocean_water.obj.scl, 1, 1,1);
   // Beach_ocean_water.staticModel.displayList = oceanwater_Static_PolyList_0;
   
   SetVector3(&Beach_ocean_water.obj.pos, -11, -4275,212);
   SetVector3(&Beach_ocean_water.obj.rot, 0, 0,0);
   SetVector3(&Beach_ocean_water.obj.scl, 1, 1,1);
   SetAnimator(&Beach_ocean_water.animator, &ocean_water_PolyList, 0,0);
   
      SetVector3(&Beach_dock_net.obj.pos, 210, -2321,813);
   SetVector3(&Beach_dock_net.obj.rot, 0, 0,0);
   SetVector3(&Beach_dock_net.obj.scl, 1, 1,1);
   Beach_dock_net.staticModel.displayList = dock_net_Static_PolyList_0;
   
   SetVector3(&Beach_beach_boat.obj.pos, 478, -4650,100);
   SetVector3(&Beach_beach_boat.obj.rot, 0, 0,0);
   SetVector3(&Beach_beach_boat.obj.scl, 1, 1,1);
   Beach_beach_boat.staticModel.displayList = beach_boat_Static_PolyList_0;
   
   SetVector3(&Beach_palm_single.obj.pos, -1077, -1044,722);
   SetVector3(&Beach_palm_single.obj.rot, 0, -6,0);
   SetVector3(&Beach_palm_single.obj.scl, 1, 1,1);
   SetAnimator(&Beach_palm_single.animator, &palm_single_PolyList, 0,0);
   
   SetVector3(&Beach_palm_multi_3.obj.pos, -2094, -642,583);
   SetVector3(&Beach_palm_multi_3.obj.rot, 0, -6,0);
   SetVector3(&Beach_palm_multi_3.obj.scl, 1, 1,1);
   SetAnimator(&Beach_palm_multi_3.animator, &palm_multi_3_PolyList, 0,0);
   
   SetVector3(&Beach_hanging_lamp_full.obj.pos, 86, -2482,425);
   SetVector3(&Beach_hanging_lamp_full.obj.rot, 0, 0,0);
   SetVector3(&Beach_hanging_lamp_full.obj.scl, 1, 1,1);
   SetAnimator(&Beach_hanging_lamp_full.animator, &hanging_lamp_full_PolyList, 0,0);

   SetVector3(&Beach_dock_posts_2.obj.pos, 136, -2454,582);
   SetVector3(&Beach_dock_posts_2.obj.rot, 0, 0,0);
   SetVector3(&Beach_dock_posts_2.obj.scl, 1, 1,1);
   Beach_dock_posts_2.staticModel.displayList = dock_posts_2_Static_PolyList_0;
   
   
   /*--------------------------Beach LOD1----------------------------*/ 

   SetVector3(&Beach_cliff_edge.obj.pos, 0, 0,0);
   SetVector3(&Beach_cliff_edge.obj.rot, 0, 0,0);
   SetVector3(&Beach_cliff_edge.obj.scl, 1, 1,1);
   Beach_cliff_edge.staticModel.displayList = cliff_edge_Static_PolyList_0;

   SetVector3(&Beach_palm_multi_3.obj.pos, -2094, -642,583);
   SetVector3(&Beach_palm_multi_3.obj.rot, 0, -6,0);
   SetVector3(&Beach_palm_multi_3.obj.scl, 1, 1,1);
   SetAnimator(&Beach_palm_multi_3.animator, &palm_multi_3_PolyList, 0,0);

   SetVector3(&Beach_palm_single.obj.pos, -1077, -1044,722);
   SetVector3(&Beach_palm_single.obj.rot, 0, -6,0);
   SetVector3(&Beach_palm_single.obj.scl, 1, 1,1);
   SetAnimator(&Beach_palm_single.animator, &palm_single_PolyList, 0,0);

   SetVector3(&Beach_beach_LOD1.obj.pos, -11, -4275,212);
   SetVector3(&Beach_beach_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Beach_beach_LOD1.obj.scl, 1, 1,1);
   SetAnimator(&Beach_beach_LOD1.animator, &beach_LOD1_PolyList, 0,0);

   SetVector3(&Beach_beach_transp_LOD1.obj.pos, 210, -1529,813);
   SetVector3(&Beach_beach_transp_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Beach_beach_transp_LOD1.obj.scl, 1, 1,1);
   Beach_beach_transp_LOD1.staticModel.displayList = beach_transp_LOD1_Static_PolyList_0;
   
   
   /*--------------------------Beach LOD2----------------------------*/ 

   SetVector3(&Beach_beach_LOD2.obj.pos, 0, 0,0);
   SetVector3(&Beach_beach_LOD2.obj.rot, 0, 0,0);
   SetVector3(&Beach_beach_LOD2.obj.scl, 1, 1,1);
   Beach_beach_LOD2.staticModel.displayList = beach_LOD2_Static_PolyList_0;

} 
/*--------------------------Beach Manager----------------------------*/ 


void render_EnvObjects_Beach(u8 LOD){

   //TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,935,1010);  
   TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g,viewSettings.fogColor.b,255, viewSettings.fogNear,viewSettings.fogFar);

    if(LOD == 0){
    
        gDPSetColorDither(  glistp++,  G_CD_BAYER);
        gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
        
        // RenderEnvObj(&Beach_Sky_Moon);
        
        RenderStaticEnvObj(&Beach_shoreline);
         
         
         RenderStaticEnvObj(&Beach_weathered_home);
         RenderStaticEnvObj(&Beach_rotting_dock);
         RenderStaticEnvObj(&Beach_dock_posts_1);
         RenderStaticEnvObj(&Beach_cliff_edge);
         RenderStaticEnvObj(&Beach_sea_wall);
         RenderStaticEnvObj(&Beach_dock_net);
         RenderStaticEnvObj(&Beach_beach_boat);
         RenderEnvObj(&Beach_palm_single);
         RenderEnvObj(&Beach_palm_multi_3);
         RenderStaticEnvObj(&Beach_dock_posts_2);

/*Render Layer: 1*/   

/*Render Layer: 2*/  



        //TEXTURE_FOG_VTXCOL(glistp,15,55,60,255,930,1000);
        RenderStaticEnvObj(&Beach_rock_wall_0);
        RenderStaticEnvObj(&Beach_rock_wall_1); 
        

       TEXTURE_FOG_VTXCOL(glistp,viewSettings.backgroundColor.r,viewSettings.backgroundColor.g,viewSettings.backgroundColor.b,225,990,1000); 
         //RenderStaticEnvObj(&Beach_ocean_water);
        RenderEnvObj(&Beach_ocean_water);
        
        TEXTURE_FOG_VTXCOL(glistp,30,40,50,255,925,1020); 
        RenderEnvObj(&Beach_fire_pit_base);
        RenderStaticEnvObj(&Beach_destroyed_home);

    }
   
    if(LOD == 1){
      //TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,935,1010); 
      TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g,viewSettings.fogColor.b,255, viewSettings.fogNear,viewSettings.fogFar);
      gDPSetColorDither(  glistp++,  G_CD_BAYER);
        gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
        
        // RenderEnvObj(&Beach_Sky_Moon);
      
         RenderStaticEnvObj(&Beach_cliff_edge);
         RenderEnvObj(&Beach_palm_multi_3);
         RenderEnvObj(&Beach_palm_single);
         RenderEnvObj(&Beach_beach_LOD1);
    }
   
   
    if(LOD == 2){
        RenderEnvObj(&Beach_palm_single);
        RenderEnvObj(&Beach_palm_multi_3);
         RenderStaticEnvObj(&Beach_beach_LOD2);
    }
}

void renderTransp_EnvObjects_Beach(u8 LOD){

      //TEXTURE_FOG_VTXCOL(glistp,40,70,85,255,900,1500); 
      
      
      
      

   if(LOD == 0){
   
    if(Beach_SectorTrig[3].isActive > 0)
    {
        TEXTURE_FOG_VTXCOL(glistp,250,150,15,75,950, 850);
         RenderEnvObj(&Beach_fire_pit_flames);
    }
         
        TEXTURE_FOG_VTXCOL(glistp,25,175,150,255,960, 975); 
         RenderEnvObj(&Beach_hanging_lamp_full);
   }
   
   
     if(LOD == 1){
     TEXTURE_FOG_VTXCOL(glistp,15,45,50,255,935,1010); 
         RenderStaticEnvObj(&Beach_beach_transp_LOD1);
   }
}


/*--------------------------------------------------------------------------*/

void SceneTrig_Check_Beach(SceneTrigger *thisScene){ 

   thisScene->LOD = 0;
   thisScene->isActive = 0;
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
        thisScene->LOD += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
        thisScene->LOD += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
        
        
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]);    
        if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]))
            thisScene->LOD = 2;
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]);    
        if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]))
            thisScene->LOD = 2;
}
void SectorTrig_Update_Beach(SceneTrigger *thisScene){ 

   if(scene_Beach.isActive > 0){

      if(thisScene->sectorTrig[3].isActive > 0){
        scene_Beach.groundColObj = MColObj_col_beach_ground_shoreline_3;   
        scene_Beach.wallColObj = MColObj_col_beach_wall_3;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
        //audioEffects.musicVolume = 0;        
      }

      if(thisScene->sectorTrig[4].isActive > 0){
        scene_Beach.groundColObj = MColObj_col_beach_ground_shoreline_2;   
        scene_Beach.wallColObj = MColObj_col_beach_wall_2;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
            //audioEffects.musicVolume = 0;
      }

      if(thisScene->sectorTrig[5].isActive > 0){
        scene_Beach.groundColObj = MColObj_col_beach_ground_shoreline_1;   
        scene_Beach.wallColObj = MColObj_col_beach_wall_1;  
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire        
      }

      if(thisScene->sectorTrig[6].isActive > 0){
        scene_Beach.groundColObj = MColObj_col_beach_ground_cliff_2;   
        scene_Beach.wallColObj = MColObj_col_beach_wall_4;   
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
      }

      if(thisScene->sectorTrig[7].isActive > 0){
        scene_Beach.groundColObj = MColObj_col_beach_ground_cliff_1;   
        scene_Beach.wallColObj = MColObj_col_beach_wall_1;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
      }   
      
      if(thisScene->sectorTrig[1].isActive > 0){
        playerAvatar.playerLighting = lighting_bonfire;
        SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
        
        if(audioEffects.musicVolume != 0)
            audioEffects.musicVolume = lerpInt(audioEffects.musicVolume, 0, .002f);
        
      }

      else if(thisScene->sectorTrig[2].isActive > 0){
        playerAvatar.playerLighting = lighting_lamp;   
      }
      
      else{
        playerAvatar.playerLighting = lighting_beach;
        audioEffects.musicVolume = 40;
      }
   
          // if(thisScene->sectorTrig[0].isActive > 0){
            // //playerAvatar.playerLighting = default_lighting;   
          // }

          // if(thisScene->sectorTrig[1].isActive > 0){
            // scene_Beach.groundColObj = MColObj_col_beach_ground_shoreline;   
            // scene_Beach.wallColObj = MColObj_col_beach_wall_1;   
            // playerAvatar.playerLighting = lighting_beach;
          // }

          // if(thisScene->sectorTrig[2].isActive > 0){
            // scene_Beach.groundColObj = MColObj_col_beach_ground_cliff;   
            // scene_Beach.wallColObj = MColObj_col_beach_wall_2;
            // playerAvatar.playerLighting = lighting_beach;
          // }

          // if(thisScene->sectorTrig[3].isActive > 0){
            // playerAvatar.playerLighting = lighting_bonfire;   
          // }
          
          // if(thisScene->sectorTrig[4].isActive > 0){
            // playerAvatar.playerLighting = lighting_lamp;   
          // }
          
          // if(thisScene->sectorTrig[5].isActive > 0){
            // scene_Beach.groundColObj = MColObj_col_beach_ground_large_home;   
            // scene_Beach.wallColObj = MColObj_col_beach_wall_large_home;   
            // playerAvatar.playerLighting = lighting_beach;
          // }
          
        
      
      
   }

}