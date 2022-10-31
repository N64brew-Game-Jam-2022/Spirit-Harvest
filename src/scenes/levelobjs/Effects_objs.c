#include "common.h"
#include "playerDefs.h"
#include "Scn01_Instanced_defs.h"
#include "harvesterBeach.h"


//>-- Obj00: START ------------------------------------------ spell_fire -------------------------------------------------

Vtx spell_fire_VertList_0 [] = {
   { 0.00, 37.85, 37.79, 1, 0x00d7, 0x001d, 255, 255, 255, 255}, 
   { 26.95, 26.68, 37.79, 1, 0xfed7, 0x001d, 255, 255, 255, 255}, 
   { 20.69, 20.43, -0.13, 1, 0xfec7, 0x035d, 255, 255, 255, 255}, 
   { 38.11, -0.26, 37.79, 1, 0xfcd7, 0x001d, 255, 255, 255, 255}, 
   { 29.26, -0.26, -0.13, 1, 0xfcc7, 0x035d, 255, 255, 255, 255}, 
   { 26.95, -27.21, 37.79, 1, 0xfad8, 0x001d, 255, 255, 255, 255}, 
   { 20.69, -20.95, -0.13, 1, 0xfac8, 0x035d, 255, 255, 255, 255}, 
   { -0.00, -38.37, 37.79, 1, 0x08d6, 0x001d, 255, 255, 255, 255}, 
   { -0.00, -29.53, -0.13, 1, 0x08c6, 0x035d, 255, 255, 255, 255}, 
   { -26.95, -27.21, 37.79, 1, 0x06d6, 0x001d, 255, 255, 255, 255}, 
   { -20.69, -20.95, -0.13, 1, 0x06c6, 0x035d, 255, 255, 255, 255}, 
   { -38.11, -0.26, 37.79, 1, 0x04d6, 0x001d, 255, 255, 255, 255}, 
   { -26.95, 26.68, 37.79, 1, 0x02d7, 0x001d, 255, 255, 255, 255}, 
   { 0.00, 29.00, -0.13, 1, 0x00c7, 0x035d, 255, 255, 255, 255}, 
   { -20.69, 20.43, -0.13, 1, 0x02c7, 0x035d, 255, 255, 255, 255}, 
   { 27.40, 26.37, 57.66, 1, 0x00d7, 0x001d, 255, 255, 255, 255}, 
   { 38.20, -0.80, 57.66, 1, 0xfed7, 0x001d, 255, 255, 255, 255}, 
   { 21.80, -0.57, 1.89, 1, 0xfec7, 0x035d, 255, 255, 255, 255}, 
   { 26.63, -27.66, 57.66, 1, 0xfcd7, 0x001d, 255, 255, 255, 255}, 
   { 15.20, -15.90, 1.89, 1, 0xfcc7, 0x035d, 255, 255, 255, 255}, 
   { -0.54, -38.46, 57.66, 1, 0xfad8, 0x001d, 255, 255, 255, 255}, 
   { -0.31, -22.07, 1.89, 1, 0xfac8, 0x035d, 255, 255, 255, 255}, 
   { -27.40, -26.89, 57.66, 1, 0x08d6, 0x001d, 255, 255, 255, 255}, 
   { -15.64, -15.46, 1.89, 1, 0x08c6, 0x035d, 255, 255, 255, 255}, 
   { -38.20, 0.28, 57.66, 1, 0x06d6, 0x001d, 255, 255, 255, 255}, 
   { -21.80, 0.05, 1.89, 1, 0x06c6, 0x035d, 255, 255, 255, 255}, 
   { -26.63, 27.13, 57.66, 1, 0x04d6, 0x001d, 255, 255, 255, 255}, 
   { -15.20, 15.38, 1.89, 1, 0x04c6, 0x035d, 255, 255, 255, 255}, 
   { 0.54, 37.94, 57.66, 1, 0x02d7, 0x001d, 255, 255, 255, 255}, 
   { 15.64, 14.94, 1.89, 1, 0x00c7, 0x035d, 255, 255, 255, 255}, 
   { 0.31, 21.54, 1.89, 1, 0x02c7, 0x035d, 255, 255, 255, 255}, 
   { -29.26, -0.26, -0.13, 1, 0x04c6, 0x035d, 255, 255, 255, 255}, 
};


u8 spellAnimCounter = 0;

