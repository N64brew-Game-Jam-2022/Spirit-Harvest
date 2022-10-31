#ifndef SCN02_FOREST_DEFS_H 
#define SCN02_FOREST_DEFS_H 


//>-- Obj00: START ------------------------------------------ forest_fork_1_col_walls -------------------------------------------------

   extern MeshColliderObj MColObj_forest_fork_3_col_walls[];
//>-- Obj00: END ------------------------------------------- forest_fork_1_col_walls -------------------------------------------------


//>-- Obj01: START ------------------------------------------ forest_fork_1_col_ground -------------------------------------------------

   extern MeshColliderObj MColObj_forest_fork_3_col_ground[];
//>-- Obj01: END ------------------------------------------- forest_fork_1_col_ground -------------------------------------------------



//>-- Obj00: START ------------------------------------------ forest_straight_1_col_walls -------------------------------------------------

   extern MeshColliderObj MColObj_forest_straight_1_col_walls[];
//>-- Obj00: END ------------------------------------------- forest_straight_1_col_walls -------------------------------------------------


//>-- Obj01: START ------------------------------------------ forest_straight_1_col_ground -------------------------------------------------

   extern MeshColliderObj MColObj_forest_straight_1_col_ground[];
//>-- Obj01: END ------------------------------------------- forest_straight_1_col_ground -------------------------------------------------



//>-- Obj00: START ------------------------------------------ forest_fork_3 -------------------------------------------------

   extern Vtx forest_fork_3_VertList_0 [];
   extern Gfx forest_fork_3_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- forest_fork_3 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ forest_fork_2 -------------------------------------------------

   extern Vtx forest_fork_2_VertList_0 [];
   extern Gfx forest_fork_2_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- forest_fork_2 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ forest_turn_1 -------------------------------------------------

   extern Vtx forest_turn_1_VertList_0 [];
   extern Gfx forest_turn_1_Static_PolyList_0[];

//>-- Obj02: END ------------------------------------------- forest_turn_1 -------------------------------------------------


//>-- Obj03: START ------------------------------------------ forest_dead_end_2 -------------------------------------------------

   extern Vtx forest_dead_end_2_VertList_0 [];
   extern Gfx forest_dead_end_2_Static_PolyList_0[];

//>-- Obj03: END ------------------------------------------- forest_dead_end_2 -------------------------------------------------


//>-- Obj04: START ------------------------------------------ forest_elevation_3 -------------------------------------------------

   extern Vtx forest_elevation_3_VertList_0 [];
   extern Gfx forest_elevation_3_Static_PolyList_0[];

//>-- Obj04: END ------------------------------------------- forest_elevation_3 -------------------------------------------------


//>-- Obj05: START ------------------------------------------ forest_dead_end_1 -------------------------------------------------

   extern Vtx forest_dead_end_1_VertList_0 [];
   extern Gfx forest_dead_end_1_Static_PolyList_0[];

//>-- Obj05: END ------------------------------------------- forest_dead_end_1 -------------------------------------------------


//>-- Obj06: START ------------------------------------------ forest_elevation_2 -------------------------------------------------

   extern Vtx forest_elevation_2_VertList_0 [];
   extern Gfx forest_elevation_2_Static_PolyList_0[];

//>-- Obj06: END ------------------------------------------- forest_elevation_2 -------------------------------------------------


//>-- Obj07: START ------------------------------------------ forest_elevation_1 -------------------------------------------------

   extern Vtx forest_elevation_1_VertList_0 [];
   extern Gfx forest_elevation_1_Static_PolyList_0[];

//>-- Obj07: END ------------------------------------------- forest_elevation_1 -------------------------------------------------


//>-- Obj08: START ------------------------------------------ forest_uturn_1 -------------------------------------------------

   extern Vtx forest_uturn_1_VertList_0 [];
   extern Gfx forest_uturn_1_Static_PolyList_0[];

//>-- Obj08: END ------------------------------------------- forest_uturn_1 -------------------------------------------------


//>-- Obj09: START ------------------------------------------ forest_straight_log -------------------------------------------------

   extern Vtx forest_straight_log_VertList_0 [];
   extern Gfx forest_straight_log_Static_PolyList_0[];

//>-- Obj09: END ------------------------------------------- forest_straight_log -------------------------------------------------


//>-- Obj10: START ------------------------------------------ forest_fork_1 -------------------------------------------------

   extern Vtx forest_fork_1_VertList_0 [];
   extern Gfx forest_fork_1_Static_PolyList_0[];

//>-- Obj10: END ------------------------------------------- forest_fork_1 -------------------------------------------------


//>-- Obj11: START ------------------------------------------ forest_straight_2 -------------------------------------------------

   extern Vtx forest_straight_2_VertList_0 [];
   extern Gfx forest_straight_2_Static_PolyList_0[];

//>-- Obj11: END ------------------------------------------- forest_straight_2 -------------------------------------------------


//>-- Obj12: START ------------------------------------------ forest_straight_1 -------------------------------------------------

   extern Vtx forest_straight_1_VertList_0 [];
   extern Gfx forest_straight_1_Static_PolyList_0[];

//>-- Obj12: END ------------------------------------------- forest_straight_1 -------------------------------------------------

//>-- Scn02: START ------------------------------------------ Forest Scene Controller -------------------------------------------------

   extern TriggerBox Forest_SceneTrig[2];
   extern TriggerBox Forest_SectorTrig[2];
   extern void init_Scene_Forests();
   extern void init_EnvObjects_Forests();
   extern void render_EnvObjects_Forests(u8 LOD);
   extern void renderTransp_EnvObjects_Forests(u8 LOD);
   extern void SceneTrig_Check_Forests(SceneTrigger *thisScene);
   extern void SectorTrig_Update_Forests(SceneTrigger *thisScene);


#endif