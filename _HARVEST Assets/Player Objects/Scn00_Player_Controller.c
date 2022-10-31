/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 0 | Player-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Player LOD0----------------------------*/ 

   EnvObject Player_player_hair;
   EnvObject Player_player_body;
   EnvObject Player_player_staff;
 
/*--------------------------Player Collision Objects ----------------------------*/ 

   TriggerBox Player_SceneTrig[0] = {
   };
   TriggerBox Player_SectorTrig[0] = {
   };
 
/*--------------------------Player Manager----------------------------*/ 

   SceneManager scene_Player; 

/*--------------------------------------------------------------------------*/

void init_Scene_Player(){ 
   scene_Player.isActive   = 0; //Set scene Player to inactive by default
   scene_Player.sceneInit   = init_Scene_Player;
   scene_Player.envObjInit   = init_EnvObjects_Player;
   scene_Player.renderEnvObj   = render_EnvObjects_Player;
   scene_Player.renderTranspEnvObj   = renderTransp_EnvObjects_Player;
   scene_Player.sceneTriggers   = SceneTriggers_Player;
   scene_Player.sectorTriggers   = SectorTriggers_Player;
   scene_Player.wallColObj   = MColObj_;
   scene_Player.groundColObj   = MColObj_;

} 
/*--------------------------Player Manager----------------------------*/ 


void init_EnvObjects_Player(){ 

 
/*--------------------------Player LOD0----------------------------*/ 

   SetVector3(&Player_player_hair.obj.pos, 0, 0,0);
   SetVector3(&Player_player_hair.obj.rot, 0, 0,0);
   SetVector3(&Player_player_hair.obj.scl, 1, 1,1);
   SetAnimator(&Player_player_hair.animator, &player_hair_PolyList, 0,0);

   SetVector3(&Player_player_body.obj.pos, 0, 0,0);
   SetVector3(&Player_player_body.obj.rot, 0, 0,0);
   SetVector3(&Player_player_body.obj.scl, 1, 1,1);
   SetAnimator(&Player_player_body.animator, &player_body_PolyList, 0,0);

   SetVector3(&Player_player_staff.obj.pos, 9, -19,46);
   SetVector3(&Player_player_staff.obj.rot, -2, 2,1);
   SetVector3(&Player_player_staff.obj.scl, 1, 1,1);
   SetAnimator(&Player_player_staff.animator, &player_staff_PolyList, 0,0);


} 
/*--------------------------Player Manager----------------------------*/ 


void render_EnvObjects_Player(u8 LOD){

   TEXTURE_FOG_VTXCOL(glistp,850,950,0,0,850,950);

   if(LOD == 0){
         RenderEnvObj(&Player_player_staff);

/*Render Layer: 1*/   

/*Render Layer: 2*/   
   }
}

void renderTransp_EnvObjects_Player(u8 LOD){

   TEXTURE_FOG_VTXCOL(glistp,850,950,0,0,850,950);
}
