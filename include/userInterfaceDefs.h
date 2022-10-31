#ifndef _UI_DEFS_H
#define _UI_DEFS_H
//#include "transformDefs.h"
#include "common.h"


//>-- Obj00: START ------------------------------------------ pause_menu_border -------------------------------------------------

   extern Vtx pause_menu_border_VertList_0 [];
   extern Gfx pause_menu_border_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- pause_menu_border -------------------------------------------------


//>-- Obj01: START ------------------------------------------ pause_menu_bg -------------------------------------------------

   extern Vtx pause_menu_bg_VertList_0 [];
   extern Gfx pause_menu_bg_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- pause_menu_bg -------------------------------------------------

   extern void init_EnvObjects_Menu();
   extern void render_EnvObjects_Menu(u8 LOD);
   
   extern void DrawUI(u8 uiElement);
   extern void UpdateUI(u8 uiElement);

/*--------------------------------------------------------------------------*/
/*-----------------------userInterfaceModels.c Functions--------------------*/
/*--------------------------------------------------------------------------*/

extern void ui_target_init(); //initiate or re-initiate UI target models
extern void UI_Target_Render(); //render UI target models
extern void UI_Target_Update(); //update position and state of target ring and arrow
extern void target_ring_PolyList(u8 animFrame); 
extern void target_arrow_PolyList(u8 animFrame);
extern void SpawnSummonEffect();

/*--------------------------------------------------------------------------*/
/*-----------------------userInterfaceTextures.c Textures--------------------*/
/*--------------------------------------------------------------------------*/


extern u8 Menu_BG_Border[];
extern u16 Menu_BG_Border_tlut[];
extern u8 Menu_BG_Parchment[];
extern u16 Menu_BG_Parchment_tlut[];

extern u8 spell_icons_light[];
extern u16 spell_icons_light_tlut[];

extern u8 spell_icons_wind[];
extern u16 spell_icons_wind_tlut[];

extern u8 spell_icons_fire[];
extern u16 spell_icons_fire_tlut[];

extern u8 spell_icons_water[];
extern u16 spell_icons_water_tlut[];

extern u8 spell_icons_z_pressed[];
extern u16 spell_icons_z_pressed_tlut[];

extern u8 spell_icons_z[];
extern u16 spell_icons_z_tlut[];

extern u8 analog_stick[];
extern u16 analog_stick_tlut[];

extern u8 a_button[];
extern u16 a_button_tlut[];

extern u8 b_button[];
extern u16 b_button_tlut[];

extern u8 Prompt_Attack[];
extern u16 Prompt_Attack_tlut[];

extern u8 Prompt_Summon[];
extern u16 Prompt_Summon_tlut[];


extern u8 Wade[];
extern u16 Wade_tlut[];

extern u8 zxbryc[];
extern u16 zxbryc_tlut[];

extern u8 Cobra[];
extern u16 Cobra_tlut[];

extern unsigned char glow_material[];
extern unsigned short glow_material_tlut[];



#endif