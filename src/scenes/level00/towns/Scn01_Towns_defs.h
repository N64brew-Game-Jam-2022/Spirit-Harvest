#ifndef SCN01_TOWNS_DEFS_H 
#define SCN01_TOWNS_DEFS_H 






//>-- Obj00: START ------------------------------------------ Cave_Entrance_Wall_00 -------------------------------------------------

   extern MeshColliderObj MColObj_Cave_Entrance_Wall_00[];
//>-- Obj00: END ------------------------------------------- Cave_Entrance_Wall_00 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ Cave_Entrance_Wall_01 -------------------------------------------------

   extern MeshColliderObj MColObj_Cave_Entrance_Wall_01[];
//>-- Obj01: END ------------------------------------------- Cave_Entrance_Wall_01 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ Cave_Entrance_Ground_00 -------------------------------------------------

   extern MeshColliderObj MColObj_Cave_Entrance_Ground_00[];
//>-- Obj02: END ------------------------------------------- Cave_Entrance_Ground_00 -------------------------------------------------





//---------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------Level of Detail 1(LOD0)-------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------

//>-- Obj00: START ------------------------------------------ Scn01_Ground_00 -------------------------------------------------

   extern Vtx Scn01_Ground_00_VertList_0 [];
   extern Gfx Scn01_Ground_00_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- Scn01_Ground_00 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ Scn01_Ground_02 -------------------------------------------------

   extern Vtx Scn01_Ground_02_VertList_0 [];
   extern Gfx Scn01_Ground_02_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- Scn01_Ground_02 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ Scn01_Walls_00 -------------------------------------------------

   extern Vtx Scn01_Walls_00_VertList_0 [];
   extern Gfx Scn01_Walls_00_Static_PolyList_0[];

//>-- Obj02: END ------------------------------------------- Scn01_Walls_00 -------------------------------------------------


//>-- Obj03: START ------------------------------------------ Scn01_Walls_01 -------------------------------------------------

   extern Vtx Scn01_Walls_01_VertList_0 [];
   extern Gfx Scn01_Walls_01_Static_PolyList_0[];

//>-- Obj03: END ------------------------------------------- Scn01_Walls_01 -------------------------------------------------


//>-- Obj04: START ------------------------------------------ Scn04_Arches_01 -------------------------------------------------

   extern Vtx Scn04_Arches_01_VertList_0 [];
   extern Gfx Scn04_Arches_01_Static_PolyList_0[];

//>-- Obj04: END ------------------------------------------- Scn04_Arches_01 -------------------------------------------------




//---------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------Level of Detail 1(LOD1)-------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------


//>-- Obj00: START ------------------------------------------ Scn01_Walls_00_LOD1 -------------------------------------------------

   extern Vtx Scn01_Walls_00_LOD1_VertList_0 [];
   extern Gfx Scn01_Walls_00_LOD1_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- Scn01_Walls_00_LOD1 -------------------------------------------------

//>-- Scn01: START ------------------------------------------ Cave_Entrance Scene Controller -------------------------------------------------

   extern TriggerBox Cave_Entrance_SceneTrig[3];
   extern TriggerBox Cave_Entrance_SectorTrig[3];
   // extern void init_Scene_Cave_Entrance();
   // extern void init_EnvObjects_Cave_Entrance();
   // extern void render_EnvObjects_Cave_Entrance(u8 LOD);
   // extern void renderTransp_EnvObjects_Cave_Entrance(u8 LOD);
   // extern void SceneTrig_Check_Cave_Entrance(SceneTrigger *thisScene);
   // extern void SectorTrig_Update_Cave_Entrance(SceneTrigger *thisScene);


#endif