#include "common.h"
#include "Scn01_Instanced_defs.h"



EnvObject SummonEffect;
u8 effectSpawn = 0;
extern void spell_fire_PolyList( u8 animFrame );

//>-- Obj00: START ------------------------------------------ pause_menu_border -------------------------------------------------

Vtx pause_menu_border_VertList_0 [] = {
   { 105.72, 61.52, 180.76, 1, 0x6088, 0x0019, 255, 255, 255, 255}, 
   { 105.72, 61.52, 151.43, 1, 0x6088, 0x040c, 255, 255, 255, 255}, 
   { 133.98, 61.52, 180.76, 1, 0x6fc1, 0x0019, 255, 255, 255, 255}, 
   { -105.87, 61.52, 151.43, 1, 0xde37, 0x040c, 255, 255, 255, 255}, 
   { -105.87, 61.52, 180.76, 1, 0xde37, 0x0019, 255, 255, 255, 255}, 
   { -134.13, 61.52, 180.76, 1, 0xcefd, 0x0019, 255, 255, 255, 255}, 
   { -0.07, 61.52, 180.76, 1, 0x1f5f, 0x0019, 255, 255, 255, 255}, 
   { 105.72, 61.52, 7.78, 1, 0x6088, 0x040c, 255, 255, 255, 255}, 
   { 105.72, 61.52, 37.12, 1, 0x6088, 0x0019, 255, 255, 255, 255}, 
   { -0.07, 61.52, 37.12, 1, 0x1f5f, 0x0019, 255, 255, 255, 255}, 
   { -134.13, 61.52, 7.78, 1, 0xcefd, 0x040c, 255, 255, 255, 255}, 
   { -105.87, 61.52, 7.78, 1, 0xde37, 0x040c, 255, 255, 255, 255}, 
   { -105.87, 61.52, 37.12, 1, 0xde37, 0x0019, 255, 255, 255, 255}, 
   { -134.13, 61.52, 151.43, 1, 0x3a48, 0x0012, 255, 255, 255, 255}, 
   { 133.98, 61.52, 7.78, 1, 0xece8, 0x03e0, 255, 255, 255, 255}, 
   { 133.98, 61.52, 37.12, 1, 0xfcb5, 0x03e0, 255, 255, 255, 255}, 
   { 133.98, 61.52, 151.43, 1, 0x3a48, 0x03e0, 255, 255, 255, 255}, 
   { -134.13, 61.52, 37.12, 1, 0xfcb5, 0x0012, 255, 255, 255, 255}, 
   { -0.07, 61.52, 151.43, 1, 0x1f5f, 0x040c, 255, 255, 255, 255}, 
   { -0.07, 61.52, 7.78, 1, 0x1f5f, 0x040c, 255, 255, 255, 255}, 
};

