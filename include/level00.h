#ifndef _LEVEL00_H
#define _LEVEL00_H


extern void init_Scene_Cave_Entrance();
extern void init_scene_Cave2();
extern void init_Scene_Overlook();
extern void init_Scene_Player_Test();
extern void init_Scene_Beach();
extern void init_Scene_Town();
extern void init_Scene_Forest_entrance();
extern void init_Scene_Skybox();
extern void init_Scene_Forests();
extern void init_EnvObjects_Forests();

//extern void init_lvl00_Debug();

extern SceneManager scene_Cave_Entrance; 
extern SceneManager scene_Cave1;
extern SceneManager scene_Cave2;
extern SceneManager scene_Courtyard;
extern SceneManager scene_Overlook;
extern SceneManager scene_Landing_Pad;
extern SceneManager scene_Door_Objs; //All of the doorway wall collisions in the current level
extern SceneManager scene_Player_Test; // debug testing room for player control

extern SceneManager scene_Beach; 
extern SceneManager scene_Town;
extern SceneManager scene_Forest_entrance;
extern SceneManager scene_Skybox;
extern SceneManager scene_Forests; 
//extern SceneManager scene_Forest_entrance;



/*--------------------------------------------------------------------------*/
/*------------------------------Lights From level00.c------------------------------*/
/*--------------------------------------------------------------------------*/


extern Lights2 env00_cave1_shade;
extern Lights2 env00_light_beam;
extern Lights2 env00_cave2_pool2_light;
extern Lights2 env01_01_shade;


/*--------------------------------------------------------------------------*/
/*------------------------------From level00.c------------------------------*/
/*--------------------------------------------------------------------------*/

extern void init_lvl00_Courtyard();
extern void render_lvl00_Courtyard(u8 LOD);
extern void render_lvl00_Courtyard_Transp(u8 LOD);
extern void render_lvl00_Courtyard_Lights(u8 LOD);
extern void enemies_lvl00_Courtyard();
extern void objects_lvl00_Courtyard();

void lvl00_collision_scenes(); 
void lvl00_collision_sectors();

extern SceneTrigger lvl00_SceneTrig[9];
extern SceneManager* scenes[9];




/*--------------------------------------------------------------------------*/
/*----------From scene04-Landing_Pad_Controller.c---------------------------*/
/*--------------------------------------------------------------------------*/

extern void init_Scene_Landing_Pad();
extern void init_EnvObjects_Landing_Pad();
extern void render_EnvObjects_Landing_Pad(u8 LOD);
extern void renderTransp_EnvObjects_Landing_Pad(u8 LOD);
//extern void initCol_Scn04_Landing_Pad();
extern void SectorTrig_Update_Landing_Pad(SceneTrigger *thisScene);

extern void SceneTrig_Check_Landing_Pad(SceneTrigger *thisScene);


/*--------------------------------------------------------------------------*/
/*----------From scene04-Courtyard_Controller.c---------------------------*/
/*--------------------------------------------------------------------------*/
extern void init_Scene_Courtyard();
extern void init_EnvObjects_Courtyard();
extern void render_EnvObjects_Courtyard(u8 LOD);
extern void renderTransp_EnvObjects_Courtyard(u8 LOD);
//extern void initCol_Scn04_Landing_Pad();
extern void SceneTrig_Check_Courtyard(SceneTrigger *thisScene);

extern void SectorTrig_Update_Courtyard(SceneTrigger *thisScene);



/*--------------------------------------------------------------------------*/
/*------From lvl01_skybox_Mesh.c and lvl01_skybox_Animator.c--------------------------*/
/*--------------------------------------------------------------------------*/
extern EnvObject lvl00_Skybox;
extern Vtx lvl00_skybox_VertList_0 [];
extern void lvl00_skybox_PolyList(u8 animFrame);

/*--------------------------------------------------------------------------*/
/*--------------------From scn00_cave1_env_animator.c--------------------*/
/*--------------------------------------------------------------------------*/


void init_lvl00_Cave1();
void init_lvl00_Cave2();
void init_lvl00_Overlook();


//NEW VERSION OF PANELS
//>-- OBJECT 0: START ------------------------------------------ lvl_01_scn03_PanelArray_Overlay -------------------------------------------------

extern Vtx lvl_01_scn03_PanelArray_Overlay_VertList_0 [];
extern Gfx lvl_01_scn03_PanelArray_Overlay_Static_PolyList_0[];

//>-- OBJECT 0: END ------------------------------------------- lvl_01_scn03_PanelArray_Overlay -------------------------------------------------


//>-- OBJECT 1: START ------------------------------------------ lvl_01_scn03_PanelArray_Cells -------------------------------------------------

extern Vtx lvl_01_scn03_PanelArray_Cells_VertList_0 [];
extern Gfx lvl_01_scn03_PanelArray_Cells_Static_PolyList_0[];

//>-- OBJECT 1: END ------------------------------------------- lvl_01_scn03_PanelArray_Cells -------------------------------------------------


//>-- OBJECT 2: START ------------------------------------------ lvl_01_scn03_PanelArray_Base -------------------------------------------------

extern Vtx lvl_01_scn03_PanelArray_Base_VertList_0 [];
extern Gfx lvl_01_scn03_PanelArray_Base_Static_PolyList_0[];

//>-- OBJECT 2: END ------------------------------------------- lvl_01_scn03_PanelArray_Base -------------------------------------------------


//>-- OBJECT 3: START ------------------------------------------ lvl01_scn03_Small_Gear001 -------------------------------------------------

