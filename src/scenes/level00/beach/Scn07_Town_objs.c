#include "common.h"
#include "harvesterBeach.h"
#include "Scn07_Town_defs.h"



//>-- Obj02: START ------------------------------------------ town_ground -------------------------------------------------

Vtx town_ground_VertList_0 [] = {
   { 835.95, 129.61, 711.64, 1, 0x4a32, 0x041d, 54, 73, 57, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x738b, 0x0648, 53, 72, 57, 255}, 
   { 888.18, 826.74, 711.64, 1, 0x5660, 0xfefd, 55, 74, 57, 255}, 
   { -31.06, 30.46, 772.79, 1, 0x1e40, 0x0349, 90, 110, 76, 255}, 
   { -898.07, 191.14, 798.48, 1, 0xf5e4, 0x0083, 90, 110, 76, 255}, 
   { -509.11, 2163.78, 786.95, 1, 0x2434, 0xf271, 53, 72, 57, 255}, 
   { -1467.95, 991.65, 732.56, 1, 0xe4f3, 0xf97b, 65, 85, 64, 255}, 
   { -31.06, 1706.34, 772.79, 1, 0x355e, 0xf6bc, 77, 94, 65, 255}, 
   { 1027.49, 2686.31, 711.64, 1, 0x76de, 0xf150, 61, 77, 58, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x782d, 0xe858, 46, 66, 56, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x6a4b, 0xe902, 49, 69, 57, 255}, 
   { -31.06, 2237.78, 772.79, 1, 0x3cb3, 0xf2c1, 74, 90, 62, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x4f9e, 0xea4a, 55, 72, 57, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x39bd, 0xeb9f, 46, 66, 56, 255}, 
   { 1441.86, 2552.43, 657.42, 1, 0x895e, 0xf311, 46, 66, 56, 255}, 
   { -1922.34, 1629.95, 680.01, 1, 0xd771, 0xf3e1, 46, 66, 56, 255}, 
   { 536.80, 2478.39, 739.99, 1, 0x5be7, 0xf1fb, 74, 90, 62, 255}, 
   { 287.08, 1401.92, 754.42, 1, 0x40cb, 0xf997, 81, 98, 68, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0xa431, 0x00b1, 53, 72, 57, 255}, 
   { 983.23, 2095.49, 711.64, 1, 0x6c8b, 0xf5a9, 59, 76, 57, 255}, 
};

