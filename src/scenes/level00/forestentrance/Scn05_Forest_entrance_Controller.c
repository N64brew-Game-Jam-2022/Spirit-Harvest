#include "common.h" 
#include "objectDefs.h" 
#include "level00.h" 
#include "collisionDefs.h" 
#include "Scn05_Forest_entrance_defs.h" 
#include "Scn01_Instanced_defs.h"
#include "debug.h" 
#include "audio.h" 
/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 5 | Forest_entrance-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Forest_entrance LOD0----------------------------*/ 

extern void hanging_lamp_full_PolyList( u8 animFrame );

   StaticEnvObject Forest_entrance_town_exit_rope;
   StaticEnvObject Forest_entrance_forest_entrance_post;
   StaticEnvObject Forest_entrance_town_exit_bridge;
   StaticEnvObject Forest_entrance_town_exit_posts;
   StaticEnvObject Forest_entrance_forest_entrance;
   EnvObject Forest_entrance_forest_entrance_waterfall;
   EnvObject Forest_entrance_hanging_lamp_full;
   StaticEnvObject Forest_entrance_canyon_trees;
   EnvObject Forest_entrance_canyon_water;
   StaticEnvObject Forest_entrance_rock_small;
   StaticEnvObject Forest_entrance_rock_large;
   StaticEnvObject Forest_entrance_rock_split;
   StaticEnvObject Forest_entrance_rock_split2;
   StaticEnvObject Forest_entrance_rock_large2;
   
   /*--------------------------Forest_entrance LOD1----------------------------*/ 

   StaticEnvObject Forest_entrance_forest_entrance_LOD1;
   
   //Vector3 fogTownStart = {35,75,90};
 //  Vector3 fogForestStart = {0,0,0};
    
    Color fogTownStart = {20,57,62};
   Color fogForestStart = {3,6,10};
  // Vector3 fogColTrans = {35,75,90};
  
   Color bgColForest = {2,4,10};
   Color bgColTown = {15,55,60};
   
  // Vector2 fogDistTownStart = {955,1040};
 //  Vector2 fogDistForestStart = {925,975};
 //  Vector2 fogDistTrans = {955,1040};
   
   u16 townFogDistNear = 945;
   u16 townFogDistFar = 1020;
   
   u16 forestFogDistNear = 925;
   u16 forestFogDistFar = 975;
   
   //TEXTURE_FOG_VTXCOL(glistp,35,75,90,255,955,1040); 
 
/*--------------------------Forest_entrance Collision Objects ----------------------------*/ 

   TriggerBox Forest_entrance_SceneTrig[5] = {
   {-15701, 1744, -565, -5988, 8350, 3606, 0}, //AABB Scene Object: SceneTrig_Forest_entrance
   {-6113, 2560, -565, -1467, 7859, 2383, 0}, //AABB Scene Object: SceneTrig_Town_Bridge
   {-1467, 2560, -565, 5149, 7859, 2383, 0}, //AABB Scene Object: SceneTrig_Town_Exit
   {-2824, -261, -565, 3238, 2581, 2989, 0}, //AABB Scene Object: SceneTrig_Town
   {-5377, -2055, -565, 5998, -261, 1605, 0}, //AABB Scene Object: SceneTrig_Cliff
   };
   TriggerBox Forest_entrance_SectorTrig[1] = {
   {-15701, 1744, -565, -5818, 8350, 3606, 0}, //AABB Sector Object: SectorTrig_Forest_Entrance
   };
 
/*--------------------------Forest_entrance Manager----------------------------*/ 

   SceneManager scene_Forest_entrance;

/*--------------------------------------------------------------------------*/

void init_Scene_Forest_entrance(){ 
   scene_Forest_entrance.isActive   = 0; //Set scene Forest_entrance to inactive by default
   scene_Forest_entrance.sceneInit   = init_Scene_Forest_entrance;
   scene_Forest_entrance.envObjInit   = init_EnvObjects_Forest_entrance;
   scene_Forest_entrance.renderEnvObj   = render_EnvObjects_Forest_entrance;
   scene_Forest_entrance.renderTranspEnvObj   = renderTransp_EnvObjects_Forest_entrance;
   scene_Forest_entrance.sceneTriggers   = lvl00_SceneTrig;
  // scene_Forest_entrance.sectorTriggers   = SectorTriggers_Forest_entrance;
   scene_Forest_entrance.wallColObj   = MColObj_col_forestEntrance_wall;
   scene_Forest_entrance.groundColObj   = MColObj_col_forestEntrance_ground;

} 
/*--------------------------Forest_entrance Manager----------------------------*/ 