Gfx pause_menu_border_Static_PolyList_0[] = { 

//>-- MATERIAL 0: START ------------------------------------ 'Menu_Edges'-------------------------------------------------

//Last:    Current: Menu_BG_Border
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Menu_BG_Border,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Menu_BG_Border_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( pause_menu_border_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  1, 0, 6, 1, 7, 8, 9, 7  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfcb503e0),  /*New Coords: -6.58, 31.03*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x3a4803e0),  /*New Coords: 116.57, 31.03*/
     gsSP1Triangle(  12, 3, 13, 12  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xfcb50012),  /*New Coords: -6.58, 0.58*/
     gsSP2Triangles(  14, 15, 8, 14, 8, 15, 16, 8  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x4a150012),  /*New Coords: 148.17, 0.58*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3a480012),  /*New Coords: 116.57, 0.58*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x4a1503e0),  /*New Coords: 148.17, 31.03*/
     gsSP2Triangles(  13, 3, 5, 13, 1, 16, 2, 1  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x6fc1040c),  /*New Coords: 223.51, 32.39*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x60880019),  /*New Coords: 193.06, 0.79*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xece80012),  /*New Coords: -38.18, 0.58*/
     gsSP2Triangles(  7, 14, 8, 7, 17, 10, 12, 17  ),
     gsSP2Triangles(  18, 6, 4, 18, 11, 19, 9, 11  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x6088040c),  /*New Coords: 193.06, 32.39*/
     gsSP2Triangles(  18, 1, 6, 18, 19, 7, 9, 19  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3a480012),  /*New Coords: 116.57, 0.58*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xfcb50012),  /*New Coords: -6.58, 0.58*/
     gsSP2Triangles(  17, 12, 13, 17, 1, 8, 16, 1  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xde37040c),  /*New Coords: -67.57, 32.39*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xde370019),  /*New Coords: -67.57, 0.79*/
     gsSP2Triangles(  3, 18, 4, 3, 12, 11, 9, 12  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- pause_menu_border -------------------------------------------------

 
 
//>-- Obj01: START ------------------------------------------ pause_menu_bg -------------------------------------------------

Vtx pause_menu_bg_VertList_0 [] = {
   { 124.23, 63.81, 20.87, 1, 0x30df, 0x1852, 255, 255, 255, 255}, 
   { 124.23, 63.81, 167.67, 1, 0x2c17, 0xf664, 255, 255, 255, 255}, 
   { 1.10, 63.81, 167.67, 1, 0x0830, 0xfb74, 255, 255, 255, 255}, 
   { -122.03, 63.81, 20.87, 1, 0xe911, 0x2270, 255, 255, 255, 255}, 
   { 1.10, 63.81, 20.87, 1, 0x0cf8, 0x1d61, 255, 255, 255, 255}, 
   { -122.03, 63.81, 167.67, 1, 0xe449, 0x0083, 255, 255, 255, 255}, 
};

Gfx pause_menu_bg_Static_PolyList_0[] = { 

//>-- MATERIAL 1: START ------------------------------------ 'Menu_Center'-------------------------------------------------

//Last:    Current: Menu_BG_Parchment
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Menu_BG_Parchment,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 ),
   gsDPLoadTLUT_pal16(   0, Menu_BG_Parchment_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( pause_menu_bg_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 2, 3  ),
     gsSP2Triangles(  4, 0, 2, 4, 5, 3, 2, 5  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- pause_menu_bg -------------------------------------------------

 
 
 void RenderCustomTile_4b(char gfx[], short lut[], int width, int height, int x, int y){
 
 	//load texture
	gDPSetTextureLUT(glistp++, G_TT_RGBA16);// We’re using a TLUT
	gDPLoadTLUT_pal16(glistp++, 0, lut);// Load the TLUT
	
	//prepare sprite
	gDPLoadTextureBlock_4b(glistp++, 
	gfx,
	G_IM_FMT_CI,                              // fmt
	width, height,                                   // width, height
	0,                                        // pal
	G_TX_MIRROR, G_TX_MIRROR,                   // cms, cmt
	G_TX_NOMASK, G_TX_NOMASK,                 // masks, maskt
	G_TX_NOLOD, G_TX_NOLOD                    // shifts, shiftt
	);
	
	//render sprite
	gSPTextureRectangle(glistp++, 
	x<<2, y<<2, 
	(x + width)<<2, (y + height)<<2,
	G_TX_RENDERTILE, 
	0 << 5, 0 << 5, 
	1 << 10, 1 << 10);
	gDPPipeSync(glistp++);
}
 
 
 
 
//functions
void Render64x64Tile_4b(char gfx[], short lut[], int x, int y)
{
	//load texture
	gDPSetTextureLUT(glistp++, G_TT_RGBA16);// We’re using a TLUT
	gDPLoadTLUT_pal16(glistp++, 0, lut);// Load the TLUT
	
	//prepare sprite
	gDPLoadTextureBlock_4b(glistp++, 
	gfx,
	G_IM_FMT_CI,                              // fmt
	64, 64,                                   // width, height
	0,                                        // pal
	G_TX_MIRROR, G_TX_MIRROR,                   // cms, cmt
	G_TX_NOMASK, G_TX_NOMASK,                 // masks, maskt
	G_TX_NOLOD, G_TX_NOLOD                    // shifts, shiftt
	);
	
	//render sprite
	gSPTextureRectangle(glistp++, 
	x<<2, y<<2, 
	(x + 64)<<2, (y + 64)<<2,
	G_TX_RENDERTILE, 
	0 << 5, 0 << 5, 
	1 << 10, 1 << 10);
	gDPPipeSync(glistp++);
}

void Render16x16Tile_4b(char gfx[], short lut[], int x, int y)
{
	//load texture
	gDPSetTextureLUT(glistp++, G_TT_RGBA16);// We’re using a TLUT
	gDPLoadTLUT_pal16(glistp++, 0, lut);// Load the TLUT
	
	//prepare sprite
	gDPLoadTextureBlock_4b(glistp++, 
	gfx,
	G_IM_FMT_CI,                              // fmt
	16, 16,                                   // width, height
	0,                                        // pal
	G_TX_MIRROR, G_TX_MIRROR,                   // cms, cmt
	G_TX_NOMASK, G_TX_NOMASK,                 // masks, maskt
	G_TX_NOLOD, G_TX_NOLOD                    // shifts, shiftt
	);
	
	//render sprite
	gSPTextureRectangle(glistp++, 
	x<<2, y<<2, 
	(x + 16)<<2, (y + 16)<<2,
	G_TX_RENDERTILE, 
	0 << 5, 0 << 5, 
	1 << 10, 1 << 10);
	gDPPipeSync(glistp++);
}


int analogOffsetX = 0;
int analogOffsetY = 0;
Vector2 userInput_Player; 
int inputX;
int inputY;

#define MAGIC_STAFF 0
#define MAGIC_FIRE 1
#define MAGIC_LIGHT 2 
#define MAGIC_WIND 3
#define MAGIC_WATER 4 

void DrawUI(u8 uiElement)
{
	//prepare rendering genrally foor 2d sprite rendering

    
    if(uiElement != 0)
    {
        gDPSetCycleType(glistp++, G_CYC_1CYCLE);
        gDPSetCombineMode(glistp++, G_CC_DECALRGBA, G_CC_DECALRGBA);
        //gDPSetRenderMode(glistp++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE);
        gDPSetRenderMode(glistp++, G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF);
       // gDPSetTextureFilter(  glistp++,  G_TF_ );
        gDPSetDepthSource(glistp++, G_ZS_PRIM);
        gDPSetPrimDepth(glistp++, 0, 0);
        gDPSetTexturePersp(glistp++, G_TP_NONE);
    }
    
    if(uiElement == 1)
    {

        if(ContTriger[0].button & Z_TRIG)
        {
            // analogOffsetX = (int)userInput_Player.x;
            
            // if(analogOffsetX >= 24)
                // analogOffsetX = 24;
                
            // else if(analogOffsetX <= -24)
                // analogOffsetX = -24;

           // //if((int)userInput_Player.y <= 24 && (int)userInput_Player.y >= -24)    
            // analogOffsetY = (int)userInput_Player.y;
            
            // if(analogOffsetY >= 24)
                // analogOffsetY = 24;
                
            // else if(analogOffsetY <= -24)
                // analogOffsetY = -24;
        
            // //Note while player is holding down the Z button, allow them to move the analog stick to choose an attack                 
                  
            Render16x16Tile_4b(analog_stick, analog_stick_tlut, 248 + analogOffsetX, 160 - analogOffsetY);//lower left corner   
            Render16x16Tile_4b(spell_icons_z_pressed, spell_icons_z_pressed_tlut, 248, 160);//lower left corner  
            
            RenderCustomTile_4b(Prompt_Summon, Prompt_Summon_tlut, 64, 16, 240, 208);//lower left corner
            
        }
        
        else
        {   
            Render16x16Tile_4b(analog_stick, analog_stick_tlut, 248, 160);//lower left corner     
            Render16x16Tile_4b(spell_icons_z, spell_icons_z_tlut, 248, 160);//lower left corner
            
            RenderCustomTile_4b(Prompt_Attack, Prompt_Attack_tlut, 64, 16, 240, 208);//lower left corner
             
        }
        
        Render16x16Tile_4b(spell_icons_fire, spell_icons_fire_tlut, 248, 136);//lower left corner
        Render16x16Tile_4b(spell_icons_water, spell_icons_water_tlut, 224, 160);//lower left corner       
        Render16x16Tile_4b(spell_icons_light, spell_icons_light_tlut, 272, 160);//lower left corner
        Render16x16Tile_4b(spell_icons_wind, spell_icons_wind_tlut, 248, 184);//lower left corner
        
        Render16x16Tile_4b(b_button, b_button_tlut, 220, 208);//lower left corner

    }
    
    
    if(uiElement == 2)
	{       
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32, 24+128);//lower left corner
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+64, 24+128);//lower border
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+128, 24+128);//lower boarder
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+192, 24+128);//lower right corner
	}	
    
    
    if(uiElement == 3) //TITLE SCREEN
	{       
        
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32, 24);
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+64, 24);
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+128, 24);
		Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 32+192, 24);
        
        RenderCustomTile_4b(Title_Spirit, Title_Spirit_tlut, 64, 32, 74, 42);//lower left corner
        RenderCustomTile_4b(Title_Harvest, Title_Harvest_tlut, 128, 32, 140, 42);//lower left corner
        
        
        RenderCustomTile_4b(Wade, Wade_tlut, 128, 16, 32, 160);//lower left corner
         RenderCustomTile_4b(zxbryc, zxbryc_tlut, 128, 16, 32, 178);//lower left corner
          RenderCustomTile_4b(Cobra, Cobra_tlut, 128, 16, 32, 196);//lower left corner
        
   //     Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 224, 24);//lower left corner
    //    Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 224, 24);//lower left corner
    //   Render64x64Tile_4b(Menu_BG_Parchment, Menu_BG_Parchment_tlut, 224, 24);//lower left corner
	}	

}
  
