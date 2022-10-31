#ifndef SCN07_TOWN_DEFS_H 
#define SCN07_TOWN_DEFS_H 



//>-- Obj00: START ------------------------------------------ col_beach_wall_large_home -------------------------------------------------

   extern MeshColliderObj MColObj_col_beach_wall_large_home[];
//>-- Obj00: END ------------------------------------------- col_beach_wall_large_home -------------------------------------------------


//>-- Obj00: START ------------------------------------------ col_beach_ground_large_home -------------------------------------------------

   extern MeshColliderObj MColObj_col_beach_ground_large_home[];
//>-- Obj00: END ------------------------------------------- col_beach_ground_large_home -------------------------------------------------


//>-- Obj00: START ------------------------------------------ col_town_wall_1 -------------------------------------------------

   extern MeshColliderObj MColObj_col_town_wall_1[];
//>-- Obj00: END ------------------------------------------- col_town_wall_1 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ col_town_ground -------------------------------------------------

   extern MeshColliderObj MColObj_col_town_ground[];
//>-- Obj01: END ------------------------------------------- col_town_ground -------------------------------------------------


//>-- Obj00: START ------------------------------------------ col_townExit_wall -------------------------------------------------

   extern MeshColliderObj MColObj_col_townExit_wall[];
//>-- Obj00: END ------------------------------------------- col_townExit_wall -------------------------------------------------


//>-- Obj01: START ------------------------------------------ col_townExit_ground -------------------------------------------------

   extern MeshColliderObj MColObj_col_townExit_ground[];
//>-- Obj01: END ------------------------------------------- col_townExit_ground -------------------------------------------------


//>-- Obj00: START ------------------------------------------ palm_Background -------------------------------------------------

   extern Vtx palm_Background_VertList_0 [];
   extern Gfx palm_Background_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- palm_Background -------------------------------------------------


//>-- Obj01: START ------------------------------------------ fern_background -------------------------------------------------

   extern Vtx fern_background_VertList_0 [];
   extern Gfx fern_background_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- fern_background -------------------------------------------------


//>-- Obj00: START ------------------------------------------ town_home_posts -------------------------------------------------

   extern Vtx town_home_posts_VertList_0 [];
   extern Gfx town_home_posts_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- town_home_posts -------------------------------------------------


//>-- Obj00: START ------------------------------------------ town_large_home_platform -------------------------------------------------

   extern Vtx town_large_home_platform_VertList_0 [];
   extern Gfx town_large_home_platform_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- town_large_home_platform -------------------------------------------------


//>-- Obj01: START ------------------------------------------ palm_multi_3 -------------------------------------------------

   extern Vtx palm_multi_3_VertList_0 [];
   extern void palm_multi_3_PolyList( u8 animFrame );

//>-- Obj01: END ------------------------------------------- palm_multi_3 -------------------------------------------------


//>-- Obj02: START ------------------------------------------ town_ground -------------------------------------------------

   extern Vtx town_ground_VertList_0 [];
   extern Gfx town_ground_Static_PolyList_0[];

//>-- Obj02: END ------------------------------------------- town_ground -------------------------------------------------


//>-- Obj03: START ------------------------------------------ town_large_home -------------------------------------------------

   extern Vtx town_large_home_VertList_0 [];
   extern void town_large_home_PolyList( u8 animFrame );

//>-- Obj03: END ------------------------------------------- town_large_home -------------------------------------------------


//>-- Obj04: START ------------------------------------------ rock_wall_3 -------------------------------------------------

   extern Vtx rock_wall_3_VertList_0 [];
   extern Gfx rock_wall_3_Static_PolyList_0[];

//>-- Obj04: END ------------------------------------------- rock_wall_3 -------------------------------------------------



//>-------------------------------------------------------------------------------------------------------------------------
//>----------------------------------------------------------- LOD_1 -------------------------------------------------------
//>-------------------------------------------------------------------------------------------------------------------------
 






//>-- Obj00: START ------------------------------------------ town_LOD1 -------------------------------------------------

   extern Vtx town_LOD1_VertList_0 [];
   extern Gfx town_LOD1_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- town_LOD1 -------------------------------------------------


//>-- Obj01: START ------------------------------------------ town_transp_LOD1 -------------------------------------------------

   extern Vtx town_transp_LOD1_VertList_0 [];
   extern Gfx town_transp_LOD1_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- town_transp_LOD1 -------------------------------------------------



//>-- Obj00: START ------------------------------------------ rock_wall_3_LOD2 -------------------------------------------------

   extern Vtx rock_wall_3_LOD2_VertList_0 [];
   extern Gfx rock_wall_3_LOD2_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- rock_wall_3_LOD2 -------------------------------------------------


 
//>-------------------------------------------------------------------------------------------------------------------------
//>------------------------------------------------------ Instance Objects -------------------------------------------------
//>-------------------------------------------------------------------------------------------------------------------------
 



//>-- Obj00: START ------------------------------------------ medium_home -------------------------------------------------

   extern Vtx medium_home_VertList_0 [];
   extern Gfx medium_home_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- medium_home -------------------------------------------------


//>-- Obj01: START ------------------------------------------ small_home -------------------------------------------------

   extern Vtx small_home_VertList_0 [];
   extern Gfx small_home_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- small_home -------------------------------------------------







//>-- Scn07: START ------------------------------------------ Town Scene Controller -------------------------------------------------

   extern TriggerBox Town_SceneTrig[4];
   extern TriggerBox Town_SectorTrig[4];
   extern void init_Scene_Town();
   extern void init_EnvObjects_Town();
   extern void render_EnvObjects_Town(u8 LOD);
   extern void renderTransp_EnvObjects_Town(u8 LOD);
   extern void SceneTrig_Check_Town(SceneTrigger *thisScene);
   extern void SectorTrig_Update_Town(SceneTrigger *thisScene);


#endif