#ifndef _LEVELDEFS_H
#define _LEVELDEFS_H

typedef enum LEVELS_t
{
	MODE_TITLE = 0u, //formerly MODE_MAINMENU
	MODE_MAIN, //formerly LEVEL_00
    LEVEL_01,
    LVLS_SIZE
}LEVELS;

//for declaring the current game mode such as title screen, main game, pause menu, etc
typedef struct
{
    void (*levelInit)(void);
    void (*levelGfx)(unsigned int pendingGfx);
}GameMode;

typedef struct
{	//stores scene data
	EnvObject *sceneEnvObjects;	
}SceneObject;

typedef struct
{	//stores level data
	SceneObject *regionScenes; //pointer to a collection of scenes	
}RegionObject;




typedef struct
{
	u8 isActive;
    void (*sceneInit)(void);
    void (*envObjInit)(void);
    void (*renderEnvObj)(u8 LOD); //render solid world objects first	
	void (*enemiesRender)(void);
	void (*objectsRender)(void);	
	void (*renderTranspEnvObj)(u8 LOD);//rendering transparent world objects last
	SceneTrigger *sceneTriggers; //pointer to sector trigger data for a scene... ex lvl00_SceneTrig[0] = courtyard scene
	SectorTrigger *sectorTriggers;
	MeshColliderObj *wallColObj;
	MeshColliderObj *groundColObj;
}SceneManager;

GameMode* gameModes[LVLS_SIZE];

/*--------------------------------------------------------------------------*/
/*---------General Level Objects from level_Objects_Gen_Animator.c----------*/
/*--------------------------------------------------------------------------*/
		
extern void Security_Door_TranspObj_PolyList(u8 animFrame);
extern void Security_Door_Terminal_PolyList(u8 animFrame);
extern void Security_Door_Frame_PolyList(u8 animFrame);	
extern void Security_Door_Terminal_Screen_PolyList(u8 animFrame);

extern Vtx Security_Door_TranspObj_VertList_0 [];
extern Vtx Security_Door_Terminal_VertList_0 [];
extern Vtx Security_Door_Frame_VertList_0 [];
extern Vtx Security_Door_Terminal_Screen_VertList_0 [];		



/*--------------------------------------------------------------------------*/
/*-------General Level Objects from level_Objects_Door_1_Animator.c---------*/
/*--------------------------------------------------------------------------*/

extern void Security_Door_Part_01_PolyList(u8 animFrame);
extern void Security_Door_Part_02_PolyList(u8 animFrame);
extern void Security_Door_Part_03_PolyList(u8 animFrame);



/*--------------------------------------------------------------------------*/
/*---------------------------General Level Objects--------------------------*/
/*--------------------------------------------------------------------------*/
 void Security_Door_Glow_FX_PolyList(u8 animFrame);
 
 void lvl01_scn04_landing_pad_light_shaft_PolyList(u8 animFrame); //light ray to be used in cave scenes

/*----------------------------- env01_textures.c ---------------------------*/

//16b 32x64 textures

//4b 32x128 textures
extern u8 Security_door_light_fixture[];
extern u16 Security_door_light_fixture_tlut[];

extern u8 security_door_decoration01[];
extern u16 security_door_decoration01_tlut[];

extern u8 security_door_display01[];
extern u16 security_door_display01_tlut[]; 

//32x32 4b IA

//64x64 4b I
extern u8 security_door_decoration02[];
extern u16 security_door_decoration02_tlut[];

//4b 64x64 textures

#endif