void UpdateUI(u8 uiElement){

    userInput_Player = Player_Input();
    
    if(ContTriger[0].button & Z_TRIG)
    {
        analogOffsetX = (int)userInput_Player.x;
        
        if(analogOffsetX >= 24)
            analogOffsetX = 24;
            
        else if(analogOffsetX <= -24)
            analogOffsetX = -24;

       //if((int)userInput_Player.y <= 24 && (int)userInput_Player.y >= -24)    
        analogOffsetY = (int)userInput_Player.y;
        
        if(analogOffsetY >= 24)
            analogOffsetY = 24;
            
        else if(analogOffsetY <= -24)
            analogOffsetY = -24;
    
        //Note while player is holding down the Z button, allow them to move the analog stick to choose an attack                 
        
        if(ContTriger[0].button & B_BUTTON){
            effectSpawn = 1;
        }
    }
    
    
    
    

}

float effectStartTime = 0.01f;
float effectLength = 0.01f;
float effectTimeElapsed = 0.01f;
float effectScale = 0.01f;



void SpawnSummonEffect(){

  //  if(ContTriger[0].button & Z_TRIG && ContTriger[0].button & B_BUTTON){
        
    // if(effectSpawn == 0){
    
       // SetVector3(&SummonEffect.obj.pos, -14384, 7155, 780);
       // SetVector3(&SummonEffect.obj.rot, 0, 0,0);
       // SetVector3(&SummonEffect.obj.scl, 1, 1,1);
       // SetAnimator(&SummonEffect.animator, &spell_fire_PolyList, 0, 0);
       
       // RenderEnvObj(&SummonEffect);
       
       // effectSpawn = 1;
    // }

  //  }
  
   // effectTimer = GetSecondsF();
    

               
    if(effectSpawn == 0)
    {
        effectStartTime = 0;
        effectTimeElapsed = 0;
        effectLength = 0;
        effectScale = 0;
        // currentTime = 0;
        // townAABBL = 0;
        // sndBgHandle[0] = 0;
        // introPlayed = 0;
        
    }    
    
    if(effectSpawn == 1){
           
           // effectScale = lerp(effectScale, 4.0f, GetDeltaTime() * 1  ); //increase speed from current speed to max speed if x+y inputs pass a threshold 

           
           // TEXTURE_FOG_VTXCOL(glistp,250,150,15,75,950, 850);

           // SetVector3(&SummonEffect.obj.pos, -14384, 7155, 740);
           // SetVector3(&SummonEffect.obj.rot, 0, 0,0);
           // SetVector3(&SummonEffect.obj.scl, 1.5, 1.5,1+effectScale);
           // SetAnimator(&SummonEffect.animator, &spell_fire_PolyList, 0, 0);
           
           // RenderEnvObj(&SummonEffect);

        // effectStartTime = GetSecondsF();        

        // if(effectTimeElapsed == 0){
        
            // effectLength = effectStartTime + 2.0f;
        // }

        // if (effectTimeElapsed >= effectLength){
            // effectSpawn = 0;
        // }
 
        // effectTimeElapsed = GetSecondsF();   
           
           
           
           
    }
    



   
    //spell_fire_PolyList(0);

}
