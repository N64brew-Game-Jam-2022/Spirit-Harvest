#include "common.h"

//>-- Obj00: START ------------------------------------------ rock_small -------------------------------------------------

Vtx rock_small_VertList_0 [] = {
   { 2.37, 15.69, 66.01, 1, 0x08cd, 0x0169, 147, 178, 173, 255}, 
   { 1.72, -0.69, 63.68, 1, 0x07e3, 0x0085, 147, 178, 173, 255}, 
   { 16.02, -5.21, 65.22, 1, 0x064f, 0x00d2, 147, 178, 173, 255}, 
   { 17.36, 31.83, 67.05, 1, 0x07f0, 0x02a2, 88, 107, 104, 255}, 
   { -3.15, 47.50, 63.79, 1, 0x0b08, 0x030b, 147, 178, 173, 255}, 
   { -20.46, 21.12, 59.62, 1, 0x0bc7, 0x00f7, 88, 107, 104, 255}, 
   { -21.88, 47.87, 62.87, 1, 0x0d56, 0x0293, 147, 178, 173, 255}, 
   { -37.95, 44.27, -7.47, 1, 0x14e2, 0x0436, 31, 38, 37, 255}, 
   { -1.10, 44.56, -11.53, 1, 0x0e27, 0x0724, 31, 38, 37, 255}, 
   { -37.83, -2.14, -2.90, 1, 0x1193, 0xfee3, 31, 38, 37, 255}, 
   { 36.54, 34.87, -6.17, 1, 0x04bc, 0x0724, 31, 38, 37, 255}, 
   { 41.88, 2.67, -9.60, 1, 0xfec6, 0x043b, 31, 38, 37, 255}, 
   { 2.96, -40.71, -6.76, 1, 0x0458, 0xfd08, 31, 38, 37, 255}, 
   { -20.83, -39.41, -8.27, 1, 0x097d, 0xfbf6, 31, 38, 37, 255}, 
   { 19.06, -42.11, -5.52, 1, 0x013b, 0xfe2a, 31, 38, 37, 255}, 
};

Gfx rock_small_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'small_rock'-------------------------------------------------

