#ifndef SCN00_SKYBOX_DEFS_H 
#define SCN00_SKYBOX_DEFS_H 

//>-- Obj00: START ------------------------------------------ dummy_col -------------------------------------------------

   extern MeshColliderObj MColObj_dummy_col[];
//>-- Obj00: END ------------------------------------------- dummy_col -------------------------------------------------

//>-- Obj00: START ------------------------------------------ Sky_Moon -------------------------------------------------

   extern Vtx Sky_Moon_VertList_0 [];
   extern void Sky_Moon_PolyList( u8 animFrame );

//>-- Obj00: END ------------------------------------------- Sky_Moon -------------------------------------------------


//>-- Scn00: START ------------------------------------------ Skybox Scene Controller -------------------------------------------------

   extern TriggerBox Skybox_SceneTrig[1];
   extern TriggerBox Skybox_SectorTrig[1];
   extern void init_Scene_Skybox();
   extern void init_EnvObjects_Skybox();
   extern void render_EnvObjects_Skybox(u8 LOD);
   extern void renderTransp_EnvObjects_Skybox(u8 LOD);
   extern void SceneTrig_Check_Skybox(SceneTrigger *thisScene);
   extern void SectorTrig_Update_Skybox(SceneTrigger *thisScene);


#endif