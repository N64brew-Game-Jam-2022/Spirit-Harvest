
#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_
#include "common.h"
//#include "para.h"
#include "transformDefs.h"
#include "objectDefs.h"

// Gameplay screen size
#define SCREEN_HT        240
#define SCREEN_WD        320

// Gameplay screen size
//#define SCREEN_HT        225
//#define SCREEN_WD        400

#define ANAMORPHIC_WD 	400
#define ANAMORPHIC_HT 	226

// Gameplay screen size
#define MENU_SCREEN_HT        480
#define MENU_SCREEN_WD        640


/* The maximum length of the display list of one task  */
//#define GFX_GLIST_LEN     2048*10
#define GFX_GLIST_LEN     2048*10
#define GFX_CLEAR_GLIST_LEN     1024
//#define GFX_GLIST_DEBUG_LEN     2048*10

/* The maximum value of the graphic task in the 1 retrace period  */
#define GFX_GTASK_NUM        2


/*-------------------------- define structure ------------------------------ */
/* The projection-matrix structure  */
typedef struct {
	
Mtx viewingSpecHilite;
Mtx projectionSpecHilite;
	
  Mtx     projection;
  Mtx     modeling;
  Mtx     viewing; 
  


  /*The buffer for movie drawing */
  //unsigned short MovieBuf[8200];
} Dynamic;

typedef struct {
  Mtx     projection;
  Mtx     modeling;
  Mtx     viewing; 
	
} DebugDynamic;

/* The parameter of the tail for shooting  */
typedef struct{
    float pos_x;	/*The X-coordinate */
    float pos_y;	/*The Y-coordinate */
    float pos_z;	/*The Z-coordinate */
    float rot_x;	/*The rotational angle of the X-axis direction */
    float rot_y;	/*The rotational angle of the Y-axis direction */
    float rot_z;	/*The rotational angle of the Z-axis direction */
    float size_x;
    float size_y;
    float size_z;
    int tail_pattern;
    int user;
    float tail_dir;
    int status;
}ShotTail;

/*
typedef struct {
     float  col[3];         // Color (and intensity) 
     float  pos[3];         // Position (absolute coordinates)
     float  a1, a2;         // Attenuation rate 
     // Actual color = col/(a1* distance + a2) 
} PositionalLight;*/


/*
typedef struct{
	float col[3];
	float pos[3];
	float a1, a2;
} PositionalLight;
*/
/*
typedef struct PositionalLight testPosLight;
struct PositionalLight
{
	float col[3];
	float pos[3];
	float a1, a2;
};*/


/*-------------------------------- parameter---------------------------------*/
extern Dynamic gfx_dynamic[];
extern Gfx* glistp;
extern Gfx gfx_glist[GFX_GTASK_NUM][GFX_GLIST_LEN];
extern Gfx gfx_clear_glist[][GFX_CLEAR_GLIST_LEN];
extern u32 gfx_gtask_no;

/*------------------------------- other extern define -----------------------*/
extern Gfx game_setup_rdpstate[];
extern Gfx game_setup_rspstate[];
extern Gfx menu_setup_rdpstate[];
extern Gfx menu_setup_rspstate[];

/*-------------------------------test second display list---------------------
extern Dynamic gfx_debugDynamic[];
extern Gfx* glistpDebugp;
extern Gfx gfx_glistDebug[GFX_GTASK_NUM][GFX_GLIST_LEN]; //smaller size for debug
extern u32 gfx_debug_gtask_no;
*/
/*-------------------------------- graphic.c functions ---------------------------------*/
extern void gfxRCPInit(void);
extern void gfxClearCfb(void);
extern void menuGfxRCPInit(void);
extern void menuGfxClearCfb(void);

extern void PlayerObjMTX(Player* pla);
extern void PlayerEffectMTX(RigObject* rigObj, void (*rigFunc)(void)); //Render effects such as shadows, dust particles, water ripples etc
extern void RenderEnvObj(EnvObject* env);
extern void RenderProjectileObj(ProjectileObject* proj);
extern void PlayerRigObjectMTX(RigObject* rigObj, void (*rigFunc)(void));
extern void RenderEnemyObj(EnemyObject* enemy);
extern void PlayerSkinnedObjectMTX(Player* pla);



//extern void RenderPlayerObj(Player* pla);
//extern void RenderPlayerRig(RigObject* rigObj, void (*rigFunc));

extern void PlayerRigObjectMTX(RigObject* rigObj, void (*rigFunc)(void));


#endif /* _GRAPHIC_H_ */



