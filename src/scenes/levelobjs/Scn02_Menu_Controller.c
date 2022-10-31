#include "common.h" 
#include "objectDefs.h" 
// #include "level00.h" 
// #include "Scn02_Forest_defs.h" 
#include "Scn01_Instanced_defs.h"
#include "userInterfaceDefs.h"
#include "debug.h" 


/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 2 | Menu-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Menu LOD0----------------------------*/ 

   StaticEnvObject Menu_pause_menu_bg;
   StaticEnvObject Menu_pause_menu_border;
 
/*--------------------------Menu Collision Objects ----------------------------*/ 


void init_EnvObjects_Menu(){ 

    // player_TempVectorPos = player_right_leg_anim[playerAvatar.animRig.animID].anim[playerAvatar.animRig.animFrame].pos;
   // player_TempVectorRot = player_right_leg_anim[playerAvatar.animRig.animID].anim[playerAvatar.animRig.animFrame].rot;
   // player_TempVectorScl = player_right_leg_anim[playerAvatar.animRig.animID].anim[playerAvatar.animRig.animFrame].scl;

   // player_TempVectorPos = RotateAround(player_TempVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
   // SetVector3(&playerAvatar.animRig.joint.legR[0].pos, player_TempVectorPos.x,player_TempVectorPos.y,player_TempVectorPos.z);
   // SetVector3(&playerAvatar.animRig.joint.legR[0].rot, player_TempVectorRot.x,player_TempVectorRot.y,player_TempVectorRot.z);
   // SetVector3(&playerAvatar.animRig.joint.legR[0].scl, player_TempVectorScl.x,player_TempVectorScl.y,player_TempVectorScl.z);
/*--------------------------Menu LOD0----------------------------*/ 
    //Vector3 tempCampPos = GetCameraPosition();
    Vector3 tempCampPos = GetCameraPosition();
    Vector3 tempMenuPos = GetCameraPosition();
    SetVector3(&tempMenuPos, tempCampPos.x + 20, tempCampPos.y + 20 , tempCampPos.z - 75);   
    
    //tempCampPos = RotateAround(tempCampPos, playerAvatar.rigidBody.centerMass, mainCamera.cameraOrbit);
   SetVector3(&Menu_pause_menu_bg.obj.pos, 0, 440,-90);  
  //SetVector3(&Menu_pause_menu_bg.obj.pos, playerAvatar.obj.pos.x + 20, playerAvatar.obj.pos.y + 20, playerAvatar.obj.pos.z);
    //SetVector3(&Menu_pause_menu_bg.obj.pos, -4623, 4099, 1606);
   //SetVector3(&Menu_pause_menu_bg.obj.pos, 0, 0,0);
   SetVector3(&Menu_pause_menu_bg.obj.rot, 0, 0,0);
   SetVector3(&Menu_pause_menu_bg.obj.scl, 1, 1,1);
   Menu_pause_menu_bg.staticModel.displayList = pause_menu_bg_Static_PolyList_0;

   SetVector3(&Menu_pause_menu_border.obj.pos, 0, 440,-90);
   SetVector3(&Menu_pause_menu_border.obj.rot, 0, 0,0);
   SetVector3(&Menu_pause_menu_border.obj.scl, 1, 1,1);
   Menu_pause_menu_border.staticModel.displayList = pause_menu_border_Static_PolyList_0;


} 
/*--------------------------Menu Manager----------------------------*/ 


void render_EnvObjects_Menu(u8 LOD){

  // TEXTURE_FOG_VTXCOL(glistp,850,950,0,0,850,950); 


     RenderStaticEnvObj(&Menu_pause_menu_bg);
     RenderStaticEnvObj(&Menu_pause_menu_border);

   
}
