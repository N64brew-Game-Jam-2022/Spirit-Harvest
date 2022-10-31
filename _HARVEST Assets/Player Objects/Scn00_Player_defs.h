#ifndef SCN00_PLAYER_DEFS_H 
#define SCN00_PLAYER_DEFS_H 


//>-- Obj00: START ------------------------------------------ player_body -------------------------------------------------

   extern Vtx player_body_VertList_0 [];
   extern Vtx player_body_VertList_1 [];
   extern void player_body_PolyList( u8 animFrame );

//>-- Obj00: END ------------------------------------------- player_body -------------------------------------------------


//>-- Scn00: START ------------------------------------------ Player Scene Controller -------------------------------------------------

   extern TriggerBox Player_SceneTrig[0];
   extern TriggerBox Player_SectorTrig[0];
   extern void init_Scene_Player();
   extern void init_EnvObjects_Player();
   extern void render_EnvObjects_Player(u8 LOD);
   extern void renderTransp_EnvObjects_Player(u8 LOD);


#endif