void init_EnvObjects_Forest_entrance(){ 

 
/*--------------------------Forest_entrance LOD0----------------------------*/ 

   SetVector3(&Forest_entrance_town_exit_rope.obj.pos, -7308, 5724,813);
   SetVector3(&Forest_entrance_town_exit_rope.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_town_exit_rope.obj.scl, 1, 1,1);
   Forest_entrance_town_exit_rope.staticModel.displayList = town_exit_rope_Static_PolyList_0;

   SetVector3(&Forest_entrance_forest_entrance_post.obj.pos, -8723, 5399,1223);
   SetVector3(&Forest_entrance_forest_entrance_post.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance_post.obj.scl, 1, 1,1);
   Forest_entrance_forest_entrance_post.staticModel.displayList = forest_entrance_post_Static_PolyList_0;

   SetVector3(&Forest_entrance_town_exit_bridge.obj.pos, -7308, 5724,813);
   SetVector3(&Forest_entrance_town_exit_bridge.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_town_exit_bridge.obj.scl, 1, 1,1);
   Forest_entrance_town_exit_bridge.staticModel.displayList = town_exit_bridge_Static_PolyList_0;

   SetVector3(&Forest_entrance_town_exit_posts.obj.pos, -5242, 4734,1819);
   SetVector3(&Forest_entrance_town_exit_posts.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_town_exit_posts.obj.scl, 1, 1,1);
   Forest_entrance_town_exit_posts.staticModel.displayList = town_exit_posts_Static_PolyList_0;

   SetVector3(&Forest_entrance_forest_entrance.obj.pos, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance.obj.scl, 1, 1,1);
   Forest_entrance_forest_entrance.staticModel.displayList = forest_entrance_Static_PolyList_0;
   
   SetVector3(&Forest_entrance_forest_entrance_waterfall.obj.pos, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance_waterfall.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance_waterfall.obj.scl, 1, 1,1);
   SetAnimator(&Forest_entrance_forest_entrance_waterfall.animator, &forest_entrance_waterfall_PolyList, 0,0);
   
   SetVector3(&Forest_entrance_hanging_lamp_full.obj.pos, -8600, 5744,1228);
   SetVector3(&Forest_entrance_hanging_lamp_full.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_hanging_lamp_full.obj.scl, 1, 1,1);
   SetAnimator(&Forest_entrance_hanging_lamp_full.animator, &hanging_lamp_full_PolyList, 0,0);
   
   SetVector3(&Forest_entrance_canyon_trees.obj.pos, -7412, 7221,-1147);
   SetVector3(&Forest_entrance_canyon_trees.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_canyon_trees.obj.scl, 1, 1,1);
   Forest_entrance_canyon_trees.staticModel.displayList = canyon_trees_Static_PolyList_0;
   
   SetVector3(&Forest_entrance_canyon_water.obj.pos, -6038, 3425,-1595);
   SetVector3(&Forest_entrance_canyon_water.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_canyon_water.obj.scl, 1, 1,1);
   SetAnimator(&Forest_entrance_canyon_water.animator, &canyon_water_PolyList, 0,0);
   
   
   //TEST INSTANCED OBJECTS 
   SetVector3(&Forest_entrance_rock_small.obj.pos, -9479, 6018,1043);
   SetVector3(&Forest_entrance_rock_small.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_rock_small.obj.scl, 1, 1,1);
   Forest_entrance_rock_small.staticModel.displayList = rock_small_Static_PolyList_0;

   SetVector3(&Forest_entrance_rock_large.obj.pos, -10720, 5773,1158);
   SetVector3(&Forest_entrance_rock_large.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_rock_large.obj.scl, 1, 1,1);
   Forest_entrance_rock_large.staticModel.displayList = rock_large_Static_PolyList_0;

   SetVector3(&Forest_entrance_rock_split.obj.pos, -9587, 6186,1086);
   SetVector3(&Forest_entrance_rock_split.obj.rot, 0, 0,63);
   SetVector3(&Forest_entrance_rock_split.obj.scl, 1, 1,1);
   Forest_entrance_rock_split.staticModel.displayList = rock_split_Static_PolyList_0;
   
   SetVector3(&Forest_entrance_rock_split2.obj.pos, -12167, 6333,1058);
   SetVector3(&Forest_entrance_rock_split2.obj.rot, -8, 1,131);
   SetVector3(&Forest_entrance_rock_split2.obj.scl, 1, 1,1);
   Forest_entrance_rock_split2.staticModel.displayList = rock_split_Static_PolyList_0;

   SetVector3(&Forest_entrance_rock_large2.obj.pos, -11956, 5996,1088);
   SetVector3(&Forest_entrance_rock_large2.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_rock_large2.obj.scl, 1, 1,1);
   Forest_entrance_rock_large2.staticModel.displayList = rock_large_Static_PolyList_0;
   
   
   /*--------------------------Forest_entrance LOD1----------------------------*/ 

   SetVector3(&Forest_entrance_forest_entrance_LOD1.obj.pos, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Forest_entrance_forest_entrance_LOD1.obj.scl, 1, 1,1);
   Forest_entrance_forest_entrance_LOD1.staticModel.displayList = forest_entrance_LOD1_Static_PolyList_0;
   




} 
/*--------------------------Forest_entrance Manager----------------------------*/ 


