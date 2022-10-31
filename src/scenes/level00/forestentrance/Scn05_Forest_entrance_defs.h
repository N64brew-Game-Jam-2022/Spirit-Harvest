#ifndef SCN05_FOREST_ENTRANCE_DEFS_H 
#define SCN05_FOREST_ENTRANCE_DEFS_H 


//>-- Obj00: START ------------------------------------------ col_forestEntrance_wall -------------------------------------------------
   extern MeshColliderObj MColObj_col_forestEntrance_wall[];
//>-- Obj00: END ------------------------------------------- col_forestEntrance_wall -------------------------------------------------

//>-- Obj00: START ------------------------------------------ col_forestEntrance_ground -------------------------------------------------

   extern MeshColliderObj MColObj_col_forestEntrance_ground[];
//>-- Obj00: END ------------------------------------------- col_forestEntrance_ground -------------------------------------------------





//>-- Obj00: START ------------------------------------------ canyon_water -------------------------------------------------

   extern Vtx canyon_water_VertList_0 [];
   extern void canyon_water_PolyList( u8 animFrame );

//>-- Obj00: END ------------------------------------------- canyon_water -------------------------------------------------


//>-- Obj00: START ------------------------------------------ canyon_trees -------------------------------------------------

   extern Vtx canyon_trees_VertList_0 [];
   extern Gfx canyon_trees_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- canyon_trees -------------------------------------------------


//>-- Obj00: START ------------------------------------------ town_exit_rope -------------------------------------------------

   extern Vtx town_exit_rope_VertList_0 [];
   extern Gfx town_exit_rope_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- town_exit_rope -------------------------------------------------


//>-- Obj01: START ------------------------------------------ forest_entrance_post -------------------------------------------------

   extern Vtx forest_entrance_post_VertList_0 [];
   extern Gfx forest_entrance_post_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- forest_entrance_post -------------------------------------------------


//>-- Obj02: START ------------------------------------------ town_exit_bridge -------------------------------------------------

   extern Vtx town_exit_bridge_VertList_0 [];
   extern Gfx town_exit_bridge_Static_PolyList_0[];

//>-- Obj02: END ------------------------------------------- town_exit_bridge -------------------------------------------------


//>-- Obj03: START ------------------------------------------ town_exit_posts -------------------------------------------------

   extern Vtx town_exit_posts_VertList_0 [];
   extern Gfx town_exit_posts_Static_PolyList_0[];

//>-- Obj03: END ------------------------------------------- town_exit_posts -------------------------------------------------


//>-- Obj04: START ------------------------------------------ forest_entrance -------------------------------------------------

   extern Vtx forest_entrance_VertList_0 [];
   extern Gfx forest_entrance_Static_PolyList_0[];

//>-- Obj04: END ------------------------------------------- forest_entrance -------------------------------------------------

//>-- Obj00: START ------------------------------------------ forest_entrance_waterfall -------------------------------------------------

   extern Vtx forest_entrance_waterfall_VertList_0 [];
   extern void forest_entrance_waterfall_PolyList( u8 animFrame );

//>-- Obj00: END ------------------------------------------- forest_entrance_waterfall -------------------------------------------------




//>-- Obj00: START ------------------------------------------ forest_entrance_LOD1 -------------------------------------------------

   extern Vtx forest_entrance_LOD1_VertList_0 [];
   extern Gfx forest_entrance_LOD1_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- forest_entrance_LOD1 -------------------------------------------------



//>-- Scn05: START ------------------------------------------ Forest_entrance Scene Controller -------------------------------------------------

   extern TriggerBox Forest_entrance_SceneTrig[5];
   extern TriggerBox Forest_entrance_SectorTrig[1];
   extern void init_Scene_Forest_entrance();
   extern void init_EnvObjects_Forest_entrance();
   extern void render_EnvObjects_Forest_entrance(u8 LOD);
   extern void renderTransp_EnvObjects_Forest_entrance(u8 LOD);
   extern void SceneTrig_Check_Forest_entrance(SceneTrigger *thisScene);
   extern void SectorTrig_Update_Forest_entrance(SceneTrigger *thisScene);


#endif