void spell_fire_PolyList( u8 animFrame ){ 

   Vtx *spell_fire_VTXPointer = &spell_fire_VertList_0[0]; 
   u8 *textureFrame = &Flame_Effects_2[0];
   
   
   if(spellAnimCounter < 2)
        textureFrame = &Flame_Effects_1[0];
   else if(spellAnimCounter < 4)
        textureFrame = &Flame_Effects_2[0];        
   else if(spellAnimCounter < 6)
        textureFrame = &Flame_Effects_3[0];
   else if(spellAnimCounter < 8)
        textureFrame = &Flame_Effects_4[0];        
   else if(spellAnimCounter < 10)
        textureFrame = &Flame_Effects_5[0];        
   else if(spellAnimCounter < 12)
        textureFrame = &Flame_Effects_6[0];
   else if(spellAnimCounter < 14)
        textureFrame = &Flame_Effects_7[0];        
   else if(spellAnimCounter < 16)
        textureFrame = &Flame_Effects_8[0];        
   else{   
        textureFrame = &Flame_Effects_1[0];
        spellAnimCounter = 0;
    }
   
    spellAnimCounter ++;

//>-- MATERIAL 0: START ------------------------------------ 'Effects-Fire-1'-------------------------------------------------

//Last:    Current: Flame_Effects_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gSPClearGeometryMode(glistp++,   0xFFFFFFFF );
   gSPSetGeometryMode(glistp++,    G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  );
   gDPSetTextureLUT(  glistp++,  G_TT_IA16 );
   gDPSetCombineLERP(  glistp++, 	TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0, 1, 0, 0, COMBINED, TEXEL0, 0, 0, COMBINED );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A,G_RM_AA_ZB_XLU_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  textureFrame,	G_IM_FMT_I,	64, 64,	0, G_TX_WRAP,G_TX_CLAMP, 6,6, 15,15 );
   gDPLoadTLUT_pal16(  glistp++,  0, Flame_Effects_1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
    gDPSetPrimColor(glistp++,  1,255,255,145,7,0  );
   
   
   
      // gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   // gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   // gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   // gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   // gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   // gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   // gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   // gDPLoadTextureBlock_4b(  glistp++,  Flame_Fire_Pit,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   // gDPLoadTLUT_pal16(  glistp++,  0, Flame_Fire_Pit_tlut );
   // gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   // gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );
   

   gSPVertex(glistp++,  spell_fire_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 1, 3, 4, 1  );
     gSP1Triangle(glistp++,   3, 5, 6, 3  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x0ad6001d);  /*New Coords: 86.69, 0.91*/
     gSP1Triangle(glistp++,   5, 7, 8, 5  );
     gSP2Triangles(glistp++,   7, 9, 10, 7, 10, 9, 11, 10  );
     gSP2Triangles(glistp++,   12, 0, 13, 12, 11, 12, 14, 11  );
     gSP2Triangles(glistp++,   15, 16, 17, 15, 16, 18, 19, 16  );
     gSP1Triangle(glistp++,   18, 20, 21, 18  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x0ad6001d);  /*New Coords: 86.69, 0.91*/
     gSP1Triangle(glistp++,   20, 22, 23, 20  );
     gSP2Triangles(glistp++,   22, 24, 25, 22, 24, 26, 27, 24  );
     gSP1Triangle(glistp++,   28, 15, 29, 28  );
   gSPVertex(glistp++,  spell_fire_VTXPointer+26,30,0  );
     gSP1Triangle(glistp++,   0, 2, 4, 0  );
   gSPVertex(glistp++,  spell_fire_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   13, 0, 2, 13, 2, 1, 4, 2  );
     gSP1Triangle(glistp++,   4, 3, 6, 4  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x0ac6035d);  /*New Coords: 86.19, 26.91*/   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x0ad6001d);  /*New Coords: 86.69, 0.91*/
     gSP1Triangle(glistp++,   6, 5, 8, 6  );
     gSP1Triangle(glistp++,   8, 7, 10, 8  );
   gSPVertex(glistp++,  spell_fire_VTXPointer+10,30,0  );
     gSP1Triangle(glistp++,   21, 0, 1, 21  );
     gSP2Triangles(glistp++,   4, 2, 3, 4, 21, 1, 4, 21  );
     gSP2Triangles(glistp++,   19, 5, 7, 19, 7, 6, 9, 7  );
     gSP1Triangle(glistp++,   9, 8, 11, 9  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x0ac6035d);  /*New Coords: 86.19, 26.91*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x0ad6001d);  /*New Coords: 86.69, 0.91*/
     gSP1Triangle(glistp++,   11, 10, 13, 11  );
     gSP2Triangles(glistp++,   13, 12, 15, 13, 15, 14, 17, 15  );
     gSP2Triangles(glistp++,   20, 18, 19, 20, 17, 16, 20, 17  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- spell_fire -------------------------------------------------

 