void render_EnvObjects_Forest_entrance(u8 LOD){

   //TEXTURE_FOG_VTXCOL(glistp,255,255,255,175,850,1200); 
   TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g+5,viewSettings.fogColor.b+10,255,viewSettings.fogNear,viewSettings.fogFar);  

   if(LOD == 0){
         RenderStaticEnvObj(&Forest_entrance_forest_entrance_post);         
         RenderStaticEnvObj(&Forest_entrance_town_exit_posts);
         RenderStaticEnvObj(&Forest_entrance_forest_entrance);
         RenderEnvObj(&Forest_entrance_forest_entrance_waterfall);
         RenderEnvObj(&Forest_entrance_canyon_water);
         RenderStaticEnvObj(&Forest_entrance_canyon_trees);
         RenderStaticEnvObj(&Forest_entrance_rock_small);
         RenderStaticEnvObj(&Forest_entrance_rock_large);
         RenderStaticEnvObj(&Forest_entrance_rock_split);
         RenderStaticEnvObj(&Forest_entrance_rock_split2);
         RenderStaticEnvObj(&Forest_entrance_rock_large2);
/*Render Layer: 1*/   

/*Render Layer: 2*/   
   }
   
      if(LOD == 1){
         RenderStaticEnvObj(&Forest_entrance_forest_entrance_LOD1);
   }
}

void renderTransp_EnvObjects_Forest_entrance(u8 LOD){

   TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g+5,viewSettings.fogColor.b+10,255,viewSettings.fogNear,viewSettings.fogFar); 
   
   if(LOD == 0){
         RenderStaticEnvObj(&Forest_entrance_town_exit_rope);
         RenderStaticEnvObj(&Forest_entrance_town_exit_bridge);
         
         TEXTURE_FOG_VTXCOL(glistp,25,175,150,255,960, 975); 
         RenderEnvObj(&Forest_entrance_hanging_lamp_full);
   }
}


/*--------------------------------------------------------------------------*/

void SceneTrig_Check_Forest_entrance(SceneTrigger *thisScene){ 

   thisScene->LOD = 0;
   thisScene->isActive = 0;
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]);
       // if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[2]))
                // thisScene->LOD = 1;
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]);
       if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[3]))
                thisScene->LOD = 1;
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]);
       if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[4]))
                thisScene->LOD = 1;

}


u8 portalSFXState = 0;