//Last:    Current: rocktext
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   rocktext,	G_IM_FMT_CI,	64, 32,	0, G_TX_WRAP,G_TX_WRAP, G_TX_NOMASK,G_TX_NOMASK, 1,1 ),
   gsDPLoadTLUT_pal16(   0, rocktext_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( rock_small_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 0, 3  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 7, 6, 8  ),
     gsSP2Triangles(  1, 5, 9, 1, 4, 6, 5, 4  ),
     gsSP2Triangles(  10, 8, 4, 10, 10, 3, 11, 10  ),
     gsSP2Triangles(  11, 3, 2, 11, 0, 5, 1, 0  ),
     gsSP2Triangles(  12, 1, 13, 12, 2, 1, 12, 2  ),
     gsSP2Triangles(  3, 0, 2, 3, 9, 5, 7, 9  ),
     gsSP2Triangles(  4, 8, 6, 4, 13, 1, 9, 13  ),
     gsSP2Triangles(  0, 4, 5, 0, 3, 10, 4, 3  ),
     gsSP2Triangles(  14, 11, 2, 14, 14, 2, 12, 14  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rock_small -------------------------------------------------

 
 
//>-- Obj01: START ------------------------------------------ rock_large -------------------------------------------------

Vtx rock_large_VertList_0 [] = {
   { 60.63, -16.53, -2.16, 1, 0xffbb, 0x01b6, 31, 38, 37, 255}, 
   { 37.15, -12.22, 41.26, 1, 0x0560, 0x01b3, 88, 107, 104, 255}, 
   { 30.78, -55.59, 37.98, 1, 0x0564, 0xfff0, 88, 107, 104, 255}, 
   { 5.99, 83.83, -2.16, 1, 0x0a5c, 0x070b, 31, 38, 37, 255}, 
   { -56.38, 90.36, -2.16, 1, 0x11e9, 0x05f7, 31, 38, 37, 255}, 
   { -44.24, 49.16, 37.98, 1, 0x0de3, 0x03a4, 88, 107, 104, 255}, 
   { 27.66, 49.23, 42.73, 1, 0x0740, 0x0435, 88, 107, 104, 255}, 
   { -6.38, 45.41, 38.65, 1, 0x0a68, 0x03dc, 132, 161, 156, 255}, 
   { 3.78, -13.67, 49.12, 1, 0x0842, 0x015d, 147, 178, 173, 255}, 
   { 63.98, 59.84, -2.16, 1, 0x0295, 0x063c, 31, 38, 37, 255}, 
   { -60.78, 20.23, -2.16, 1, 0x11e9, 0x01c1, 31, 38, 37, 255}, 
   { -21.38, -29.21, 32.16, 1, 0x0a91, 0x002e, 147, 178, 173, 255}, 
   { 4.40, -74.35, -2.16, 1, 0x0673, 0xfd37, 31, 38, 37, 255}, 
   { -36.57, -66.56, -2.16, 1, 0x0bd5, 0xfd37, 31, 38, 37, 255}, 
   { 32.98, -72.18, -2.16, 1, 0x02d9, 0xfe07, 31, 38, 37, 255}, 
};

Gfx rock_large_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'small_rock'-------------------------------------------------

//Last:    Current: rocktext
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   rocktext,	G_IM_FMT_CI,	64, 32,	0, G_TX_WRAP,G_TX_WRAP, G_TX_NOMASK,G_TX_NOMASK, 1,1 ),
   gsDPLoadTLUT_pal16(   0, rocktext_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( rock_large_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 1, 0, 6, 6, 7, 8, 6  ),
     gsSP2Triangles(  6, 9, 3, 6, 10, 11, 5, 10  ),
     gsSP2Triangles(  1, 8, 2, 1, 12, 11, 13, 12  ),
     gsSP2Triangles(  4, 10, 5, 4, 13, 11, 10, 13  ),
     gsSP2Triangles(  7, 5, 11, 7, 2, 11, 12, 2  ),
     gsSP2Triangles(  8, 11, 2, 8, 14, 0, 2, 14  ),
     gsSP2Triangles(  7, 3, 5, 7, 9, 6, 0, 9  ),
     gsSP2Triangles(  1, 6, 8, 1, 7, 6, 3, 7  ),
     gsSP2Triangles(  8, 7, 11, 8, 14, 2, 12, 14  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- rock_large -------------------------------------------------

 
 
//>-- Obj02: START ------------------------------------------ rock_split -------------------------------------------------

Vtx rock_split_VertList_0 [] = {
   { 13.30, -7.30, 22.12, 1, 0x0454, 0x02d5, 29, 36, 35, 255}, 
   { -31.45, -8.78, -1.49, 1, 0xfc40, 0x063c, 29, 36, 35, 255}, 
   { -38.93, -38.00, 46.99, 1, 0x044e, 0x0748, 163, 199, 194, 255}, 
   { 96.61, -15.51, -1.73, 1, 0x129d, 0xfe53, 29, 36, 35, 255}, 
   { 41.69, -13.30, 9.11, 1, 0x09f5, 0x018e, 29, 36, 35, 255}, 
   { 42.60, -46.92, 27.04, 1, 0x0d59, 0x0474, 92, 112, 109, 255}, 
   { 56.64, 2.38, 42.88, 1, 0x071d, 0xfea9, 163, 199, 194, 255}, 
   { 76.12, 68.41, -1.73, 1, 0x0727, 0xf70b, 29, 36, 35, 255}, 
   { 46.49, -91.13, -2.17, 1, 0x1574, 0x076a, 29, 36, 35, 255}, 
   { -12.33, 45.29, 36.12, 1, 0xfa99, 0xfdd2, 163, 199, 194, 255}, 
   { -36.46, 90.63, -1.73, 1, 0xf03c, 0xfa68, 29, 36, 35, 255}, 
   { 10.68, -44.52, 51.33, 1, 0x08a4, 0x0628, 163, 199, 194, 255}, 
   { 6.33, 2.16, 53.41, 1, 0x005c, 0x007e, 163, 199, 194, 255}, 
   { -51.47, -2.15, 37.09, 1, 0xf85a, 0x02d1, 163, 199, 194, 255}, 
   { -89.58, -11.89, -1.73, 1, 0xf03c, 0x05df, 92, 112, 109, 255}, 
   { -51.99, -73.32, -1.73, 1, 0x048c, 0x0c02, 29, 36, 35, 255}, 
};

Gfx rock_split_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'small_rock'-------------------------------------------------

//Last:    Current: rocktext
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   rocktext,	G_IM_FMT_CI,	64, 32,	0, G_TX_WRAP,G_TX_WRAP, G_TX_NOMASK,G_TX_NOMASK, 1,1 ),
   gsDPLoadTLUT_pal16(   0, rocktext_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( rock_split_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  3, 6, 4, 3, 3, 7, 6, 3  ),
     gsSP2Triangles(  3, 5, 8, 3, 9, 7, 10, 9  ),
     gsSP2Triangles(  0, 11, 5, 0, 6, 12, 0, 6  ),
     gsSP2Triangles(  13, 1, 0, 13, 14, 1, 13, 14  ),
     gsSP2Triangles(  7, 9, 6, 7, 13, 9, 10, 13  ),
     gsSP2Triangles(  8, 5, 11, 8, 9, 13, 12, 9  ),
     gsSP2Triangles(  9, 12, 6, 9, 15, 11, 2, 15  ),
     gsSP2Triangles(  15, 2, 1, 15, 11, 0, 2, 11  ),
     gsSP2Triangles(  4, 0, 5, 4, 4, 6, 0, 4  ),
     gsSP2Triangles(  12, 13, 0, 12, 14, 13, 10, 14  ),
     gsSP1Triangle(  15, 8, 11, 15  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj02: END ------------------------------------------- rock_split -------------------------------------------------

 
 