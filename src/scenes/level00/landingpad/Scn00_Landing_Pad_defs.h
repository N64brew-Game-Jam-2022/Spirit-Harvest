#ifndef SCN00_LANDING_PAD_DEFS_H 
#define SCN00_LANDING_PAD_DEFS_H 

//>-- Obj00: START ------------------------------------------ Landing_Pad_Wall_00 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Wall_00[];
//>-- Obj00: END ------------------------------------------- Landing_Pad_Wall_00 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ Landing_Pad_Wall_03 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Wall_03[];
//>-- Obj01: END ------------------------------------------- Landing_Pad_Wall_03 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ Landing_Pad_Ship_Walls -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Ship_Walls[];
//>-- Obj02: END ------------------------------------------- Landing_Pad_Ship_Walls -------------------------------------------------


//>-- Obj03: START ------------------------------------------ Landing_Pad_Ship_Ground -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Ship_Ground[];
//>-- Obj03: END ------------------------------------------- Landing_Pad_Ship_Ground -------------------------------------------------


//>-- Obj04: START ------------------------------------------ Landing_Pad_Ground_00 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Ground_00[];
//>-- Obj04: END ------------------------------------------- Landing_Pad_Ground_00 -------------------------------------------------


//>-- Obj05: START ------------------------------------------ Landing_Pad_Wall_02 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Wall_02[];
//>-- Obj05: END ------------------------------------------- Landing_Pad_Wall_02 -------------------------------------------------


//>-- Obj06: START ------------------------------------------ Landing_Pad_Wall_01 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Wall_01[];
//>-- Obj06: END ------------------------------------------- Landing_Pad_Wall_01 -------------------------------------------------


//>-- Obj07: START ------------------------------------------ Landing_Pad_Ground_02 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Ground_02[];
//>-- Obj07: END ------------------------------------------- Landing_Pad_Ground_02 -------------------------------------------------


//>-- Obj08: START ------------------------------------------ Landing_Pad_Ground_01 -------------------------------------------------

   extern MeshColliderObj MColObj_Landing_Pad_Ground_01[];
//>-- Obj08: END ------------------------------------------- Landing_Pad_Ground_01 -------------------------------------------------


//>-- Obj00: START ------------------------------------------ Scn04_Ship_Glow -------------------------------------------------

   extern Vtx Scn04_Ship_Glow_VertList_0 [];
   extern Gfx Scn04_Ship_Glow_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- Scn04_Ship_Glow -------------------------------------------------


//>-- Obj01: START ------------------------------------------ Player_Ship_V2001 -------------------------------------------------

   extern Vtx Player_Ship_V2001_VertList_0 [];
   extern Gfx Player_Ship_V2001_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- Player_Ship_V2001 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ lvl01_scn04_landing_pad_light_shaft -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_light_shaft_VertList_0 [];
   extern void lvl01_scn04_landing_pad_light_shaft_PolyList( u8 animFrame );

//>-- Obj02: END ------------------------------------------- lvl01_scn04_landing_pad_light_shaft -------------------------------------------------


//>-- Obj03: START ------------------------------------------ lvl01_scn04_landing_pad_ground02 -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_ground02_VertList_0 [];
   extern Gfx lvl01_scn04_landing_pad_ground02_Static_PolyList_0[];

//>-- Obj03: END ------------------------------------------- lvl01_scn04_landing_pad_ground02 -------------------------------------------------


//>-- Obj04: START ------------------------------------------ scn04_landing_pad_walls -------------------------------------------------

   extern Vtx scn04_landing_pad_walls_VertList_0 [];
   extern Gfx scn04_landing_pad_walls_Static_PolyList_0[];

//>-- Obj04: END ------------------------------------------- scn04_landing_pad_walls -------------------------------------------------


//>-- Obj05: START ------------------------------------------ lvl01_scn04_landing_pad_ground -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_ground_VertList_0 [];
   extern Gfx lvl01_scn04_landing_pad_ground_Static_PolyList_0[];

//>-- Obj05: END ------------------------------------------- lvl01_scn04_landing_pad_ground -------------------------------------------------


//>-- Obj06: START ------------------------------------------ lvl01_scn04_landing_pad_platform -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_platform_VertList_0 [];
   extern Gfx lvl01_scn04_landing_pad_platform_Static_PolyList_0[];

//>-- Obj06: END ------------------------------------------- lvl01_scn04_landing_pad_platform -------------------------------------------------


//>-- Obj07: START ------------------------------------------ lvl01_scn04_landing_pad_stone_door -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_stone_door_VertList_0 [];
   extern Gfx lvl01_scn04_landing_pad_stone_door_Static_PolyList_0[];

//>-- Obj07: END ------------------------------------------- lvl01_scn04_landing_pad_stone_door -------------------------------------------------


//>-- Obj08: START ------------------------------------------ lvl01_scn04_landing_pad_spires -------------------------------------------------

   extern Vtx lvl01_scn04_landing_pad_spires_VertList_0 [];
   extern Gfx lvl01_scn04_landing_pad_spires_Static_PolyList_0[];

//>-- Obj08: END ------------------------------------------- lvl01_scn04_landing_pad_spires -------------------------------------------------



// //>-- OBJECT 0: START ------------------------------------------ lvl01_scn04_landing_pad_LOD1 -------------------------------------------------

extern Vtx lvl01_scn04_landing_pad_LOD1_VertList_0 [];
extern Gfx lvl01_scn04_landing_pad_LOD1_Static_PolyList_0[];

// //>-- OBJECT 0: END ------------------------------------------- lvl01_scn04_landing_pad_LOD1 -------------------------------------------------





//>-- Scn00: START ------------------------------------------ Landing_Pad Scene Controller -------------------------------------------------

   extern TriggerBox Landing_Pad_SceneTrig[3];
   extern TriggerBox Landing_Pad_SectorTrig[6];
   extern void init_Scene_Landing_Pad();
   extern void init_EnvObjects_Landing_Pad();
   extern void render_EnvObjects_Landing_Pad(u8 LOD);
   extern void renderTransp_EnvObjects_Landing_Pad(u8 LOD);
   extern void SceneTrig_Check_Landing_Pad(SceneTrigger *thisScene);
   extern void SectorTrig_Update_Landing_Pad(SceneTrigger *thisScene);


#endif