Gfx town_ground_Static_PolyList_0[] = { 



//>-- MATERIAL 7: START ------------------------------------ 'Grass-Village'-------------------------------------------------

//Last:    Current: Grass_Texture_2
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_2,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_2_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_ground_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 0, 2, 3  ),
     gsSP2Triangles(  4, 5, 6, 4, 4, 3, 7, 4  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
     gsSP2Triangles(  8, 14, 9, 8, 5, 13, 15, 5  ),
     gsSP2Triangles(  16, 10, 12, 16, 7, 3, 17, 7  ),
     gsSP2Triangles(  18, 4, 6, 18, 5, 7, 11, 5  ),
     gsSP2Triangles(  7, 17, 16, 7, 17, 2, 19, 17  ),
     gsSP2Triangles(  15, 18, 6, 15, 5, 15, 6, 5  ),
     gsSP2Triangles(  14, 19, 2, 14, 16, 17, 19, 16  ),
     gsSP2Triangles(  14, 8, 19, 14, 17, 3, 2, 17  ),
     gsSP2Triangles(  5, 4, 7, 5, 16, 8, 10, 16  ),
     gsSP2Triangles(  5, 11, 13, 5, 11, 16, 12, 11  ),
     gsSP2Triangles(  11, 7, 16, 11, 1, 14, 2, 1  ),
     gsSP1Triangle(  8, 16, 19, 8  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj02: END ------------------------------------------- town_ground -------------------------------------------------




//>-- Obj00: START ------------------------------------------ town_large_home_platform -------------------------------------------------

Vtx town_large_home_platform_VertList_0 [] = {
   { -496.75, 239.80, -117.46, 1, 0xe3f5, 0xfd0d, 85, 87, 74, 255}, 
   { -378.64, 398.41, -116.47, 1, 0xe7f5, 0xfd0d, 85, 87, 74, 255}, 
   { -732.49, 661.76, -207.68, 1, 0xe7f5, 0x732d, 43, 51, 46, 255}, 
   { -852.70, 502.63, -210.52, 1, 0xe3f5, 0x732d, 71, 93, 77, 255}, 
   { 401.21, -28.65, -108.11, 1, 0x0818, 0x7329, 138, 193, 151, 255}, 
   { 520.40, 163.73, -108.11, 1, 0x0e5c, 0x6d13, 138, 193, 151, 255}, 
   { 488.25, 315.86, -108.11, 1, 0x1107, 0x56a0, 71, 93, 77, 255}, 
   { 520.40, 163.73, -132.64, 1, 0x024e, 0x0193, 51, 63, 55, 255}, 
   { -482.72, -173.40, -132.64, 1, 0x024e, 0x0ed9, 43, 51, 46, 255}, 
   { -482.72, -173.40, -108.11, 1, 0x020a, 0x0ed9, 71, 93, 77, 255}, 
   { -595.78, 119.52, -108.11, 1, 0x020a, 0x1227, 85, 87, 74, 255}, 
   { 94.86, 567.58, -132.64, 1, 0x024e, 0xfb06, 43, 51, 46, 255}, 
   { 94.86, 567.58, -108.11, 1, 0x020a, 0xfb06, 43, 51, 46, 255}, 
   { -278.90, 145.78, -108.11, 1, 0xff86, 0xffa8, 178, 168, 138, 255}, 
   { -106.45, 467.30, -108.11, 1, 0x0983, 0xf1c0, 43, 51, 46, 255}, 
   { 249.98, -102.30, -108.11, 1, 0x03c9, 0x66c1, 138, 193, 151, 255}, 
   { -159.34, -329.08, -132.64, 1, 0x024e, 0x0b12, 48, 58, 51, 255}, 
   { -159.34, -329.08, -108.11, 1, 0x020a, 0x0b12, 138, 193, 151, 255}, 
   { 488.25, 315.86, -132.64, 1, 0x024e, 0xfff0, 71, 93, 77, 255}, 
   { 98.20, -298.82, -108.11, 1, 0xfcd8, 0x68c8, 138, 193, 151, 255}, 
   { 98.20, -298.82, -132.64, 1, 0x024e, 0x0857, 64, 82, 69, 255}, 
   { 249.98, -102.30, -132.64, 1, 0x024e, 0x05ba, 138, 193, 151, 255}, 
   { -106.45, 467.30, -132.64, 1, 0x024e, 0xf8a8, 43, 51, 46, 255}, 
   { -294.54, 492.57, -132.64, 1, 0x024e, 0xf6a8, 54, 59, 53, 255}, 
   { -294.54, 492.57, -108.11, 1, 0x020a, 0x1733, 85, 87, 74, 255}, 
   { -595.78, 119.52, -132.64, 1, 0x024e, 0x1227, 60, 66, 58, 255}, 
   { 401.21, -28.65, -132.64, 1, 0x024e, 0x03f5, 43, 51, 46, 255}, 
};

Gfx town_large_home_platform_Static_PolyList_0[] = { 



//>-- MATERIAL 2: START ------------------------------------ 'Wood-Dock-Planks'-------------------------------------------------

//Last:    Current: wood_dock_planks
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_FOG   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineLERP(   TEXEL0, 0, SHADE, 0,    TEXEL0, 0, TEXEL0, 0,    1, 0, 0, COMBINED,    TEXEL0, 0, 0, COMBINED ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_planks,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_planks_tlut ),
   gsDPSetTextureFilter(   G_TF_BILERP ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_large_home_platform_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 0, 2, 3  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xf50508e8),  /*New Coords: -87.83, 17.82*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xf93cd68a),  /*New Coords: -54.12, -82.92*/
     gsSP2Triangles(  4, 5, 6, 4, 9, 13, 10, 9  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x0f4b0200),  /*New Coords: 122.35, 4.01*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xf78a486b),  /*New Coords: -67.67, 144.84*/
     gsSP2Triangles(  14, 15, 12, 14, 17, 19, 13, 17  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x06a6d485),  /*New Coords: 53.21, -86.96*/
     gsSP2Triangles(  10, 13, 24, 10, 13, 19, 15, 13  ),
     gsSP2Triangles(  24, 13, 14, 24, 9, 17, 13, 9  ),
     gsSP2Triangles(  15, 6, 12, 15, 15, 4, 6, 15  ),
     gsSP1Triangle(  14, 13, 15, 14  ),


//>-- MATERIAL 3: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

//Last: wood_dock_pillars   Current: wood_dock_pillars
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,1 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_pillars_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_large_home_platform_VertList_0+0,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x020a0193),  /*New Coords: 32.64, 6.31*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x020a03f5),  /*New Coords: 32.64, 15.84*/
     gsSP2Triangles(  7, 5, 4, 7, 8, 9, 10, 8  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x020afff0),  /*New Coords: 32.64, -0.24*/
     gsSP2Triangles(  11, 12, 6, 11, 16, 17, 9, 16  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x020a05ba),  /*New Coords: 32.64, 22.92*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x020a0857),  /*New Coords: 32.64, 33.37*/
     gsSP2Triangles(  18, 6, 5, 18, 15, 19, 20, 15  ),
     gsSP2Triangles(  16, 20, 19, 16, 4, 15, 21, 4  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x020af8a8),  /*New Coords: 32.64, -29.37*/
     gsSP2Triangles(  22, 14, 12, 22, 14, 22, 23, 14  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x024e1733),  /*New Coords: 36.93, 92.81*/
     gsSP2Triangles(  24, 23, 25, 24, 26, 7, 4, 26  ),
     gsSP2Triangles(  25, 8, 10, 25, 18, 11, 6, 18  ),
     gsSP2Triangles(  8, 16, 9, 8, 7, 18, 5, 7  ),
     gsSP2Triangles(  21, 15, 20, 21, 17, 16, 19, 17  ),
     gsSP2Triangles(  26, 4, 21, 26, 11, 22, 12, 11  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x020af6a8),  /*New Coords: 32.64, -37.36*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x024ef6a8),  /*New Coords: 36.93, -37.36*/
     gsSP1Triangle(  24, 14, 23, 24  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x020a1733),  /*New Coords: 32.64, 92.81*/
     gsSP1Triangle(  10, 24, 25, 10  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- town_large_home_platform -------------------------------------------------

 
 
 
 
//>-- Obj01: START ------------------------------------------ town_home_posts -------------------------------------------------

Vtx town_home_posts_VertList_0 [] = {
   { 366.71, 214.77, 328.63, 1, 0xff03, 0x0025, 191, 180, 148, 255}, 
   { 334.12, 235.89, 327.57, 1, 0x006d, 0x0025, 85, 87, 74, 255}, 
   { 339.79, 209.18, 328.44, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 347.78, 195.88, -134.11, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 342.11, 222.59, -134.98, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 405.23, -165.55, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 390.34, -163.58, 316.66, 1, 0xff4d, 0x0025, 118, 115, 97, 255}, 
   { 413.41, -194.82, 317.43, 1, 0xfde3, 0x0025, 131, 182, 143, 255}, 
   { 401.15, -192.57, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 386.25, -190.59, 316.65, 1, 0x004b, 0x0025, 66, 85, 72, 255}, 
   { 443.05, 420.67, 334.04, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 460.03, 386.18, 339.65, 1, 0x006d, 0x0025, 191, 180, 148, 255}, 
   { 468.89, 411.95, 337.56, 1, 0xffb9, 0xffc0, 109, 108, 91, 255}, 
   { 500.62, 373.39, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 491.77, 347.63, -0.55, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 714.89, -319.64, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 705.65, -331.49, 316.66, 1, 0xff4d, 0x0025, 66, 86, 72, 255}, 
   { 744.28, -327.39, 317.43, 1, 0xfde3, 0x0025, 66, 86, 72, 255}, 
   { 736.13, -336.82, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 726.89, -348.67, 316.65, 1, 0x004b, 0x0025, 131, 182, 143, 255}, 
   { 1274.86, 36.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1276.25, 21.69, 316.66, 1, 0xff4d, 0x0025, 66, 85, 72, 255}, 
   { 1301.57, 51.15, 317.43, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 1302.10, 38.70, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 1303.50, 23.73, 316.65, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { 1122.03, 386.45, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1136.09, 391.73, 316.66, 1, 0xff4d, 0x0025, 77, 100, 83, 255}, 
   { 1101.01, 408.40, 317.43, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 1112.88, 412.19, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 1126.95, 417.48, 316.65, 1, 0x004b, 0x0025, 56, 41, 34, 255}, 
   { 773.75, 405.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 782.50, 417.86, 316.66, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 744.07, 412.20, 317.43, 1, 0xfde3, 0x0025, 118, 115, 97, 255}, 
   { 751.83, 421.96, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 760.58, 434.18, 316.65, 1, 0x004b, 0x0025, 56, 41, 34, 255}, 
   { 843.44, 180.42, 232.25, 1, 0xff1b, 0xfbeb, 56, 42, 35, 255}, 
   { 944.84, 106.75, 232.25, 1, 0xfbfc, 0xfbc4, 56, 42, 35, 255}, 
   { 944.84, 106.75, -10.27, 1, 0xfbe9, 0x13ee, 77, 100, 83, 255}, 
   { 906.11, -12.45, 232.25, 1, 0xf8dd, 0xfb9d, 56, 42, 35, 255}, 
   { 906.11, -12.45, -10.27, 1, 0xf8ca, 0x13c7, 77, 100, 83, 255}, 
   { 780.77, -12.45, 232.25, 1, 0x0559, 0xfc39, 56, 42, 35, 255}, 
   { 780.77, -12.45, -10.27, 1, 0x0546, 0x1463, 77, 100, 83, 255}, 
   { 742.04, 106.75, 232.25, 1, 0xfa7b, 0xe87a, 56, 42, 35, 255}, 
   { 843.44, 180.42, -10.27, 1, 0xff08, 0x1415, 56, 42, 35, 255}, 
   { 742.04, 106.75, -10.27, 1, 0x0227, 0x143c, 56, 42, 35, 255}, 
   { 374.70, 201.47, -133.92, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 366.71, 214.77, 328.63, 1, 0x024f, 0x0025, 191, 180, 148, 255}, 
   { 347.78, 195.88, -134.11, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 342.11, 222.59, -134.98, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 347.78, 195.88, -134.11, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 334.12, 235.89, 327.57, 1, 0x006d, 0x0025, 85, 87, 74, 255}, 
   { 428.31, -196.80, -145.14, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 405.23, -165.55, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 413.41, -194.82, 317.43, 1, 0xfde3, 0x0025, 131, 182, 143, 255}, 
   { 405.23, -165.55, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 401.15, -192.57, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 390.34, -163.58, 316.66, 1, 0xff4d, 0x0025, 118, 115, 97, 255}, 
   { 474.79, 382.12, -6.16, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 443.05, 420.67, 334.04, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 500.62, 373.39, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 491.77, 347.63, -0.55, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 500.62, 373.39, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 460.03, 386.18, 339.65, 1, 0x006d, 0x0025, 191, 180, 148, 255}, 
   { 753.52, -315.53, -145.14, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 714.89, -319.64, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 744.28, -327.39, 317.43, 1, 0xfde3, 0x0025, 66, 86, 72, 255}, 
   { 714.89, -319.64, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 736.13, -336.82, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 705.65, -331.49, 316.66, 1, 0xff4d, 0x0025, 66, 86, 72, 255}, 
   { 1300.17, 66.11, -145.14, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 1274.86, 36.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1301.57, 51.15, 317.43, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 1274.86, 36.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1302.10, 38.70, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 1276.25, 21.69, 316.66, 1, 0xff4d, 0x0025, 66, 85, 72, 255}, 
   { 1086.94, 403.11, -145.14, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 1122.03, 386.45, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1101.01, 408.40, 317.43, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 1122.03, 386.45, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 1112.88, 412.19, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 1136.09, 391.73, 316.66, 1, 0xff4d, 0x0025, 77, 100, 83, 255}, 
   { 735.32, 399.99, -145.14, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 773.75, 405.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 744.07, 412.20, 317.43, 1, 0xfde3, 0x0025, 118, 115, 97, 255}, 
   { 773.75, 405.65, -145.91, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 751.83, 421.96, -145.92, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 782.50, 417.86, 316.66, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
};

Gfx town_home_posts_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

//Last:    Current: wood_dock_pillars
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,1 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_pillars_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_home_posts_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP2Triangles(  0, 1, 2, 0, 0, 2, 3, 0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  3, 2, 1, 3, 4, 1, 0, 4  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 9, 6, 8  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  7, 9, 8, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  7, 6, 9, 7  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  10, 12, 13, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  13, 12, 11, 13, 14, 11, 10, 14  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 16, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  17, 19, 18, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  17, 16, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 21, 23  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  22, 24, 23, 22  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  22, 21, 24, 22  ),
     gsSP2Triangles(  25, 26, 27, 25, 28, 29, 26, 28  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  27, 29, 28, 27  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  27, 26, 29, 27  ),
   gsSPVertex( town_home_posts_VertList_0+29,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 2, 4  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  3, 5, 4, 3  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  3, 2, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 7, 9, 10, 7  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x0878fc60),  /*New Coords: 135.56, -14.49*/
     gsSP1Triangle(  9, 11, 12, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfcfceff0),  /*New Coords: -48.22, -64.24*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xf8ddfb9d),  /*New Coords: -114.18, -17.53*/
     gsSP1Triangle(  6, 13, 9, 6  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x023afc12),  /*New Coords: 35.66, -15.70*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xff1bfbeb),  /*New Coords: -14.29, -16.31*/
     gsSP2Triangles(  13, 6, 14, 13, 11, 13, 15, 11  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x04462037),  /*New Coords: 68.42, 128.87*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0866148a),  /*New Coords: 134.38, 82.16*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xfa7be87a),  /*New Coords: -88.27, -94.09*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xf7efefb1),  /*New Coords: -129.04, -65.22*/
     gsSP2Triangles(  15, 10, 12, 15, 9, 13, 11, 9  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x09532076),  /*New Coords: 149.23, 129.85*/
     gsSP2Triangles(  8, 10, 15, 8, 16, 17, 18, 16  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  19, 20, 21, 19, 16, 19, 17, 16  ),
     gsSP2Triangles(  22, 23, 24, 22, 25, 26, 27, 25  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  22, 24, 26, 22  ),
   gsSPVertex( town_home_posts_VertList_0+57,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  3, 4, 5, 3, 0, 3, 1, 0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  6, 8, 10, 6, 12, 13, 14, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  15, 16, 17, 15, 12, 14, 16, 12  ),
     gsSP2Triangles(  18, 19, 20, 18, 21, 22, 23, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  18, 20, 22, 18, 24, 25, 26, 24  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  27, 28, 29, 27, 24, 26, 28, 24  ),
   gsSPVertex( town_home_posts_VertList_0+35,30,0  ),
     gsSP2Triangles(  8, 0, 2, 8, 2, 1, 4, 2  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x0866148a),  /*New Coords: 134.38, 82.16*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x0878fc60),  /*New Coords: 135.56, -14.49*/
     gsSP1Triangle(  4, 3, 6, 4  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfcfceff0),  /*New Coords: -48.22, -64.24*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xf8ddfb9d),  /*New Coords: -114.18, -17.53*/
     gsSP1Triangle(  1, 0, 3, 1  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x023afc12),  /*New Coords: 35.66, -15.70*/
     gsSP2Triangles(  9, 7, 8, 9, 6, 5, 9, 6  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x06c727ad),  /*New Coords: 108.47, 158.72*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x09532076),  /*New Coords: 149.23, 129.85*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x04462037),  /*New Coords: 68.42, 128.87*/     gsSP1Triangle(  8, 2, 9, 8  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- town_home_posts -------------------------------------------------

 
 
 

//>-- Obj00: START ------------------------------------------ town_large_home -------------------------------------------------

Vtx town_large_home_VertList_0 [] = {
   { -454.17, 127.53, 224.64, 1, 0xfd29, 0x0b11, 43, 51, 46, 255}, 
   { -405.09, -145.81, 226.97, 1, 0xe66b, 0x0b49, 66, 86, 72, 255}, 
   { -145.64, 24.56, 439.72, 1, 0x0ec5, 0x00dd, 66, 86, 72, 255}, 
   { -108.92, 342.45, 207.47, 1, 0x31fe, 0x0a8d, 43, 51, 46, 255}, 
   { 142.22, 164.23, 382.69, 1, 0x3d52, 0x0103, 66, 86, 72, 255}, 
   { -309.29, 361.87, 219.67, 1, 0x18cd, 0x0b09, 43, 51, 46, 255}, 
   { 120.22, -273.00, 216.14, 1, 0x119b, 0x0b64, 146, 206, 161, 255}, 
   { 179.61, -104.87, 209.86, 1, 0x2223, 0x0b19, 43, 51, 46, 255}, 
   { 314.91, -51.76, 176.89, 1, 0x3476, 0x0b39, 136, 192, 150, 255}, 
   { -69.43, -328.89, 222.06, 1, 0x04d6, 0x0b3c, 146, 206, 161, 255}, 
   { 4.63, -73.06, 330.57, 1, 0x10a8, 0xfee6, 66, 86, 72, 255}, 
   { -45.88, -112.87, 330.57, 1, 0x0d3c, 0xfee6, 43, 51, 46, 255}, 
   { 63.78, -247.18, 64.48, 1, 0x0d3c, 0x24fa, 146, 206, 161, 255}, 
   { -129.75, -103.14, 340.17, 1, 0x0709, 0xfee6, 43, 51, 46, 255}, 
   { -171.53, -42.04, 352.51, 1, 0x02f9, 0xfee6, 43, 51, 46, 255}, 
   { -268.39, -114.60, 64.48, 1, 0x02f9, 0x24fa, 146, 206, 161, 255}, 
   { -183.98, 53.24, 354.89, 1, 0xfef2, 0xfee6, 43, 51, 46, 255}, 
   { -374.98, 14.13, 67.67, 1, 0xfef2, 0x24fa, 105, 144, 115, 255}, 
   { -285.23, 157.65, 277.06, 1, 0xfab6, 0xfee6, 43, 51, 46, 255}, 
   { 166.59, -166.14, 64.48, 1, 0x10a8, 0x24fa, 105, 144, 115, 255}, 
   { 59.85, -238.03, -113.44, 1, 0x0d3c, 0x40b4, 43, 51, 46, 255}, 
   { -181.40, -209.44, -113.44, 1, 0x0709, 0x40b4, 43, 51, 46, 255}, 
   { -187.36, -217.42, 64.48, 1, 0x0709, 0x24fa, 146, 206, 161, 255}, 
   { -299.90, -80.60, -110.26, 1, 0x02f9, 0x40b4, 43, 51, 46, 255}, 
   { -326.28, 135.00, 63.11, 1, 0x02f5, 0x0899, 245, 231, 189, 255}, 
   { -392.23, 183.78, 68.28, 1, 0x001f, 0x0067, 178, 168, 138, 255}, 
   { -331.56, 213.02, 168.54, 1, 0x03c5, 0x0093, 178, 168, 138, 255}, 
   { -161.43, 279.79, -110.26, 1, 0x23f3, 0x410b, 43, 51, 46, 255}, 
   { -165.36, 288.94, 67.67, 1, 0x23f3, 0x22ae, 43, 51, 46, 255}, 
   { -15.49, 280.28, 59.77, 1, 0x1cee, 0x22ae, 43, 51, 46, 255}, 
   { -70.80, 172.52, 252.01, 1, 0x1cee, 0xfca1, 43, 51, 46, 255}, 
   { 66.07, 247.60, 234.78, 1, 0x159a, 0xfca1, 43, 51, 46, 255}, 
   { 231.83, -30.06, 42.54, 1, 0x15d5, 0x24fa, 66, 86, 72, 255}, 
   { 128.13, 18.71, 234.78, 1, 0x15d5, 0xfee6, 43, 51, 46, 255}, 
   { -282.80, 326.30, 76.00, 1, 0x29d5, 0x22ae, 43, 51, 46, 255}, 
   { -261.03, 222.36, 63.11, 1, 0x02f5, 0x0899, 245, 231, 189, 255}, 
   { -246.84, 222.94, -102.09, 1, 0x02f9, 0x3efb, 245, 231, 189, 255}, 
   { -185.37, 96.21, -108.18, 1, 0x03da, 0x3ec9, 245, 231, 189, 255}, 
   { -278.87, 317.15, -101.93, 1, 0x29d5, 0x410b, 43, 51, 46, 255}, 
   { -265.61, 164.23, 163.37, 1, 0x03ce, 0x0883, 178, 168, 138, 255}, 
   { -143.36, 68.82, 48.25, 1, 0x03d5, 0x117e, 245, 231, 189, 255}, 
   { -326.98, 271.14, 68.28, 1, 0x0400, 0x0000, 178, 168, 138, 255}, 
   { -434.14, 123.68, 76.00, 1, 0xfc0d, 0x4000, 66, 86, 72, 255}, 
   { -424.25, 122.51, -101.93, 1, 0xf85c, 0x4000, 43, 51, 46, 255}, 
   { -312.80, 271.72, -101.93, 1, 0x000e, 0x3f93, 43, 51, 46, 255}, 
   { -325.11, 118.15, -102.09, 1, 0x02f9, 0x3efb, 245, 231, 189, 255}, 
   { -391.07, 166.93, -101.93, 1, 0x000e, 0x3f93, 43, 51, 46, 255}, 
   { 162.26, 375.07, 42.54, 1, 0x159a, 0x22ae, 66, 86, 72, 255}, 
   { 203.50, 249.37, 234.78, 1, 0x1021, 0xfca1, 43, 51, 46, 255}, 
   { 283.85, 326.54, 42.54, 1, 0x1021, 0x22ae, 66, 86, 72, 255}, 
   { 285.19, 108.07, 234.78, 1, 0x07de, 0xfca1, 43, 51, 46, 255}, 
   { 277.89, 318.57, -135.38, 1, 0x1021, 0x410b, 43, 51, 46, 255}, 
   { 400.96, 114.85, 42.54, 1, 0x07de, 0x22ae, 142, 201, 157, 255}, 
   { 391.05, 113.91, -135.38, 1, 0x07de, 0x40ef, 43, 51, 46, 255}, 
   { 158.62, -160.19, -113.44, 1, 0x10a8, 0x40b4, 43, 51, 46, 255}, 
   { 223.27, -24.97, -135.38, 1, 0x15d5, 0x40b4, 43, 51, 46, 255}, 
   { -19.41, 269.06, -118.15, 1, 0x1cee, 0x410b, 43, 51, 46, 255}, 
   { 252.88, 461.36, 188.87, 1, 0x69ac, 0x0aef, 43, 51, 46, 255}, 
   { 142.22, 164.23, 382.69, 1, 0x3a6e, 0x0075, 66, 86, 72, 255}, 
   { 452.32, 134.91, 190.25, 1, 0x4316, 0x0b1b, 69, 90, 75, 255}, 
   { 314.91, -51.76, 176.89, 1, 0x3476, 0x0b39, 136, 192, 150, 255}, 
   { 46.29, 488.89, 174.50, 1, 0x507b, 0x0add, 43, 51, 46, 255}, 
   { -108.92, 342.45, 207.47, 1, 0x31fe, 0x0a8d, 43, 51, 46, 255}, 
   { -145.64, 24.56, 439.72, 1, 0x0e41, 0x0021, 66, 86, 72, 255}, 
   { 179.61, -104.87, 209.86, 1, 0x2223, 0x0b19, 43, 51, 46, 255}, 
   { 142.22, 164.23, 382.69, 1, 0x3a6e, 0x0075, 66, 86, 72, 255}, 
   { 158.62, -160.19, -113.44, 1, 0x10a8, 0x40b4, 43, 51, 46, 255}, 
   { 166.59, -166.14, 64.48, 1, 0x10a8, 0x24fa, 105, 144, 115, 255}, 
   { 59.85, -238.03, -113.44, 1, 0x0d3c, 0x40b4, 43, 51, 46, 255}, 
   { -365.10, 12.96, -110.26, 1, 0xfef2, 0x40b4, 43, 51, 46, 255}, 
   { -299.90, -80.60, -110.26, 1, 0x02f9, 0x40b4, 43, 51, 46, 255}, 
   { -374.98, 14.13, 67.67, 1, 0xfef2, 0x24fa, 105, 144, 115, 255}, 
   { -19.41, 269.06, -118.15, 1, 0x1cee, 0x410b, 43, 51, 46, 255}, 
   { -161.43, 279.79, -110.26, 1, 0x23f3, 0x410b, 43, 51, 46, 255}, 
   { -15.49, 280.28, 59.77, 1, 0x1cee, 0x22ae, 43, 51, 46, 255}, 
   { 66.07, 247.60, 234.78, 1, 0x159a, 0xfca1, 43, 51, 46, 255}, 
   { 4.63, -73.06, 330.57, 1, 0x10a8, 0xfee6, 66, 86, 72, 255}, 
   { 166.59, -166.14, 64.48, 1, 0x10a8, 0x24fa, 105, 144, 115, 255}, 
   { 128.13, 18.71, 234.78, 1, 0x15d5, 0xfee6, 43, 51, 46, 255}, 
   { -15.49, 280.28, 59.77, 1, 0x1cee, 0x22ae, 43, 51, 46, 255}, 
   { -165.36, 288.94, 67.67, 1, 0x23f3, 0x22ae, 43, 51, 46, 255}, 
   { -70.80, 172.52, 252.01, 1, 0x1cee, 0xfca1, 43, 51, 46, 255}, 
   { -282.80, 326.30, 76.00, 1, 0x29d5, 0x22ae, 43, 51, 46, 255}, 
   { -165.36, 288.94, 67.67, 1, 0x23f3, 0x22ae, 43, 51, 46, 255}, 
   { -278.87, 317.15, -101.93, 1, 0x29d5, 0x410b, 43, 51, 46, 255}, 
   { -312.80, 271.72, -101.93, 1, 0x07b0, 0x0000, 43, 51, 46, 255}, 
   { -326.98, 271.14, 68.28, 1, 0x0400, 0x0000, 178, 168, 138, 255}, 
   { -278.87, 317.15, -101.93, 1, 0x07b0, 0x4000, 43, 51, 46, 255}, 
   { -285.23, 157.65, 277.06, 1, 0x0000, 0x4000, 43, 51, 46, 255}, 
   { -282.80, 326.30, 76.00, 1, 0x0400, 0x4000, 43, 51, 46, 255}, 
   { -331.56, 213.02, 168.54, 1, 0x0000, 0x0000, 178, 168, 138, 255}, 
   { -261.03, 222.36, 63.11, 1, 0x02f5, 0x0899, 245, 231, 189, 255}, 
   { -246.84, 222.94, -102.09, 1, 0x02f9, 0x3efb, 245, 231, 189, 255}, 
   { 161.09, 365.18, -135.38, 1, 0x159a, 0x410b, 43, 51, 46, 255}, 
   { 162.26, 375.07, 42.54, 1, 0x159a, 0x22ae, 66, 86, 72, 255}, 
   { 277.89, 318.57, -135.38, 1, 0x1021, 0x410b, 43, 51, 46, 255}, 
   { 391.05, 113.91, -135.38, 1, 0x07de, 0x410b, 43, 51, 46, 255}, 
   { 277.89, 318.57, -135.38, 1, 0x1021, 0x410b, 43, 51, 46, 255}, 
   { 400.96, 114.85, 42.54, 1, 0x07de, 0x22ae, 142, 201, 157, 255}, 
   { 223.27, -24.97, -135.38, 1, 0xffa4, 0x40ef, 43, 51, 46, 255}, 
   { 391.05, 113.91, -135.38, 1, 0x07de, 0x40ef, 43, 51, 46, 255}, 
   { 231.83, -30.06, 42.54, 1, 0xffa4, 0x22ae, 66, 86, 72, 255}, 
   { 158.62, -160.19, -113.44, 1, 0x10a8, 0x40b4, 43, 51, 46, 255}, 
   { 59.85, -238.03, -113.44, 1, 0x0d3c, 0x40b4, 43, 51, 46, 255}, 
   { 63.78, -247.18, 64.48, 1, 0x0d3c, 0x24fa, 146, 206, 161, 255}, 
   { -181.40, -209.44, -113.44, 1, 0x0709, 0x40b4, 43, 51, 46, 255}, 
   { 63.78, -247.18, 64.48, 1, 0x0d3c, 0x24fa, 146, 206, 161, 255}, 
   { -45.88, -112.87, 330.57, 1, 0x0d3c, 0xfee6, 43, 51, 46, 255}, 
   { -187.36, -217.42, 64.48, 1, 0x0709, 0x24fa, 146, 206, 161, 255}, 
};


void town_large_home_PolyList( u8 animFrame ){ 

   Vtx *town_large_home_VTXPointer = &town_large_home_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

//Last: Homes_Wall_Clean   Current: Homes_Wall_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Homes_Wall_Clean,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 );
   gDPLoadTLUT_pal16(  glistp++,  0, Homes_Wall_Clean_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,255,202,152,255  );

   gSPVertex(glistp++,  town_large_home_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   10, 11, 12, 10, 13, 14, 15, 13  );
     gSP2Triangles(glistp++,   14, 16, 17, 14, 17, 16, 18, 17  );
     gSP2Triangles(glistp++,   19, 12, 20, 19, 21, 22, 15, 21  );
     gSP2Triangles(glistp++,   23, 15, 17, 23, 27, 28, 29, 27  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+29,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+19,30,0  );
     gSP1Triangle(glistp++,   0, 13, 14, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+18,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x29d5fca1);  /*New Coords: 334.68, -6.74*/
     gSP1Triangle(glistp++,   10, 16, 0, 10  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+16,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x23f3fca1);  /*New Coords: 287.62, -6.74*/
     gSP1Triangle(glistp++,   12, 0, 14, 12  );
     gSP1Triangle(glistp++,   12, 11, 22, 12  );
   gSPModifyVertex(glistp++,  18,   G_MWO_POINT_ST, 0x04004000);  /*New Coords: 32.00, 128.00*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x07b04000);  /*New Coords: 61.51, 128.00*/
     gSP1Triangle(glistp++,   25, 18, 22, 25  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x00004000);  /*New Coords: 0.00, 128.00*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x00000000);  /*New Coords: 0.00, 0.00*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0xfc0d0000);  /*New Coords: -31.56, 0.00*/
     gSP2Triangles(glistp++,   26, 2, 10, 26, 27, 26, 9, 27  );
   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0xfab624fa);  /*New Coords: -42.28, 73.95*/   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0xfab640b4);  /*New Coords: -42.28, 129.41*/
     gSP2Triangles(glistp++,   18, 25, 10, 18, 1, 26, 27, 1  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+31,30,0  );
     gSP2Triangles(glistp++,   16, 0, 17, 16, 18, 17, 19, 18  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0xffa4fca1);  /*New Coords: -2.87, -6.74*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0xffa422ae);  /*New Coords: -2.87, 69.36*/
     gSP2Triangles(glistp++,   19, 2, 1, 19, 16, 18, 20, 16  );
     gSP2Triangles(glistp++,   20, 18, 21, 20, 22, 21, 1, 22  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x15d524fa);  /*New Coords: 174.68, 73.95*/
     gSP1Triangle(glistp++,   23, 24, 1, 23  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+29,30,0  );
     gSP1Triangle(glistp++,   27, 0, 18, 27  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+12,30,0  );
     gSP1Triangle(glistp++,   0, 10, 9, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+11,30,0  );
     gSP1Triangle(glistp++,   0, 2, 11, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+10,30,0  );
     gSP2Triangles(glistp++,   9, 0, 2, 9, 12, 3, 5, 12  );
     gSP1Triangle(glistp++,   5, 4, 7, 5  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+17,30,0  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0xfab624fa);  /*New Coords: -42.28, 73.95*/
     gSP1Triangle(glistp++,   25, 0, 1, 25  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+46,30,0  );
     gSP1Triangle(glistp++,   20, 21, 22, 20  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+15,30,0  );
     gSP1Triangle(glistp++,   8, 6, 0, 8  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+44,30,0  );
     gSP1Triangle(glistp++,   25, 26, 27, 25  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+72,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+47,30,0  );
     gSP1Triangle(glistp++,   0, 27, 28, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+76,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+16,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x23f3fca1);  /*New Coords: 287.62, -6.74*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x29d5fca1);  /*New Coords: 334.68, -6.74*/
     gSP1Triangle(glistp++,   0, 12, 2, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+74,30,0  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
     gSP2Triangles(glistp++,   8, 9, 10, 8, 11, 12, 13, 11  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+25,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0xfc0d0000);  /*New Coords: -31.56, 0.00*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x00000000);  /*New Coords: 0.00, 0.00*/
     gSP1Triangle(glistp++,   0, 17, 1, 0  );
   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0xf85c0000);  /*New Coords: -61.10, 0.00*/
     gSP1Triangle(glistp++,   21, 18, 0, 21  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+83,30,0  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+43,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0xfab640b4);  /*New Coords: -42.28, 129.41*/
     gSP1Triangle(glistp++,   26, 28, 0, 26  );
     gSP2Triangles(glistp++,   6, 4, 5, 6, 9, 6, 7, 9  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+32,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0xffa422ae);  /*New Coords: -2.87, 69.36*/
     gSP1Triangle(glistp++,   20, 18, 0, 20  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+90,30,0  );
     gSP1Triangle(glistp++,   3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 7, 8, 6, 9, 10, 11, 9  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+77,30,0  );
   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x15d524fa);  /*New Coords: 174.68, 73.95*/
     gSP1Triangle(glistp++,   0, 25, 24, 0  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+72,30,0  );
     gSP1Triangle(glistp++,   21, 0, 22, 21  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+101,30,0  );
     gSP2Triangles(glistp++,   2, 3, 4, 2, 5, 6, 7, 5  );


//>-- MATERIAL 1: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

//Last:    Current: Homes_Roof_Straw_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Homes_Roof_Straw_Clean,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, Homes_Roof_Straw_Clean_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,26,21,21,255  );

   gSPVertex(glistp++,  town_large_home_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 2, 4, 3  );
     gSP2Triangles(glistp++,   3, 5, 2, 3, 5, 0, 2, 5  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x0e410021);  /*New Coords: 28.51, 1.05*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x3a6e0075);  /*New Coords: 116.86, 3.69*/
     gSP2Triangles(glistp++,   6, 7, 2, 6, 7, 8, 4, 7  );
     gSP2Triangles(glistp++,   9, 6, 2, 9, 9, 2, 1, 9  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+57,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 2, 1, 3  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x3d520103);  /*New Coords: 122.65, 8.12*/
     gSP2Triangles(glistp++,   0, 4, 1, 0, 4, 5, 1, 4  );
     gSP1Triangle(glistp++,   6, 7, 8, 6  );


//>-- MATERIAL 3: START ------------------------------------ 'House_Doorway_Light'-------------------------------------------------

//Last: Homes_Doorway_Light   Current: Homes_Doorway_Light
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Homes_Doorway_Light,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 );
   gDPLoadTLUT_pal16(  glistp++,  0, Homes_Doorway_Light_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,255,202,152,255  );

   gSPVertex(glistp++,  town_large_home_VTXPointer+0,30,0  );
     gSP1Triangle(glistp++,   24, 25, 26, 24  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+29,30,0  );
     gSP1Triangle(glistp++,   6, 7, 8, 6  );
     gSP1Triangle(glistp++,   10, 6, 11, 10  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+24,30,0  );
     gSP1Triangle(glistp++,   0, 16, 13, 0  );
     gSP2Triangles(glistp++,   0, 15, 16, 0, 11, 15, 2, 11  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x001f0067);  /*New Coords: 0.98, 0.80*/
     gSP2Triangles(glistp++,   11, 17, 20, 11, 0, 21, 22, 0  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x035f2da3);  /*New Coords: 26.98, 91.28*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x027d2891);  /*New Coords: 19.92, 81.14*/   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x01d22da3);  /*New Coords: 14.57, 91.28*/
     gSP2Triangles(glistp++,   13, 12, 21, 13, 15, 0, 2, 15  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x03da3ec9);  /*New Coords: 30.81, 125.58*/
     gSP1Triangle(glistp++,   16, 11, 13, 16  );
   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x02f93efb);  /*New Coords: 23.80, 125.97*/
     gSP1Triangle(glistp++,   21, 0, 13, 21  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+82,30,0  );
   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x001f0067);  /*New Coords: 0.98, 0.80*/   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x03c50093);  /*New Coords: 30.16, 1.15*/   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x000e3f93);  /*New Coords: 0.45, 127.15*/
     gSP2Triangles(glistp++,   4, 9, 8, 4, 10, 9, 3, 10  );
   gSPVertex(glistp++,  town_large_home_VTXPointer+24,30,0  );
     gSP1Triangle(glistp++,   1, 0, 22, 1  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- town_large_home -------------------------------------------------

 
 

//>-- Obj00: START ------------------------------------------ rock_wall_3 -------------------------------------------------

Vtx rock_wall_3_VertList_0 [] = {
   { -1406.43, 2773.57, 1599.33, 1, 0xc1b4, 0xff6a, 170, 210, 195, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0xcb6e, 0xfa8a, 95, 121, 108, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0xb06a, 0xfb93, 95, 121, 108, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x1b98, 0x032e, 170, 210, 195, 255}, 
   { 540.71, 5357.07, 1862.71, 1, 0x1b98, 0x0066, 93, 128, 102, 255}, 
   { -492.15, 5827.83, 1828.83, 1, 0x0164, 0x0066, 93, 128, 102, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x4087, 0x032e, 68, 91, 76, 255}, 
   { 1604.64, 4353.70, 1603.35, 1, 0x37fc, 0x0066, 68, 91, 76, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x08d7, 0x032e, 170, 210, 195, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0x758d, 0xfe0e, 100, 138, 109, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x844b, 0x0458, 55, 66, 56, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0x8c43, 0xfd16, 100, 138, 109, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0xb385, 0x0024, 170, 210, 195, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x956a, 0xfff7, 170, 210, 195, 255}, 
   { -1963.18, 1609.01, 808.03, 1, 0xb385, 0x03fe, 48, 62, 55, 255}, 
   { 1441.86, 2552.43, 657.42, 1, 0x50d6, 0x041a, 37, 46, 43, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x2b94, 0x03e0, 34, 41, 40, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0x50d6, 0x004e, 68, 91, 76, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x5268, 0x1899, 37, 46, 43, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x5451, 0x1052, 37, 46, 43, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0x4c60, 0x0781, 37, 46, 43, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0x2d1d, 0x0a77, 38, 48, 44, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0x40a0, 0xffd1, 37, 46, 43, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x32b1, 0xf959, 53, 54, 22, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1170, 0x07c3, 35, 43, 41, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0x0045, 0xec75, 71, 71, 30, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0xe2ca, 0xef90, 71, 71, 30, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0x2fa2, 0xedd0, 50, 70, 59, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0xd7c8, 0xfa40, 53, 54, 22, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xf41c, 0x07cd, 37, 46, 43, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0x1208, 0xecf7, 71, 71, 30, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xa847, 0x0403, 50, 70, 59, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0x4f63, 0x09aa, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4338.83, 6352.37, 978.88, 1, 0x77a4, 0x0403, 34, 41, 40, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x10b8, 0x0403, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -3499.33, 2834.12, 97.77, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x27a8, 0x03fe, 36, 44, 42, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x27a8, 0x0024, 37, 46, 43, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
   { -3494.29, 1446.74, -226.73, 1, 0xe25a, 0x052c, 49, 62, 55, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0xc37b, 0x004d, 95, 121, 108, 255}, 
   { -5409.41, 3066.88, -889.45, 1, 0xe2a2, 0x0a9a, 34, 41, 40, 255}, 
   { -4869.17, 881.00, -484.76, 1, 0x170a, 0x08eb, 34, 41, 40, 255}, 
   { -6206.69, -397.02, -769.84, 1, 0x5ed2, 0x0cc8, 34, 41, 40, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xf681, 0x0002, 34, 41, 40, 255}, 
   { -4184.18, 7761.16, 1652.67, 1, 0xe7b8, 0xfffc, 34, 41, 40, 255}, 
   { -4296.81, 7744.58, 1170.49, 1, 0xe893, 0x03f6, 34, 41, 40, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4990.01, 6173.48, -854.80, 1, 0x0c38, 0x04e8, 34, 41, 40, 255}, 
   { -4992.26, 5947.86, -886.28, 1, 0x0f72, 0x0521, 34, 41, 40, 255}, 
   { -3986.18, 7291.77, 2142.52, 1, 0xae0e, 0x0066, 45, 65, 57, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xae0e, 0x032e, 96, 132, 105, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0xd7c8, 0xfa40, 53, 54, 22, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x32b1, 0xf959, 53, 54, 22, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0x1208, 0xecf7, 71, 71, 30, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0x0045, 0xec75, 71, 71, 30, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4761.77, 4522.83, -1068.04, 1, 0x2971, 0x0076, 34, 41, 40, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x2e6c, 0x0a4b, 34, 41, 40, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -3499.33, 2834.12, 97.77, 1, 0xb53e, 0x04d8, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0xb365, 0x0868, 34, 41, 40, 255}, 
   { -5409.41, 3066.88, -889.45, 1, 0xe2a2, 0x0a9a, 34, 41, 40, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0xabbd, 0x0403, 34, 41, 40, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0x10b8, 0x0003, 71, 71, 30, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x10b8, 0x0403, 34, 41, 40, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xf196, 0x0a3f, 50, 70, 59, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xe252, 0x0a81, 37, 46, 43, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0x4f63, 0x09aa, 34, 41, 40, 255}, 
   { -4338.83, 6352.37, 978.88, 1, 0x634b, 0x0a6f, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0xfeb3, 0x03e3, 53, 54, 22, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xfeb3, 0x0002, 170, 210, 195, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xe5eb, 0x0002, 96, 132, 105, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xd6cc, 0x0002, 34, 41, 40, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x9088, 0x03e7, 53, 54, 22, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x04b6, 0x03e7, 37, 46, 43, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x04b6, 0x001b, 55, 76, 64, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0xdc5d, 0x001b, 50, 70, 59, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0xb3dc, 0x001b, 58, 79, 68, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0xdc5d, 0x03e7, 37, 46, 43, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0x62a4, 0x001b, 68, 91, 76, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x27db, 0x001b, 68, 91, 76, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x27db, 0x03e7, 37, 46, 43, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0x3e54, 0x03c7, 50, 65, 57, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x1ae4, 0x0000, 36, 44, 42, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1ae4, 0x03ff, 35, 43, 41, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0xf91d, 0x0400, 38, 48, 44, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0xc589, 0x0400, 47, 67, 56, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0xd98e, 0x0400, 38, 48, 44, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xd98e, 0x0000, 51, 71, 59, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0xf91d, 0x0000, 37, 46, 43, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0x6770, 0x0414, 34, 41, 40, 255}, 
   { -1922.34, 1629.95, 680.01, 1, 0x8937, 0x0414, 34, 41, 40, 255}, 
   { -1963.18, 1609.01, 808.03, 1, 0x8937, 0x0014, 48, 62, 55, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x956a, 0xfff7, 170, 210, 195, 255}, 
   { -2778.00, 6137.00, 1931.59, 1, 0xcf5c, 0x0066, 93, 128, 102, 255}, 
   { -388.67, 3130.49, 1117.51, 1, 0xc589, 0x0000, 51, 72, 60, 255}, 
   { 3686.22, 828.23, 1976.07, 1, 0x7ba8, 0xfb15, 98, 135, 106, 255}, 
   { 1688.35, 2836.04, 1277.13, 1, 0x5816, 0x0351, 68, 91, 76, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0x7b28, 0x039a, 101, 140, 110, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0xf814, 0x042a, 37, 46, 43, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x0eb1, 0x042a, 37, 46, 43, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0x08bd, 0xffaa, 95, 121, 108, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0x21a7, 0x0166, 95, 121, 108, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0x3f32, 0xfeee, 170, 210, 195, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x25e1, 0x042a, 64, 84, 71, 255}, 
   { -3761.08, 414.02, 1461.60, 1, 0x755d, 0x042f, 64, 84, 71, 255}, 
   { -3235.55, 1118.08, 899.08, 1, 0x59df, 0x04a1, 64, 84, 71, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0x512f, 0x042a, 95, 121, 108, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x4087, 0x032e, 68, 91, 76, 255}, 
   { 2221.95, 3406.83, 1539.13, 1, 0x5816, 0x0066, 34, 41, 40, 255}, 
   { -1406.43, 2773.57, 1599.33, 1, 0xc1b4, 0xff6a, 170, 210, 195, 255}, 
   { -669.80, 3189.59, 1359.48, 1, 0xd389, 0x0431, 95, 121, 108, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x844b, 0x0458, 55, 66, 56, 255}, 
   { -5943.77, -899.83, 1348.19, 1, 0x9e81, 0x03b3, 55, 66, 56, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0x8c43, 0xfd16, 100, 138, 109, 255}, 
   { -4463.72, -2260.14, 1916.25, 1, 0x9e0a, 0xf5c2, 101, 140, 110, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0x8999, 0xfb7b, 99, 136, 108, 255}, 
   { -2760.51, -284.39, 936.75, 1, 0x862c, 0x01e7, 56, 74, 63, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xcf5c, 0x032e, 170, 210, 195, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0xe6c6, 0x032e, 170, 210, 195, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x21d6, 0x0032, 34, 41, 40, 255}, 
   { -3494.29, 1446.74, -226.73, 1, 0xe25a, 0x052c, 34, 41, 40, 255}, 
   { -4869.17, 881.00, -484.76, 1, 0x170a, 0x08eb, 34, 41, 40, 255}, 
   { -6206.69, -397.02, -769.84, 1, 0x6bf3, 0x0694, 34, 41, 40, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0xfeb3, 0x03e3, 53, 54, 22, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0x101f, 0x03e3, 58, 79, 68, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x376d, 0x03e3, 55, 76, 64, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x376d, 0x0002, 170, 210, 195, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x4c8c, 0x03e3, 68, 91, 76, 255}, 
   { 1688.35, 2836.04, 1277.13, 1, 0x646f, 0x0035, 68, 91, 76, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x8522, 0x03e0, 34, 41, 40, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0x7b87, 0x009d, 101, 140, 110, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0x646f, 0x03e3, 68, 91, 76, 255}, 
   { -492.15, 5827.83, 1828.83, 1, 0x0164, 0x0066, 93, 128, 102, 255}, 
   { 540.71, 5357.07, 1862.71, 1, 0x1b98, 0x0066, 93, 128, 102, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x1b98, 0x032e, 170, 210, 195, 255}, 
   { 1604.64, 4353.70, 1603.35, 1, 0x37fc, 0x0066, 68, 91, 76, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x5451, 0x1052, 37, 46, 43, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x2c32, 0x1567, 47, 67, 56, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0x4c60, 0x0781, 37, 46, 43, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0x2d1d, 0x0a77, 38, 48, 44, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0x40a0, 0xffd1, 37, 46, 43, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1170, 0x07c3, 35, 43, 41, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xa847, 0x0003, 37, 46, 43, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0x527e, 0x0003, 53, 54, 22, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xa847, 0x0403, 50, 70, 59, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0xf681, 0x0403, 34, 41, 40, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xf681, 0x0002, 34, 41, 40, 255}, 
   { -4296.81, 7744.58, 1170.49, 1, 0xe893, 0x03f6, 34, 41, 40, 255}, 
   { -4992.26, 5947.86, -886.28, 1, 0x0f72, 0x0521, 34, 41, 40, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4990.01, 6173.48, -854.80, 1, 0x0c38, 0x04e8, 34, 41, 40, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0x0f0b, 0xfbcb, 50, 70, 59, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x14f0, 0x0491, 34, 41, 40, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4761.77, 4522.83, -1068.04, 1, 0x2971, 0x0076, 34, 41, 40, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0xd2ee, 0x0003, 71, 71, 30, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0xabbd, 0x0003, 71, 71, 30, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0xd2ee, 0x0403, 34, 41, 40, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0x527e, 0x0003, 53, 54, 22, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0x10b8, 0x0003, 71, 71, 30, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xe5eb, 0x0002, 96, 132, 105, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xfeb3, 0x0002, 170, 210, 195, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x9088, 0x03e7, 53, 54, 22, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0x9088, 0x001b, 53, 54, 22, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0xdc5d, 0x03e7, 37, 46, 43, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0xb3dc, 0x001b, 58, 79, 68, 255}, 
   { 1441.86, 2552.43, 657.42, 1, 0x62a4, 0x03e7, 37, 46, 43, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0x62a4, 0x001b, 68, 91, 76, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x27db, 0x03e7, 37, 46, 43, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0xf91d, 0x0000, 37, 46, 43, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0xf91d, 0x0400, 38, 48, 44, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x1ae4, 0x0000, 36, 44, 42, 255}, 
   { -388.67, 3130.49, 1117.51, 1, 0xc589, 0x0000, 51, 72, 60, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0xc589, 0x0400, 47, 67, 56, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xd98e, 0x0000, 51, 71, 59, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0xd98e, 0x0400, 38, 48, 44, 255}, 
   { -3986.18, 7291.77, 2142.52, 1, 0xae0e, 0x0066, 45, 65, 57, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xae0e, 0x032e, 96, 132, 105, 255}, 
   { -2778.00, 6137.00, 1931.59, 1, 0xcf5c, 0x0066, 93, 128, 102, 255}, 
   { 1604.64, 4353.70, 1603.35, 1, 0x37fc, 0x0066, 68, 91, 76, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x4087, 0x032e, 68, 91, 76, 255}, 
   { 2221.95, 3406.83, 1539.13, 1, 0x5816, 0x0066, 34, 41, 40, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x376d, 0x03e3, 55, 76, 64, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0x3daa, 0x03fe, 50, 65, 57, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x3daa, 0x0024, 64, 84, 71, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x27a8, 0x03fe, 36, 44, 42, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x52e8, 0x0002, 68, 91, 76, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x376d, 0x0002, 170, 210, 195, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x4c8c, 0x03e3, 68, 91, 76, 255}, 
   { 1688.35, 2836.04, 1277.13, 1, 0x646f, 0x0035, 68, 91, 76, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
};

Gfx rock_wall_3_Static_PolyList_0[] = { 



//>-- MATERIAL 3: START ------------------------------------ 'Grass-Stone-1'-------------------------------------------------

//Last: Grass_Texture_1_Dirt   Current: Grass_Texture_1_Dirt
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_1_Dirt,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_1_Dirt_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+29,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x527e0003),  /*New Coords: 164.99, 0.10*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x77a40003),  /*New Coords: -272.71, 0.10*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xabbd0403),  /*New Coords: -168.52, 32.10*/
     gsSP2Triangles(  11, 14, 15, 11, 9, 19, 17, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xd2ee0003),  /*New Coords: -90.13, 0.10*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xd2ee0403),  /*New Coords: -90.13, 32.10*/
     gsSP1Triangle(  6, 16, 20, 6  ),
   gsSPVertex( rock_wall_3_VertList_0+87,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xabbd0003),  /*New Coords: -168.52, 0.10*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xd2ee0403),  /*New Coords: -90.13, 32.10*/
     gsSP1Triangle(  1, 11, 6, 1  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( rock_wall_3_VertList_0+202,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+88,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xabbd0003),  /*New Coords: -168.52, 0.10*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x77a40003),  /*New Coords: -272.71, 0.10*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xabbd0403),  /*New Coords: -168.52, 32.10*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xd2ee0003),  /*New Coords: -90.13, 0.10*/
     gsSP2Triangles(  0, 22, 16, 0, 11, 1, 12, 11  ),
   gsSPVertex( rock_wall_3_VertList_0+204,30,0  ),
     gsSP2Triangles(  16, 17, 18, 16, 19, 20, 21, 19  ),


//>-- MATERIAL 6: START ------------------------------------ 'Beach-Rocky-Hill'-------------------------------------------------

//Last: Sand_Texture_4_Hill   Current: Sand_Texture_4_Hill
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_4_Hill,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_4_Hill_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+29,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/
     gsSP2Triangles(  16, 17, 18, 16, 21, 22, 14, 21  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xa8a2007a),  /*New Coords: -174.73, 3.83*/
     gsSP1Triangle(  27, 28, 12, 27  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xb53e04d8),  /*New Coords: -149.51, 38.78*/
     gsSP1Triangle(  27, 12, 22, 27  ),
     gsSP1Triangle(  22, 29, 27, 22  ),
   gsSPVertex( rock_wall_3_VertList_0+56,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xf8d7fc72),  /*New Coords: -14.32, -28.43*/
     gsSP2Triangles(  4, 3, 2, 4, 8, 7, 9, 8  ),
   gsSPVertex( rock_wall_3_VertList_0+47,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x14f00491),  /*New Coords: 41.88, 36.55*/
     gsSP1Triangle(  17, 19, 0, 17  ),
   gsSPVertex( rock_wall_3_VertList_0+76,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
     gsSP2Triangles(  16, 15, 18, 16, 19, 20, 21, 19  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xfd4f055e),  /*New Coords: -5.38, 42.95*/
     gsSP2Triangles(  25, 19, 26, 25, 19, 27, 26, 19  ),
   gsSPVertex( rock_wall_3_VertList_0+104,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+162,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+154,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6ff5000d),  /*New Coords: 223.92, 0.44*/
     gsSP2Triangles(  0, 8, 11, 0, 8, 10, 11, 8  ),
   gsSPVertex( rock_wall_3_VertList_0+146,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf1ebfe90),  /*New Coords: -28.16, -11.48*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xda720000),  /*New Coords: -75.10, 0.01*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xc37b004d),  /*New Coords: -121.03, 2.41*/
     gsSP2Triangles(  16, 0, 17, 16, 1, 2, 17, 1  ),
     gsSP1Triangle(  0, 1, 17, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+204,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
     gsSP2Triangles(  8, 9, 10, 8, 13, 14, 15, 13  ),
   gsSPVertex( rock_wall_3_VertList_0+96,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x2e6c0a4b),  /*New Coords: 92.85, 82.35*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x18ac008c),  /*New Coords: 49.35, 4.38*/     gsSP1Triangle(  5, 4, 0, 5  ),


//>-- MATERIAL 7: START ------------------------------------ 'Grass-Village'-------------------------------------------------

//Last: Grass_Texture_2   Current: Grass_Texture_2
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_2,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,15 ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_2_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+0,30,0  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 23, 24, 22  ),
     gsSP2Triangles(  25, 21, 26, 25, 23, 27, 28, 23  ),
   gsSPVertex( rock_wall_3_VertList_0+29,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 8, 1, 9  ),
     gsSP2Triangles(  10, 11, 12, 10, 9, 13, 8, 9  ),
   gsSPVertex( rock_wall_3_VertList_0+26,30,0  ),
     gsSP2Triangles(  0, 3, 26, 0, 2, 1, 7, 2  ),
     gsSP2Triangles(  13, 15, 6, 13, 14, 11, 10, 14  ),
   gsSPVertex( rock_wall_3_VertList_0+55,30,0  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 15, 20, 22, 15  ),
     gsSP2Triangles(  23, 24, 25, 23, 26, 27, 28, 26  ),
   gsSPVertex( rock_wall_3_VertList_0+84,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+72,30,0  ),
     gsSP1Triangle(  15, 11, 0, 15  ),
     gsSP2Triangles(  0, 2, 5, 0, 16, 17, 18, 16  ),
   gsSPVertex( rock_wall_3_VertList_0+159,30,0  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( rock_wall_3_VertList_0+187,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  3, 4, 5, 3, 6, 7, 8, 6  ),
     gsSP2Triangles(  9, 10, 11, 9, 12, 13, 14, 12  ),
     gsSP2Triangles(  3, 5, 9, 3, 13, 8, 18, 13  ),
     gsSP2Triangles(  28, 7, 3, 28, 18, 28, 9, 18  ),
     gsSP2Triangles(  7, 1, 4, 7, 14, 18, 11, 14  ),
     gsSP1Triangle(  14, 11, 29, 14  ),


//>-- MATERIAL 9: START ------------------------------------ 'Grass_to_Rock'-------------------------------------------------

//Last: GrasstoRock   Current: GrasstoRock
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   GrasstoRock,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, GrasstoRock_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+0,30,0  ),
     gsSP1Triangle(  16, 17, 18, 16  ),
   gsSPVertex( rock_wall_3_VertList_0+87,30,0  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x731b036f),  /*New Coords: -281.79, 27.48*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x9088001b),  /*New Coords: -222.94, 0.85*/
     gsSP1Triangle(  23, 26, 21, 23  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( rock_wall_3_VertList_0+108,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x9088001b),  /*New Coords: -222.94, 0.85*/
     gsSP1Triangle(  9, 10, 0, 9  ),
     gsSP2Triangles(  11, 8, 10, 11, 12, 13, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 17, 16, 18  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 21, 20, 22  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x893703eb),  /*New Coords: -237.57, 31.36*/
     gsSP1Triangle(  25, 24, 19, 25  ),
     gsSP2Triangles(  6, 14, 13, 6, 28, 25, 19, 28  ),
   gsSPVertex( rock_wall_3_VertList_0+166,30,0  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xdc5d03e7),  /*New Coords: -71.27, 31.24*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x04b603e7),  /*New Coords: 9.42, 31.24*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xdc5d001b),  /*New Coords: -71.27, 0.85*/
     gsSP1Triangle(  26, 20, 3, 26  ),
   gsSPVertex( rock_wall_3_VertList_0+224,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP1Triangle(  15, 14, 20, 15  ),
   gsSPVertex( rock_wall_3_VertList_0+172,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04b6001b),  /*New Coords: 9.42, 0.85*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x04b603e7),  /*New Coords: 9.42, 31.24*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x27db001b),  /*New Coords: 79.71, 0.85*/
     gsSP1Triangle(  0, 14, 3, 0  ),


//>-- MATERIAL 10: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

//Last: RocktoFerns   Current: RocktoFerns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   RocktoFerns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, RocktoFerns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+0,30,0  ),
     gsSP1Triangle(  13, 14, 15, 13  ),
   gsSPVertex( rock_wall_3_VertList_0+29,30,0  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPVertex( rock_wall_3_VertList_0+58,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
   gsSPVertex( rock_wall_3_VertList_0+87,30,0  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPVertex( rock_wall_3_VertList_0+116,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x8dc4040f),  /*New Coords: -228.46, 32.49*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xb38503fe),  /*New Coords: -152.95, 31.95*/
     gsSP1Triangle(  18, 15, 17, 18  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x7b87009d),  /*New Coords: 247.06, 4.91*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x646f0035),  /*New Coords: 200.87, 1.66*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x646f03e3),  /*New Coords: 200.87, 31.11*/
     gsSP1Triangle(  23, 22, 4, 23  ),
   gsSPVertex( rock_wall_3_VertList_0+129,30,0  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0xef840031),  /*New Coords: -32.97, 1.55*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xe99b03fe),  /*New Coords: -44.78, 31.95*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf52003fe),  /*New Coords: -21.75, 31.95*/
     gsSP1Triangle(  23, 7, 0, 23  ),
   gsSPVertex( rock_wall_3_VertList_0+158,30,0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
     gsSP1Triangle(  14, 15, 16, 14  ),
   gsSPVertex( rock_wall_3_VertList_0+124,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x3daa0024),  /*New Coords: 123.33, 1.14*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x27a80024),  /*New Coords: 79.32, 1.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x27a803fe),  /*New Coords: 79.32, 31.95*/
     gsSP1Triangle(  21, 17, 0, 21  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xb38503fe),  /*New Coords: -152.95, 31.95*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xe99b03fe),  /*New Coords: -44.78, 31.95*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xef840031),  /*New Coords: -32.97, 1.55*/
     gsSP1Triangle(  9, 12, 28, 9  ),
   gsSPVertex( rock_wall_3_VertList_0+153,30,0  ),
     gsSP1Triangle(  20, 19, 22, 20  ),
   gsSPVertex( rock_wall_3_VertList_0+149,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x52e80002),  /*New Coords: 165.81, 0.07*/
     gsSP1Triangle(  27, 0, 26, 27  ),
   gsSPVertex( rock_wall_3_VertList_0+129,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x12320024),  /*New Coords: 36.40, 1.14*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0xef840031),  /*New Coords: -32.97, 1.55*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf52003fe),  /*New Coords: -21.75, 31.95*/
     gsSP1Triangle(  11, 23, 0, 11  ),
   gsSPVertex( rock_wall_3_VertList_0+158,30,0  ),
     gsSP1Triangle(  19, 20, 21, 19  ),
   gsSPVertex( rock_wall_3_VertList_0+123,30,0  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x66c20024),  /*New Coords: 205.52, 1.14*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x3daa0024),  /*New Coords: 123.33, 1.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3daa03fe),  /*New Coords: 123.33, 31.95*/
     gsSP1Triangle(  25, 22, 0, 25  ),
   gsSPVertex( rock_wall_3_VertList_0+131,30,0  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x8c57fffd),  /*New Coords: -231.32, -0.09*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8dc4040f),  /*New Coords: -228.46, 32.49*/
     gsSP1Triangle(  27, 0, 3, 27  ),
   gsSPVertex( rock_wall_3_VertList_0+124,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x123303fe),  /*New Coords: 36.40, 31.95*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x27a803fe),  /*New Coords: 79.32, 31.95*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x12320024),  /*New Coords: 36.40, 1.14*/
     gsSP1Triangle(  6, 0, 16, 6  ),
   gsSPVertex( rock_wall_3_VertList_0+182,30,0  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPVertex( rock_wall_3_VertList_0+211,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPVertex( rock_wall_3_VertList_0+207,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xd6cc03e3),  /*New Coords: -82.40, 31.11*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xd6cc0002),  /*New Coords: -82.40, 0.07*/
     gsSP1Triangle(  6, 20, 0, 6  ),
   gsSPVertex( rock_wall_3_VertList_0+228,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfeb303e3),  /*New Coords: -2.60, 31.11*/
     gsSP1Triangle(  0, 3, 24, 0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x101f03e3),  /*New Coords: 32.25, 31.11*/
     gsSP2Triangles(  6, 25, 24, 6, 26, 27, 28, 26  ),
   gsSPVertex( rock_wall_3_VertList_0+257,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+133,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xb3850024),  /*New Coords: -152.95, 1.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xb38503fe),  /*New Coords: -152.95, 31.95*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xef840031),  /*New Coords: -32.97, 1.55*/
     gsSP1Triangle(  11, 0, 19, 11  ),
   gsSPVertex( rock_wall_3_VertList_0+249,30,0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPVertex( rock_wall_3_VertList_0+236,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x646f03e3),  /*New Coords: 200.87, 31.11*/
     gsSP1Triangle(  0, 27, 26, 0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x123303fe),  /*New Coords: 36.40, 31.95*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xf52003fe),  /*New Coords: -21.75, 31.95*/     gsSP1Triangle(  2, 28, 7, 2  ),


//>-- MATERIAL 11: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

//Last:    Current: ground_cover_ferns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 1,15 ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  3, 6, 7, 3, 8, 5, 9, 8  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( rock_wall_3_VertList_0+58,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x970c0176),  /*New Coords: -209.91, 11.69*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xa0f303ec),  /*New Coords: -190.10, 31.39*/
     gsSP1Triangle(  4, 3, 9, 4  ),
     gsSP1Triangle(  3, 10, 9, 3  ),
   gsSPVertex( rock_wall_3_VertList_0+109,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xae0e032e),  /*New Coords: -163.89, 25.45*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcf5c032e),  /*New Coords: -97.28, 25.45*/
     gsSP1Triangle(  2, 0, 26, 2  ),
   gsSPVertex( rock_wall_3_VertList_0+137,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x12740416),  /*New Coords: 36.91, 32.70*/
     gsSP2Triangles(  6, 5, 4, 6, 7, 6, 8, 7  ),
   gsSPVertex( rock_wall_3_VertList_0+134,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f09fe45),  /*New Coords: 190.07, -13.84*/
     gsSP2Triangles(  12, 0, 13, 12, 10, 14, 13, 10  ),
     gsSP2Triangles(  15, 4, 16, 15, 3, 16, 4, 3  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x9452042a),  /*New Coords: -215.36, 33.32*/
     gsSP2Triangles(  6, 17, 18, 6, 17, 10, 18, 17  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xb06afb93),  /*New Coords: -159.17, -35.38*/
     gsSP2Triangles(  10, 17, 9, 10, 19, 20, 21, 19  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6ce1fbc1),  /*New Coords: 217.76, -33.96*/
     gsSP2Triangles(  22, 21, 20, 22, 23, 24, 0, 23  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x758dfe0e),  /*New Coords: 235.11, -15.54*/
     gsSP1Triangle(  19, 23, 12, 19  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f09fe45),  /*New Coords: 190.07, -13.84*/
     gsSP1Triangle(  23, 0, 12, 23  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( rock_wall_3_VertList_0+163,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x08d7032e),  /*New Coords: 17.68, 25.45*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x1b98032e),  /*New Coords: 55.19, 25.45*/
     gsSP1Triangle(  11, 10, 17, 11  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( rock_wall_3_VertList_0+161,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xe6c6032e),  /*New Coords: -50.45, 25.45*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x08d7032e),  /*New Coords: 17.68, 25.45*/
     gsSP1Triangle(  10, 13, 0, 10  ),
   gsSPVertex( rock_wall_3_VertList_0+219,30,0  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( rock_wall_3_VertList_0+140,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xe9d5fa01),  /*New Coords: -44.33, -47.94*/
     gsSP1Triangle(  11, 0, 2, 11  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x12740416),  /*New Coords: 36.91, 32.70*/
     gsSP2Triangles(  5, 3, 1, 5, 8, 4, 5, 8  ),
   gsSPVertex( rock_wall_3_VertList_0+134,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f09fe45),  /*New Coords: 190.07, -13.84*/
     gsSP1Triangle(  0, 10, 13, 0  ),
   gsSPVertex( rock_wall_3_VertList_0+221,30,0  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( rock_wall_3_VertList_0+228,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcf5c032e),  /*New Coords: -97.28, 25.45*/     gsSP1Triangle(  19, 0, 23, 19  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rock_wall_3 -------------------------------------------------

 
 
 
 
 
 
 
 
//>-- Obj00: START ------------------------------------------ palm_Background -------------------------------------------------

Vtx palm_Background_VertList_0 [] = {
   { -279.61, -603.12, -452.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -222.19, -755.94, -75.80, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -226.72, -782.95, -99.88, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { -344.92, -581.44, -492.65, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { -254.18, -762.86, -65.26, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { -208.45, -935.94, 140.02, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { -33.87, -883.56, 122.88, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -40.72, -930.20, 102.06, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 65.01, -886.64, -14.08, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { -310.42, -816.27, 155.96, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { -271.14, -776.22, 146.87, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -353.19, -736.23, 88.11, 1, 0x0000, 0x0000, 33, 44, 38, 255}, 
   { 238.28, -893.94, -183.52, 1, 0x0000, 0x1000, 229, 230, 230, 255}, 
   { 243.24, -876.62, -178.72, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { 233.85, -897.36, -177.79, 1, 0x0fe5, 0x0000, 229, 230, 230, 255}, 
   { -37.03, -969.01, 50.58, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { -349.28, -839.43, 121.55, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -292.23, -924.52, 123.65, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -259.22, -1005.53, 99.90, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { -274.19, -1077.96, 45.03, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { -222.68, -1077.40, 43.11, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { -234.44, -1128.89, -111.09, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { -168.54, -1075.40, 7.97, 1, 0x06ca, 0x0100, 143, 146, 144, 255}, 
   { -168.84, -1015.98, 97.87, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { 111.73, -775.04, -306.58, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 140.58, -769.87, -314.85, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -201.46, -851.09, 153.05, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -245.50, -2130.47, -167.58, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -237.83, -2125.91, -189.17, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -245.52, -2122.18, -161.93, 1, 0x0fe5, 0x0000, 30, 41, 35, 255}, 
   { -245.91, -2116.93, -168.37, 1, 0x036c, 0xdab5, 30, 41, 35, 255}, 
   { -470.67, -2138.04, -310.41, 1, 0xf87e, 0xf903, 33, 44, 38, 255}, 
   { -224.43, -2208.60, -257.26, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -203.91, -2210.80, -384.03, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -177.99, -2144.82, -377.02, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { -528.01, -1867.02, -103.26, 1, 0x0000, 0x0009, 33, 44, 38, 255}, 
   { -411.71, -2003.57, -65.67, 1, 0x06ca, 0x0100, 33, 44, 38, 255}, 
   { -348.67, -1964.73, -98.35, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -304.14, -2079.62, -95.45, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { -241.40, -2157.52, -503.48, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { -203.88, -2081.54, -397.02, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -326.20, -1920.10, -139.29, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { -266.20, -2010.77, -178.10, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { -224.39, -2058.44, -272.36, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -427.13, -2140.67, -336.48, 1, 0x04c7, 0xfa52, 236, 237, 236, 255}, 
   { -725.15, -2196.40, -658.59, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -528.15, -2362.37, -53.45, 1, 0x0000, 0x0009, 33, 44, 38, 255}, 
   { -348.75, -2265.73, -68.08, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -411.77, -2221.12, -43.80, 1, 0x06ca, 0x0100, 33, 44, 38, 255}, 
   { -304.16, -2152.58, -88.11, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -326.30, -2317.63, -99.32, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -266.26, -2236.53, -155.40, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -448.05, -2166.36, -322.38, 1, 0x04c7, 0xfa52, 33, 44, 38, 255}, 
   { -768.61, -2190.66, -601.64, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -747.32, -2232.03, -625.42, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 224.98, -985.70, -310.54, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 238.28, -893.94, -183.52, 1, 0x0c95, 0x0006, 229, 230, 230, 255}, 
   { 203.01, -957.34, -218.98, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -200.61, -952.96, 135.92, 1, 0x1000, 0x01dc, 30, 41, 35, 255}, 
   { -194.46, -953.83, 138.28, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -208.45, -935.94, 140.02, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -226.72, -782.95, -99.88, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { 273.02, -916.02, -259.90, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -267.14, -797.53, -570.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -238.81, -951.95, -356.16, 1, 0x04c7, 0xfa52, 243, 243, 243, 255}, 
   { -266.37, -939.43, -352.81, 1, 0xf87e, 0xf903, 75, 84, 79, 255}, 
   { -252.20, -765.39, -546.67, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { -230.63, -935.52, -334.07, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { -218.25, -1055.06, -184.67, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { -238.09, -1183.94, -313.17, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -284.00, -1170.60, -293.92, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -344.65, -1187.78, -444.22, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { -85.75, -970.08, -198.49, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { -70.94, -993.65, -248.03, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -47.60, -889.65, -268.61, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { -192.82, -946.01, 138.79, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -343.67, -1147.87, -303.57, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { -111.26, -920.76, -186.37, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -193.57, -976.11, -160.67, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -279.74, -996.78, -141.63, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { -362.10, -959.76, -123.51, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { -377.90, -1000.85, -150.31, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { -499.18, -908.43, -207.90, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { -411.53, -1025.18, -199.78, 1, 0x06ca, 0x0100, 143, 146, 144, 255}, 
   { -315.70, -1070.64, -180.81, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { -222.19, -755.94, -75.80, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -146.73, -1060.79, -232.31, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -40.72, -930.20, 102.06, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -124.73, -980.31, 112.15, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -236.14, -1060.65, -180.56, 1, 0x1000, 0x01dc, 75, 84, 79, 255}, 
   { -237.34, -1067.10, -181.60, 1, 0x0000, 0x1000, 75, 84, 79, 255}, 
   { -122.74, -895.12, 144.12, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -2.81, -616.89, -477.95, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 140.58, -769.87, -314.85, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 111.73, -775.04, -306.58, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { -1.83, -587.07, -447.43, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { 143.47, -756.26, -289.72, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { 243.24, -876.62, -178.72, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { 266.59, -968.28, -335.47, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { 224.98, -985.70, -310.54, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 153.42, -1003.34, -455.91, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { 309.13, -733.01, -177.55, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { 323.86, -734.84, -232.42, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { 287.02, -632.93, -225.89, 1, 0x0000, 0x0000, 33, 44, 38, 255}, 
   { 161.45, -997.22, -310.05, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { 265.15, -708.56, -151.15, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { 228.82, -803.18, -136.10, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 170.47, -870.12, -117.96, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { 86.02, -887.45, -85.53, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { 88.26, -924.50, -121.29, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { -71.59, -902.62, -144.48, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { 62.63, -952.98, -173.27, 1, 0x06ca, 0x0100, 143, 146, 144, 255}, 
   { 169.87, -942.51, -173.11, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { 297.03, -833.71, -230.51, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 231.81, -891.62, -175.15, 1, 0x1000, 0x01dc, 229, 230, 230, 255}, 
   { 233.85, -897.36, -177.79, 1, 0x0000, 0x1000, 229, 230, 230, 255}, 
   { -209.32, -1124.10, -249.34, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -231.42, -1068.06, -186.90, 1, 0x0c95, 0x0006, 243, 243, 243, 255}, 
   { -284.00, -1170.60, -293.92, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -292.94, -1111.79, -215.61, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -266.37, -939.43, -352.81, 1, 0xf87e, 0xf903, 75, 84, 79, 255}, 
   { -238.81, -951.95, -356.16, 1, 0x04c7, 0xfa52, 243, 243, 243, 255}, 
   { -231.42, -1068.06, -186.90, 1, 0x036c, 0xdab5, 243, 243, 243, 255}, 
   { -231.42, -1068.06, -186.90, 1, 0x0000, 0x1000, 243, 243, 243, 255}, 
   { -218.25, -1055.06, -184.67, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -237.34, -1067.10, -181.60, 1, 0x0fe5, 0x0000, 75, 84, 79, 255}, 
   { -169.22, -536.41, -377.32, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 37.33, -614.50, -31.25, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 50.96, -634.07, -58.83, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { -233.79, -569.41, -410.38, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { 23.20, -643.85, -20.22, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { 212.04, -733.86, 154.20, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { 284.15, -566.57, 136.09, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { 311.38, -600.86, 108.90, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 330.69, -485.61, -4.71, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { 58.89, -734.21, 193.11, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { 53.29, -677.88, 188.10, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -38.54, -710.55, 140.31, 1, 0x0000, 0x0000, 33, 44, 38, 255}, 
   { 335.12, -620.27, 52.08, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { 45.78, -776.67, 157.69, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { 146.60, -788.93, 144.07, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 224.93, -815.21, 106.80, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { 261.07, -870.42, 42.55, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { 293.90, -830.93, 38.08, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { 301.93, -864.23, -121.27, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { 322.49, -786.55, 0.89, 1, 0x06ca, 0x0100, 143, 146, 144, 255}, 
   { 291.25, -753.43, 98.55, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { 155.32, -674.16, 179.40, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 229.23, -738.75, 147.20, 1, 0x1000, 0x01dc, 30, 41, 35, 255}, 
   { 234.22, -734.80, 149.08, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { 229.54, -728.50, 150.67, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { 295.49, -697.67, 115.72, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { 238.04, -642.64, 159.92, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -499.29, -2290.51, 340.51, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -479.68, -2287.49, 328.16, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { -500.92, -2282.75, 346.65, 1, 0x0fe5, 0x0000, 30, 41, 35, 255}, 
   { -496.37, -2277.37, 342.21, 1, 0x036c, 0xdab5, 30, 41, 35, 255}, 
   { -626.01, -2231.54, 96.01, 1, 0xf87e, 0xf903, 33, 44, 38, 255}, 
   { -446.19, -2368.17, 264.74, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -356.27, -2371.45, 173.10, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -326.55, -2315.53, 205.73, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { -304.75, -2305.64, 65.72, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { -322.18, -2246.88, 187.21, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { -406.59, -2223.47, 281.13, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -577.14, -2245.20, 98.58, 1, 0x04c7, 0xfa52, 236, 237, 236, 255}, 
   { -727.57, -2216.04, -584.08, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -835.21, -2438.90, 231.76, 1, 0x0000, 0x0009, 33, 44, 38, 255}, 
   { -666.22, -2395.31, 337.96, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -720.73, -2335.88, 331.11, 1, 0x06ca, 0x0100, 33, 44, 38, 255}, 
   { -596.37, -2298.31, 368.05, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -640.93, -2450.25, 315.25, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -544.40, -2387.03, 318.65, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -607.05, -2264.57, 93.49, 1, 0x04c7, 0xfa52, 33, 44, 38, 255}, 
   { -793.85, -2200.51, -561.02, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -771.69, -2245.29, -576.32, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -295.11, -630.14, -524.78, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -279.61, -603.12, -452.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -226.72, -782.95, -99.88, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { -222.19, -755.94, -75.80, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -279.61, -603.12, -452.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -254.18, -762.86, -65.26, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { -192.82, -946.01, 138.79, 1, 0x04ba, 0xdbb7, 30, 41, 35, 255}, 
   { -222.19, -755.94, -75.80, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -208.45, -935.94, 140.02, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { -344.92, -581.44, -492.65, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -208.45, -935.94, 140.02, 1, 0x0b94, 0x0000, 255, 255, 255, 255}, 
   { -310.42, -816.27, 155.96, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { -292.23, -924.52, 123.65, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -200.61, -952.96, 135.92, 1, 0x0caa, 0x0000, 255, 255, 255, 255}, 
   { -259.22, -1005.53, 99.90, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { -222.68, -1077.40, 43.11, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { -168.84, -1015.98, 97.87, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
   { 233.85, -897.36, -177.79, 1, 0x021d, 0xd9b4, 229, 230, 230, 255}, 
   { 111.73, -775.04, -306.58, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 238.28, -893.94, -183.52, 1, 0x036c, 0xdab5, 229, 230, 230, 255}, 
   { -201.46, -851.09, 153.05, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 161.45, -997.22, -310.05, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { 224.98, -985.70, -310.54, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 203.01, -957.34, -218.98, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { 266.59, -968.28, -335.47, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { 273.02, -916.02, -259.90, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { 224.98, -985.70, -310.54, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -304.84, -785.48, -557.33, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -267.14, -797.53, -570.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -266.37, -939.43, -352.81, 1, 0xf87e, 0xf903, 75, 84, 79, 255}, 
   { -267.14, -797.53, -570.45, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -252.20, -765.39, -546.67, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { -238.81, -951.95, -356.16, 1, 0x04c7, 0xfa52, 243, 243, 243, 255}, 
   { -231.42, -1068.06, -186.90, 1, 0x04ba, 0xdbb7, 243, 243, 243, 255}, 
   { -238.81, -951.95, -356.16, 1, 0x04c7, 0xfa52, 243, 243, 243, 255}, 
   { -218.25, -1055.06, -184.67, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { -218.25, -1055.06, -184.67, 1, 0x0b94, 0x0000, 255, 255, 255, 255}, 
   { -85.75, -970.08, -198.49, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { -193.57, -976.11, -160.67, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -194.46, -953.83, 138.28, 1, 0x021d, 0xd9b4, 30, 41, 35, 255}, 
   { -226.72, -782.95, -99.88, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { -192.82, -946.01, 138.79, 1, 0x036c, 0xdab5, 30, 41, 35, 255}, 
   { -146.73, -1060.79, -232.31, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { -37.03, -969.01, 50.58, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { -40.72, -930.20, 102.06, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -124.73, -980.31, 112.15, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -230.63, -935.52, -334.07, 1, 0x04c7, 0xfa52, 33, 44, 38, 255}, 
   { -266.37, -939.43, -352.81, 1, 0xf87e, 0xf903, 75, 84, 79, 255}, 
   { -236.14, -1060.65, -180.56, 1, 0x036c, 0xdab5, 75, 84, 79, 255}, 
   { -33.87, -883.56, 122.88, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -122.74, -895.12, 144.12, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -40.72, -930.20, 102.06, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -38.05, -629.78, -459.78, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -2.81, -616.89, -477.95, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 111.73, -775.04, -306.58, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { -2.81, -616.89, -477.95, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { -1.83, -587.07, -447.43, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { 140.58, -769.87, -314.85, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 238.28, -893.94, -183.52, 1, 0x04ba, 0xdbb7, 229, 230, 230, 255}, 
   { 140.58, -769.87, -314.85, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 243.24, -876.62, -178.72, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { 243.24, -876.62, -178.72, 1, 0x0b94, 0x0000, 255, 255, 255, 255}, 
   { 309.13, -733.01, -177.55, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { 228.82, -803.18, -136.10, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 297.03, -833.71, -230.51, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 143.47, -756.26, -289.72, 1, 0x04c7, 0xfa52, 33, 44, 38, 255}, 
   { 111.73, -775.04, -306.58, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 231.81, -891.62, -175.15, 1, 0x036c, 0xdab5, 229, 230, 230, 255}, 
   { -238.09, -1183.94, -313.17, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { -209.32, -1124.10, -249.34, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { -284.00, -1170.60, -293.92, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -343.67, -1147.87, -303.57, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { -284.00, -1170.60, -293.92, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { -292.94, -1111.79, -215.61, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { -237.34, -1067.10, -181.60, 1, 0x021d, 0xd9b4, 75, 84, 79, 255}, 
   { -266.37, -939.43, -352.81, 1, 0xf87e, 0xf903, 75, 84, 79, 255}, 
   { -231.42, -1068.06, -186.90, 1, 0x036c, 0xdab5, 243, 243, 243, 255}, 
   { -169.82, -561.47, -451.97, 1, 0xf464, 0x19a2, 33, 44, 38, 255}, 
   { -169.22, -536.41, -377.32, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 50.96, -634.07, -58.83, 1, 0xf87e, 0xf903, 236, 237, 236, 255}, 
   { 37.33, -614.50, -31.25, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { -169.22, -536.41, -377.32, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 23.20, -643.85, -20.22, 1, 0x0f85, 0xf9a8, 33, 44, 38, 255}, 
   { 229.54, -728.50, 150.67, 1, 0x04ba, 0xdbb7, 30, 41, 35, 255}, 
   { 37.33, -614.50, -31.25, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 212.04, -733.86, 154.20, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { -233.79, -569.41, -410.38, 1, 0x0454, 0x1aa8, 33, 44, 38, 255}, 
   { 212.04, -733.86, 154.20, 1, 0x0b94, 0x0000, 255, 255, 255, 255}, 
   { 58.89, -734.21, 193.11, 1, 0x04b5, 0x0000, 33, 44, 38, 255}, 
   { 146.60, -788.93, 144.07, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 155.32, -674.16, 179.40, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 229.23, -738.75, 147.20, 1, 0x036c, 0xdab5, 30, 41, 35, 255}, 
   { 234.22, -734.80, 149.08, 1, 0x021d, 0xd9b4, 30, 41, 35, 255}, 
};

Gfx palm_Background_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'palm_trunk_1'-------------------------------------------------

//Last:    Current: foliage_trunk_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   foliage_trunk_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 ),
   gsDPLoadTLUT_pal16(   0, foliage_trunk_1_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( palm_Background_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 0, 3, 4, 0  ),
     gsSP2Triangles(  1, 4, 5, 1, 12, 13, 14, 12  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP2Triangles(  2, 4, 3, 2, 24, 25, 12, 24  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( palm_Background_VertList_0+29,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( palm_Background_VertList_0+28,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x100001dc),  /*New Coords: 64.00, 7.45*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/
     gsSP2Triangles(  2, 1, 0, 2, 3, 16, 17, 3  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x140a1973),  /*New Coords: 80.17, 101.81*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x0f85f9a8),  /*New Coords: 62.09, -25.37*/
     gsSP2Triangles(  17, 16, 24, 17, 25, 26, 24, 25  ),
   gsSPVertex( palm_Background_VertList_0+57,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP2Triangles(  1, 2, 3, 1, 2, 1, 4, 2  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 7, 9  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x0fe50000),  /*New Coords: 63.58, 0.00*/
     gsSP2Triangles(  7, 10, 11, 7, 18, 3, 2, 18  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP2Triangles(  8, 10, 9, 8, 4, 28, 18, 4  ),
   gsSPVertex( palm_Background_VertList_0+68,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/
     gsSP1Triangle(  21, 22, 0, 21  ),
   gsSPVertex( palm_Background_VertList_0+65,30,0  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  25, 24, 0, 25  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( palm_Background_VertList_0+93,30,0  ),
     gsSP1Triangle(  2, 3, 0, 2  ),
     gsSP1Triangle(  0, 3, 4, 0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/
     gsSP1Triangle(  1, 3, 2, 1  ),
   gsSPVertex( palm_Background_VertList_0+28,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x0f85f9a8),  /*New Coords: 62.09, -25.37*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0767d8f5),  /*New Coords: 29.62, -156.16*/
     gsSP1Triangle(  24, 16, 0, 24  ),
   gsSPVertex( palm_Background_VertList_0+86,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/
     gsSP1Triangle(  28, 29, 11, 28  ),
   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  29, 28, 8, 29  ),
   gsSPVertex( palm_Background_VertList_0+27,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  4, 25, 0, 4  ),
   gsSPVertex( palm_Background_VertList_0+114,30,0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 12, 15, 16, 12  ),
     gsSP1Triangle(  13, 16, 17, 13  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/
     gsSP1Triangle(  14, 16, 15, 14  ),
   gsSPVertex( palm_Background_VertList_0+131,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/
     gsSP1Triangle(  17, 18, 0, 17  ),
   gsSPVertex( palm_Background_VertList_0+128,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  21, 20, 0, 21  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x0fe50000),  /*New Coords: 63.58, 0.00*/
     gsSP1Triangle(  22, 3, 21, 22  ),
   gsSPVertex( palm_Background_VertList_0+127,30,0  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  1, 0, 23, 1  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( palm_Background_VertList_0+155,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( palm_Background_VertList_0+154,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x100001dc),  /*New Coords: 64.00, 7.45*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00001000),  /*New Coords: 0.00, 64.00*/
     gsSP2Triangles(  2, 1, 0, 2, 3, 10, 11, 3  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x140a1973),  /*New Coords: 80.17, 101.81*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0f85f9a8),  /*New Coords: 62.09, -25.37*/
     gsSP2Triangles(  11, 10, 18, 11, 19, 20, 18, 19  ),
   gsSPVertex( palm_Background_VertList_0+153,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x0f85f9a8),  /*New Coords: 62.09, -25.37*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x0767d8f5),  /*New Coords: 29.62, -156.16*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP1Triangle(  11, 1, 0, 11  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  4, 19, 0, 4  ),
     gsSP2Triangles(  22, 23, 24, 22, 25, 26, 27, 25  ),
   gsSPVertex( palm_Background_VertList_0+181,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( palm_Background_VertList_0+175,30,0  ),
     gsSP1Triangle(  0, 2, 9, 0  ),
     gsSP1Triangle(  17, 18, 19, 17  ),
   gsSPVertex( palm_Background_VertList_0+30,30,0  ),
     gsSP1Triangle(  14, 1, 0, 14  ),
   gsSPVertex( palm_Background_VertList_0+28,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP2Triangles(  2, 0, 16, 2, 25, 3, 17, 25  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x140a1973),  /*New Coords: 80.17, 101.81*/
     gsSP2Triangles(  26, 17, 24, 26, 3, 25, 24, 3  ),
   gsSPVertex( palm_Background_VertList_0+173,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP1Triangle(  7, 4, 12, 7  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  15, 12, 4, 15  ),
   gsSPVertex( palm_Background_VertList_0+202,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/
     gsSP2Triangles(  6, 7, 8, 6, 0, 2, 4, 0  ),
     gsSP2Triangles(  12, 13, 14, 12, 19, 20, 21, 19  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP2Triangles(  21, 9, 19, 21, 25, 26, 27, 25  ),
   gsSPVertex( palm_Background_VertList_0+230,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPVertex( palm_Background_VertList_0+227,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x04541aa8),  /*New Coords: 17.32, 106.63*/
     gsSP1Triangle(  0, 2, 4, 0  ),
   gsSPVertex( palm_Background_VertList_0+27,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x0767d8f5),  /*New Coords: 29.62, -156.16*/
     gsSP1Triangle(  0, 25, 1, 0  ),
   gsSPVertex( palm_Background_VertList_0+230,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP2Triangles(  10, 11, 12, 10, 12, 6, 10, 12  ),
   gsSPVertex( palm_Background_VertList_0+27,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  2, 4, 0, 2  ),
   gsSPVertex( palm_Background_VertList_0+230,30,0  ),
     gsSP1Triangle(  19, 20, 21, 19  ),
     gsSP2Triangles(  22, 23, 24, 22, 25, 26, 27, 25  ),
   gsSPVertex( palm_Background_VertList_0+258,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( palm_Background_VertList_0+252,30,0  ),
     gsSP1Triangle(  0, 2, 9, 0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x04c7fa52),  /*New Coords: 19.12, -22.71*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP2Triangles(  5, 2, 10, 5, 14, 10, 2, 14  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  15, 2, 6, 15  ),
   gsSPVertex( palm_Background_VertList_0+156,30,0  ),
     gsSP1Triangle(  8, 1, 0, 8  ),
   gsSPVertex( palm_Background_VertList_0+154,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP2Triangles(  2, 0, 10, 2, 19, 3, 11, 19  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x140a1973),  /*New Coords: 80.17, 101.81*/
     gsSP2Triangles(  20, 11, 18, 20, 3, 19, 18, 3  ),
   gsSPVertex( palm_Background_VertList_0+153,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x0f85f9a8),  /*New Coords: 62.09, -25.37*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04badbb7),  /*New Coords: 18.92, -145.13*/
     gsSP1Triangle(  19, 11, 0, 19  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x021dd9b4),  /*New Coords: 8.46, -153.19*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP1Triangle(  2, 4, 0, 2  ),


//>-- MATERIAL 1: START ------------------------------------ 'palm_leaf_1'-------------------------------------------------

//Last: palm_leaf   Current: palm_leaf
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   palm_leaf,	G_IM_FMT_CI,	64, 16,	0, G_TX_WRAP,G_TX_WRAP, 6,4, 1,1 ),
   gsDPLoadTLUT_pal16(   0, palm_leaf_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( palm_Background_VertList_0+0,30,0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
     gsSP2Triangles(  8, 7, 15, 8, 9, 16, 17, 9  ),
     gsSP2Triangles(  18, 19, 20, 18, 19, 21, 20, 19  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  9, 11, 16, 9, 20, 22, 23, 20  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x00000009),  /*New Coords: 0.00, 0.61*/
     gsSP2Triangles(  21, 22, 20, 21, 26, 10, 9, 26  ),
   gsSPVertex( palm_Background_VertList_0+29,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 6, 7, 8, 6  ),
     gsSP2Triangles(  8, 7, 9, 8, 5, 10, 11, 5  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x00000002),  /*New Coords: 0.00, 0.18*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x071d0001),  /*New Coords: 28.46, 0.11*/
     gsSP2Triangles(  12, 6, 8, 12, 13, 12, 8, 13  ),
     gsSP2Triangles(  5, 11, 14, 5, 17, 18, 19, 17  ),
   gsSPVertex( palm_Background_VertList_0+27,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/
     gsSP2Triangles(  20, 0, 22, 20, 7, 6, 12, 7  ),
     gsSP2Triangles(  23, 20, 19, 23, 24, 0, 20, 24  ),
   gsSPVertex( palm_Background_VertList_0+55,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 7, 1, 0, 7  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP2Triangles(  16, 15, 21, 16, 17, 22, 23, 17  ),
     gsSP2Triangles(  24, 25, 26, 24, 25, 27, 26, 25  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  17, 19, 22, 17, 26, 28, 29, 26  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x00000009),  /*New Coords: 0.00, 0.61*/
     gsSP1Triangle(  27, 28, 26, 27  ),
   gsSPVertex( palm_Background_VertList_0+72,30,0  ),
     gsSP1Triangle(  14, 1, 0, 14  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/
     gsSP2Triangles(  15, 3, 16, 15, 19, 3, 15, 19  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( palm_Background_VertList_0+101,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( palm_Background_VertList_0+99,30,0  ),
     gsSP2Triangles(  1, 0, 5, 1, 2, 6, 7, 2  ),
     gsSP2Triangles(  8, 9, 10, 8, 9, 11, 10, 9  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  2, 4, 6, 2, 10, 12, 13, 10  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00000009),  /*New Coords: 0.00, 0.61*/
     gsSP2Triangles(  11, 12, 10, 11, 14, 3, 2, 14  ),
     gsSP2Triangles(  17, 18, 19, 17, 19, 18, 20, 19  ),
   gsSPVertex( palm_Background_VertList_0+128,30,0  ),
     gsSP2Triangles(  4, 5, 6, 4, 7, 8, 9, 7  ),
     gsSP2Triangles(  6, 5, 10, 6, 7, 11, 12, 7  ),
     gsSP2Triangles(  13, 14, 15, 13, 14, 16, 15, 14  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  7, 9, 11, 7, 15, 17, 18, 15  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x00000009),  /*New Coords: 0.00, 0.61*/
     gsSP2Triangles(  16, 17, 15, 16, 19, 8, 7, 19  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/
     gsSP2Triangles(  5, 22, 23, 5, 24, 22, 5, 24  ),
   gsSPVertex( palm_Background_VertList_0+157,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 3, 4, 5, 3  ),
     gsSP2Triangles(  3, 5, 6, 3, 9, 10, 11, 9  ),
   gsSPVertex( palm_Background_VertList_0+153,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/
     gsSP2Triangles(  14, 0, 16, 14, 7, 6, 8, 7  ),
     gsSP2Triangles(  17, 14, 13, 17, 18, 0, 14, 18  ),
   gsSPVertex( palm_Background_VertList_0+182,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 6, 7, 8, 6  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  6, 8, 9, 6, 3, 13, 4, 3  ),
   gsSPVertex( palm_Background_VertList_0+28,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/
     gsSP2Triangles(  0, 4, 6, 0, 2, 9, 10, 2  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x0caa0000),  /*New Coords: 50.66, 0.00*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x071d0001),  /*New Coords: 28.46, 0.11*/
     gsSP2Triangles(  2, 14, 9, 2, 0, 6, 15, 0  ),
     gsSP2Triangles(  20, 19, 21, 20, 22, 23, 19, 22  ),
   gsSPVertex( palm_Background_VertList_0+173,30,0  ),
     gsSP2Triangles(  23, 24, 25, 23, 26, 27, 28, 26  ),
   gsSPVertex( palm_Background_VertList_0+202,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( palm_Background_VertList_0+79,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0caa0000),  /*New Coords: 50.66, 0.00*/
     gsSP1Triangle(  10, 0, 2, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP1Triangle(  10, 2, 5, 10  ),
   gsSPVertex( palm_Background_VertList_0+195,30,0  ),
     gsSP1Triangle(  16, 22, 17, 16  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPVertex( palm_Background_VertList_0+224,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( palm_Background_VertList_0+107,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0caa0000),  /*New Coords: 50.66, 0.00*/
     gsSP1Triangle(  7, 0, 2, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP1Triangle(  7, 2, 5, 7  ),
   gsSPVertex( palm_Background_VertList_0+223,30,0  ),
     gsSP1Triangle(  13, 16, 14, 13  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 25, 23  ),
   gsSPVertex( palm_Background_VertList_0+252,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( palm_Background_VertList_0+141,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0caa0000),  /*New Coords: 50.66, 0.00*/
     gsSP1Triangle(  7, 0, 2, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP1Triangle(  7, 2, 5, 7  ),
   gsSPVertex( palm_Background_VertList_0+257,30,0  ),
     gsSP1Triangle(  5, 8, 6, 5  ),
   gsSPVertex( palm_Background_VertList_0+133,30,0  ),
     gsSP1Triangle(  5, 0, 18, 5  ),
   gsSPVertex( palm_Background_VertList_0+132,30,0  ),
     gsSP1Triangle(  0, 20, 1, 0  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/
     gsSP1Triangle(  22, 26, 28, 22  ),
   gsSPVertex( palm_Background_VertList_0+154,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/
     gsSP1Triangle(  0, 6, 9, 0  ),
     gsSP2Triangles(  14, 13, 15, 14, 16, 17, 13, 16  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- palm_Background -------------------------------------------------

 
 
 
 

//>-- Obj00: START ------------------------------------------ fern_background -------------------------------------------------

Vtx fern_background_VertList_0 [] = {
   { 27.18, 61.61, -27.91, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -105.80, 30.94, -229.35, 1, 0x1000, 0x03f9, 64, 84, 71, 255}, 
   { -149.08, -74.91, -184.66, 1, 0x1000, 0x0000, 64, 84, 71, 255}, 
   { -165.99, -192.97, -155.52, 1, 0x1000, 0x03f9, 158, 196, 181, 255}, 
   { -33.00, -162.29, 45.93, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -96.82, -70.27, -43.57, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -134.60, -294.63, 42.72, 1, 0x1000, 0x03f9, 95, 131, 104, 255}, 
   { -31.82, -286.15, 109.75, 1, 0x1000, 0x0000, 158, 196, 181, 255}, 
   { 91.04, -297.17, 134.88, 1, 0x1000, 0x03f9, 158, 196, 181, 255}, 
   { 128.82, -72.82, 48.59, 1, 0x0000, 0x03f9, 64, 84, 71, 255}, 
   { 174.27, 39.04, 84.09, 1, 0x0000, 0x03f9, 158, 196, 181, 255}, 
   { 172.24, 263.88, -8.94, 1, 0x1000, 0x03f9, 64, 84, 71, 255}, 
   { 62.52, 241.20, -61.35, 1, 0x1000, 0x0000, 45, 59, 50, 255}, 
   { -19.80, 205.26, -146.40, 1, 0x1000, 0x03f9, 45, 59, 50, 255}, 
   { -17.76, -19.57, -53.37, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -39.95, 49.99, -76.13, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -269.62, -30.30, -79.43, 1, 0x1000, 0x03f9, 64, 84, 71, 255}, 
   { -242.81, -110.72, 11.22, 1, 0x1000, 0x0000, 45, 59, 50, 255}, 
   { -206.08, -217.87, 61.95, 1, 0x1000, 0x03f9, 158, 196, 181, 255}, 
   { 23.60, -137.58, 65.25, 1, 0x0000, 0x03f9, 64, 84, 71, 255}, 
   { -56.04, -157.26, 48.90, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { 79.27, -236.27, 212.40, 1, 0x1000, 0x03f9, 158, 196, 181, 255}, 
   { 137.76, -130.49, 240.27, 1, 0x1000, 0x0000, 158, 196, 181, 255}, 
   { 212.34, -33.23, 195.86, 1, 0x1000, 0x03f9, 158, 196, 181, 255}, 
   { 77.03, 45.79, 32.37, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { 21.30, -34.22, -10.56, 1, 0x0000, 0x0000, 45, 59, 50, 255}, 
   { 125.91, -24.81, 50.85, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { 104.76, 217.59, 49.74, 1, 0x1000, 0x03f9, 64, 84, 71, 255}, 
   { -18.93, 206.67, 21.05, 1, 0x1000, 0x0000, 158, 196, 181, 255}, 
   { -104.46, 198.77, -73.08, 1, 0x1000, 0x03f9, 64, 84, 71, 255}, 
   { -16.10, -44.23, 16.79, 1, 0x0000, 0x0000, 158, 196, 181, 255}, 
   { 27.18, 61.61, -27.91, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
   { -149.08, -74.91, -184.66, 1, 0x1000, 0x0000, 64, 84, 71, 255}, 
   { 5.95, -61.80, 23.46, 1, 0x0000, 0x0000, 64, 84, 71, 255}, 
   { 65.50, 3.97, 37.52, 1, 0x0000, 0x0000, 64, 84, 71, 255}, 
   { -13.13, -30.42, 14.52, 1, 0x0000, 0x0000, 158, 196, 181, 255}, 
   { -5.58, -42.41, 10.72, 1, 0x0000, 0x0000, 158, 196, 181, 255}, 
   { -83.31, -43.63, -71.96, 1, 0x0000, 0x03f9, 45, 59, 50, 255}, 
};

Gfx fern_background_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'fern_texture'-------------------------------------------------

//Last:    Current: ferntex.png
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_FOG   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineLERP(   TEXEL0, 0, SHADE, 0,    TEXEL0, 0, TEXEL0, 0,    1, 0, 0, COMBINED,    TEXEL0, 0, 0, COMBINED ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2  ),
   gsDPLoadTextureBlock_4b(   ferntex,	G_IM_FMT_CI,	64, 32,	0, G_TX_WRAP,G_TX_WRAP, 6,5, 1,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, ferntex_tlut ),
   gsDPSetTextureFilter(   G_TF_BILERP ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( fern_background_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 2, 3, 4, 2  ),
     gsSP2Triangles(  5, 6, 7, 5, 7, 8, 9, 7  ),
     gsSP2Triangles(  10, 11, 12, 10, 12, 13, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 17, 18, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 22, 23, 24, 22  ),
     gsSP2Triangles(  25, 26, 27, 25, 25, 28, 29, 25  ),
   gsSPVertex( fern_background_VertList_0+29,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( fern_background_VertList_0+4,30,0  ),
     gsSP1Triangle(  26, 28, 0, 26  ),
     gsSP2Triangles(  29, 1, 3, 29, 29, 3, 5, 29  ),
   gsSPVertex( fern_background_VertList_0+10,30,0  ),
     gsSP2Triangles(  24, 0, 2, 24, 24, 2, 4, 24  ),
     gsSP2Triangles(  25, 5, 7, 25, 25, 7, 9, 25  ),
     gsSP2Triangles(  26, 10, 12, 26, 26, 12, 14, 26  ),
     gsSP2Triangles(  18, 15, 17, 18, 27, 15, 19, 27  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- fern_background -------------------------------------------------

 
 
 
 
 

 
//>-------------------------------------------------------------------------------------------------------------------------
//>----------------------------------------------------------- LOD_1 -------------------------------------------------------
//>-------------------------------------------------------------------------------------------------------------------------
 



//>-- Obj00: START ------------------------------------------ town_LOD1 -------------------------------------------------

Vtx town_LOD1_VertList_0 [] = {
   { 1441.86, 2552.43, 657.42, 1, 0xa637, 0x041a, 37, 46, 43, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x5f9f, 0x03e0, 34, 41, 40, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0xa637, 0x004e, 68, 91, 76, 255}, 
   { 3686.22, 828.23, 1976.07, 1, 0xf153, 0xf45e, 98, 135, 106, 255}, 
   { 1688.35, 2836.04, 1277.13, 1, 0xa5db, 0x0035, 68, 91, 76, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0xe4d5, 0x009d, 101, 140, 110, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x4ee0, 0x03e3, 55, 76, 64, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x4ee0, 0x0002, 170, 210, 195, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x33e9, 0x0002, 170, 210, 195, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x77b2, 0x03e3, 68, 91, 76, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x15f8, 0x03e7, 37, 46, 43, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0xc985, 0x001b, 50, 70, 59, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x5890, 0x03e7, 37, 46, 43, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x83fb, 0x0002, 68, 91, 76, 255}, 
   { 2221.95, 3406.83, 1539.13, 1, 0xa5db, 0xfc02, 34, 41, 40, 255}, 
   { 540.71, 5357.07, 1862.71, 1, 0x4ee0, 0xfc02, 93, 128, 102, 255}, 
   { -492.15, 5827.83, 1828.83, 1, 0x2933, 0xfc02, 93, 128, 102, 255}, 
   { 1604.64, 4353.70, 1603.35, 1, 0x77b2, 0xfc02, 68, 91, 76, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0x4ffd, 0x0024, 170, 210, 195, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x15cf, 0xfff7, 170, 210, 195, 255}, 
   { -1963.18, 1609.01, 808.03, 1, 0x4ffd, 0x03fe, 48, 62, 55, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0xed0b, 0xf4f0, 99, 136, 108, 255}, 
   { -2760.51, -284.39, 936.75, 1, 0xe81d, 0xfe2c, 56, 74, 63, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x06f0, 0x0024, 37, 46, 43, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x3069, 0x0024, 37, 46, 43, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0x257e, 0xf7e4, 95, 121, 108, 255}, 
   { -1406.43, 2773.57, 1599.33, 1, 0xa339, 0xf76f, 170, 210, 195, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0x8383, 0xf065, 95, 121, 108, 255}, 
   { -669.80, 3189.59, 1359.48, 1, 0xc3eb, 0x0031, 95, 121, 108, 255}, 
   { -388.67, 3130.49, 1117.51, 1, 0xb881, 0x03fe, 51, 72, 60, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xcec3, 0x03fe, 51, 71, 59, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x10814, 0x007a, 34, 41, 40, 255}, 
   { -3761.08, 414.02, 1461.60, 1, 0xecb2, 0x002d, 64, 84, 71, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x5aee, 0x0024, 64, 84, 71, 255}, 
   { -3494.29, 1446.74, -226.73, 1, 0x25ee, 0x0683, 34, 41, 40, 255}, 
   { -3235.55, 1118.08, 899.08, 1, 0xba48, 0x00ff, 64, 84, 71, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0xaa59, 0x0024, 95, 121, 108, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x9e44, 0x0400, 47, 67, 56, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0xc433, 0x0400, 38, 48, 44, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0xebf7, 0x0414, 34, 41, 40, 255}, 
   { -1922.34, 1629.95, 680.01, 1, 0x2bf8, 0x0414, 34, 41, 40, 255}, 
   { 1249.94, -327.22, 1140.40, 1, 0x69ac, 0x0aef, 43, 51, 46, 255}, 
   { 1139.29, -624.35, 1334.22, 1, 0x3a6e, 0x0075, 66, 86, 72, 255}, 
   { 1449.39, -653.67, 1141.78, 1, 0x4316, 0x0b1b, 69, 90, 75, 255}, 
   { 1043.35, -299.69, 1126.03, 1, 0x507b, 0x0add, 43, 51, 46, 255}, 
   { 888.15, -446.13, 1159.00, 1, 0x31fe, 0x0a8d, 43, 51, 46, 255}, 
   { 502.82, -541.47, 966.79, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 475.90, -547.05, 966.60, 1, 0x016b, 0x0025, 147, 207, 162, 255}, 
   { 483.89, -560.35, 504.05, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 470.24, -520.34, 965.73, 1, 0x006d, 0x0025, 66, 85, 72, 255}, 
   { 537.26, -948.80, 492.24, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 522.37, -946.82, 954.81, 1, 0x004b, 0x0025, 66, 85, 72, 255}, 
   { 526.45, -919.81, 954.82, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 549.52, -951.05, 955.58, 1, 0x012f, 0x0025, 131, 182, 143, 255}, 
   { 872.25, -1093.05, 492.24, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 863.01, -1104.91, 954.81, 1, 0x004b, 0x0025, 131, 182, 143, 255}, 
   { 841.77, -1087.72, 954.82, 1, 0xff4d, 0x0025, 66, 86, 72, 255}, 
   { 30.36, 3277.00, 914.78, 1, 0x2578, 0xffeb, 55, 72, 57, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x2583, 0xff60, 55, 72, 57, 255}, 
   { 502.25, 3602.84, 884.11, 1, 0x2f14, 0xfe42, 49, 69, 57, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x2ef4, 0xfdef, 49, 69, 57, 255}, 
   { -31.06, 30.46, 772.79, 1, 0x2438, 0x1071, 74, 90, 62, 255}, 
   { -898.07, 191.14, 798.48, 1, 0x1291, 0x0fa0, 53, 72, 57, 255}, 
   { 1569.09, -121.58, 585.38, 1, 0x174a, 0x3735, 255, 255, 255, 255}, 
   { 1601.45, -179.89, 823.63, 1, 0x140a, 0x1973, 255, 255, 255, 255}, 
   { 1570.84, -199.20, 808.89, 1, 0x0454, 0x1aa8, 255, 255, 255, 255}, 
   { 1532.69, -148.77, 584.57, 1, 0x0354, 0x392b, 255, 255, 255, 255}, 
   { 1551.37, -166.64, 804.61, 1, 0xf464, 0x19a2, 255, 255, 255, 255}, 
   { 1581.39, -228.50, 969.40, 1, 0x04c7, 0xfa52, 255, 255, 255, 255}, 
   { 1565.41, -202.69, 966.95, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 1602.21, -212.42, 980.92, 1, 0x0f85, 0xf9a8, 255, 255, 255, 255}, 
   { 1596.36, -250.02, 1168.84, 1, 0x0767, 0xd8f5, 255, 255, 255, 255}, 
   { 1581.28, -259.17, 1169.47, 1, 0x04ba, 0xdbb7, 255, 255, 255, 255}, 
   { 1639.90, -312.25, 1128.23, 1, 0x0b94, 0x0100, 255, 255, 255, 255}, 
   { 1730.89, -310.81, 1081.14, 1, 0x04b5, 0x00df, 255, 255, 255, 255}, 
   { 1743.63, -266.14, 1113.89, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { 1552.67, -330.79, 1144.41, 1, 0x0cbc, 0x00e8, 255, 255, 255, 255}, 
   { 1578.53, -253.16, 1173.28, 1, 0x0c95, 0x0006, 255, 255, 255, 255}, 
   { 1455.83, -340.81, 1128.61, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 1482.27, -383.52, 1117.09, 1, 0x06b7, 0x0100, 255, 255, 255, 255}, 
   { 1355.51, -377.64, 1005.55, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { 1794.65, -254.94, 1013.33, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { 1498.37, -262.34, 1169.89, 1, 0x0cb0, 0x00ce, 255, 255, 255, 255}, 
   { 1414.47, -294.65, 1110.49, 1, 0x06ca, 0x0100, 255, 255, 255, 255}, 
   { 1749.50, -210.94, 1101.70, 1, 0x04b5, 0x00df, 255, 255, 255, 255}, 
   { 1661.51, -196.24, 1152.11, 1, 0x0b94, 0x0100, 255, 255, 255, 255}, 
   { 846.97, -127.59, 1043.78, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { 823.06, -87.77, 1011.03, 1, 0x04b5, 0x00df, 255, 255, 255, 255}, 
   { 820.29, -172.50, 943.21, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { 1071.78, -98.91, 515.27, 1, 0x174a, 0x3735, 255, 255, 255, 255}, 
   { 1115.01, -105.68, 527.51, 1, 0x0354, 0x392b, 255, 255, 255, 255}, 
   { 1045.31, -89.82, 749.50, 1, 0x0454, 0x1aa8, 255, 255, 255, 255}, 
   { 1118.89, -61.43, 526.44, 1, 0xef2d, 0x3836, 255, 255, 255, 255}, 
   { 1050.98, -55.18, 734.49, 1, 0xf464, 0x19a2, 255, 255, 255, 255}, 
   { 1015.07, -40.81, 896.83, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 1010.31, -68.81, 907.82, 1, 0x04c7, 0xfa52, 255, 255, 255, 255}, 
   { 982.82, -61.02, 910.81, 1, 0x0f85, 0xf9a8, 255, 255, 255, 255}, 
   { 1007.09, -82.70, 753.51, 1, 0x140a, 0x1973, 255, 255, 255, 255}, 
   { 976.22, -31.79, 1103.88, 1, 0x04ba, 0xdbb7, 255, 255, 255, 255}, 
   { 959.36, -31.06, 1098.73, 1, 0x0767, 0xd8f5, 255, 255, 255, 255}, 
   { 884.17, -20.34, 1058.11, 1, 0x0b94, 0x0100, 255, 255, 255, 255}, 
   { 1035.40, -86.88, 1110.21, 1, 0x0cbc, 0x00e8, 255, 255, 255, 255}, 
   { 1125.01, -108.17, 1110.22, 1, 0x06b7, 0x0100, 255, 255, 255, 255}, 
   { 1129.30, -56.95, 1106.38, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { 1261.48, -81.53, 1014.24, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { 883.27, -169.59, 1031.59, 1, 0x04b5, 0x00df, 255, 255, 255, 255}, 
   { 1152.39, -5.46, 1074.99, 1, 0x06ca, 0x0100, 255, 255, 255, 255}, 
   { 1051.30, 2.73, 1111.38, 1, 0x0cb0, 0x00ce, 255, 255, 255, 255}, 
   { 975.70, -17.83, 1107.50, 1, 0x021d, 0xd9b4, 255, 255, 255, 255}, 
   { 975.98, -24.10, 1105.33, 1, 0x036c, 0xdab5, 255, 255, 255, 255}, 
   { 954.12, -115.38, 1082.00, 1, 0x0b94, 0x0100, 255, 255, 255, 255}, 
   { 542.90, -661.05, 1176.17, 1, 0xfd29, 0x0b11, 43, 51, 46, 255}, 
   { 591.98, -934.39, 1178.50, 1, 0xe66b, 0x0b49, 66, 86, 72, 255}, 
   { 851.42, -764.02, 1391.25, 1, 0x0ec5, 0x00dd, 66, 86, 72, 255}, 
   { 1117.29, -1061.58, 1167.67, 1, 0x119b, 0x0b64, 146, 206, 161, 255}, 
   { 1176.67, -893.45, 1161.39, 1, 0x2223, 0x0b19, 43, 51, 46, 255}, 
   { 927.63, -1117.47, 1173.59, 1, 0x04d6, 0x0b3c, 146, 206, 161, 255}, 
   { 1001.69, -861.64, 1282.10, 1, 0x10a8, 0xfee6, 66, 86, 72, 255}, 
   { 951.18, -901.45, 1282.10, 1, 0x0d3c, 0xfee6, 43, 51, 46, 255}, 
   { 1060.84, -1035.76, 1016.01, 1, 0x0d3c, 0x24fa, 146, 206, 161, 255}, 
   { 867.31, -891.72, 1291.71, 1, 0x0709, 0xfee6, 43, 51, 46, 255}, 
   { 825.53, -830.62, 1304.04, 1, 0x02f9, 0xfee6, 43, 51, 46, 255}, 
   { 728.67, -903.18, 1016.01, 1, 0x02f9, 0x24fa, 146, 206, 161, 255}, 
   { 813.08, -735.34, 1306.42, 1, 0xfef2, 0xfee6, 43, 51, 46, 255}, 
   { 622.08, -774.45, 1019.20, 1, 0xfef2, 0x24fa, 105, 144, 115, 255}, 
   { 711.83, -630.93, 1228.59, 1, 0xfab6, 0xfee6, 43, 51, 46, 255}, 
   { 1163.66, -954.73, 1016.01, 1, 0x10a8, 0x24fa, 105, 144, 115, 255}, 
   { 1056.91, -1026.61, 838.09, 1, 0x0d3c, 0x40b4, 43, 51, 46, 255}, 
   { 815.66, -998.02, 838.09, 1, 0x0709, 0x40b4, 43, 51, 46, 255}, 
   { 809.70, -1006.00, 1016.01, 1, 0x0709, 0x24fa, 146, 206, 161, 255}, 
   { 697.16, -869.18, 841.27, 1, 0x02f9, 0x40b4, 43, 51, 46, 255}, 
   { 1228.89, -818.64, 994.07, 1, 0x0a98, 0x1ca9, 66, 86, 72, 255}, 
   { 1125.19, -769.87, 1186.31, 1, 0x0a98, 0xf695, 43, 51, 46, 255}, 
   { 562.92, -664.90, 1027.53, 1, 0xfc0d, 0x4000, 66, 86, 72, 255}, 
   { 665.50, -575.56, 1120.07, 1, 0x0000, 0x0000, 43, 51, 46, 255}, 
   { 572.81, -666.07, 849.60, 1, 0xf85c, 0x4000, 43, 51, 46, 255}, 
   { 604.83, -604.80, 1019.81, 1, 0xfc0d, 0x0000, 43, 51, 46, 255}, 
   { 1280.91, -462.04, 994.07, 1, 0x1021, 0x22ae, 66, 86, 72, 255}, 
   { 1200.56, -539.21, 1186.31, 1, 0x1021, 0xfca1, 43, 51, 46, 255}, 
   { 1282.25, -680.51, 1186.31, 1, 0x07de, 0xfca1, 43, 51, 46, 255}, 
   { 1274.95, -470.01, 816.15, 1, 0x1021, 0x410b, 43, 51, 46, 255}, 
   { 1398.02, -673.73, 994.07, 1, 0x07de, 0x22ae, 142, 201, 157, 255}, 
   { 1388.11, -674.67, 816.15, 1, 0x07de, 0x40ef, 43, 51, 46, 255}, 
   { 1155.68, -948.77, 838.09, 1, 0x10a8, 0x40b4, 43, 51, 46, 255}, 
   { 1220.33, -813.55, 816.15, 1, 0x0a98, 0x3863, 43, 51, 46, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x2ef4, 0xfdef, 34, 41, 40, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x33de, 0xfd2f, 34, 41, 40, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x23dc, 0xf99a, 34, 41, 40, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x1df8, 0x00bc, 34, 41, 40, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x2583, 0xff60, 34, 41, 40, 255}, 
   { -400.27, 4105.48, 1066.10, 1, 0x1cb4, 0xfbb3, 34, 41, 40, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x20b4, 0xfa87, 34, 41, 40, 255}, 
   { 502.25, 3602.84, 884.11, 1, 0x2f14, 0xfe42, 49, 69, 57, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x477a, 0x1059, 61, 77, 58, 255}, 
   { 1441.86, 2552.43, 657.42, 1, 0x4236, 0x039b, 46, 66, 56, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x33de, 0xfd2f, 46, 66, 56, 255}, 
   { 835.95, 129.61, 711.64, 1, 0x35df, 0x0ff0, 74, 90, 62, 255}, 
   { 30.36, 3277.00, 914.78, 1, 0x2578, 0xffeb, 55, 72, 57, 255}, 
   { 888.15, -446.13, 1159.00, 1, 0x31fe, 0x0a8d, 43, 51, 46, 255}, 
   { 851.42, -764.02, 1391.25, 1, 0x0ec5, 0x00dd, 66, 86, 72, 255}, 
   { 1139.29, -624.35, 1334.22, 1, 0x3d52, 0x0103, 66, 86, 72, 255}, 
   { 687.77, -426.71, 1171.20, 1, 0x18cd, 0x0b09, 43, 51, 46, 255}, 
   { 542.90, -661.05, 1176.17, 1, 0xfd29, 0x0b11, 43, 51, 46, 255}, 
   { 1176.67, -893.45, 1161.39, 1, 0x2223, 0x0b19, 43, 51, 46, 255}, 
   { 1311.97, -840.34, 1128.42, 1, 0x3476, 0x0b39, 136, 192, 150, 255}, 
   { 1449.39, -653.67, 1141.78, 1, 0x4316, 0x0b1b, 69, 90, 75, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0xc985, 0x03e7, 37, 46, 43, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0xc985, 0x001b, 50, 70, 59, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0xc7f2, 0x001b, 68, 91, 76, 255}, 
   { 1508.44, 2593.28, 778.87, 1, 0xa5db, 0x03e3, 68, 91, 76, 255}, 
   { 1688.35, 2836.04, 1277.13, 1, 0xa5db, 0x0035, 68, 91, 76, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x77b2, 0x03e3, 68, 91, 76, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x15f8, 0x001b, 55, 76, 64, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0x06f0, 0x03fe, 37, 46, 43, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x06f0, 0x0024, 37, 46, 43, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xcec3, 0x03fe, 51, 71, 59, 255}, 
   { -388.67, 3130.49, 1117.51, 1, 0x9e44, 0x0000, 51, 72, 60, 255}, 
   { 510.81, -554.76, 504.24, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 502.82, -541.47, 966.79, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 483.89, -560.35, 504.05, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 478.23, -533.64, 503.18, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 470.24, -520.34, 965.73, 1, 0x006d, 0x0025, 66, 85, 72, 255}, 
   { 541.35, -921.78, 492.25, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 537.26, -948.80, 492.24, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 526.45, -919.81, 954.82, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 564.42, -953.03, 493.02, 1, 0x012f, 0x13d7, 56, 41, 34, 255}, 
   { 549.52, -951.05, 955.58, 1, 0x012f, 0x0025, 131, 182, 143, 255}, 
   { 851.01, -1075.87, 492.25, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 872.25, -1093.05, 492.24, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 841.77, -1087.72, 954.82, 1, 0xff4d, 0x0025, 66, 86, 72, 255}, 
   { -898.07, 191.14, 798.48, 1, 0x1291, 0x0fa0, 53, 72, 57, 255}, 
   { -31.06, 30.46, 772.79, 1, 0x2438, 0x1071, 74, 90, 62, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x1df8, 0x00bc, 46, 66, 56, 255}, 
   { 1509.54, -112.78, 596.55, 1, 0xef2d, 0x3836, 255, 255, 255, 255}, 
   { 1532.69, -148.77, 584.57, 1, 0x0354, 0x392b, 255, 255, 255, 255}, 
   { 1551.37, -166.64, 804.61, 1, 0xf464, 0x19a2, 255, 255, 255, 255}, 
   { 1551.37, -166.64, 804.61, 1, 0xf464, 0x19a2, 255, 255, 255, 255}, 
   { 1570.84, -199.20, 808.89, 1, 0x0454, 0x1aa8, 255, 255, 255, 255}, 
   { 1565.41, -202.69, 966.95, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { 1570.84, -199.20, 808.89, 1, 0x0454, 0x1aa8, 255, 255, 255, 255}, 
   { 1601.45, -179.89, 823.63, 1, 0x140a, 0x1973, 255, 255, 255, 255}, 
   { 1581.39, -228.50, 969.40, 1, 0x04c7, 0xfa52, 255, 255, 255, 255}, 
   { 1581.39, -228.50, 969.40, 1, 0x04c7, 0xfa52, 255, 255, 255, 255}, 
   { 1602.21, -212.42, 980.92, 1, 0x0f85, 0xf9a8, 255, 255, 255, 255}, 
   { 1581.28, -259.17, 1169.47, 1, 0x04ba, 0xdbb7, 255, 255, 255, 255}, 
   { 1575.53, -247.14, 1177.62, 1, 0x021d, 0xd9b4, 255, 255, 255, 255}, 
   { 1578.53, -253.16, 1173.28, 1, 0x036c, 0xdab5, 255, 255, 255, 255}, 
   { 631.97, -775.62, 841.27, 1, 0xfef2, 0x40b4, 43, 51, 46, 255}, 
   { 697.16, -869.18, 841.27, 1, 0x02f9, 0x40b4, 43, 51, 46, 255}, 
   { 622.08, -774.45, 1019.20, 1, 0xfef2, 0x24fa, 105, 144, 115, 255}, 
   { 606.00, -621.65, 849.60, 1, 0xf85c, 0x0000, 43, 51, 46, 255}, 
   { 572.81, -666.07, 849.60, 1, 0xf85c, 0x4000, 43, 51, 46, 255}, 
   { 604.83, -604.80, 1019.81, 1, 0xfc0d, 0x0000, 43, 51, 46, 255}, 
   { -31.06, 30.46, 772.79, 1, 0x2438, 0x1071, 74, 90, 62, 255}, 
   { 835.95, 129.61, 711.64, 1, 0x35df, 0x0ff0, 74, 90, 62, 255}, 
   { 30.36, 3277.00, 914.78, 1, 0x2578, 0xffeb, 55, 72, 57, 255}, 
};

Gfx town_LOD1_Static_PolyList_0[] = { 



//>-- MATERIAL 6: START ------------------------------------ 'Beach-Rocky-Hill'-------------------------------------------------

//Last: Sand_Texture_4_Hill   Current: Sand_Texture_4_Hill
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_4_Hill,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_4_Hill_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x782b0011),  /*New Coords: 240.34, 0.56*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x3a19fdf4),  /*New Coords: 116.20, -16.37*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x1bb1ffd0),  /*New Coords: 55.39, -1.48*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xfdf10033),  /*New Coords: -4.11, 1.62*/
     gsSP2Triangles(  2, 3, 5, 2, 6, 7, 5, 6  ),
     gsSP1Triangle(  3, 6, 5, 3  ),


//>-- MATERIAL 7: START ------------------------------------ 'Grass-Village'-------------------------------------------------

//Last: Grass_Texture_2   Current: Grass_Texture_2
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_2,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_2_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x1df800bc),  /*New Coords: 59.94, 5.90*/
     gsSP1Triangle(  8, 28, 29, 8  ),
   gsSPVertex( town_LOD1_VertList_0+58,30,0  ),
     gsSP1Triangle(  1, 2, 0, 1  ),
   gsSPVertex( town_LOD1_VertList_0+37,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1df800bc),  /*New Coords: 59.94, 5.90*/
     gsSP1Triangle(  24, 20, 0, 24  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfdb6084d),  /*New Coords: -4.57, 66.43*/
     gsSP1Triangle(  25, 0, 3, 25  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xf2fa11a9),  /*New Coords: -26.05, 141.29*/
     gsSP1Triangle(  2, 25, 3, 2  ),
   gsSPVertex( town_LOD1_VertList_0+124,30,0  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
     gsSP2Triangles(  24, 25, 26, 24, 21, 27, 26, 21  ),
     gsSP1Triangle(  22, 21, 28, 22  ),
   gsSPVertex( town_LOD1_VertList_0+153,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_LOD1_VertList_0+152,30,0  ),
     gsSP1Triangle(  4, 0, 5, 4  ),
   gsSPVertex( town_LOD1_VertList_0+149,30,0  ),
     gsSP1Triangle(  8, 3, 0, 8  ),
   gsSPVertex( town_LOD1_VertList_0+178,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( town_LOD1_VertList_0+145,30,0  ),
     gsSP1Triangle(  6, 0, 2, 6  ),
     gsSP2Triangles(  4, 0, 5, 4, 7, 11, 8, 7  ),
     gsSP1Triangle(  8, 10, 7, 8  ),
   gsSPVertex( town_LOD1_VertList_0+203,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),


//>-- MATERIAL 8: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

//Last: Homes_Wall_Clean   Current: Homes_Wall_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Clean,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_LOD1_VertList_0+116,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 6, 4  ),
     gsSP2Triangles(  5, 7, 8, 5, 8, 7, 9, 8  ),
     gsSP2Triangles(  10, 3, 11, 10, 12, 13, 6, 12  ),
     gsSP2Triangles(  14, 6, 8, 14, 10, 15, 16, 10  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x00004000),  /*New Coords: 0.00, 128.00*/
     gsSP2Triangles(  17, 9, 18, 17, 19, 17, 20, 19  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xfab624fa),  /*New Coords: -42.28, 73.95*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xfab640b4),  /*New Coords: -42.28, 129.41*/
     gsSP2Triangles(  8, 17, 19, 8, 21, 22, 23, 21  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xffa4fca1),  /*New Coords: -2.87, -6.74*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xffa422ae),  /*New Coords: -2.87, 69.36*/
     gsSP2Triangles(  23, 16, 15, 23, 24, 21, 25, 24  ),
     gsSP1Triangle(  26, 25, 15, 26  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x0a981ca9),  /*New Coords: 84.76, 57.32*/
     gsSP1Triangle(  27, 28, 15, 27  ),
     gsSP2Triangles(  3, 13, 12, 3, 2, 4, 13, 2  ),
     gsSP2Triangles(  10, 1, 3, 10, 13, 4, 6, 13  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xfab6fee6),  /*New Coords: -42.28, -2.20*/
     gsSP2Triangles(  6, 5, 8, 6, 17, 8, 9, 17  ),
     gsSP2Triangles(  27, 10, 11, 27, 14, 12, 6, 14  ),
   gsSPVertex( town_LOD1_VertList_0+203,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( town_LOD1_VertList_0+117,30,0  ),
     gsSP1Triangle(  0, 9, 15, 0  ),
     gsSP1Triangle(  19, 16, 17, 19  ),
   gsSPVertex( town_LOD1_VertList_0+204,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xfab640b4),  /*New Coords: -42.28, 129.41*/
     gsSP1Triangle(  3, 5, 7, 3  ),
   gsSPVertex( town_LOD1_VertList_0+137,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( town_LOD1_VertList_0+131,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xffa422ae),  /*New Coords: -2.87, 69.36*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x07de410b),  /*New Coords: 62.95, 130.09*/
     gsSP2Triangles(  10, 8, 0, 10, 11, 9, 10, 11  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xffa440ef),  /*New Coords: -2.87, 129.87*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x07de40ef),  /*New Coords: 62.95, 129.87*/
     gsSP1Triangle(  13, 11, 0, 13  ),
   gsSPVertex( town_LOD1_VertList_0+126,30,0  ),
     gsSP1Triangle(  0, 17, 5, 0  ),
   gsSPVertex( town_LOD1_VertList_0+119,30,0  ),
     gsSP1Triangle(  8, 0, 9, 8  ),
   gsSPVertex( town_LOD1_VertList_0+118,30,0  ),
     gsSP1Triangle(  1, 0, 11, 1  ),


//>-- MATERIAL 9: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

//Last: Homes_Roof_Straw_Clean   Current: Homes_Roof_Straw_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Roof_Straw_Clean,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Homes_Roof_Straw_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x3d520103),  /*New Coords: 122.65, 8.12*/
     gsSP2Triangles(  12, 13, 14, 12, 12, 15, 13, 12  ),
     gsSP1Triangle(  15, 16, 13, 15  ),
   gsSPVertex( town_LOD1_VertList_0+87,30,0  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x0e410021),  /*New Coords: 28.51, 1.05*/
     gsSP2Triangles(  27, 28, 26, 27, 29, 27, 26, 29  ),
     gsSP1Triangle(  29, 26, 25, 29  ),
   gsSPVertex( town_LOD1_VertList_0+145,30,0  ),
     gsSP1Triangle(  13, 14, 15, 13  ),
     gsSP2Triangles(  13, 16, 14, 13, 16, 17, 14, 16  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x3a6e0075),  /*New Coords: 116.86, 3.69*/
     gsSP2Triangles(  18, 19, 15, 18, 19, 20, 15, 19  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x0e410021),  /*New Coords: 28.51, 1.05*/     gsSP1Triangle(  14, 18, 15, 14  ),


//>-- MATERIAL 11: START ------------------------------------ 'palm_trunk_1'-------------------------------------------------

//Last: foliage_trunk_1   Current: foliage_trunk_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   foliage_trunk_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 ),
   gsDPLoadTLUT_pal16(   0, foliage_trunk_1_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( town_LOD1_VertList_0+58,30,0  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 7, 9, 8  ),
     gsSP2Triangles(  7, 10, 11, 7, 6, 12, 10, 6  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x036cdab5),  /*New Coords: 13.69, -149.16*/
     gsSP2Triangles(  12, 13, 14, 12, 14, 19, 11, 14  ),
   gsSPVertex( town_LOD1_VertList_0+87,30,0  ),
     gsSP2Triangles(  2, 3, 4, 2, 3, 5, 6, 3  ),
     gsSP2Triangles(  7, 8, 4, 7, 8, 9, 10, 8  ),
     gsSP2Triangles(  11, 12, 9, 11, 21, 22, 7, 21  ),
   gsSPVertex( town_LOD1_VertList_0+63,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( town_LOD1_VertList_0+179,30,0  ),
     gsSP1Triangle(  14, 15, 16, 14  ),
     gsSP2Triangles(  17, 18, 19, 17, 20, 21, 22, 20  ),
     gsSP2Triangles(  23, 24, 25, 23, 26, 19, 27, 26  ),
     gsSP1Triangle(  23, 25, 19, 23  ),
   gsSPVertex( town_LOD1_VertList_0+89,30,0  ),
     gsSP1Triangle(  8, 0, 2, 8  ),
     gsSP2Triangles(  2, 1, 4, 2, 4, 5, 2, 4  ),
     gsSP2Triangles(  2, 6, 8, 2, 6, 9, 7, 6  ),
     gsSP2Triangles(  6, 5, 9, 6, 20, 9, 5, 20  ),


//>-- MATERIAL 12: START ------------------------------------ 'palm_leaf_1'-------------------------------------------------

//Last: palm_leaf   Current: palm_leaf
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   palm_leaf,	G_IM_FMT_CI,	64, 16,	0, G_TX_WRAP,G_TX_WRAP, 6,4, 1,1 ),
   gsDPLoadTLUT_pal16(   0, palm_leaf_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( town_LOD1_VertList_0+58,30,0  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 20, 18  ),
     gsSP2Triangles(  21, 20, 22, 21, 17, 16, 23, 17  ),
     gsSP2Triangles(  20, 19, 24, 20, 22, 20, 25, 22  ),
     gsSP2Triangles(  17, 23, 26, 17, 17, 26, 27, 17  ),
   gsSPVertex( town_LOD1_VertList_0+86,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 14, 1, 0, 14  ),
     gsSP2Triangles(  15, 16, 17, 15, 16, 18, 17, 16  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP2Triangles(  0, 2, 19, 0, 17, 20, 21, 17  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00000009),  /*New Coords: 0.00, 0.61*/
     gsSP2Triangles(  18, 20, 17, 18, 0, 19, 24, 0  ),
   gsSPVertex( town_LOD1_VertList_0+71,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/
     gsSP2Triangles(  0, 2, 4, 0, 8, 5, 7, 8  ),
     gsSP2Triangles(  12, 7, 11, 12, 0, 4, 14, 0  ),
   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/
     gsSP1Triangle(  28, 29, 15, 28  ),
   gsSPVertex( town_LOD1_VertList_0+100,30,0  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x0caa0000),  /*New Coords: 50.66, 0.00*/
     gsSP1Triangle(  9, 1, 3, 9  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x0c950006),  /*New Coords: 50.33, 0.41*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x07110007),  /*New Coords: 28.27, 0.48*/
     gsSP1Triangle(  9, 3, 7, 9  ),
   gsSPVertex( town_LOD1_VertList_0+86,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x0b940000),  /*New Coords: 46.32, 0.00*/
     gsSP1Triangle(  13, 0, 24, 13  ),


//>-- MATERIAL 13: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

//Last: wood_dock_pillars   Current: wood_dock_pillars
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,1 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_pillars_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_LOD1_VertList_0+29,30,0  ),
     gsSP2Triangles(  17, 18, 19, 17, 19, 18, 20, 19  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 22, 21, 24  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( town_LOD1_VertList_0+174,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
     gsSP2Triangles(  6, 5, 7, 6, 8, 9, 10, 8  ),
     gsSP2Triangles(  11, 12, 9, 11, 13, 14, 15, 13  ),


//>-- MATERIAL 14: START ------------------------------------ 'Grass_to_Rock'-------------------------------------------------

//Last:    Current: GrasstoRock
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   GrasstoRock,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, GrasstoRock_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x15f8001b),  /*New Coords: 43.94, 0.85*/
     gsSP2Triangles(  0, 1, 2, 0, 10, 6, 11, 10  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xc7f2001b),  /*New Coords: 399.90, 0.85*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x5890001b),  /*New Coords: 177.13, 0.85*/
     gsSP2Triangles(  2, 9, 12, 2, 10, 12, 9, 10  ),
   gsSPVertex( town_LOD1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xc4330000),  /*New Coords: -119.60, 0.00*/
     gsSP1Triangle(  8, 9, 1, 8  ),
   gsSPVertex( town_LOD1_VertList_0+20,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2bf80014),  /*New Coords: -424.06, 0.64*/
     gsSP1Triangle(  19, 20, 0, 19  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x2bf803eb),  /*New Coords: -424.06, 31.36*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x9e440000),  /*New Coords: -195.47, 0.00*/
     gsSP2Triangles(  0, 20, 17, 0, 9, 0, 17, 9  ),
   gsSPVertex( town_LOD1_VertList_0+147,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x15f803e7),  /*New Coords: 43.94, 31.24*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xc7f203e7),  /*New Coords: 399.90, 31.24*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x589003e7),  /*New Coords: 177.13, 31.24*/
     gsSP2Triangles(  19, 0, 20, 19, 7, 21, 8, 7  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x5890001b),  /*New Coords: 177.13, 0.85*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x9e440400),  /*New Coords: -195.47, 32.00*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xc4330000),  /*New Coords: -119.60, 0.00*/
     gsSP2Triangles(  25, 0, 24, 25, 29, 1, 28, 29  ),


//>-- MATERIAL 15: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

//Last: RocktoFerns   Current: RocktoFerns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   RocktoFerns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, RocktoFerns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xa5db03e3),  /*New Coords: 331.71, 31.11*/
     gsSP2Triangles(  5, 4, 2, 5, 6, 7, 8, 6  ),
     gsSP2Triangles(  7, 6, 9, 7, 4, 13, 9, 4  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xf76503e0),  /*New Coords: 494.79, 31.01*/
     gsSP2Triangles(  1, 5, 2, 1, 18, 19, 20, 18  ),
   gsSPVertex( town_LOD1_VertList_0+28,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_LOD1_VertList_0+20,30,0  ),
     gsSP1Triangle(  0, 9, 8, 0  ),
     gsSP1Triangle(  3, 8, 10, 3  ),
   gsSPVertex( town_LOD1_VertList_0+19,30,0  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x0708040f),  /*New Coords: -497.93, 32.49*/
     gsSP1Triangle(  0, 20, 1, 0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x0447fffd),  /*New Coords: -503.44, -0.09*/
     gsSP1Triangle(  3, 20, 0, 3  ),
   gsSPVertex( town_LOD1_VertList_0+6,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x293303e3),  /*New Coords: 82.41, 31.11*/
     gsSP1Triangle(  5, 0, 2, 5  ),
     gsSP1Triangle(  7, 1, 3, 7  ),
   gsSPVertex( town_LOD1_VertList_0+151,30,0  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( town_LOD1_VertList_0+18,30,0  ),
     gsSP1Triangle(  0, 2, 10, 0  ),
   gsSPVertex( town_LOD1_VertList_0+163,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),


//>-- MATERIAL 16: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

//Last: ground_cover_ferns   Current: ground_cover_ferns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( town_LOD1_VertList_0+0,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 13, 4, 14, 13  ),
     gsSP2Triangles(  7, 15, 16, 7, 7, 13, 17, 7  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xc3bff554),  /*New Coords: 391.50, -85.35*/
     gsSP2Triangles(  3, 14, 4, 3, 21, 22, 19, 21  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0xb50fee7e),  /*New Coords: -149.88, -140.06*/
     gsSP1Triangle(  26, 25, 27, 26  ),
   gsSPVertex( town_LOD1_VertList_0+21,30,0  ),
     gsSP1Triangle(  10, 0, 11, 10  ),
   gsSPVertex( town_LOD1_VertList_0+18,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x895bf68c),  /*New Coords: 274.71, -75.62*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x532efb11),  /*New Coords: 166.36, -39.44*/
     gsSP1Triangle(  0, 9, 15, 0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xc3bff554),  /*New Coords: 391.50, -85.35*/
     gsSP2Triangles(  14, 1, 17, 14, 0, 18, 17, 0  ),
     gsSP2Triangles(  3, 1, 14, 3, 5, 8, 10, 5  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x4ffd0024),  /*New Coords: -352.02, 1.14*/
     gsSP1Triangle(  8, 0, 10, 8  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x8383f065),  /*New Coords: -248.97, -124.84*/
     gsSP1Triangle(  0, 8, 9, 0  ),
   gsSPVertex( town_LOD1_VertList_0+13,30,0  ),
     gsSP1Triangle(  4, 0, 1, 4  ),
   gsSPVertex( town_LOD1_VertList_0+7,30,0  ),
     gsSP1Triangle(  1, 0, 9, 1  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xecd0ed83),  /*New Coords: -38.37, -147.89*/
     gsSP2Triangles(  8, 0, 10, 8, 19, 16, 18, 19  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x895bf68c),  /*New Coords: 274.71, -75.62*/
     gsSP1Triangle(  29, 11, 26, 29  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xc3bff554),  /*New Coords: 391.50, -85.35*/
     gsSP1Triangle(  12, 11, 28, 12  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- town_LOD1 -------------------------------------------------

 
 
 
 
 
//>-- Obj01: START ------------------------------------------ town_transp_LOD1 -------------------------------------------------

Vtx town_transp_LOD1_VertList_0 [] = {
   { -496.75, 239.80, -117.46, 1, 0xe3f5, 0xfd0d, 71, 93, 77, 255}, 
   { -378.64, 398.41, -116.47, 1, 0xe7f5, 0xfd0d, 43, 51, 46, 255}, 
   { -732.49, 661.76, -207.68, 1, 0xe7f5, 0x732d, 43, 51, 46, 255}, 
   { -852.70, 502.63, -210.52, 1, 0xe3f5, 0x732d, 71, 93, 77, 255}, 
   { -482.72, -173.40, -132.64, 1, 0x1213, 0x10c7, 43, 51, 46, 255}, 
   { -482.72, -173.40, -108.11, 1, 0x1213, 0x1512, 71, 93, 77, 255}, 
   { -595.78, 119.52, -108.11, 1, 0x1825, 0x1512, 71, 93, 77, 255}, 
   { -317.54, 73.74, -108.11, 1, 0xfde2, 0xf1c8, 43, 51, 46, 255}, 
   { -106.45, 467.30, -108.11, 1, 0x0725, 0xe0c0, 43, 51, 46, 255}, 
   { -294.54, 492.57, -108.11, 1, 0x052e, 0xb890, 43, 51, 46, 255}, 
   { -159.34, -329.08, -132.64, 1, 0x0b23, 0x10c7, 48, 58, 51, 255}, 
   { -159.34, -329.08, -108.11, 1, 0x0b23, 0x1512, 138, 193, 151, 255}, 
   { 98.20, -298.82, -108.11, 1, 0xfcef, 0x7941, 138, 193, 151, 255}, 
   { 98.20, -298.82, -132.64, 1, 0x0620, 0x10c7, 64, 82, 69, 255}, 
   { -294.54, 492.57, -132.64, 1, 0x216a, 0x10c7, 43, 51, 46, 255}, 
   { -595.78, 119.52, -132.64, 1, 0x1825, 0x10c7, 44, 53, 47, 255}, 
};

Gfx town_transp_LOD1_Static_PolyList_0[] = { 



//>-- MATERIAL 2: START ------------------------------------ 'Wood-Dock-Planks'-------------------------------------------------

//Last:    Current: wood_dock_planks
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_FOG   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineLERP(   TEXEL0, 0, SHADE, 0,    TEXEL0, 0, TEXEL0, 0,    1, 0, 0, COMBINED,    TEXEL0, 0, 0, COMBINED ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_planks,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_planks_tlut ),
   gsDPSetTextureFilter(   G_TF_BILERP ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_transp_LOD1_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 0, 2, 3  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xf7a8f627),  /*New Coords: -66.75, -19.69*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfb1eb519),  /*New Coords: -39.06, -149.80*/
     gsSP1Triangle(  5, 7, 6, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x12131512),  /*New Coords: 144.62, 42.14*/
     gsSP2Triangles(  7, 8, 9, 7, 10, 11, 5, 10  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xf9294bc7),  /*New Coords: -54.72, 151.56*/
     gsSP1Triangle(  11, 12, 7, 11  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x06201512),  /*New Coords: 49.02, 42.14*/
     gsSP1Triangle(  10, 13, 12, 10  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x216a1512),  /*New Coords: 267.32, 42.14*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x18251512),  /*New Coords: 193.17, 42.14*/
     gsSP2Triangles(  9, 14, 15, 9, 15, 4, 6, 15  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfb1eb519),  /*New Coords: -39.06, -149.80*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x052eb890),  /*New Coords: 41.45, -142.87*/
     gsSP2Triangles(  6, 7, 9, 6, 4, 10, 5, 4  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xf7a8f627),  /*New Coords: -66.75, -19.69*/
     gsSP1Triangle(  5, 11, 7, 5  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x0b231512),  /*New Coords: 89.12, 42.14*/
     gsSP1Triangle(  11, 10, 12, 11  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x18251512),  /*New Coords: 193.17, 42.14*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x216a1512),  /*New Coords: 267.32, 42.14*/     gsSP1Triangle(  6, 9, 15, 6  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- town_transp_LOD1 -------------------------------------------------

 

//>-- Obj00: START ------------------------------------------ rock_wall_3_LOD2 -------------------------------------------------

Vtx rock_wall_3_LOD2_VertList_0 [] = {
   { -1406.43, 2773.57, 1599.33, 1, 0xc1b4, 0xff6a, 170, 210, 195, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0xcb6e, 0xfa8a, 95, 121, 108, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0xb06a, 0xfb93, 95, 121, 108, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x1b98, 0x032e, 170, 210, 195, 255}, 
   { 540.71, 5357.07, 1862.71, 1, 0x1b98, 0x0066, 93, 128, 102, 255}, 
   { -492.15, 5827.83, 1828.83, 1, 0x0164, 0x0066, 93, 128, 102, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x4087, 0x032e, 68, 91, 76, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x08d7, 0x032e, 170, 210, 195, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0x758d, 0xfe0e, 100, 138, 109, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x844b, 0x0458, 55, 66, 56, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0x8c43, 0xfd16, 100, 138, 109, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0xb385, 0x0024, 170, 210, 195, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x956a, 0xfff7, 170, 210, 195, 255}, 
   { -1963.18, 1609.01, 808.03, 1, 0xb385, 0x03fe, 48, 62, 55, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x5268, 0x1899, 37, 46, 43, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x5451, 0x1052, 37, 46, 43, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0x4c60, 0x0781, 37, 46, 43, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0x2d1d, 0x0a77, 38, 48, 44, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0x40a0, 0xffd1, 37, 46, 43, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x32b1, 0xf959, 53, 54, 22, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1170, 0x07c3, 35, 43, 41, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0x0045, 0xec75, 71, 71, 30, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0xe2ca, 0xef90, 71, 71, 30, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0x2fa2, 0xedd0, 50, 70, 59, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0xd7c8, 0xfa40, 53, 54, 22, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xf41c, 0x07cd, 37, 46, 43, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0x1208, 0xecf7, 71, 71, 30, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xa847, 0x0403, 50, 70, 59, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0x4f63, 0x09aa, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4338.83, 6352.37, 978.88, 1, 0x77a4, 0x0403, 34, 41, 40, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x10b8, 0x0403, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -3499.33, 2834.12, 97.77, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x27a8, 0x03fe, 36, 44, 42, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x27a8, 0x0024, 37, 46, 43, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
   { -3494.29, 1446.74, -226.73, 1, 0xe25a, 0x052c, 49, 62, 55, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0xc37b, 0x004d, 95, 121, 108, 255}, 
   { -5409.41, 3066.88, -889.45, 1, 0xe2a2, 0x0a9a, 34, 41, 40, 255}, 
   { -4869.17, 881.00, -484.76, 1, 0x170a, 0x08eb, 34, 41, 40, 255}, 
   { -6206.69, -397.02, -769.84, 1, 0x5ed2, 0x0cc8, 34, 41, 40, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xf681, 0x0002, 34, 41, 40, 255}, 
   { -4184.18, 7761.16, 1652.67, 1, 0xe7b8, 0xfffc, 34, 41, 40, 255}, 
   { -4296.81, 7744.58, 1170.49, 1, 0xe893, 0x03f6, 34, 41, 40, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4990.01, 6173.48, -854.80, 1, 0x0c38, 0x04e8, 34, 41, 40, 255}, 
   { -4992.26, 5947.86, -886.28, 1, 0x0f72, 0x0521, 34, 41, 40, 255}, 
   { -3986.18, 7291.77, 2142.52, 1, 0xae0e, 0x0066, 45, 65, 57, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xae0e, 0x032e, 96, 132, 105, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0xd7c8, 0xfa40, 53, 54, 22, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x32b1, 0xf959, 53, 54, 22, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0x1208, 0xecf7, 71, 71, 30, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0x0045, 0xec75, 71, 71, 30, 255}, 
   { -4441.85, 5086.90, 1598.42, 1, 0x0c4d, 0xf288, 113, 115, 48, 255}, 
   { -4761.77, 4522.83, -1068.04, 1, 0x2971, 0x0076, 34, 41, 40, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x2e6c, 0x0a4b, 34, 41, 40, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -3499.33, 2834.12, 97.77, 1, 0xb53e, 0x04d8, 34, 41, 40, 255}, 
   { -4408.03, 3785.05, -1050.78, 1, 0xb365, 0x0868, 34, 41, 40, 255}, 
   { -5409.41, 3066.88, -889.45, 1, 0xe2a2, 0x0a9a, 34, 41, 40, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0xabbd, 0x0403, 34, 41, 40, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0x10b8, 0x0003, 71, 71, 30, 255}, 
   { -5586.12, 4367.92, 1104.69, 1, 0x10b8, 0x0403, 34, 41, 40, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xf196, 0x0a3f, 50, 70, 59, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xe252, 0x0a81, 37, 46, 43, 255}, 
   { -4886.50, 5819.95, 1085.94, 1, 0x4f63, 0x09aa, 34, 41, 40, 255}, 
   { -4338.83, 6352.37, 978.88, 1, 0x634b, 0x0a6f, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0xfeb3, 0x03e3, 53, 54, 22, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xfeb3, 0x0002, 170, 210, 195, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xe5eb, 0x0002, 96, 132, 105, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xd6cc, 0x0002, 34, 41, 40, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x9088, 0x03e7, 53, 54, 22, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x04b6, 0x03e7, 37, 46, 43, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x04b6, 0x001b, 55, 76, 64, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0xdc5d, 0x001b, 50, 70, 59, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0xb3dc, 0x001b, 58, 79, 68, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0xdc5d, 0x03e7, 37, 46, 43, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0x3e54, 0x03c7, 50, 65, 57, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x1ae4, 0x0000, 36, 44, 42, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1ae4, 0x03ff, 35, 43, 41, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0xf91d, 0x0400, 38, 48, 44, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0xf91d, 0x0000, 37, 46, 43, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xd98e, 0x0000, 51, 71, 59, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0xd98e, 0x0400, 38, 48, 44, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0x6770, 0x0414, 34, 41, 40, 255}, 
   { -1922.34, 1629.95, 680.01, 1, 0x8937, 0x0414, 34, 41, 40, 255}, 
   { -1963.18, 1609.01, 808.03, 1, 0x8937, 0x0014, 48, 62, 55, 255}, 
   { 737.42, 3813.90, 870.54, 1, 0x27db, 0x03e7, 37, 46, 43, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x27db, 0x001b, 68, 91, 76, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x956a, 0xfff7, 170, 210, 195, 255}, 
   { -2778.00, 6137.00, 1931.59, 1, 0xcf5c, 0x0066, 93, 128, 102, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0x21a7, 0x0166, 95, 121, 108, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0x08bd, 0xffaa, 95, 121, 108, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x1274, 0x0416, 37, 46, 43, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0x3f32, 0xfeee, 170, 210, 195, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x25e1, 0x042a, 64, 84, 71, 255}, 
   { -3761.08, 414.02, 1461.60, 1, 0x755d, 0x042f, 64, 84, 71, 255}, 
   { -3235.55, 1118.08, 899.08, 1, 0x59df, 0x04a1, 64, 84, 71, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0x512f, 0x042a, 95, 121, 108, 255}, 
   { -1406.43, 2773.57, 1599.33, 1, 0xc1b4, 0xff6a, 170, 210, 195, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x844b, 0x0458, 55, 66, 56, 255}, 
   { -5943.77, -899.83, 1348.19, 1, 0x9e81, 0x03b3, 55, 66, 56, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0x8c43, 0xfd16, 100, 138, 109, 255}, 
   { -4463.72, -2260.14, 1916.25, 1, 0x9e0a, 0xf5c2, 101, 140, 110, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0x8999, 0xfb7b, 99, 136, 108, 255}, 
   { -2760.51, -284.39, 936.75, 1, 0x862c, 0x01e7, 56, 74, 63, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xcf5c, 0x032e, 170, 210, 195, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0xe6c6, 0x032e, 170, 210, 195, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -4327.91, 196.07, 1190.86, 1, 0x21d6, 0x0032, 34, 41, 40, 255}, 
   { -3494.29, 1446.74, -226.73, 1, 0xe25a, 0x052c, 34, 41, 40, 255}, 
   { -4869.17, 881.00, -484.76, 1, 0x170a, 0x08eb, 34, 41, 40, 255}, 
   { -6206.69, -397.02, -769.84, 1, 0x6bf3, 0x0694, 34, 41, 40, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0xfeb3, 0x03e3, 53, 54, 22, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0x101f, 0x03e3, 58, 79, 68, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x376d, 0x03e3, 55, 76, 64, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x376d, 0x0002, 170, 210, 195, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x4c8c, 0x03e3, 68, 91, 76, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
   { -669.80, 3189.59, 1359.48, 1, 0xef84, 0x0031, 95, 121, 108, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xf520, 0x03fe, 51, 71, 59, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x27a8, 0x0024, 37, 46, 43, 255}, 
   { -1809.72, 2947.20, 1814.87, 1, 0x08bd, 0xffaa, 95, 121, 108, 255}, 
   { -492.15, 5827.83, 1828.83, 1, 0x0164, 0x0066, 93, 128, 102, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { 496.12, 3666.63, 887.28, 1, 0x4a10, 0x17d6, 47, 67, 56, 255}, 
   { -48.73, 4517.54, 1029.45, 1, 0x5451, 0x1052, 37, 46, 43, 255}, 
   { -338.03, 3116.15, 937.85, 1, 0x2c32, 0x1567, 47, 67, 56, 255}, 
   { 32.38, 3383.60, 919.45, 1, 0x3a06, 0x165f, 47, 67, 56, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -1190.92, 4752.79, 1238.49, 1, 0x43bd, 0x0826, 82, 100, 69, 255}, 
   { -203.71, 4335.88, 1045.60, 1, 0x4cd1, 0x1042, 82, 100, 69, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0x4c60, 0x0781, 37, 46, 43, 255}, 
   { -663.04, 3644.57, 1088.75, 1, 0x32d3, 0x10d2, 38, 48, 44, 255}, 
   { -497.73, 3934.53, 1074.50, 1, 0x434d, 0x102d, 82, 100, 69, 255}, 
   { -1408.82, 4006.06, 1285.77, 1, 0x2d1d, 0x0a77, 38, 48, 44, 255}, 
   { -2048.20, 4867.43, 1341.42, 1, 0x35c5, 0x0252, 82, 100, 69, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0x40a0, 0xffd1, 37, 46, 43, 255}, 
   { -2846.96, 4960.51, 1443.32, 1, 0x286b, 0xfcf4, 96, 107, 59, 255}, 
   { -3401.31, 3410.29, 1354.40, 1, 0xf774, 0x0122, 113, 115, 48, 255}, 
   { -2226.39, 3531.61, 1342.78, 1, 0x1170, 0x07c3, 35, 43, 41, 255}, 
   { -2875.35, 4109.99, 1415.47, 1, 0x1f44, 0x002b, 113, 115, 48, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0xa847, 0x0003, 37, 46, 43, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0x527e, 0x0003, 53, 54, 22, 255}, 
   { -3252.01, 2805.68, 1054.92, 1, 0xa847, 0x0403, 50, 70, 59, 255}, 
   { -2086.99, 4174.01, 1356.31, 1, 0x2cd2, 0x0461, 96, 107, 59, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0x1233, 0x03fe, 37, 46, 43, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x27a8, 0x03fe, 36, 44, 42, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0xf681, 0x0403, 34, 41, 40, 255}, 
   { -4463.50, 7155.11, 1655.79, 1, 0xf681, 0x0002, 34, 41, 40, 255}, 
   { -4296.81, 7744.58, 1170.49, 1, 0xe893, 0x03f6, 34, 41, 40, 255}, 
   { -4992.26, 5947.86, -886.28, 1, 0x0f72, 0x0521, 34, 41, 40, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4990.01, 6173.48, -854.80, 1, 0x0c38, 0x04e8, 34, 41, 40, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0x0f0b, 0xfbcb, 50, 70, 59, 255}, 
   { -4578.50, 7046.49, 996.57, 1, 0x0340, 0xfd93, 34, 41, 40, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x14f0, 0x0491, 34, 41, 40, 255}, 
   { -1337.54, 4294.84, 1249.68, 1, 0x3cc6, 0x08ac, 82, 100, 69, 255}, 
   { -3899.87, 4058.64, 1508.16, 1, 0x057d, 0xfb46, 113, 115, 48, 255}, 
   { -4734.38, 5658.44, -771.42, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -4761.77, 4522.83, -1068.04, 1, 0x2971, 0x0076, 34, 41, 40, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0x4218, 0x0a2c, 34, 41, 40, 255}, 
   { -5285.13, 5269.16, 1597.80, 1, 0xd2ee, 0x0003, 71, 71, 30, 255}, 
   { -4882.56, 5670.89, 1469.50, 1, 0xabbd, 0x0003, 71, 71, 30, 255}, 
   { -5361.27, 5334.29, 1123.64, 1, 0xd2ee, 0x0403, 34, 41, 40, 255}, 
   { -4714.51, 3167.87, 1617.58, 1, 0x527e, 0x0003, 53, 54, 22, 255}, 
   { -5560.48, 4289.26, 1564.64, 1, 0x10b8, 0x0003, 71, 71, 30, 255}, 
   { -4812.95, 3137.78, 1151.49, 1, 0x527e, 0x0403, 50, 70, 59, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xe5eb, 0x0002, 96, 132, 105, 255}, 
   { -4211.52, 6340.53, 1494.10, 1, 0xe5eb, 0x03e3, 63, 87, 72, 255}, 
   { -2907.61, 5768.77, 1751.68, 1, 0xfeb3, 0x0002, 170, 210, 195, 255}, 
   { -3002.50, 5502.14, 1428.81, 1, 0x9088, 0x03e7, 53, 54, 22, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -2956.33, 5571.25, 1585.89, 1, 0x9088, 0x001b, 53, 54, 22, 255}, 
   { -2082.03, 5335.92, 1315.51, 1, 0xb3dc, 0x03e7, 37, 46, 43, 255}, 
   { -1084.12, 5019.07, 1207.64, 1, 0xdc5d, 0x03e7, 37, 46, 43, 255}, 
   { -2019.31, 5338.72, 1474.70, 1, 0xb3dc, 0x001b, 58, 79, 68, 255}, 
   { -3986.18, 7291.77, 2142.52, 1, 0xae0e, 0x0066, 45, 65, 57, 255}, 
   { -3938.79, 6606.89, 1801.75, 1, 0xae0e, 0x032e, 96, 132, 105, 255}, 
   { -2778.00, 6137.00, 1931.59, 1, 0xcf5c, 0x0066, 93, 128, 102, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x25e1, 0x042a, 64, 84, 71, 255}, 
   { -2331.58, 2578.02, 1654.52, 1, 0x21a7, 0x0166, 95, 121, 108, 255}, 
   { -2062.13, 3309.79, 1616.45, 1, 0x1274, 0x0416, 37, 46, 43, 255}, 
   { -2940.16, 1702.50, 755.49, 1, 0x512f, 0x042a, 95, 121, 108, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0x3f32, 0xfeee, 170, 210, 195, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x25e1, 0x042a, 64, 84, 71, 255}, 
   { -2609.87, 301.39, 965.03, 1, 0x5f09, 0xfe45, 170, 210, 195, 255}, 
   { -2126.53, 1630.11, 1086.00, 1, 0x3f32, 0xfeee, 170, 210, 195, 255}, 
   { -3235.55, 1118.08, 899.08, 1, 0x59df, 0x04a1, 64, 84, 71, 255}, 
   { -1824.53, 5824.49, 1804.02, 1, 0xe6c6, 0x0066, 93, 128, 102, 255}, 
   { -1958.68, 5478.28, 1628.62, 1, 0x101f, 0x0002, 170, 210, 195, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -1005.38, 5019.58, 1362.55, 1, 0x23ed, 0x03e3, 50, 70, 59, 255}, 
   { -21.92, 4561.00, 1222.96, 1, 0x376d, 0x03e3, 55, 76, 64, 255}, 
   { -869.73, 5091.16, 1529.22, 1, 0x2978, 0x0002, 170, 210, 195, 255}, 
   { -2803.84, 2798.50, 1212.33, 1, 0x3daa, 0x03fe, 50, 65, 57, 255}, 
   { -2627.70, 2717.36, 1438.45, 1, 0x3daa, 0x0024, 64, 84, 71, 255}, 
   { -2175.28, 3504.09, 1454.60, 1, 0x27a8, 0x03fe, 36, 44, 42, 255}, 
   { 1141.04, 3825.66, 1439.63, 1, 0x52e8, 0x0002, 68, 91, 76, 255}, 
   { 163.67, 4721.26, 1572.20, 1, 0x376d, 0x0002, 170, 210, 195, 255}, 
   { 721.50, 3846.95, 1099.37, 1, 0x4c8c, 0x03e3, 68, 91, 76, 255}, 
   { -1382.50, 3964.90, 1388.84, 1, 0x1233, 0x03fe, 37, 46, 43, 255}, 
   { -1272.55, 3623.05, 1618.85, 1, 0x1232, 0x0024, 37, 46, 43, 255}, 
   { -632.09, 3521.36, 1199.92, 1, 0xf520, 0x03fe, 51, 71, 59, 255}, 
};

Gfx rock_wall_3_LOD2_Static_PolyList_0[] = { 



//>-- MATERIAL 3: START ------------------------------------ 'Grass-Stone-1'-------------------------------------------------

//Last: Grass_Texture_1_Dirt   Current: Grass_Texture_1_Dirt
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_1_Dirt,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_1_Dirt_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+29,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x527e0003),  /*New Coords: 164.99, 0.10*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x77a40003),  /*New Coords: -272.71, 0.10*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xabbd0403),  /*New Coords: -168.52, 32.10*/
     gsSP2Triangles(  7, 10, 11, 7, 5, 15, 13, 5  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xd2ee0003),  /*New Coords: -90.13, 0.10*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xd2ee0403),  /*New Coords: -90.13, 32.10*/
     gsSP1Triangle(  2, 12, 16, 2  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+84,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xabbd0003),  /*New Coords: -168.52, 0.10*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xd2ee0403),  /*New Coords: -90.13, 32.10*/
     gsSP1Triangle(  0, 10, 5, 0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+171,30,0  ),
     gsSP1Triangle(  16, 17, 18, 16  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+84,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xabbd0003),  /*New Coords: -168.52, 0.10*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x77a40003),  /*New Coords: -272.71, 0.10*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xabbd0403),  /*New Coords: -168.52, 32.10*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xd2ee0003),  /*New Coords: -90.13, 0.10*/
     gsSP2Triangles(  0, 22, 16, 0, 11, 1, 12, 11  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+200,30,0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),


//>-- MATERIAL 6: START ------------------------------------ 'Beach-Rocky-Hill'-------------------------------------------------

//Last: Sand_Texture_4_Hill   Current: Sand_Texture_4_Hill
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_4_Hill,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_4_Hill_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+29,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/
     gsSP2Triangles(  12, 13, 14, 12, 17, 18, 10, 17  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xa8a2007a),  /*New Coords: -174.73, 3.83*/
     gsSP1Triangle(  23, 24, 8, 23  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xb53e04d8),  /*New Coords: -149.51, 38.78*/
     gsSP1Triangle(  23, 8, 18, 23  ),
     gsSP2Triangles(  18, 25, 23, 18, 26, 23, 25, 26  ),
     gsSP1Triangle(  27, 26, 25, 27  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+58,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xf8d7fc72),  /*New Coords: -14.32, -28.43*/
     gsSP1Triangle(  2, 1, 3, 2  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+43,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x14f00491),  /*New Coords: 41.88, 36.55*/
     gsSP1Triangle(  17, 19, 0, 17  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+72,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
     gsSP2Triangles(  16, 15, 18, 16, 19, 20, 21, 19  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xfd4f055e),  /*New Coords: -5.38, 42.95*/
     gsSP2Triangles(  25, 19, 26, 25, 19, 27, 26, 19  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+100,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+129,30,0  ),
     gsSP1Triangle(  19, 20, 21, 19  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x6ff5000d),  /*New Coords: 223.92, 0.44*/
     gsSP2Triangles(  11, 19, 22, 11, 19, 21, 22, 19  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xf1ebfe90),  /*New Coords: -28.16, -11.48*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xda720000),  /*New Coords: -75.10, 0.01*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xc37b004d),  /*New Coords: -121.03, 2.41*/
     gsSP2Triangles(  19, 6, 20, 19, 7, 8, 20, 7  ),
     gsSP1Triangle(  6, 7, 20, 6  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+187,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 15, 13, 18, 19, 20, 18  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+92,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x10640a4b),  /*New Coords: 32.78, 82.35*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x2e6c0a4b),  /*New Coords: 92.85, 82.35*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x18ac008c),  /*New Coords: 49.35, 4.38*/     gsSP1Triangle(  5, 4, 0, 5  ),


//>-- MATERIAL 7: START ------------------------------------ 'Grass-Village'-------------------------------------------------

//Last: Grass_Texture_2   Current: Grass_Texture_2
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Grass_Texture_2,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,15 ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_2_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+0,30,0  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 20, 18  ),
     gsSP2Triangles(  21, 17, 22, 21, 19, 23, 24, 19  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+28,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+26,30,0  ),
     gsSP1Triangle(  8, 7, 0, 8  ),
     gsSP2Triangles(  9, 10, 11, 9, 8, 12, 7, 8  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+22,30,0  ),
     gsSP2Triangles(  0, 3, 26, 0, 2, 1, 7, 2  ),
     gsSP2Triangles(  13, 15, 6, 13, 14, 11, 10, 14  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+51,30,0  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 15, 20, 22, 15  ),
     gsSP2Triangles(  23, 24, 25, 23, 26, 27, 28, 26  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+80,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+68,30,0  ),
     gsSP1Triangle(  15, 11, 0, 15  ),
     gsSP2Triangles(  0, 2, 5, 0, 16, 17, 18, 16  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+155,30,0  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 25, 23  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+184,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+175,30,0  ),
     gsSP2Triangles(  0, 2, 6, 0, 10, 5, 15, 10  ),
     gsSP2Triangles(  28, 4, 0, 28, 15, 28, 6, 15  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+173,30,0  ),
     gsSP2Triangles(  6, 0, 3, 6, 13, 17, 10, 13  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+183,30,0  ),
     gsSP1Triangle(  3, 0, 21, 3  ),


//>-- MATERIAL 9: START ------------------------------------ 'Grass_to_Rock'-------------------------------------------------

//Last: GrasstoRock   Current: GrasstoRock
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   GrasstoRock,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, GrasstoRock_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+87,30,0  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x731b036f),  /*New Coords: -281.79, 27.48*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x9088001b),  /*New Coords: -222.94, 0.85*/
     gsSP2Triangles(  19, 22, 17, 19, 23, 24, 25, 23  ),
     gsSP2Triangles(  26, 27, 17, 26, 28, 25, 27, 28  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+116,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 2, 1, 3  ),
     gsSP2Triangles(  4, 5, 6, 4, 7, 8, 9, 7  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+110,30,0  ),
     gsSP1Triangle(  0, 16, 17, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+155,30,0  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xdc5d03e7),  /*New Coords: -71.27, 31.24*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x04b603e7),  /*New Coords: 9.42, 31.24*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xdc5d001b),  /*New Coords: -71.27, 0.85*/
     gsSP1Triangle(  22, 16, 0, 22  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+213,30,0  ),
     gsSP2Triangles(  4, 5, 6, 4, 7, 8, 9, 7  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+180,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xf91d0000),  /*New Coords: -13.77, 0.00*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf91d0400),  /*New Coords: -13.77, 32.00*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x1ae40000),  /*New Coords: 53.79, 0.00*/
     gsSP1Triangle(  11, 0, 12, 11  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+178,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xf91d0400),  /*New Coords: -13.77, 32.00*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xf91d0000),  /*New Coords: -13.77, 0.00*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xd98e0400),  /*New Coords: -76.89, 32.00*/
     gsSP1Triangle(  2, 13, 0, 2  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+158,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04b6001b),  /*New Coords: 9.42, 0.85*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x04b603e7),  /*New Coords: 9.42, 31.24*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x27db001b),  /*New Coords: 79.71, 0.85*/     gsSP1Triangle(  0, 13, 3, 0  ),


//>-- MATERIAL 10: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

//Last: RocktoFerns   Current: RocktoFerns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   RocktoFerns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, RocktoFerns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+0,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+29,30,0  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+57,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+86,30,0  ),
     gsSP1Triangle(  17, 18, 19, 17  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+115,30,0  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x8dc4040f),  /*New Coords: -228.46, 32.49*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xb38503fe),  /*New Coords: -152.95, 31.95*/
     gsSP1Triangle(  13, 8, 10, 13  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+144,30,0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
     gsSP1Triangle(  14, 15, 16, 14  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+117,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x3daa0024),  /*New Coords: 123.33, 1.14*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x27a80024),  /*New Coords: 79.32, 1.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x27a803fe),  /*New Coords: 79.32, 31.95*/
     gsSP1Triangle(  17, 15, 0, 17  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+146,30,0  ),
     gsSP2Triangles(  13, 12, 15, 13, 16, 17, 18, 16  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+116,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x66c20024),  /*New Coords: 205.52, 1.14*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x3daa0024),  /*New Coords: 123.33, 1.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3daa03fe),  /*New Coords: 123.33, 31.95*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x8c57fffd),  /*New Coords: -231.32, -0.09*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x8dc4040f),  /*New Coords: -228.46, 32.49*/
     gsSP2Triangles(  21, 18, 0, 21, 28, 7, 12, 28  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+174,30,0  ),
     gsSP2Triangles(  17, 18, 19, 17, 20, 21, 22, 20  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+203,30,0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+195,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xd6cc03e3),  /*New Coords: -82.40, 31.11*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xd6cc0002),  /*New Coords: -82.40, 0.07*/
     gsSP1Triangle(  6, 20, 0, 6  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+216,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfeb303e3),  /*New Coords: -2.60, 31.11*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x101f03e3),  /*New Coords: 32.25, 31.11*/
     gsSP2Triangles(  0, 3, 20, 0, 6, 21, 20, 6  ),
     gsSP2Triangles(  22, 23, 24, 22, 25, 26, 27, 25  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+244,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),


//>-- MATERIAL 11: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

//Last:    Current: ground_cover_ferns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 1,15 ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( rock_wall_3_LOD2_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  3, 6, 4, 3, 7, 5, 8, 7  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+57,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x970c0176),  /*New Coords: -209.91, 11.69*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xa0f303ec),  /*New Coords: -190.10, 31.39*/
     gsSP1Triangle(  1, 0, 6, 1  ),
     gsSP1Triangle(  0, 7, 6, 0  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+105,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xae0e032e),  /*New Coords: -163.89, 25.45*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcf5c032e),  /*New Coords: -97.28, 25.45*/
     gsSP1Triangle(  2, 0, 24, 2  ),
     gsSP2Triangles(  25, 26, 27, 25, 28, 25, 29, 28  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+128,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f09fe45),  /*New Coords: 190.07, -13.84*/
     gsSP2Triangles(  7, 0, 8, 7, 5, 9, 8, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x9452042a),  /*New Coords: -215.36, 33.32*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xb06afb93),  /*New Coords: -159.17, -35.38*/
     gsSP2Triangles(  5, 10, 2, 5, 11, 12, 13, 11  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6ce1fbc1),  /*New Coords: 217.76, -33.96*/
     gsSP2Triangles(  14, 13, 12, 14, 15, 16, 0, 15  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x758dfe0e),  /*New Coords: 235.11, -15.54*/
     gsSP1Triangle(  11, 15, 7, 11  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f09fe45),  /*New Coords: 190.07, -13.84*/
     gsSP1Triangle(  15, 0, 7, 15  ),
     gsSP1Triangle(  17, 18, 19, 17  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+157,30,0  ),
     gsSP1Triangle(  8, 9, 10, 8  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x08d7032e),  /*New Coords: 17.68, 25.45*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x1b98032e),  /*New Coords: 55.19, 25.45*/
     gsSP1Triangle(  3, 2, 11, 3  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+147,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xe6c6032e),  /*New Coords: -50.45, 25.45*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x08d7032e),  /*New Coords: 17.68, 25.45*/
     gsSP1Triangle(  10, 13, 0, 10  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+205,30,0  ),
     gsSP2Triangles(  18, 19, 20, 18, 21, 22, 23, 21  ),
     gsSP2Triangles(  24, 25, 26, 24, 27, 28, 29, 27  ),
   gsSPVertex( rock_wall_3_LOD2_VertList_0+216,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcf5c032e),  /*New Coords: -97.28, 25.45*/     gsSP1Triangle(  9, 0, 19, 9  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rock_wall_3_LOD2 -------------------------------------------------

 


 
//>-------------------------------------------------------------------------------------------------------------------------
//>------------------------------------------------------ Instance Objects -------------------------------------------------
//>-------------------------------------------------------------------------------------------------------------------------
 
 
 
//>-- Obj00: START ------------------------------------------ medium_home -------------------------------------------------

Vtx medium_home_VertList_0 [] = {
   { -154.55, -213.74, 271.88, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 79.09, -272.35, 277.74, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { 4.24, -5.40, 448.78, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { 255.55, -184.40, 331.05, 1, 0xbdb9, 0x0bf2, 177, 219, 204, 255}, 
   { 263.71, -5.68, 279.17, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -166.36, 139.58, 210.11, 1, 0x10ef, 0x1fa7, 34, 24, 20, 255}, 
   { -129.79, 107.47, 335.67, 1, 0x10ea, 0xee23, 56, 35, 29, 255}, 
   { -53.09, 165.35, 334.36, 1, 0x0d55, 0xee29, 31, 21, 17, 255}, 
   { 56.60, 140.14, 321.49, 1, 0x09c0, 0xee2f, 31, 21, 17, 255}, 
   { 62.80, 202.71, 190.12, 1, 0x09c5, 0x1fb3, 34, 24, 20, 255}, 
   { 125.63, 113.23, 319.53, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { 168.70, 23.68, 318.68, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { 237.01, 74.78, 185.49, 1, 0x029b, 0x1fbf, 86, 88, 81, 255}, 
   { 156.17, -107.50, 329.90, 1, 0xff36, 0xee43, 59, 48, 44, 255}, 
   { 253.97, -35.83, 185.54, 1, 0xff3b, 0x1fc5, 34, 24, 20, 255}, 
   { 15.56, -227.05, 193.72, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { 38.67, -154.76, 317.34, 1, 0x1ef4, 0xee06, 31, 21, 17, 255}, 
   { -53.29, -141.37, 313.17, 1, 0x1b84, 0xee0c, 36, 22, 18, 255}, 
   { -206.95, 35.31, 211.87, 1, 0x1484, 0x1fa1, 34, 24, 20, 255}, 
   { -166.31, 13.64, 337.25, 1, 0x147f, 0xee1d, 31, 21, 17, 255}, 
   { -107.03, -65.38, 317.29, 1, 0x17ef, 0xee17, 31, 21, 17, 255}, 
   { 260.19, -107.74, 186.64, 1, 0x0332, 0x080b, 34, 24, 20, 255}, 
   { 252.19, -101.54, 5.62, 1, 0x03de, 0x3f68, 34, 24, 20, 255}, 
   { 296.05, -131.59, 7.12, 1, 0xfffc, 0x3ff7, 34, 24, 20, 255}, 
   { -79.10, 209.57, 207.12, 1, 0x0d5a, 0x1fad, 34, 24, 20, 255}, 
   { -79.68, 201.11, 10.74, 1, 0x0d5d, 0x3f4a, 34, 24, 20, 255}, 
   { 167.03, 162.09, 187.17, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { 158.00, 154.56, 5.67, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { 225.22, 70.69, 5.52, 1, 0x029e, 0x3f5c, 67, 65, 59, 255}, 
   { 336.54, -93.64, 185.54, 1, 0xfa94, 0x1fc5, 122, 133, 124, 255}, 
   { 324.08, -93.38, 6.83, 1, 0xfa97, 0x3f62, 34, 24, 20, 255}, 
   { 118.70, -202.97, 5.94, 1, 0x2268, 0x3f26, 34, 24, 20, 255}, 
   { 126.12, -210.10, 190.29, 1, 0x2264, 0x1f89, 126, 138, 129, 255}, 
   { -88.67, -186.43, 196.68, 1, 0x1b89, 0x1f95, 177, 219, 204, 255}, 
   { -69.22, -165.17, 5.97, 1, 0x1b8d, 0x3f32, 66, 64, 58, 255}, 
   { -158.64, -99.12, 198.35, 1, 0x17f4, 0x1f9b, 126, 138, 129, 255}, 
   { -166.36, 139.58, 210.11, 1, 0x10ef, 0x1fa7, 34, 24, 20, 255}, 
   { -163.51, 133.88, 11.01, 1, 0x10f3, 0x3f44, 34, 24, 20, 255}, 
   { -202.49, 33.71, 11.16, 1, 0x1488, 0x3f3e, 34, 24, 20, 255}, 
   { 195.97, -195.27, 189.03, 1, 0x0332, 0x080b, 34, 24, 20, 255}, 
   { 211.54, -141.88, 244.99, 1, 0x03e0, 0x062e, 34, 24, 20, 255}, 
   { 262.04, -177.26, 226.74, 1, 0x03e3, 0x00bd, 171, 211, 196, 255}, 
   { 186.75, -190.73, 5.85, 1, 0x03de, 0x3f68, 34, 24, 20, 255}, 
   { 131.20, -79.32, 5.90, 1, 0x02b0, 0x3d35, 34, 24, 20, 255}, 
   { 131.13, -82.95, 177.43, 1, 0x02bf, 0x1cd6, 34, 24, 20, 255}, 
   { -288.04, 21.18, 289.78, 1, 0x035c, 0x0c07, 34, 24, 20, 255}, 
   { 4.24, -5.40, 448.78, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -56.91, 289.29, 286.90, 1, 0x7f07, 0x0bc8, 34, 24, 20, 255}, 
   { 263.71, -5.68, 279.17, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { 218.59, 183.21, 290.47, 1, 0x7f07, 0x0bf2, 57, 36, 30, 255}, 
   { -154.55, -213.74, 271.88, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 79.09, -272.35, 277.74, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { 255.55, -184.40, 331.05, 1, 0xbdb9, 0x0bf2, 177, 219, 204, 255}, 
   { 4.24, -5.40, 448.78, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { 239.23, -226.27, 189.15, 1, 0x0093, 0x35f1, 177, 219, 204, 255}, 
   { 208.69, -267.91, 190.29, 1, 0xff42, 0x35e8, 177, 219, 204, 255}, 
   { 201.26, -260.78, 8.10, 1, 0xff5b, 0x508f, 34, 24, 20, 255}, 
   { 238.73, -165.31, 329.90, 1, 0x01b9, 0x106d, 38, 29, 25, 255}, 
   { 304.12, -137.82, 186.74, 1, 0x0360, 0x35f1, 177, 219, 204, 255}, 
   { 324.08, -93.38, 6.83, 1, 0x04ac, 0x5091, 34, 24, 20, 255}, 
   { 336.54, -93.64, 185.54, 1, 0x04c5, 0x35ea, 122, 133, 124, 255}, 
   { 304.12, -137.82, 186.74, 1, 0x0360, 0x35f1, 177, 219, 204, 255}, 
   { 253.97, -35.83, 185.54, 1, 0xff3b, 0x1fc5, 34, 24, 20, 255}, 
   { 156.17, -107.50, 329.90, 1, 0xff36, 0xee43, 59, 48, 44, 255}, 
   { 238.73, -165.31, 329.90, 1, 0xfa8e, 0xee43, 38, 29, 25, 255}, 
   { 260.19, -107.74, 186.64, 1, 0x0332, 0x080b, 34, 24, 20, 255}, 
   { 126.12, -210.10, 190.29, 1, 0x2264, 0x1f89, 126, 138, 129, 255}, 
   { 229.92, -221.71, 7.80, 1, 0xfffc, 0x3ff7, 34, 24, 20, 255}, 
   { 118.70, -202.97, 5.94, 1, 0x2268, 0x3f26, 34, 24, 20, 255}, 
   { -79.10, 209.57, 207.12, 1, 0x0d5a, 0x1fad, 34, 24, 20, 255}, 
   { -166.36, 139.58, 210.11, 1, 0x10ef, 0x1fa7, 34, 24, 20, 255}, 
   { -53.09, 165.35, 334.36, 1, 0x0d55, 0xee29, 31, 21, 17, 255}, 
   { 62.80, 202.71, 190.12, 1, 0x09c5, 0x1fb3, 34, 24, 20, 255}, 
   { 167.03, 162.09, 187.17, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { 62.80, 202.71, 190.12, 1, 0x09c5, 0x1fb3, 34, 24, 20, 255}, 
   { 125.63, 113.23, 319.53, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { 237.01, 74.78, 185.49, 1, 0x029b, 0x1fbf, 86, 88, 81, 255}, 
   { 168.70, 23.68, 318.68, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { -166.36, 139.58, 210.11, 1, 0x10ef, 0x1fa7, 34, 24, 20, 255}, 
   { -206.95, 35.31, 211.87, 1, 0x1484, 0x1fa1, 34, 24, 20, 255}, 
   { -129.79, 107.47, 335.67, 1, 0x10ea, 0xee23, 31, 21, 17, 255}, 
   { -158.64, -99.12, 198.35, 1, 0x17f4, 0x1f9b, 126, 138, 129, 255}, 
   { -107.03, -65.38, 317.29, 1, 0x17ef, 0xee17, 31, 21, 17, 255}, 
   { -206.95, 35.31, 211.87, 1, 0x1484, 0x1fa1, 34, 24, 20, 255}, 
   { 296.05, -131.59, 7.12, 1, 0xfffc, 0x3ff7, 34, 24, 20, 255}, 
   { -163.51, 133.88, 11.01, 1, 0x10f3, 0x3f44, 34, 24, 20, 255}, 
   { -166.36, 139.58, 210.11, 1, 0x10ef, 0x1fa7, 34, 24, 20, 255}, 
   { -79.68, 201.11, 10.74, 1, 0x0d5d, 0x3f4a, 34, 24, 20, 255}, 
   { 57.87, 193.58, 5.93, 1, 0x09c8, 0x3f50, 34, 24, 20, 255}, 
   { 158.00, 154.56, 5.67, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { 225.22, 70.69, 5.52, 1, 0x029e, 0x3f5c, 67, 65, 59, 255}, 
   { 241.52, -35.57, 5.52, 1, 0xff3e, 0x3f62, 34, 24, 20, 255}, 
   { 225.22, 70.69, 5.52, 1, 0x029e, 0x3f5c, 67, 65, 59, 255}, 
   { 253.97, -35.83, 185.54, 1, 0xff3b, 0x1fc5, 34, 24, 20, 255}, 
   { 324.08, -93.38, 6.83, 1, 0xfa97, 0x3f62, 34, 24, 20, 255}, 
   { 12.49, -219.26, 6.25, 1, 0x1efd, 0x3f2c, 66, 64, 58, 255}, 
   { 15.56, -227.05, 193.72, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { -69.22, -165.17, 5.97, 1, 0x1b8d, 0x3f32, 66, 64, 58, 255}, 
   { -136.43, -81.29, 6.12, 1, 0x17f8, 0x3f38, 66, 64, 58, 255}, 
   { -202.49, 33.71, 11.16, 1, 0x1488, 0x3f3e, 34, 24, 20, 255}, 
   { 15.56, -227.05, 193.72, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { 126.12, -210.10, 190.29, 1, 0x2264, 0x1f89, 126, 138, 129, 255}, 
   { 38.67, -154.76, 317.34, 1, 0x1ef4, 0xee06, 31, 21, 17, 255}, 
   { -88.67, -186.43, 196.68, 1, 0x1b89, 0x1f95, 177, 219, 204, 255}, 
   { -53.29, -141.37, 313.17, 1, 0x1b84, 0xee11, 36, 22, 18, 255}, 
   { -158.64, -99.12, 198.35, 1, 0x17f4, 0x1f9b, 126, 138, 129, 255}, 
   { 304.12, -137.82, 186.74, 1, 0x0360, 0x35f1, 177, 219, 204, 255}, 
   { 336.54, -93.64, 185.54, 1, 0xfa94, 0x1fc5, 122, 133, 124, 255}, 
   { 253.97, -35.83, 185.54, 1, 0xff3b, 0x1fc5, 34, 24, 20, 255}, 
   { 238.73, -165.31, 329.90, 1, 0xfa8e, 0xee43, 38, 29, 25, 255}, 
   { 156.17, -107.50, 329.90, 1, 0x225f, 0xee00, 59, 48, 44, 255}, 
   { 208.69, -267.91, 190.29, 1, 0x26ad, 0x1f89, 177, 219, 204, 255}, 
   { 126.12, -210.10, 190.29, 1, 0x2264, 0x1f89, 126, 138, 129, 255}, 
   { 201.26, -260.78, 8.10, 1, 0x26b0, 0x3f26, 34, 24, 20, 255}, 
};

Gfx medium_home_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

//Last: Homes_Wall_Clean   Current: Homes_Wall_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Clean,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( medium_home_VertList_0+0,30,0  ),
     gsSP2Triangles(  5, 6, 7, 5, 7, 8, 9, 7  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x09c0ee31),  /*New Coords: 78.01, -35.61*/
     gsSP2Triangles(  9, 8, 10, 9, 10, 11, 12, 10  ),
     gsSP2Triangles(  11, 13, 14, 11, 15, 16, 17, 15  ),
     gsSP2Triangles(  18, 19, 6, 18, 20, 19, 18, 20  ),
     gsSP2Triangles(  5, 24, 25, 5, 25, 24, 9, 25  ),
     gsSP2Triangles(  9, 26, 27, 9, 26, 12, 28, 26  ),
     gsSP1Triangle(  28, 12, 14, 28  ),
   gsSPVertex( medium_home_VertList_0+14,30,0  ),
     gsSP1Triangle(  0, 15, 16, 0  ),
     gsSP2Triangles(  17, 18, 1, 17, 1, 19, 20, 1  ),
     gsSP2Triangles(  20, 19, 21, 20, 4, 22, 23, 4  ),
   gsSPVertex( medium_home_VertList_0+13,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x225fee00),  /*New Coords: 274.99, -36.00*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x1b84ee11),  /*New Coords: 220.15, -35.86*/
     gsSP2Triangles(  19, 0, 3, 19, 4, 7, 22, 4  ),
   gsSPVertex( medium_home_VertList_0+42,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( medium_home_VertList_0+41,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01e429ba),  /*New Coords: 15.14, 83.46*/
     gsSP1Triangle(  16, 0, 17, 16  ),
     gsSP2Triangles(  18, 19, 20, 18, 14, 13, 0, 14  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x26ad1f89),  /*New Coords: 309.42, 63.08*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x26a8ee00),  /*New Coords: 309.26, -36.00*/
     gsSP1Triangle(  25, 14, 23, 25  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x26b03f26),  /*New Coords: 309.52, 126.30*/
     gsSP1Triangle(  25, 27, 15, 25  ),
   gsSPVertex( medium_home_VertList_0+69,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  0, 2, 3, 0, 4, 5, 6, 4  ),
     gsSP1Triangle(  4, 6, 7, 4  ),
   gsSPVertex( medium_home_VertList_0+62,30,0  ),
     gsSP1Triangle(  14, 15, 0, 14  ),
   gsSPVertex( medium_home_VertList_0+15,30,0  ),
     gsSP1Triangle(  18, 0, 2, 18  ),
   gsSPVertex( medium_home_VertList_0+73,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
     gsSP2Triangles(  8, 9, 10, 8, 12, 13, 14, 12  ),
     gsSP2Triangles(  15, 14, 1, 15, 15, 1, 16, 15  ),
     gsSP2Triangles(  16, 0, 17, 16, 18, 19, 20, 18  ),
     gsSP1Triangle(  18, 20, 21, 18  ),
   gsSPVertex( medium_home_VertList_0+68,30,0  ),
     gsSP1Triangle(  27, 0, 28, 27  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( medium_home_VertList_0+81,30,0  ),
     gsSP1Triangle(  17, 16, 0, 17  ),
     gsSP2Triangles(  18, 2, 4, 18, 19, 20, 21, 19  ),
     gsSP1Triangle(  22, 23, 24, 22  ),
   gsSPVertex( medium_home_VertList_0+54,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x00975097),  /*New Coords: 4.74, 161.18*/
     gsSP1Triangle(  13, 0, 2, 13  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/
     gsSP1Triangle(  6, 10, 7, 6  ),
   gsSPVertex( medium_home_VertList_0+83,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x03775097),  /*New Coords: 27.73, 161.19*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x04ac5091),  /*New Coords: 37.39, 161.14*/
     gsSP1Triangle(  1, 11, 23, 1  ),
   gsSPVertex( medium_home_VertList_0+41,30,0  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01e429ba),  /*New Coords: 15.14, 83.46*/
     gsSP1Triangle(  23, 14, 0, 23  ),
   gsSPVertex( medium_home_VertList_0+99,30,0  ),
     gsSP1Triangle(  8, 9, 10, 8  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x26a8ee00),  /*New Coords: 309.26, -36.00*/
     gsSP2Triangles(  11, 2, 10, 11, 12, 13, 14, 12  ),


//>-- MATERIAL 1: START ------------------------------------ 'Homes-Wall-Damaged'-------------------------------------------------

//Last: Homes_Wall_Damaged   Current: Homes_Wall_Damaged
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Damaged,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Damaged_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( medium_home_VertList_0+18,30,0  ),
     gsSP1Triangle(  17, 0, 20, 17  ),
   gsSPVertex( medium_home_VertList_0+76,30,0  ),
     gsSP1Triangle(  22, 5, 23, 22  ),


//>-- MATERIAL 2: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

//Last:    Current: Homes_Roof_Straw_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Roof_Straw_Clean,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Homes_Roof_Straw_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( medium_home_VertList_0+0,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 2, 3  ),
   gsSPVertex( medium_home_VertList_0+29,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  16, 17, 18, 16, 19, 20, 17, 19  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xc37e0bf2),  /*New Coords: -121.01, 95.58*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x35b60bf2),  /*New Coords: 107.42, 95.58*/
     gsSP1Triangle(  18, 17, 20, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x16d9ff74),  /*New Coords: 45.70, -4.35*/
     gsSP1Triangle(  16, 21, 17, 16  ),
     gsSP1Triangle(  22, 23, 24, 22  ),


//>-- MATERIAL 6: START ------------------------------------ 'House_Doorway_Dark'-------------------------------------------------

//Last: Homes_Doorway_Dark   Current: Homes_Doorway_Dark
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Doorway_Dark,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Doorway_Dark_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( medium_home_VertList_0+0,30,0  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPVertex( medium_home_VertList_0+29,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 15, 13, 11, 10, 15, 11  ),
   gsSPVertex( medium_home_VertList_0+21,30,0  ),
     gsSP2Triangles(  1, 0, 23, 1, 0, 19, 23, 0  ),
   gsSPVertex( medium_home_VertList_0+41,30,0  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xfff30049),  /*New Coords: -0.40, 0.58*/
     gsSP1Triangle(  24, 20, 0, 24  ),
   gsSPVertex( medium_home_VertList_0+39,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xfff30049),  /*New Coords: -0.40, 0.58*/
     gsSP1Triangle(  0, 15, 28, 0  ),
   gsSPVertex( medium_home_VertList_0+61,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfff30049),  /*New Coords: -0.40, 0.58*/
     gsSP1Triangle(  0, 4, 23, 0  ),
   gsSPVertex( medium_home_VertList_0+39,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xfff30049),  /*New Coords: -0.40, 0.58*/
     gsSP1Triangle(  15, 0, 2, 15  ),
     gsSP1Triangle(  0, 3, 5, 0  ),
   gsSPVertex( medium_home_VertList_0+22,30,0  ),
     gsSP1Triangle(  21, 0, 22, 21  ),
   gsSPVertex( medium_home_VertList_0+40,30,0  ),
     gsSP1Triangle(  0, 25, 1, 0  ),
   gsSPVertex( medium_home_VertList_0+39,30,0  ),
     gsSP1Triangle(  3, 0, 28, 3  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- medium_home -------------------------------------------------

 
 
 
//>-- Obj01: START ------------------------------------------ small_home -------------------------------------------------

Vtx small_home_VertList_0 [] = {
   { 224.84, 33.99, 220.78, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 55.61, 216.11, 225.92, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { 4.53, 5.95, 363.81, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -99.67, 181.69, 224.16, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { -186.56, 67.72, 227.16, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -11.94, -199.37, 154.82, 1, 0x10ef, 0x1fa7, 100, 115, 106, 255}, 
   { -7.27, -157.01, 264.77, 1, 0x10ea, 0xee23, 56, 35, 29, 255}, 
   { -87.32, -131.06, 263.62, 1, 0x0d55, 0xee29, 31, 21, 17, 255}, 
   { -125.66, -74.17, 264.22, 1, 0x09c0, 0xee2f, 31, 21, 17, 255}, 
   { -173.66, -101.14, 149.19, 1, 0x09c5, 0x1fb3, 51, 32, 26, 255}, 
   { -141.04, -11.14, 262.51, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { -98.43, 64.73, 261.76, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { -169.39, 88.07, 145.13, 1, 0x029b, 0x1fbf, 36, 22, 18, 255}, 
   { 1.96, 121.63, 271.59, 1, 0xff00, 0xee43, 59, 48, 44, 255}, 
   { -98.57, 155.79, 145.17, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { 158.33, 80.82, 152.34, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { 94.87, 61.09, 260.59, 1, 0x1ef4, 0xee06, 31, 21, 17, 255}, 
   { 131.45, -11.60, 256.94, 1, 0x1b84, 0xee0c, 36, 22, 18, 255}, 
   { 83.24, -176.11, 156.36, 1, 0x1484, 0x1fa1, 101, 117, 108, 255}, 
   { 78.38, -136.08, 266.15, 1, 0x147f, 0xee1d, 31, 21, 17, 255}, 
   { 154.06, -108.39, 156.40, 1, 0x17f4, 0x1f9b, 177, 219, 204, 255}, 
   { 103.94, -88.32, 260.55, 1, 0x17ef, 0xee17, 31, 21, 17, 255}, 
   { 45.43, 152.61, 148.34, 1, 0x0093, 0x35f1, 114, 109, 104, 255}, 
   { 90.64, 151.61, 149.33, 1, 0xff42, 0x35e8, 117, 110, 105, 255}, 
   { 84.87, 136.48, -18.49, 1, 0xff5b, 0x508f, 64, 74, 68, 255}, 
   { -9.22, -185.45, -17.08, 1, 0x10f3, 0x3f44, 64, 74, 68, 255}, 
   { -105.97, -171.93, 152.20, 1, 0x0d5a, 0x1fad, 63, 56, 50, 255}, 
   { -95.47, -160.28, -17.75, 1, 0x0d5d, 0x3f4a, 35, 22, 18, 255}, 
   { -157.56, -95.35, -18.52, 1, 0x09c8, 0x3f50, 35, 22, 18, 255}, 
   { -196.88, -5.98, 146.61, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { -178.85, -8.06, -19.18, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { -153.64, 78.20, -19.56, 1, 0x029e, 0x3f5c, 36, 22, 18, 255}, 
   { -1.17, 149.39, 172.15, 1, 0x01e4, 0x29ba, 114, 109, 104, 255}, 
   { -50.60, 154.73, 146.23, 1, 0x0360, 0x35f1, 114, 109, 104, 255}, 
   { 146.96, 71.55, -17.72, 1, 0x1efd, 0x3f2c, 64, 74, 68, 255}, 
   { 181.55, -14.34, 154.93, 1, 0x1b89, 0x1f95, 177, 219, 204, 255}, 
   { 149.10, -10.35, -18.41, 1, 0x1b8d, 0x3f32, 64, 74, 68, 255}, 
   { 123.89, -96.61, -18.03, 1, 0x17f8, 0x3f38, 64, 74, 68, 255}, 
   { -88.68, 140.32, -19.55, 1, 0x04ac, 0x5091, 56, 35, 29, 255}, 
   { 44.37, 137.38, -18.73, 1, 0x0009, 0x3ff7, 34, 24, 20, 255}, 
   { -5.82, 85.75, -18.59, 1, 0x03e8, 0x403a, 34, 24, 20, 255}, 
   { -3.07, 91.34, 138.08, 1, 0x03ea, 0x07cb, 34, 24, 20, 255}, 
   { -49.07, 139.44, -19.31, 1, 0x0009, 0x3ff7, 34, 24, 20, 255}, 
   { 167.54, -173.48, 224.58, 1, 0x035c, 0x0c07, 101, 117, 108, 255}, 
   { 4.53, 5.95, 363.81, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -50.63, -251.76, 222.06, 1, 0x7f07, 0x0bc8, 63, 56, 50, 255}, 
   { -186.56, 67.72, 227.16, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -217.17, -99.56, 237.06, 1, 0x7f07, 0x0bf2, 57, 36, 30, 255}, 
   { 224.84, 33.99, 220.78, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 55.61, 216.11, 225.92, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { -99.67, 181.69, 224.16, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { 4.53, 5.95, 363.81, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { 78.08, -164.12, -16.69, 1, 0x1488, 0x3f3e, 64, 74, 68, 255}, 
   { 83.24, -176.11, 156.36, 1, 0x1484, 0x1fa1, 101, 117, 108, 255}, 
};

Gfx small_home_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

//Last: Homes_Wall_Clean   Current: Homes_Wall_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Clean,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( small_home_VertList_0+0,30,0  ),
     gsSP2Triangles(  5, 6, 7, 5, 7, 8, 9, 7  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x09c0ee31),  /*New Coords: 78.01, -35.61*/
     gsSP2Triangles(  9, 8, 10, 9, 10, 11, 12, 10  ),
     gsSP2Triangles(  11, 13, 14, 11, 15, 16, 17, 15  ),
     gsSP2Triangles(  18, 19, 6, 18, 20, 21, 19, 20  ),
     gsSP2Triangles(  22, 23, 24, 22, 25, 5, 26, 25  ),
     gsSP2Triangles(  27, 26, 9, 27, 28, 9, 29, 28  ),
   gsSPVertex( small_home_VertList_0+12,30,0  ),
     gsSP2Triangles(  18, 17, 0, 18, 19, 0, 2, 19  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP2Triangles(  1, 20, 21, 1, 11, 3, 22, 11  ),
     gsSP2Triangles(  3, 23, 24, 3, 23, 8, 25, 23  ),
   gsSPVertex( small_home_VertList_0+5,30,0  ),
     gsSP1Triangle(  13, 0, 20, 13  ),
   gsSPVertex( small_home_VertList_0+14,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04c535ea),  /*New Coords: 38.18, 107.83*/
     gsSP1Triangle(  24, 0, 19, 24  ),
   gsSPVertex( small_home_VertList_0+13,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2289ee00),  /*New Coords: 276.31, -36.00*/
     gsSP1Triangle(  10, 0, 3, 10  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xff4235e8),  /*New Coords: -5.92, 107.82*/
     gsSP1Triangle(  0, 10, 9, 0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x1b84ee11),  /*New Coords: 220.15, -35.86*/
     gsSP1Triangle(  4, 8, 7, 4  ),
   gsSPVertex( small_home_VertList_0+5,30,0  ),
     gsSP1Triangle(  21, 0, 2, 21  ),
     gsSP2Triangles(  21, 2, 4, 21, 24, 4, 5, 24  ),
     gsSP2Triangles(  24, 5, 7, 24, 7, 6, 9, 7  ),
   gsSPVertex( small_home_VertList_0+15,30,0  ),
     gsSP1Triangle(  20, 0, 2, 20  ),
   gsSPVertex( small_home_VertList_0+5,30,0  ),
     gsSP1Triangle(  0, 13, 1, 0  ),
     gsSP1Triangle(  13, 15, 14, 13  ),
   gsSPVertex( small_home_VertList_0+22,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x00975097),  /*New Coords: 4.74, 161.18*/
     gsSP1Triangle(  17, 0, 2, 17  ),
     gsSP1Triangle(  5, 3, 4, 5  ),
   gsSPVertex( small_home_VertList_0+9,30,0  ),
     gsSP1Triangle(  19, 18, 0, 19  ),
     gsSP2Triangles(  21, 19, 20, 21, 22, 21, 3, 22  ),
   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0xff093f62),  /*New Coords: -7.70, 126.77*/
     gsSP1Triangle(  29, 22, 5, 29  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x04c535ea),  /*New Coords: 38.18, 107.83*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/
     gsSP1Triangle(  5, 4, 24, 5  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x22923f26),  /*New Coords: 276.58, 126.30*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP2Triangles(  15, 14, 25, 15, 25, 6, 27, 25  ),
     gsSP1Triangle(  27, 26, 28, 27  ),
   gsSPVertex( small_home_VertList_0+25,30,0  ),
     gsSP1Triangle(  27, 28, 0, 27  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x03775097),  /*New Coords: 27.73, 161.19*/
     gsSP1Triangle(  17, 13, 8, 17  ),
   gsSPVertex( small_home_VertList_0+15,30,0  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP1Triangle(  0, 8, 1, 0  ),
   gsSPVertex( small_home_VertList_0+13,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x1b84ee11),  /*New Coords: 220.15, -35.86*/
     gsSP2Triangles(  19, 0, 9, 19, 22, 4, 7, 22  ),


//>-- MATERIAL 1: START ------------------------------------ 'Homes-Wall-Damaged'-------------------------------------------------

//Last: Homes_Wall_Damaged   Current: Homes_Wall_Damaged
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Damaged,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Damaged_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( small_home_VertList_0+18,30,0  ),
     gsSP1Triangle(  19, 2, 0, 19  ),
   gsSPVertex( small_home_VertList_0+37,30,0  ),
     gsSP1Triangle(  15, 0, 16, 15  ),


//>-- MATERIAL 2: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

//Last:    Current: Homes_Roof_Straw_Clean
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Roof_Straw_Clean,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Homes_Roof_Straw_Clean_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( small_home_VertList_0+0,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 2, 3  ),
   gsSPVertex( small_home_VertList_0+29,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 15, 17  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xc37e0bf2),  /*New Coords: -121.01, 95.58*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x35b60bf2),  /*New Coords: 107.42, 95.58*/
     gsSP1Triangle(  16, 15, 18, 16  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x16d9ff74),  /*New Coords: 45.70, -4.35*/
     gsSP1Triangle(  14, 19, 15, 14  ),
     gsSP1Triangle(  20, 21, 22, 20  ),


//>-- MATERIAL 7: START ------------------------------------ 'House_Doorway_Dark'-------------------------------------------------

//Last: Homes_Doorway_Dark   Current: Homes_Doorway_Dark
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Doorway_Dark,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Doorway_Dark_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( small_home_VertList_0+29,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( small_home_VertList_0+22,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x03e90008),  /*New Coords: 31.29, 0.07*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00040022),  /*New Coords: 0.14, 0.27*/
     gsSP1Triangle(  10, 0, 19, 10  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00040022),  /*New Coords: 0.14, 0.27*/
     gsSP2Triangles(  20, 11, 19, 20, 11, 10, 19, 11  ),
     gsSP2Triangles(  0, 17, 19, 0, 18, 20, 19, 18  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- small_home -------------------------------------------------

 
 
 