extern Vtx lvl01_scn03_Small_Gear_VertList_0 [];
extern Gfx lvl01_scn03_Small_Gear_Static_PolyList_0[];

//>-- OBJECT 3: END ------------------------------------------- lvl01_scn03_Small_Gear001 -------------------------------------------------




void init_lvl00_Landing_Pad();



/*--------------------------------------------------------------------------*/
/*---------------------From env00_col_courtyard_walls.c---------------------*/
/*--------------------------------------------------------------------------*/


extern	MeshColliderObj lvl00_scn00_col_ground01_MColObj[];

/*--------------------------------------------------------------------------*/
/*-----------------------From lvl01_collision_ground.c----------------------*/
/*--------------------------------------------------------------------------*/

extern MeshColliderObj lvl00_scn01_col_ground01_MColObj[];



extern MeshColliderObj scn02_cave2_SecurityDoor_MColObj[];
extern MeshColliderObj scn02_landingPad_SecurityDoor_MColObj[];










/*----------------------------- env01_textures.c ---------------------------*/

//16b 32x64 textures
extern unsigned short lvl01_Grate_32x64[];


//4b 32x128 textures
extern unsigned char lvl01_waterfall01int_32x128[]; //intensity texture
extern unsigned short lvl01_waterfall01int_32x128_tlut[];
extern unsigned char lvl01_waterfall01_32x128[];
extern unsigned short lvl01_waterfall01_32x128_tlut[] ;
extern unsigned char lvl01_waterfall02_32x128[];
extern unsigned short lvl01_waterfall02_32x128_tlut[] ;

//32x32 4b IA
extern unsigned short tex_sky[];
extern unsigned short tx_gradIA16[];
extern unsigned char tx_highlight[];

//64x64 4b I
extern unsigned char lvl01_shadow[];
extern unsigned short lvl01_shadow_tlut[];

//4b 64x64 textures



extern unsigned char Hex_Solar_Panel_Hex_LOD1[];
extern unsigned short Hex_Solar_Panel_Hex_LOD1_tlut[];

extern unsigned char Hex_Solar_Panel_Hex_Edge[];
extern unsigned short Hex_Solar_Panel_Hex_Edge_tlut[];

extern unsigned char Gold_Material_Solar_Panel[];
extern unsigned short Gold_Material_Solar_Panel_tlut[];

extern unsigned char Hex_Solar_Panel_64x64[];
extern unsigned short Hex_Solar_Panel_64x64_tlut[];

extern unsigned char lvl01_grating[];
extern unsigned short lvl01_grating_tlut[];

extern unsigned char Red_Vines_32x128[];
extern unsigned short Red_Vines_32x128_tlut[];

extern unsigned char Vein_Vines_32x128[];
extern unsigned short Vein_Vines_32x128_tlut[];

extern unsigned char lvl01_bark[];
extern unsigned short lvl01_bark_tlut[];

extern unsigned char lvl01_tree_trunk[]; 
extern unsigned short lvl01_tree_trunk_tlut[]; 

extern unsigned char lvl01_ground[]; 
extern unsigned short lvl01_ground_tlut[];

extern unsigned char lvl01_ground_riverbed[];
extern unsigned short lvl01_ground_riverbed_tlut[];

extern unsigned char lvl01_pillar[];
extern unsigned short lvl01_pillar_tlut[];

extern unsigned char lvl01_pillar_broken[];
extern unsigned short lvl01_pillar_broken_tlut[];

extern unsigned char lvl01_pillar_detail1[];
extern unsigned short lvl01_pillar_detail1_tlut[];

extern unsigned char lvl01_pillar_detail2[];
extern unsigned short lvl01_pillar_detail2_tlut[];

extern unsigned char lvl01_wall[];
extern unsigned short lvl01_wall_tlut[];

extern unsigned char lvl01_wall_base[];
extern unsigned short lvl01_wall_base_tlut[];

extern unsigned char lvl01_wall_basev2[];
extern unsigned short lvl01_wall_basev2_tlut[];

extern unsigned char lvl01_wallv2[];
extern unsigned short lvl01_wallv2_tlut[];

extern unsigned char lvl01_wall_top[];
extern unsigned short lvl01_wall_top_tlut[];

extern unsigned char lvl01_water[];
extern unsigned short lvl01_water_tlut[];

extern unsigned char lvl01_waterfall[];
extern unsigned short lvl01_waterfall_tlut[];

extern unsigned char lvl01_tree_leaves[];
extern unsigned short lvl01_tree_leaves_tlut[];


extern unsigned char water_grey1[];
extern unsigned short water_grey1_tlut[];

extern unsigned char water_grey2[];
extern unsigned short water_grey2_tlut[];

extern unsigned char water_grey3[];
extern unsigned short water_grey3_tlut[];

extern unsigned char water_grey4[];
extern unsigned short water_grey4_tlut[];

extern unsigned char water_grey5[];
extern unsigned short water_grey5_tlut[];

extern unsigned char water_grey6[];
extern unsigned short water_grey6_tlut[];

extern unsigned char water_grey7[];
extern unsigned short water_grey7_tlut[];

extern unsigned char water_grey8[];
extern unsigned short water_grey8_tlut[];

extern unsigned char water_grey9[];
extern unsigned short water_grey9_tlut[];

extern unsigned char water_grey10[];
extern unsigned short water_grey10_tlut[];

extern unsigned char water_grey11[];
extern unsigned short water_grey11_tlut[];

extern unsigned char water_grey12[];
extern unsigned short water_grey12_tlut[];

extern	unsigned char RockDirtEdge[]	;
extern	unsigned short RockDirtEdge_tlut[]	;


#endif