void SectorTrig_Update_Forest_entrance(SceneTrigger *thisScene){ 

   // Vector3 fogTownStart = {35,75,90};
   // Vector3 fogForestStart = {0,0,0};
   
   // Vector3 fogColTrans = {35,75,90};
    if(playerAvatar.obj.pos.y >= 5250 && playerAvatar.obj.pos.x <= -6850) 
    {    
        if ((viewSettings.fogColor.r > fogForestStart.r) || (viewSettings.fogColor.g > fogForestStart.g) || (viewSettings.fogColor.b > fogForestStart.b)){
            viewSettings.fogColor.r = lerpInt(viewSettings.fogColor.r, fogForestStart.r, .005f);
            viewSettings.fogColor.g = lerpInt(viewSettings.fogColor.g, fogForestStart.g, .005f);
            viewSettings.fogColor.b = lerpInt(viewSettings.fogColor.b, fogForestStart.b, .005f);
        }
        //fogDistance
        //viewSettings.fogNear,viewSettings.fogFar
        if ((viewSettings.fogNear > forestFogDistNear) || (viewSettings.fogFar > forestFogDistFar)){
            viewSettings.fogNear = lerpInt(viewSettings.fogNear, forestFogDistNear, .005f);
            viewSettings.fogFar = lerpInt(viewSettings.fogFar, forestFogDistFar, .005f);         
        }
        
        
        
        
        if(portalSFXState == 0)
        {
            //MusStop(MUSFLAG_EFFECTS, 0);       
            //MusFxBankSetSingle()
            PlaySfxVolume(FX_BRIDGE1, 100);
            //portalSFXState = 0;
        }
        
        if(audioEffects.musicVolume > 0)
        {
            audioEffects.musicVolume = lerpInt(audioEffects.musicVolume, 0, .002f);
            //PlaySfxVolume(FX_BRIDGE1, 100);
        }
        
        if ((viewSettings.backgroundColor.r > bgColForest.r) || (viewSettings.backgroundColor.g > bgColForest.g) || (viewSettings.backgroundColor.b > bgColForest.b)){
            viewSettings.backgroundColor.r = lerpInt(viewSettings.backgroundColor.r, bgColForest.r, .01f);
            viewSettings.backgroundColor.g = lerpInt(viewSettings.backgroundColor.g, bgColForest.g, .01f);
            viewSettings.backgroundColor.b = lerpInt(viewSettings.backgroundColor.b, bgColForest.b, .01f);
            //viewSettings.backgroundColor.g = 4;
            //viewSettings.backgroundColor.b = 10;
        }
        
        else
            portalSFXState = 1;

    }
    
    // if(playerAvatar.obj.pos.y >= 5400){

        // if ((viewSettings.backgroundColor.r > bgColForest.r) || (viewSettings.backgroundColor.g > bgColForest.g) || (viewSettings.backgroundColor.b > bgColForest.b)){
            // viewSettings.backgroundColor.r = lerpInt(viewSettings.backgroundColor.r, bgColForest.r, .01f);
            // viewSettings.backgroundColor.g = lerpInt(viewSettings.backgroundColor.g, bgColForest.g, .01f);
            // viewSettings.backgroundColor.b = lerpInt(viewSettings.backgroundColor.b, bgColForest.b, .01f);
            // //viewSettings.backgroundColor.g = 4;
            // //viewSettings.backgroundColor.b = 10;
        // }
    
    // }
    
    // Vector3 fogColTrans = {35,75,90};
    if(playerAvatar.obj.pos.y <= 5200 && playerAvatar.obj.pos.x >= -6775)     
    {
        // if ((fogColTrans.x < fogTownStart.x) || (fogColTrans.y < fogTownStart.y) || (fogColTrans.z < fogTownStart.z)){
            // fogColTrans.x = lerp(fogColTrans.x, fogTownStart.x, .01f);
            // fogColTrans.y = lerp(fogColTrans.y, fogTownStart.y, .01f);
            // fogColTrans.z = lerp(fogColTrans.z, fogTownStart.z, .01f);
        // }
        
        if ((viewSettings.fogColor.r < fogTownStart.r) || (viewSettings.fogColor.g < fogTownStart.g) || (viewSettings.fogColor.b < fogTownStart.b)){
            viewSettings.fogColor.r = lerpInt(viewSettings.fogColor.r, fogTownStart.r, .01f);
            viewSettings.fogColor.g = lerpInt(viewSettings.fogColor.g, fogTownStart.g, .01f);
            viewSettings.fogColor.b = lerpInt(viewSettings.fogColor.b, fogTownStart.b, .01f);
        }
        
        
        if ((viewSettings.fogNear < townFogDistNear) || (viewSettings.fogFar < townFogDistFar)){
            viewSettings.fogNear = lerpInt(viewSettings.fogNear, townFogDistNear, .01f);
            viewSettings.fogFar = lerpInt(viewSettings.fogFar, townFogDistFar, .01f);         
        }
        
        
        if(portalSFXState == 1)
        {
            //MusStop(MUSFLAG_EFFECTS, 0);       
            //MusFxBankSetSingle()
            PlaySfxVolume(FX_BRIDGE2, 100);
            //portalSFXState = 0;
        }
        
        if(portalSFXState == 0)
        {
            
        }
        
       // PlayAmbientLoopLocal(20, 3, 100, 2500, firePosition);
         
         
        // if(audioEffects.musicVolume < 40)
        // {
            // audioEffects.musicVolume = 40; 
        // }
        
        //viewSettings.backgroundColor = bgColTown;
        
        if ((viewSettings.backgroundColor.r < bgColTown.r) || (viewSettings.backgroundColor.g < bgColTown.g) || (viewSettings.backgroundColor.b < bgColTown.b)){
            viewSettings.backgroundColor.r = lerpInt(viewSettings.backgroundColor.r, bgColTown.r, .01f);
            viewSettings.backgroundColor.g = lerpInt(viewSettings.backgroundColor.g, bgColTown.g, .01f);
            viewSettings.backgroundColor.b = lerpInt(viewSettings.backgroundColor.b, bgColTown.b, .01f);
        //viewSettings.backgroundColor.g = 4;
        //viewSettings.backgroundColor.b = 10;
        }
        
        else
            portalSFXState = 0;
            
    }


   if(scene_Forest_entrance.isActive > 0){

      if(thisScene->sectorTrig[0].isActive > 0){
        scene_Forest_entrance.groundColObj = MColObj_col_forestEntrance_ground;        
        scene_Forest_entrance.wallColObj = MColObj_col_forestEntrance_wall;  
        
        SetVector3(&playerAvatar.lastSpawnPoint, -8960, 6597, 1100); //SPAWN NEAR BRIDGE        
      }
      
       
   }

}