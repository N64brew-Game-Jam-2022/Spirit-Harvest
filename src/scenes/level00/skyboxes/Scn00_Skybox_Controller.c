#include "common.h" 
#include "objectDefs.h" 
#include "harvesterBeach.h" 
#include "collisionDefs.h" 
#include "Scn00_Skybox_defs.h" 
/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 0 | Skybox-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Skybox LOD0----------------------------*/ 

   EnvObject Skybox_Sky_Moon;
 
/*--------------------------Skybox Collision Objects ----------------------------*/ 

   TriggerBox Skybox_SceneTrig[1] = {
   {-15270, -6354, -2761, 7391, 9361, 5563, 0}, //AABB Scene Object: SceneTrigger_Skybox1
   };
   TriggerBox Skybox_SectorTrig[1] = {
   {-15270, -6354, -2761, 7391, 9361, 5563, 0}, //AABB Sector Object: SceneTrigger_Skybox1
   };
 
/*--------------------------Skybox Manager----------------------------*/ 

   SceneManager scene_Skybox; 

/*--------------------------------------------------------------------------*/

void init_Scene_Skybox(){ 
   scene_Skybox.isActive   = 0; //Set scene Skybox to inactive by default
   scene_Skybox.sceneInit   = init_Scene_Skybox;
   scene_Skybox.envObjInit   = init_EnvObjects_Skybox;
   scene_Skybox.renderEnvObj   = render_EnvObjects_Skybox;
   scene_Skybox.renderTranspEnvObj   = renderTransp_EnvObjects_Skybox;
   scene_Skybox.sceneTriggers   = lvl00_SceneTrig;
  // scene_Skybox.sectorTriggers   = SectorTriggers_Skybox;
   scene_Skybox.wallColObj   = MColObj_dummy_col;
   scene_Skybox.groundColObj   = MColObj_dummy_col;

} 
/*--------------------------Skybox Manager----------------------------*/ 


void init_EnvObjects_Skybox(){ 

 
/*--------------------------Skybox LOD0----------------------------*/ 
    Vector3 tempCampPos = GetCameraPosition();
   // SetVector3(&Skybox_Sky_Moon.obj.pos, playerAvatar.obj.pos.x + 1100, playerAvatar.obj.pos.y - 4000, 1650);
    SetVector3(&Skybox_Sky_Moon.obj.pos, tempCampPos.x + 1100, tempCampPos.y - 4000, 1650);
   SetVector3(&Skybox_Sky_Moon.obj.rot, 0, 0,0);
   SetVector3(&Skybox_Sky_Moon.obj.scl, 1, 1,1);
   SetAnimator(&Skybox_Sky_Moon.animator, &Sky_Moon_PolyList, 0,0);


} 
/*--------------------------Skybox Manager----------------------------*/ 


void render_EnvObjects_Skybox(u8 LOD){

   TEXTURE_FOG_VTXCOL(glistp,29,22,12,245,900,1000);

   if(LOD == 0){
    RenderEnvObj(&Skybox_Sky_Moon);
/*Render Layer: 1*/   

/*Render Layer: 2*/   
   }
}

void renderTransp_EnvObjects_Skybox(u8 LOD){

   TEXTURE_FOG_VTXCOL(glistp,29,22,12,245,900,1000);

   if(LOD == 0){
        
   }
}


/*--------------------------------------------------------------------------*/

void SceneTrig_Check_Skybox(SceneTrigger *thisScene){ 

   thisScene->LOD = 0;
    thisScene->isActive = 0;
    thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);

}
void SectorTrig_Update_Skybox(SceneTrigger *thisScene){ 

   if(scene_Skybox.isActive > 0){   
        scene_Skybox.groundColObj = MColObj_dummy_col;   
        scene_Skybox.wallColObj = MColObj_dummy_col;   
   }

}