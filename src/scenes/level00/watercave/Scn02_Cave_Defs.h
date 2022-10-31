#ifndef SCN02_CAVE_DEFS_H 
#define SCN02_CAVE_DEFS_H 


extern TriggerBox Cave_SceneTrig[5];
extern TriggerBox Cave_SectorTrig[5];





extern void init_Scene_Cave();
extern void init_EnvObjects_Cave();
extern void render_EnvObjects_Cave(u8 LOD);
extern void renderTransp_EnvObjects_Cave(u8 LOD);
extern void SceneTrig_Check_Cave(SceneTrigger *thisScene);
extern void SectorTrig_Update_Cave(SceneTrigger *thisScene);




//>-- OBJECT 0: START ------------------------------------------ Cave_Wall_02 -------------------------------------------------

extern MeshColliderObj MColObj_Cave_Wall_02[];
//>-- OBJECT 0: END ------------------------------------------- Cave_Wall_02 -------------------------------------------------


//>-- OBJECT 1: START ------------------------------------------ Cave_Wall_01 -------------------------------------------------

extern MeshColliderObj MColObj_Cave_Wall_01[];
//>-- OBJECT 1: END ------------------------------------------- Cave_Wall_01 -------------------------------------------------


//>-- OBJECT 2: START ------------------------------------------ Cave_Ground_01 -------------------------------------------------

extern MeshColliderObj MColObj_Cave_Ground_01[];
//>-- OBJECT 2: END ------------------------------------------- Cave_Ground_01 -------------------------------------------------


//>-- OBJECT 3: START ------------------------------------------ Cave_Ground_02 -------------------------------------------------

extern MeshColliderObj MColObj_Cave_Ground_02[];
//>-- OBJECT 3: END ------------------------------------------- Cave_Ground_02 -------------------------------------------------






//>-- OBJECT 0: START ------------------------------------------ Scn02_Power_Glow_01 -------------------------------------------------

extern Vtx Scn02_Power_Glow_01_VertList_0 [];
extern void Scn02_Power_Glow_01_PolyList( u8 animFrame );

//>-- OBJECT 0: END ------------------------------------------- Scn02_Power_Glow_01 -------------------------------------------------


//>-- OBJECT 1: START ------------------------------------------ Scn02_Walls_01 -------------------------------------------------

extern Vtx Scn02_Walls_01_VertList_0 [];
extern Gfx Scn02_Walls_01_Static_PolyList_0[];

//>-- OBJECT 1: END ------------------------------------------- Scn02_Walls_01 -------------------------------------------------


//>-- OBJECT 2: START ------------------------------------------ Scn02_Walls_02 -------------------------------------------------

extern Vtx Scn02_Walls_02_VertList_0 [];
extern Gfx Scn02_Walls_02_Static_PolyList_0[];

//>-- OBJECT 2: END ------------------------------------------- Scn02_Walls_02 -------------------------------------------------


//>-- OBJECT 3: START ------------------------------------------ Scn02_Light_Shaft_01 -------------------------------------------------

extern Vtx Scn02_Light_Shaft_01_VertList_0 [];
extern void Scn02_Light_Shaft_01_PolyList( u8 animFrame );

//>-- OBJECT 3: END ------------------------------------------- Scn02_Light_Shaft_01 -------------------------------------------------


//>-- OBJECT 4: START ------------------------------------------ Scn02_Ground_02 -------------------------------------------------

extern Vtx Scn02_Ground_02_VertList_0 [];
extern Gfx Scn02_Ground_02_Static_PolyList_0[];

//>-- OBJECT 4: END ------------------------------------------- Scn02_Ground_02 -------------------------------------------------


//>-- OBJECT 5: START ------------------------------------------ Scn02_Water_Pool_02 -------------------------------------------------

extern Vtx Scn02_Water_Pool_02_VertList_0 [];
extern void Scn02_Water_Pool_02_PolyList( u8 animFrame );

//>-- OBJECT 5: END ------------------------------------------- Scn02_Water_Pool_02 -------------------------------------------------


//>-- OBJECT 6: START ------------------------------------------ Scn02_Water_Pool_01 -------------------------------------------------

extern Vtx Scn02_Water_Pool_01_VertList_0 [];
extern void Scn02_Water_Pool_01_PolyList( u8 animFrame );

//>-- OBJECT 6: END ------------------------------------------- Scn02_Water_Pool_01 -------------------------------------------------


//>-- OBJECT 7: START ------------------------------------------ Scn02_Ground_01 -------------------------------------------------

extern Vtx Scn02_Ground_01_VertList_0 [];
extern Gfx Scn02_Ground_01_Static_PolyList_0[];

//>-- OBJECT 7: END ------------------------------------------- Scn02_Ground_01 -------------------------------------------------












//>-- OBJECT 0: START ------------------------------------------ Scn02_Power_Glow_01_LOD2 -------------------------------------------------

extern Vtx Scn02_Power_Glow_01_LOD2_VertList_0 [];
extern void Scn02_Power_Glow_01_LOD2_PolyList( u8 animFrame );

//>-- OBJECT 0: END ------------------------------------------- Scn02_Power_Glow_01_LOD2 -------------------------------------------------


//>-- OBJECT 1: START ------------------------------------------ Scn02_Walls_02_LOD2 -------------------------------------------------

extern Vtx Scn02_Walls_02_LOD2_VertList_0 [];
extern Gfx Scn02_Walls_02_LOD2_Static_PolyList_0[];

//>-- OBJECT 1: END ------------------------------------------- Scn02_Walls_02_LOD2 -------------------------------------------------


//>-- OBJECT 2: START ------------------------------------------ Scn02_Walls_01_LOD2 -------------------------------------------------

extern Vtx Scn02_Walls_01_LOD2_VertList_0 [];
extern Gfx Scn02_Walls_01_LOD2_Static_PolyList_0[];

//>-- OBJECT 2: END ------------------------------------------- Scn02_Walls_01_LOD2 -------------------------------------------------


//>-- OBJECT 3: START ------------------------------------------ Scn02_Walls_01_LOD1 -------------------------------------------------

extern Vtx Scn02_Walls_01_LOD1_VertList_0 [];
extern Gfx Scn02_Walls_01_LOD1_Static_PolyList_0[];

//>-- OBJECT 3: END ------------------------------------------- Scn02_Walls_01_LOD1 -------------------------------------------------




#endif