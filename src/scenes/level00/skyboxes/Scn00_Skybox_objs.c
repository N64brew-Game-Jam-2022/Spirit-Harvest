#include "common.h"
#include "harvesterBeach.h"
#include "Scn00_Skybox_defs.h"

//>-- Obj00: START ------------------------------------------ Sky_Moon -------------------------------------------------

Vtx Sky_Moon_VertList_0 [] = {
   { 139.13, 125.11, 46.42, 1, 0x0020, 0x0010, 255, 255, 255, 255}, 
   { 169.35, 121.40, -347.85, 1, 0x0020, 0x100f, 255, 255, 255, 255}, 
   { -139.13, -125.11, -369.18, 1, 0x101f, 0x100f, 255, 255, 255, 255}, 
   { -169.35, -121.40, 25.09, 1, 0x101f, 0x0010, 255, 255, 255, 255}, 
};


void Sky_Moon_PolyList( u8 animFrame ){ 

   Vtx *Sky_Moon_VTXPointer = &Sky_Moon_VertList_0[0]; 

//>-- MATERIAL 0: START ------------------------------------ 'Moon'-------------------------------------------------

//Last:    Current: Sky_Moon_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_1CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG   );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA );
   gDPSetRenderMode(  glistp++,  G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2  );
   gDPLoadTextureBlock_4b(  glistp++,  Sky_Moon_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, Sky_Moon_1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  Sky_Moon_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 0, 2, 3  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- Sky_Moon -------------------------------------------------

 
 