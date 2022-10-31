#include "common.h"
#include "harvesterBeach.h"
#include "Scn05_Forest_entrance_defs.h"


extern int animCoordCycleH;
extern    int animCoordCycleV;
    
extern   void AnimCycle();


//>-- Obj00: START ------------------------------------------ town_exit_rope -------------------------------------------------

Vtx town_exit_rope2_VertList_0 [] = {
   { 374.45, -384.85, 223.68, 1, 0x010b, 0x0269, 114, 156, 124, 255}, 
   { 927.51, -517.61, 363.76, 1, 0x010b, 0x4ebc, 114, 156, 124, 255}, 
   { 924.55, -531.92, 350.70, 1, 0x000b, 0x4ebc, 61, 84, 67, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { 314.26, -587.85, 210.77, 1, 0x0106, 0x8e6b, 114, 156, 124, 255}, 
   { -257.54, -438.91, 165.87, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 1929.09, -908.21, 836.03, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 1925.39, -922.15, 847.50, 1, 0x010b, 0x1810, 61, 84, 67, 255}, 
   { 1614.61, -857.22, 696.50, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 1401.13, -613.70, 557.48, 1, 0x010b, 0x9293, 114, 156, 124, 255}, 
   { 1671.14, -653.38, 706.38, 1, 0x010b, 0xbb15, 114, 156, 124, 255}, 
   { 1668.19, -667.70, 693.31, 1, 0x000b, 0xbb15, 61, 84, 67, 255}, 
   { 874.04, -707.36, 341.89, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 870.34, -721.30, 353.36, 1, 0x010b, 0x1810, 114, 156, 124, 255}, 
   { 1877.16, -662.97, 831.93, 1, 0x010b, 0xda8b, 61, 84, 67, 255}, 
   { 1874.21, -677.29, 818.86, 1, 0x000b, 0xda8b, 61, 84, 67, 255}, 
   { 1618.31, -843.28, 685.03, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 1344.60, -817.54, 547.60, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 2137.84, -949.46, 847.76, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 2130.75, -962.60, 858.57, 1, 0x010b, 0x1810, 61, 84, 67, 255}, 
   { 2040.37, -949.34, 829.72, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -1238.41, 19.06, 269.98, 1, 0x0106, 0x017b, 61, 84, 67, 255}, 
   { -1016.45, -39.52, 306.61, 1, 0x0106, 0x1fc5, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -1062.05, -228.59, 271.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -1074.09, -239.83, 278.76, 1, 0x0106, 0x8e6b, 114, 156, 124, 255}, 
   { -1118.52, -232.29, 171.81, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { -755.21, -318.81, 239.52, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { -751.51, -304.87, 228.05, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -697.88, -115.58, 244.66, 1, 0x0106, 0x4b34, 114, 156, 124, 255}, 
   { -199.41, -235.54, 180.30, 1, 0x0106, 0x8e88, 114, 156, 124, 255}, 
   { 927.51, -517.61, 363.76, 1, 0x010b, 0x4ebc, 114, 156, 124, 255}, 
   { 1398.18, -628.02, 544.41, 1, 0x000b, 0x9293, 61, 84, 67, 255}, 
   { 1348.30, -803.59, 536.12, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 374.45, -384.85, 223.68, 1, 0x0106, 0xdc00, 114, 156, 124, 255}, 
   { 371.50, -399.17, 210.61, 1, 0x0006, 0xdc00, 61, 84, 67, 255}, 
   { 2188.55, -702.67, 858.14, 1, 0x010b, 0xff9e, 61, 84, 67, 255}, 
   { 2185.59, -716.99, 845.08, 1, 0x000b, 0xff9e, 61, 84, 67, 255}, 
   { -1051.82, -263.29, 308.43, 1, 0x0106, 0xdabe, 61, 84, 67, 255}, 
   { -1048.12, -249.35, 296.95, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { 924.55, -531.92, 350.70, 1, 0x000b, 0x4ebc, 61, 84, 67, 255}, 
   { -253.84, -424.97, 154.40, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -257.54, -438.91, 165.87, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { 874.04, -707.36, 341.89, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 314.26, -587.85, 210.77, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 2044.07, -935.40, 818.24, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { 2137.84, -949.46, 847.76, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 2040.37, -949.34, 829.72, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -1241.37, 4.75, 256.92, 1, 0x0006, 0x017b, 61, 84, 67, 255}, 
   { -1238.41, 19.06, 269.98, 1, 0x0106, 0x017b, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -1104.36, -221.71, 168.22, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { -1062.05, -228.59, 271.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -1118.52, -232.29, 171.81, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 1929.09, -908.21, 836.03, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { -202.37, -249.86, 167.23, 1, 0x0006, 0x8e88, 61, 84, 67, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -199.41, -235.54, 180.30, 1, 0x0106, 0x8e88, 114, 156, 124, 255}, 
   { 870.34, -721.30, 353.36, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -697.88, -115.58, 244.66, 1, 0x0106, 0x4b34, 114, 156, 124, 255}, 
   { -1074.09, -239.83, 278.76, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
};

Gfx town_exit_rope2_Static_PolyList_0[] = { 



//>-- MATERIAL 3: START ------------------------------------ 'Bridge_Rope'-------------------------------------------------

//Last:    Current: bridge_rope
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   bridge_rope,	G_IM_FMT_CI,	16, 256,	0, G_TX_WRAP,G_TX_WRAP, 4,8, G_TX_NOLOD,1 ),
   gsDPLoadTLUT_pal16(   0, bridge_rope_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_exit_rope2_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/
     gsSP2Triangles(  12, 13, 4, 12, 10, 14, 15, 10  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/
     gsSP2Triangles(  16, 8, 17, 16, 18, 19, 20, 18  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 25, 26, 24  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP2Triangles(  5, 27, 28, 5, 20, 7, 6, 20  ),
   gsSPVertex( town_exit_rope2_VertList_0+29,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_exit_rope2_VertList_0+9,30,0  ),
     gsSP1Triangle(  23, 0, 24, 23  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/
     gsSP2Triangles(  25, 8, 4, 25, 14, 13, 21, 14  ),
     gsSP2Triangles(  22, 26, 27, 22, 5, 28, 29, 5  ),
   gsSPVertex( town_exit_rope2_VertList_0+27,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/
     gsSP1Triangle(  0, 12, 13, 0  ),
   gsSPVertex( town_exit_rope2_VertList_0+25,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0106dabe),  /*New Coords: 16.41, 218.74*/
     gsSP1Triangle(  15, 14, 0, 15  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x000b0269),  /*New Coords: 0.74, 2.41*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x010b0269),  /*New Coords: 16.74, 2.41*/
     gsSP2Triangles(  11, 10, 16, 11, 17, 18, 19, 17  ),
   gsSPVertex( town_exit_rope2_VertList_0+6,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP2Triangles(  10, 0, 2, 10, 27, 3, 5, 27  ),
   gsSPVertex( town_exit_rope2_VertList_0+35,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( town_exit_rope2_VertList_0+10,30,0  ),
     gsSP1Triangle(  1, 0, 5, 1  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP1Triangle(  24, 6, 7, 24  ),
   gsSPVertex( town_exit_rope2_VertList_0+39,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
   gsSPVertex( town_exit_rope2_VertList_0+28,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x000b1810),  /*New Coords: 0.74, 24.07*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/
     gsSP2Triangles(  14, 16, 0, 14, 20, 22, 29, 20  ),
   gsSPVertex( town_exit_rope2_VertList_0+57,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( town_exit_rope2_VertList_0+32,30,0  ),
     gsSP1Triangle(  9, 0, 1, 9  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP1Triangle(  14, 2, 29, 14  ),
   gsSPVertex( town_exit_rope2_VertList_0+61,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( town_exit_rope2_VertList_0+36,30,0  ),
     gsSP1Triangle(  22, 24, 0, 22  ),
   gsSPVertex( town_exit_rope2_VertList_0+14,30,0  ),
     gsSP1Triangle(  1, 0, 24, 1  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/
     gsSP1Triangle(  14, 13, 26, 14  ),
   gsSPVertex( town_exit_rope2_VertList_0+40,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x0006dabe),  /*New Coords: 0.41, 218.74*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/
     gsSP1Triangle(  15, 0, 25, 15  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- town_exit_rope -------------------------------------------------

//>-- Obj00: START ------------------------------------------ town_exit_rope -------------------------------------------------

Vtx town_exit_rope_VertList_0 [] = {
   { 374.45, -384.85, 223.68, 1, 0x010b, 0x0269, 114, 156, 124, 255}, 
   { 927.51, -517.61, 363.76, 1, 0x010b, 0x4ebc, 114, 156, 124, 255}, 
   { 924.55, -531.92, 350.70, 1, 0x000b, 0x4ebc, 61, 84, 67, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { 314.26, -587.85, 210.77, 1, 0x0106, 0x8e6b, 114, 156, 124, 255}, 
   { -257.08, -432.89, 165.87, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 1929.09, -908.21, 836.03, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 1925.39, -922.15, 847.50, 1, 0x010b, 0x1810, 61, 84, 67, 255}, 
   { 1614.61, -857.22, 696.50, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 1401.13, -613.70, 557.48, 1, 0x010b, 0x9293, 114, 156, 124, 255}, 
   { 1671.14, -653.38, 706.38, 1, 0x010b, 0xbb15, 114, 156, 124, 255}, 
   { 1668.19, -667.70, 693.31, 1, 0x000b, 0xbb15, 61, 84, 67, 255}, 
   { 874.04, -707.36, 341.89, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 870.34, -721.30, 353.36, 1, 0x010b, 0x1810, 114, 156, 124, 255}, 
   { 1877.16, -662.97, 831.93, 1, 0x010b, 0xda8b, 61, 84, 67, 255}, 
   { 1874.21, -677.29, 818.86, 1, 0x000b, 0xda8b, 61, 84, 67, 255}, 
   { 1618.31, -843.28, 685.03, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 1344.60, -817.54, 547.60, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 2137.84, -949.46, 847.76, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 2130.75, -962.60, 858.57, 1, 0x010b, 0x1810, 61, 84, 67, 255}, 
   { 2040.37, -949.34, 829.72, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -1238.41, 19.06, 269.98, 1, 0x0106, 0x017b, 61, 84, 67, 255}, 
   { -1016.45, -39.52, 306.61, 1, 0x0106, 0x1fc5, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -1062.05, -228.59, 271.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -1074.09, -239.83, 278.76, 1, 0x0106, 0x8e6b, 114, 156, 124, 255}, 
   { -1118.52, -232.29, 171.81, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { -755.21, -318.81, 239.52, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { -751.51, -304.87, 228.05, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -697.88, -115.58, 244.66, 1, 0x0106, 0x4b34, 114, 156, 124, 255}, 
   { -199.41, -235.54, 180.30, 1, 0x0106, 0x8e88, 114, 156, 124, 255}, 
   { 927.51, -517.61, 363.76, 1, 0x010b, 0x4ebc, 114, 156, 124, 255}, 
   { 1398.18, -628.02, 544.41, 1, 0x000b, 0x9293, 61, 84, 67, 255}, 
   { 1348.30, -803.59, 536.12, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 374.45, -384.85, 223.68, 1, 0x0106, 0xdc00, 114, 156, 124, 255}, 
   { 371.50, -399.17, 210.61, 1, 0x0006, 0xdc00, 61, 84, 67, 255}, 
   { 2188.55, -702.67, 858.14, 1, 0x010b, 0xff9e, 61, 84, 67, 255}, 
   { 2185.59, -716.99, 845.08, 1, 0x000b, 0xff9e, 61, 84, 67, 255}, 
   { -1051.82, -263.29, 308.43, 1, 0x0106, 0xdabe, 61, 84, 67, 255}, 
   { -1048.12, -249.35, 296.95, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { 924.55, -531.92, 350.70, 1, 0x000b, 0x4ebc, 61, 84, 67, 255}, 
   { -253.38, -418.95, 154.40, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -257.08, -432.89, 165.87, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 317.96, -573.90, 199.29, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { 874.04, -707.36, 341.89, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 314.26, -587.85, 210.77, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { 2044.07, -935.40, 818.24, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { 2137.84, -949.46, 847.76, 1, 0x000b, 0x1810, 61, 84, 67, 255}, 
   { 2040.37, -949.34, 829.72, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -1241.37, 4.75, 256.92, 1, 0x0006, 0x017b, 61, 84, 67, 255}, 
   { -1238.41, 19.06, 269.98, 1, 0x0106, 0x017b, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -1104.36, -221.71, 168.22, 1, 0x0006, 0xdabe, 61, 84, 67, 255}, 
   { -1062.05, -228.59, 271.29, 1, 0x0006, 0x8e6b, 61, 84, 67, 255}, 
   { -1118.52, -232.29, 171.81, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
   { 1929.09, -908.21, 836.03, 1, 0x000b, 0x6463, 61, 84, 67, 255}, 
   { -202.37, -249.86, 167.23, 1, 0x0006, 0x8e88, 61, 84, 67, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -199.41, -235.54, 180.30, 1, 0x0106, 0x8e88, 114, 156, 124, 255}, 
   { 870.34, -721.30, 353.36, 1, 0x010b, 0x6463, 114, 156, 124, 255}, 
   { -700.84, -129.90, 231.60, 1, 0x0006, 0x4b34, 61, 84, 67, 255}, 
   { -1019.41, -53.84, 293.54, 1, 0x0006, 0x1fc5, 61, 84, 67, 255}, 
   { -697.88, -115.58, 244.66, 1, 0x0106, 0x4b34, 114, 156, 124, 255}, 
   { -1074.09, -239.83, 278.76, 1, 0x0106, 0xdabe, 114, 156, 124, 255}, 
};

Gfx town_exit_rope_Static_PolyList_0[] = { 



//>-- MATERIAL 3: START ------------------------------------ 'Bridge_Rope'-------------------------------------------------

//Last:    Current: bridge_rope
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   bridge_rope,	G_IM_FMT_CI,	16, 256,	0, G_TX_WRAP,G_TX_WRAP, 4,8, G_TX_NOLOD,1 ),
   gsDPLoadTLUT_pal16(   0, bridge_rope_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( town_exit_rope_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/
     gsSP2Triangles(  12, 13, 4, 12, 10, 14, 15, 10  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/
     gsSP2Triangles(  16, 8, 17, 16, 18, 19, 20, 18  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 25, 26, 24  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP2Triangles(  5, 27, 28, 5, 20, 7, 6, 20  ),
   gsSPVertex( town_exit_rope_VertList_0+29,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_exit_rope_VertList_0+9,30,0  ),
     gsSP1Triangle(  23, 0, 24, 23  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x010b6463),  /*New Coords: 16.74, 100.39*/
     gsSP2Triangles(  25, 8, 4, 25, 14, 13, 21, 14  ),
     gsSP2Triangles(  22, 26, 27, 22, 5, 28, 29, 5  ),
   gsSPVertex( town_exit_rope_VertList_0+27,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/
     gsSP1Triangle(  0, 12, 13, 0  ),
   gsSPVertex( town_exit_rope_VertList_0+25,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0106dabe),  /*New Coords: 16.41, 218.74*/
     gsSP1Triangle(  15, 14, 0, 15  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x000b0269),  /*New Coords: 0.74, 2.41*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x010b0269),  /*New Coords: 16.74, 2.41*/
     gsSP2Triangles(  11, 10, 16, 11, 17, 18, 19, 17  ),
   gsSPVertex( town_exit_rope_VertList_0+6,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP2Triangles(  10, 0, 2, 10, 27, 3, 5, 27  ),
   gsSPVertex( town_exit_rope_VertList_0+35,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( town_exit_rope_VertList_0+10,30,0  ),
     gsSP1Triangle(  1, 0, 5, 1  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP1Triangle(  24, 6, 7, 24  ),
   gsSPVertex( town_exit_rope_VertList_0+39,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
   gsSPVertex( town_exit_rope_VertList_0+28,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x000b1810),  /*New Coords: 0.74, 24.07*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x010b1810),  /*New Coords: 16.74, 24.07*/
     gsSP2Triangles(  14, 16, 0, 14, 20, 22, 29, 20  ),
   gsSPVertex( town_exit_rope_VertList_0+57,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( town_exit_rope_VertList_0+32,30,0  ),
     gsSP1Triangle(  9, 0, 1, 9  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x000b6463),  /*New Coords: 0.74, 100.39*/
     gsSP1Triangle(  14, 2, 29, 14  ),
   gsSPVertex( town_exit_rope_VertList_0+61,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( town_exit_rope_VertList_0+36,30,0  ),
     gsSP1Triangle(  22, 24, 0, 22  ),
   gsSPVertex( town_exit_rope_VertList_0+14,30,0  ),
     gsSP1Triangle(  1, 0, 24, 1  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x01068e6b),  /*New Coords: 16.41, 142.42*/
     gsSP1Triangle(  14, 13, 26, 14  ),
   gsSPVertex( town_exit_rope_VertList_0+40,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x0006dabe),  /*New Coords: 0.41, 218.74*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00068e6b),  /*New Coords: 0.41, 142.42*/
     gsSP1Triangle(  15, 0, 25, 15  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- town_exit_rope -------------------------------------------------

 
 
 
 
//>-- Obj01: START ------------------------------------------ forest_entrance_post -------------------------------------------------

Vtx forest_entrance_post_VertList_0 [] = {
   { 408.23, 264.51, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { 425.73, 264.00, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 400.34, 293.35, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { 410.19, 291.77, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { 427.69, 291.25, 113.96, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 73.55, 52.36, -40.83, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 71.97, 90.65, -34.49, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 54.29, 71.81, -43.38, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 191.84, 148.19, -478.62, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 209.52, 167.03, -469.74, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 210.35, 339.10, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 210.70, 354.12, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 182.14, 327.80, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 183.06, 340.23, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 183.41, 355.25, 95.41, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { 271.23, 66.46, -418.77, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 403.25, 38.76, 23.94, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 406.57, 77.44, 25.26, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 291.35, 84.28, -423.65, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 423.38, 56.58, 19.06, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { -117.19, 539.66, -175.53, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { -123.76, 551.46, -139.11, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -139.23, 547.98, -161.35, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { -75.96, 872.41, -256.08, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -60.48, 875.90, -233.84, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -353.89, -41.41, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -361.46, -113.13, -17.45, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { -356.22, -75.72, -8.41, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { -332.14, -25.48, -310.52, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { -339.70, -97.20, -13.05, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { 382.84, 293.87, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { 392.69, 292.28, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 392.69, 292.28, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 410.19, 291.77, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { 408.23, 264.51, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { 390.73, 265.03, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 400.34, 293.35, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { 425.73, 264.00, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 211.10, 128.73, -476.07, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 73.55, 52.36, -40.83, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 191.84, 148.19, -478.62, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 209.52, 167.03, -469.74, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 191.84, 148.19, -478.62, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 71.97, 90.65, -34.49, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 181.79, 312.77, -366.38, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 210.35, 339.10, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 182.14, 327.80, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 210.35, 339.10, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 183.06, 340.23, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 210.70, 354.12, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 274.55, 105.14, -417.46, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 271.23, 66.46, -418.77, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 406.57, 77.44, 25.26, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 271.23, 66.46, -418.77, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 291.35, 84.28, -423.65, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 403.25, 38.76, 23.94, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -53.91, 864.10, -270.26, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { -117.19, 539.66, -175.53, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { -75.96, 872.41, -256.08, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -60.48, 875.90, -233.84, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -75.96, 872.41, -256.08, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -123.76, 551.46, -139.11, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -348.66, -3.99, -305.88, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { -353.89, -41.41, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -356.22, -75.72, -8.41, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { -353.89, -41.41, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -332.14, -25.48, -310.52, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { -361.46, -113.13, -17.45, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 365.34, 294.38, -345.57, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 382.84, 293.87, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { 392.69, 292.28, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 390.73, 265.03, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 392.69, 292.28, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 408.23, 264.51, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
};

Gfx forest_entrance_post_Static_PolyList_0[] = { 



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

   gsSPVertex( forest_entrance_post_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 1, 3  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  2, 4, 3, 2  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  2, 1, 4, 2  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  5, 7, 8, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  8, 7, 6, 8, 9, 6, 5, 9  ),
     gsSP2Triangles(  10, 11, 12, 10, 13, 14, 11, 13  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  12, 14, 13, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  12, 11, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 16, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  17, 19, 18, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  17, 16, 19, 17  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  20, 22, 23, 20  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  23, 22, 21, 23, 24, 21, 20, 24  ),
     gsSP2Triangles(  25, 26, 27, 25, 28, 29, 26, 28  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP1Triangle(  27, 29, 28, 27  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0xff9e0025),  /*New Coords: -6.09, 0.59*/   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x0054ffc0),  /*New Coords: 5.28, -1.00*/
     gsSP1Triangle(  27, 26, 29, 27  ),
   gsSPVertex( forest_entrance_post_VertList_0+3,30,0  ),
     gsSP1Triangle(  27, 0, 28, 27  ),
   gsSPVertex( forest_entrance_post_VertList_0+32,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_post_VertList_0+30,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  5, 4, 0, 5, 0, 4, 6, 0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x024f09fe),  /*New Coords: 36.98, 39.98*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  4, 3, 7, 4, 0, 6, 3, 0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  8, 11, 9, 8, 14, 15, 16, 14  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  17, 18, 19, 17, 14, 16, 18, 14  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 25, 23  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  20, 22, 24, 20, 26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_post_VertList_0+59,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_post_VertList_0+56,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP1Triangle(  0, 3, 1, 0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x02ea13d7),  /*New Coords: 46.67, 79.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP2Triangles(  6, 8, 10, 6, 12, 13, 14, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  15, 16, 17, 15, 12, 15, 13, 12  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- forest_entrance_post -------------------------------------------------

 
 
//>-- Obj00: START ------------------------------------------ town_exit_bridge -------------------------------------------------

Vtx town_exit_bridge_VertList_0 [] = {
   { -1065.10, -228.18, 207.19, 1, 0x0023, 0xccc2, 147, 207, 162, 255}, 
   { -1023.02, -54.63, 209.74, 1, 0x0416, 0xcced, 142, 200, 157, 255}, 
   { -1194.05, -14.47, 202.68, 1, 0x0416, 0xb346, 120, 161, 143, 255}, 
   { -747.29, -304.23, 167.85, 1, 0x0023, 0xfc7f, 123, 171, 135, 255}, 
   { -704.45, -130.69, 157.79, 1, 0x0416, 0xfd2b, 142, 200, 157, 255}, 
   { -632.54, -333.34, 133.24, 1, 0x0023, 0x0d75, 125, 174, 137, 255}, 
   { -589.44, -159.47, 145.12, 1, 0x0416, 0x0e35, 144, 203, 159, 255}, 
   { -249.62, -424.33, 76.30, 1, 0x0023, 0x46f3, 113, 155, 123, 255}, 
   { 1664.58, -668.49, 616.10, 1, 0x0421, 0xd119, 147, 207, 162, 255}, 
   { 1622.52, -842.64, 601.85, 1, 0x002d, 0xd0cd, 113, 155, 123, 255}, 
   { 1902.83, -873.43, 781.68, 1, 0x0031, 0xa79a, 113, 155, 123, 255}, 
   { 1394.57, -628.81, 490.17, 1, 0x041d, 0xfd1f, 147, 207, 162, 255}, 
   { 1352.51, -802.96, 475.92, 1, 0x0029, 0xfcd3, 113, 155, 123, 255}, 
   { -1236.83, -188.01, 211.61, 1, 0x0053, 0xb354, 142, 200, 157, 255}, 
   { -205.98, -250.65, 95.09, 1, 0x0416, 0x4700, 147, 207, 162, 255}, 
   { 920.94, -532.72, 278.52, 1, 0x0418, 0x4845, 147, 207, 162, 255}, 
   { 878.25, -706.72, 263.75, 1, 0x0025, 0x4816, 113, 155, 123, 255}, 
   { 367.89, -399.96, 137.27, 1, 0x0416, 0x9cc4, 147, 207, 162, 255}, 
   { 322.17, -573.27, 119.99, 1, 0x0023, 0x9d1a, 113, 155, 123, 255}, 
   { 1944.89, -699.28, 795.93, 1, 0x0426, 0xa7e7, 147, 207, 162, 255}, 
   { 2171.91, -936.92, 775.83, 1, 0x0032, 0x7b99, 113, 155, 123, 255}, 
   { 2213.97, -762.77, 790.08, 1, 0x0427, 0x7be5, 147, 207, 162, 255}, 
};

Gfx town_exit_bridge_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Wood-Dock-Planks'-------------------------------------------------

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

   gsSPVertex( town_exit_bridge_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 1, 0, 3, 1  ),
     gsSP2Triangles(  4, 3, 5, 4, 6, 5, 7, 6  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 9, 11  ),
     gsSP2Triangles(  13, 0, 2, 13, 4, 1, 3, 4  ),
     gsSP2Triangles(  6, 4, 5, 6, 14, 6, 7, 14  ),
     gsSP2Triangles(  15, 16, 12, 15, 17, 18, 16, 17  ),
     gsSP2Triangles(  14, 7, 18, 14, 19, 10, 20, 19  ),
     gsSP2Triangles(  19, 8, 10, 19, 8, 11, 9, 8  ),
     gsSP2Triangles(  11, 15, 12, 11, 15, 17, 16, 15  ),
     gsSP2Triangles(  17, 14, 18, 17, 21, 19, 20, 21  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- town_exit_bridge -------------------------------------------------

 
 
 
//>-- Obj03: START ------------------------------------------ town_exit_posts -------------------------------------------------

Vtx town_exit_posts_VertList_0 [] = {
   { -151.93, 103.10, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { -169.43, 103.10, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -143.20, 74.50, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { -153.09, 75.80, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { -170.60, 75.80, 113.96, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 107.82, 279.19, 107.40, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 103.68, 240.58, 106.34, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 124.96, 257.69, 107.21, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 133.22, 270.83, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 111.94, 253.72, -356.21, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 48.04, 34.33, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 48.13, 19.30, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 75.91, 46.45, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 75.36, 34.00, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 75.45, 18.97, 95.41, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { -100.11, 325.42, -459.27, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -232.88, 349.25, -16.55, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -235.06, 310.48, -15.24, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -119.70, 307.01, -464.15, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -252.47, 330.84, -21.43, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 865.36, 700.11, -72.58, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 859.25, 675.13, -43.46, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 879.80, 679.87, -60.83, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 743.56, 455.66, -283.09, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 723.01, 450.91, -265.72, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 600.93, 431.17, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 606.39, 503.08, -17.45, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 602.25, 465.52, -8.41, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 579.65, 414.60, -310.52, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 585.11, 486.52, -13.05, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { -125.70, 74.50, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { -135.58, 75.80, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -135.58, 75.80, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -153.09, 75.80, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { -151.93, 103.10, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { -134.42, 103.10, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -143.20, 74.50, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { -169.43, 103.10, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 116.08, 292.33, -355.16, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 107.82, 279.19, 107.40, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 133.22, 270.83, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 111.94, 253.72, -356.21, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 133.22, 270.83, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 103.68, 240.58, 106.34, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 75.82, 61.48, -366.38, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 48.04, 34.33, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 75.91, 46.45, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 48.04, 34.33, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 75.36, 34.00, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 48.13, 19.30, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { -102.29, 286.65, -457.95, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { -100.11, 325.42, -459.27, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -235.06, 310.48, -15.24, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -100.11, 325.42, -459.27, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -119.70, 307.01, -464.15, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -232.88, 349.25, -16.55, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 729.12, 475.90, -294.84, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 865.36, 700.11, -72.58, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 743.56, 455.66, -283.09, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 723.01, 450.91, -265.72, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 743.56, 455.66, -283.09, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 859.25, 675.13, -43.46, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 596.78, 393.61, -305.88, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { 600.93, 431.17, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 602.25, 465.52, -8.41, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 600.93, 431.17, -314.92, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 579.65, 414.60, -310.52, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 606.39, 503.08, -17.45, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { -108.19, 74.50, -345.57, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { -125.70, 74.50, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { -135.58, 75.80, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -134.42, 103.10, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -135.58, 75.80, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -151.93, 103.10, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
};

Gfx town_exit_posts_Static_PolyList_0[] = { 



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

   gsSPVertex( town_exit_posts_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 1, 3  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  2, 4, 3, 2  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  2, 1, 4, 2  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  5, 7, 8, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  8, 7, 6, 8, 9, 6, 5, 9  ),
     gsSP2Triangles(  10, 11, 12, 10, 13, 14, 11, 13  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  12, 14, 13, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  12, 11, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 16, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  17, 19, 18, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  17, 16, 19, 17  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  20, 22, 23, 20  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  23, 22, 21, 23, 24, 21, 20, 24  ),
     gsSP2Triangles(  25, 26, 27, 25, 28, 29, 26, 28  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP1Triangle(  27, 29, 28, 27  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0xff9e0025),  /*New Coords: -6.09, 0.59*/   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x0054ffc0),  /*New Coords: 5.28, -1.00*/
     gsSP1Triangle(  27, 26, 29, 27  ),
   gsSPVertex( town_exit_posts_VertList_0+3,30,0  ),
     gsSP1Triangle(  27, 0, 28, 27  ),
   gsSPVertex( town_exit_posts_VertList_0+32,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_exit_posts_VertList_0+30,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  5, 4, 0, 5, 0, 4, 6, 0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x024f09fe),  /*New Coords: 36.98, 39.98*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  4, 3, 7, 4, 0, 6, 3, 0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  8, 11, 9, 8, 14, 15, 16, 14  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  17, 18, 19, 17, 14, 16, 18, 14  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 25, 23  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  20, 22, 24, 20, 26, 27, 28, 26  ),
   gsSPVertex( town_exit_posts_VertList_0+59,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( town_exit_posts_VertList_0+56,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP1Triangle(  0, 3, 1, 0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x02ea13d7),  /*New Coords: 46.67, 79.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP2Triangles(  6, 8, 10, 6, 12, 13, 14, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  15, 16, 17, 15, 12, 15, 13, 12  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj03: END ------------------------------------------- town_exit_posts -------------------------------------------------

 
 
//>-- Obj00: START ------------------------------------------ forest_entrance_waterfall -------------------------------------------------

Vtx forest_entrance_waterfall_VertList_0 [] = {
   { -7779.09, 3650.01, 1509.25, 1, 0xf41d, 0xf8df, 139, 183, 196, 255}, 
   { -7860.61, 3612.52, 1600.91, 1, 0xf2e2, 0xf8df, 139, 183, 196, 255}, 
   { -7711.08, 3359.10, 1606.06, 1, 0xf2e2, 0x163c, 65, 86, 92, 255}, 
   { -9082.90, 3400.46, 1916.90, 1, 0xe1b7, 0x163c, 34, 41, 40, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0xffd6, 0x163c, 65, 86, 92, 255}, 
   { -6911.30, 3833.80, -1688.15, 1, 0x1d32, 0x163c, 34, 41, 40, 255}, 
   { -6956.77, 3925.45, -1700.09, 1, 0x1d32, 0xf8df, 34, 41, 40, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x1d32, 0x163c, 139, 183, 196, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0x1d32, 0xf8df, 108, 133, 125, 255}, 
   { -7544.40, 3391.98, 1500.64, 1, 0xf401, 0x163c, 65, 86, 92, 255}, 
   { -7526.38, 3861.59, 638.05, 1, 0xffd6, 0xf8df, 100, 131, 139, 255}, 
};


void forest_entrance_waterfall_PolyList( u8 animFrame ){ 

   Vtx *forest_entrance_waterfall_VTXPointer = &forest_entrance_waterfall_VertList_0[0]; 



//>-- MATERIAL 12: START ------------------------------------ 'Ocean_Water'-------------------------------------------------

//Last:    Current: water_grey1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  water_grey1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, water_grey1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   TEX_ANIM_OFFSET(glistp, 64, 64, animCoordCycleH*2, animCoordCycleV*1 );
   gDPSetPrimColor(glistp++,  1,255,0,1,32,255  );

   gSPVertex(glistp++,  forest_entrance_waterfall_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 2, 1, 3  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0xffd6163c);  /*New Coords: -0.66, 88.94*/
     gSP2Triangles(glistp++,   4, 5, 6, 4, 3, 7, 8, 3  );
     gSP2Triangles(glistp++,   0, 9, 4, 0, 9, 0, 2, 9  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0xe1b7f8df);  /*New Coords: -121.13, -28.51*/   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0xe1b7163c);  /*New Coords: -121.13, 88.94*/
     gSP2Triangles(glistp++,   7, 3, 1, 7, 10, 4, 6, 10  );
     gSP1Triangle(glistp++,   10, 0, 4, 10  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- forest_entrance_waterfall -------------------------------------------------

 
//>-- Obj00: START ------------------------------------------ canyon_water -------------------------------------------------

Vtx canyon_water_VertList_0 [] = {
   { -742.78, 2084.67, 0.00, 1, 0x03c1, 0x1744, 55, 74, 64, 255}, 
   { 13.45, 2055.36, 0.00, 1, 0x08f7, 0x1744, 55, 74, 64, 255}, 
   { 384.72, 3717.49, 0.00, 1, 0x08f7, 0xfced, 55, 74, 64, 255}, 
   { -145.02, -3427.86, -0.00, 1, 0x08f7, 0x5bd7, 131, 201, 184, 255}, 
   { 429.79, 14.27, 0.00, 1, 0x08f7, 0x3077, 55, 74, 64, 255}, 
   { -326.43, 43.59, 0.00, 1, 0x03c1, 0x3077, 147, 226, 206, 255}, 
   { -486.50, 685.39, 0.00, 1, 0x03c1, 0x2877, 55, 74, 64, 255}, 
   { 525.15, 656.08, 0.00, 1, 0x08f7, 0x2877, 55, 74, 64, 255}, 
   { -1064.75, 737.32, 204.45, 1, 0x032b, 0x0ca2, 165, 255, 233, 255}, 
   { -915.17, 137.53, 204.45, 1, 0x0e0d, 0x0ca2, 165, 255, 233, 255}, 
   { -510.98, 4128.09, 0.00, 1, 0x03c1, 0xfced, 131, 201, 184, 255}, 
   { 1811.56, 5285.72, 0.00, 1, 0x0524, 0xee2a, 55, 74, 64, 255}, 
   { 2008.99, 4551.46, 67.65, 1, 0x0858, 0xee05, 255, 255, 255, 255}, 
   { -2068.16, -3092.06, -0.00, 1, 0x03c1, 0x5bd7, 131, 201, 184, 255}, 
};


void canyon_water_PolyList( u8 animFrame ){ 

   Vtx *canyon_water_VTXPointer = &canyon_water_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'Ocean_Water'-------------------------------------------------

//Last:    Current: water_grey1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  water_grey1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, water_grey1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   TEX_ANIM_OFFSET(glistp, 64, 64, animCoordCycleH*0, animCoordCycleV*2 );
   gDPSetPrimColor(glistp++,  1,255,0,1,32,255  );

   gSPVertex(glistp++,  canyon_water_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 7, 1, 6, 5, 4, 7, 5  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x032b06cc);  /*New Coords: 12.68, 27.19*/
     gSP2Triangles(glistp++,   6, 8, 9, 6, 10, 2, 11, 10  );
     gSP2Triangles(glistp++,   11, 2, 12, 11, 10, 0, 2, 10  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x03c12877);  /*New Coords: 15.02, 161.87*/
     gSP2Triangles(glistp++,   13, 3, 5, 13, 0, 6, 1, 0  );
     gSP1Triangle(glistp++,   6, 5, 7, 6  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x0e0d06cc);  /*New Coords: 56.20, 27.19*/   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x032b06cc);  /*New Coords: 12.68, 27.19*/
     gSP1Triangle(glistp++,   5, 6, 9, 5  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- canyon_water -------------------------------------------------

 
 //>-- Obj00: START ------------------------------------------ canyon_trees -------------------------------------------------

Vtx canyon_trees_VertList_0 [] = {
   { 2861.13, -5219.74, 1240.83, 1, 0x30e0, 0x0bd1, 45, 61, 61, 255}, 
   { 2652.19, -4353.03, 1013.45, 1, 0x4429, 0x07f7, 45, 61, 61, 255}, 
   { 1183.49, -4727.94, 113.33, 1, 0x30da, 0xfe01, 83, 112, 111, 255}, 
   { 671.91, -1761.71, -390.35, 1, 0x4fb2, 0x0246, 45, 61, 61, 255}, 
   { 994.52, 354.12, -364.19, 1, 0x268b, 0x0398, 83, 112, 111, 255}, 
   { -2096.29, -343.86, 801.32, 1, 0x40f4, 0x0f5c, 45, 61, 61, 255}, 
   { 1192.56, -5430.87, 153.52, 1, 0x1f83, 0xff43, 147, 199, 197, 255}, 
   { -1716.47, -1327.90, 1194.27, 1, 0x55c4, 0x0dba, 45, 61, 61, 255}, 
   { -1495.56, -2432.18, 495.29, 1, 0x6797, 0x091a, 45, 61, 61, 255}, 
   { 428.20, -3144.99, 21.75, 1, 0x6c00, 0x01ca, 45, 61, 61, 255}, 
   { 1118.85, -3125.15, -79.13, 1, 0x67f8, 0xfe8f, 83, 112, 111, 255}, 
   { 453.77, -6033.12, -434.93, 1, 0x1d38, 0x0742, 147, 199, 197, 255}, 
   { 847.25, -4815.62, -440.27, 1, 0x3ae2, 0x052d, 83, 112, 111, 255}, 
   { -544.41, -4894.81, 933.35, 1, 0x2464, 0xfe32, 45, 61, 61, 255}, 
   { -1523.06, -6193.31, 801.32, 1, 0xff28, 0x001d, 83, 112, 111, 255}, 
   { -2109.35, -7931.09, 385.84, 1, 0xce58, 0x0397, 147, 199, 197, 255}, 
   { -232.54, -6772.08, -328.69, 1, 0x0448, 0x0742, 147, 199, 197, 255}, 
   { -1307.23, -5376.48, 1017.66, 1, 0x10f8, 0xfdbd, 83, 112, 111, 255}, 
   { 70.52, -3885.52, 595.81, 1, 0x429c, 0xfe4d, 45, 61, 61, 255}, 
   { 920.68, -4580.18, -350.23, 1, 0x4019, 0x046c, 83, 112, 111, 255}, 
   { 1245.49, -3778.39, -120.80, 1, 0x534d, 0x0249, 147, 199, 197, 255}, 
   { 1066.64, -3462.40, -10.39, 1, 0x5897, 0x00c2, 147, 199, 197, 255}, 
   { 458.35, -3692.28, 207.43, 1, 0x4d47, 0xfe46, 45, 61, 61, 255}, 
   { -2082.99, 524.40, 994.32, 1, 0x30b8, 0x10d0, 45, 61, 61, 255}, 
   { -1043.73, 2146.88, 936.02, 1, 0x0c95, 0x0e70, 45, 61, 61, 255}, 
   { 1605.12, -3766.94, -24.17, 1, 0x4b17, 0xfece, 83, 112, 111, 255}, 
   { 2202.61, -1171.16, 1418.17, 1, 0x2c0b, 0x09be, 45, 61, 61, 255}, 
   { 1017.74, -1607.13, -440.15, 1, 0x244d, 0xfd8a, 45, 61, 61, 255}, 
   { 1442.71, -2414.60, -111.16, 1, 0x11a7, 0x0022, 45, 61, 61, 255}, 
   { 2973.84, -354.32, 801.32, 1, 0x4822, 0x0a59, 45, 61, 61, 255}, 
   { 3791.77, 1080.70, 372.45, 1, 0x6d90, 0x0b14, 45, 61, 61, 255}, 
   { 1462.48, 100.93, -341.07, 1, 0x4a46, 0xffa4, 83, 112, 111, 255}, 
   { 2333.88, -2307.33, 951.67, 1, 0x1206, 0x07c9, 45, 61, 61, 255}, 
   { 2461.86, -6108.47, 1326.62, 1, 0x201e, 0x0bd1, 45, 61, 61, 255}, 
   { 823.60, -7136.32, -174.08, 1, 0xf2d4, 0x0009, 147, 199, 197, 255}, 
   { 959.62, -3704.38, -892.07, 1, 0x002d, 0x0280, 147, 199, 197, 255}, 
   { 851.42, -3513.22, -825.27, 1, 0x0038, 0x038f, 147, 199, 197, 255}, 
   { 552.69, -3555.55, -693.50, 1, 0x0049, 0x0718, 45, 61, 61, 255}, 
   { 1831.91, -3651.97, -904.43, 1, 0x006a, 0x0696, 83, 112, 111, 255}, 
   { 1547.86, -4474.96, -994.89, 1, 0x0066, 0x0b86, 83, 112, 111, 255}, 
   { 994.52, 354.12, -364.19, 1, 0x268b, 0x0398, 83, 112, 111, 255}, 
   { 3009.07, 1266.54, -330.75, 1, 0x069f, 0xfc70, 83, 112, 111, 255}, 
   { 1732.95, 2661.23, 787.35, 1, 0xf368, 0x05ef, 45, 61, 61, 255}, 
   { 2461.86, -6108.47, 1326.62, 1, 0x201e, 0x0bd1, 45, 61, 61, 255}, 
   { 2861.13, -5219.74, 1240.83, 1, 0x30e0, 0x0bd1, 45, 61, 61, 255}, 
   { 1192.56, -5430.87, 153.52, 1, 0x1f83, 0xff43, 147, 199, 197, 255}, 
   { 2613.66, -3664.25, 1191.85, 1, 0x56d2, 0x0885, 45, 61, 61, 255}, 
   { 2652.19, -4353.03, 1013.45, 1, 0x4429, 0x07f7, 45, 61, 61, 255}, 
   { 1183.49, -4727.94, 113.33, 1, 0x0093, 0x0e44, 83, 112, 111, 255}, 
};

Gfx canyon_trees_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( canyon_trees_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  0, 2, 6, 0, 7, 8, 3, 7  ),
     gsSP2Triangles(  9, 10, 3, 9, 11, 12, 13, 11  ),
     gsSP2Triangles(  14, 15, 16, 14, 16, 11, 17, 16  ),
     gsSP2Triangles(  18, 13, 12, 18, 18, 19, 20, 18  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 4, 24, 23  ),
     gsSP2Triangles(  5, 4, 23, 5, 25, 2, 1, 25  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( canyon_trees_VertList_0+29,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( canyon_trees_VertList_0+26,30,0  ),
     gsSP1Triangle(  5, 1, 0, 5  ),
   gsSPVertex( canyon_trees_VertList_0+25,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf3af0096),  /*New Coords: -24.63, 4.71*/
     gsSP1Triangle(  7, 3, 0, 7  ),
   gsSPVertex( canyon_trees_VertList_0+6,30,0  ),
     gsSP1Triangle(  27, 0, 28, 27  ),
   gsSPVertex( canyon_trees_VertList_0+35,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPVertex( canyon_trees_VertList_0+3,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( canyon_trees_VertList_0+32,30,0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPVertex( canyon_trees_VertList_0+3,30,0  ),
     gsSP2Triangles(  5, 6, 0, 5, 14, 8, 10, 14  ),
     gsSP2Triangles(  11, 13, 14, 11, 16, 15, 9, 16  ),
     gsSP1Triangle(  15, 17, 19, 15  ),
   gsSPVertex( canyon_trees_VertList_0+25,30,0  ),
     gsSP1Triangle(  21, 0, 22, 21  ),
     gsSP2Triangles(  7, 1, 3, 7, 4, 6, 1, 4  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xf3af094b),  /*New Coords: -24.63, 74.37*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf3af0096),  /*New Coords: -24.63, 4.71*/
     gsSP1Triangle(  21, 7, 0, 21  ),
   gsSPVertex( canyon_trees_VertList_0+24,30,0  ),
     gsSP1Triangle(  0, 16, 18, 0  ),


//>-- MATERIAL 1: START ------------------------------------ 'Wood-Dock-Planks-Solid'-------------------------------------------------

//Last: wood_dock_planks   Current: wood_dock_planks
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_planks,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,1 ),
   gsDPLoadTLUT_pal16(   0, wood_dock_planks_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( canyon_trees_VertList_0+20,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0091ff3e),  /*New Coords: 9.10, -3.02*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00a300fd),  /*New Coords: 10.19, 3.97*/
     gsSP2Triangles(  0, 15, 16, 0, 1, 16, 17, 1  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x009e03d7),  /*New Coords: 9.88, 15.36*/
     gsSP2Triangles(  5, 18, 19, 5, 1, 0, 16, 1  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x00bd0858),  /*New Coords: 11.87, 33.38*/
     gsSP2Triangles(  2, 1, 17, 2, 28, 5, 19, 28  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- canyon_trees -------------------------------------------------

 
 
//>-- Obj00: START ------------------------------------------ forest_entrance -------------------------------------------------

Vtx forest_entrance_VertList_0 [] = {
   { -13241.44, 8309.85, 727.79, 1, 0x0000, 0x0400, 149, 181, 138, 255}, 
   { -13583.92, 7858.06, 722.74, 1, 0x4000, 0x0400, 149, 181, 138, 255}, 
   { -13477.99, 7848.84, 884.34, 1, 0x4000, 0x0000, 45, 54, 49, 255}, 
   { -13591.44, 8309.85, 727.79, 1, 0x652f, 0x0f93, 149, 181, 138, 255}, 
   { -14014.65, 7868.37, 815.92, 1, 0x4eb5, 0x0a2c, 149, 181, 138, 255}, 
   { -13941.44, 8309.85, 727.79, 1, 0x655d, 0x0b22, 149, 181, 138, 255}, 
   { -14312.71, 7929.53, 820.91, 1, 0x51b0, 0x066a, 149, 181, 138, 255}, 
   { -14041.44, 8309.85, 827.79, 1, 0xf36b, 0x0029, 34, 41, 40, 255}, 
   { -14379.37, 7940.27, 997.52, 1, 0x08f7, 0x0029, 35, 42, 41, 255}, 
   { -14704.83, 7859.31, 722.74, 1, 0x37fc, 0x03e9, 149, 181, 138, 255}, 
   { -14634.45, 7961.23, 874.23, 1, 0x37fc, 0x000a, 45, 54, 49, 255}, 
   { -14784.75, 8309.85, 827.79, 1, 0x5248, 0x000a, 44, 51, 42, 255}, 
   { -15115.04, 7727.58, 815.92, 1, 0x4605, 0xfc15, 149, 181, 138, 255}, 
   { -14884.75, 8309.85, 727.79, 1, 0x63f3, 0xfedd, 149, 181, 138, 255}, 
   { -15509.30, 7687.46, 820.91, 1, 0x439c, 0xf849, 149, 181, 138, 255}, 
   { -15234.75, 8309.85, 727.79, 1, 0x63a1, 0xfa6d, 149, 181, 138, 255}, 
   { -15684.75, 8309.85, 827.79, 1, 0x7b22, 0x0000, 34, 41, 40, 255}, 
   { -15575.78, 7675.71, 997.52, 1, 0x5053, 0x0000, 45, 54, 49, 255}, 
   { -15173.28, 7276.32, 728.68, 1, 0x2ec7, 0xfb7a, 149, 181, 138, 255}, 
   { -14526.07, 7276.32, 728.68, 1, 0x3000, 0x03c4, 149, 181, 138, 255}, 
   { -13901.04, 7276.32, 728.68, 1, 0x30b9, 0x0bbe, 149, 181, 138, 255}, 
   { -13623.79, 7276.32, 989.90, 1, 0x86d4, 0x0000, 45, 54, 49, 255}, 
   { -15399.98, 7276.32, 989.90, 1, 0x2f83, 0x0000, 45, 54, 49, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x5f1a, 0x03cf, 149, 181, 138, 255}, 
   { -14614.45, 6574.10, 898.76, 1, 0x6a17, 0x0049, 37, 45, 43, 255}, 
   { -13914.47, 6098.32, 1035.46, 1, 0x3f34, 0x002d, 41, 50, 47, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0x1173, 0x03b0, 149, 181, 138, 255}, 
   { -13264.52, 5731.72, 1157.19, 1, 0x13bd, 0x0005, 37, 45, 43, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0xf2d8, 0x00de, 34, 41, 40, 255}, 
   { -12519.74, 6752.05, 1249.66, 1, 0x1c83, 0x008a, 50, 60, 47, 255}, 
   { -12720.12, 6695.51, 962.51, 1, 0x137a, 0x03bd, 149, 181, 138, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0x2858, 0x03ef, 149, 181, 138, 255}, 
   { -11069.12, 5395.58, 1154.74, 1, 0x2398, 0x0fd4, 34, 41, 40, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0x3605, 0x0ff2, 34, 41, 40, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -10825.13, 7148.04, 1154.63, 1, 0x2272, 0x00c1, 34, 41, 40, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -10620.74, 6536.84, 1186.47, 1, 0x2e6c, 0x03fd, 124, 148, 112, 255}, 
   { -8353.84, 5240.85, 1013.47, 1, 0x8dff, 0x0daa, 129, 140, 101, 255}, 
   { -8279.36, 6487.01, 992.89, 1, 0x8a6a, 0x0177, 129, 140, 101, 255}, 
   { -9368.77, 5470.49, 992.36, 1, 0x6577, 0x0cbf, 129, 140, 101, 255}, 
   { -9427.46, 4469.47, 1052.85, 1, 0x6848, 0x1688, 34, 41, 40, 255}, 
   { -10004.54, 5359.57, 1088.05, 1, 0x4d29, 0x0eac, 84, 93, 72, 255}, 
   { -10237.67, 7099.72, 1190.36, 1, 0x3ab3, 0xfdf3, 34, 41, 40, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x6c74, 0xfc90, 111, 121, 89, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x195f, 0xfc90, 34, 41, 40, 255}, 
   { -8756.41, 4756.97, 1028.24, 1, 0x80da, 0x12e1, 67, 82, 55, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x55be, 0x0025, 149, 185, 171, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x2c5d, 0x0005, 106, 131, 122, 255}, 
   { -8261.31, 5161.69, 797.65, 1, 0x4218, 0x0a2c, 67, 82, 55, 255}, 
   { -8751.63, 4575.81, 779.46, 1, 0x4f63, 0x09aa, 67, 82, 55, 255}, 
   { -8745.68, 5125.38, -1966.56, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -9300.14, 4457.63, 754.99, 1, 0xaa07, 0x0403, 34, 41, 40, 255}, 
   { -8251.32, 6466.98, 794.02, 1, 0x6616, 0x0403, 67, 82, 55, 255}, 
   { -9191.07, 6877.13, -1773.69, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -10042.04, 7589.38, -1477.61, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0x1064, 0x0a4b, 34, 41, 40, 255}, 
   { -12066.43, 5603.75, 1070.61, 1, 0xfbac, 0x0fb8, 142, 173, 132, 255}, 
   { -12152.22, 5338.89, 1058.78, 1, 0xfaab, 0x126f, 34, 41, 40, 255}, 
   { -11535.19, 5478.69, 1133.92, 1, 0x1132, 0x0fd0, 34, 41, 40, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x49c1, 0x03d6, 34, 41, 40, 255}, 
   { -11778.78, 6758.94, 1281.91, 1, 0x3c6f, 0x0091, 40, 50, 44, 255}, 
   { -11507.65, 6589.01, 1163.27, 1, 0x410f, 0x03d8, 136, 165, 126, 255}, 
   { -9069.73, 6313.06, 1072.52, 1, 0x6c5f, 0x0424, 119, 129, 94, 255}, 
   { -9536.28, 6212.69, 1095.12, 1, 0x5abf, 0x05bf, 120, 130, 95, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0x3605, 0x0ff2, 34, 41, 40, 255}, 
   { -10140.08, 5683.39, 1092.87, 1, 0x462e, 0x0bb5, 126, 144, 106, 255}, 
   { -9588.71, 6762.13, 1072.23, 1, 0x55e8, 0x0083, 111, 121, 89, 255}, 
   { -10104.72, 6505.04, 1129.35, 1, 0x4253, 0x023c, 117, 134, 100, 255}, 
   { -12962.57, 6231.48, 942.18, 1, 0xd2e8, 0x0bfa, 149, 181, 138, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0xcee3, 0x10f2, 149, 181, 138, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xe682, 0x1201, 149, 181, 138, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -11553.71, 5735.24, 1139.02, 1, 0x0e94, 0x0d61, 136, 165, 126, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x991e, 0x0d02, 149, 181, 138, 255}, 
   { -13782.30, 6089.72, 849.83, 1, 0xb62f, 0x0fa6, 149, 181, 138, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -8761.80, 6106.56, -1994.44, 1, 0x2971, 0x0076, 34, 41, 40, 255}, 
   { -8261.31, 5161.69, 797.65, 1, 0x4218, 0x0a2c, 67, 82, 55, 255}, 
   { -8756.41, 4756.97, 1028.24, 1, 0xea07, 0x0003, 67, 82, 55, 255}, 
   { -8751.63, 4575.81, 779.46, 1, 0xea07, 0x0403, 67, 82, 55, 255}, 
   { -8261.31, 5161.69, 797.65, 1, 0x1a2e, 0x0403, 67, 82, 55, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0x5cef, 0x0389, 34, 41, 40, 255}, 
   { -10042.04, 7589.38, -1477.61, 1, 0x3544, 0x0aa5, 34, 41, 40, 255}, 
   { -9043.00, 8223.11, -1162.10, 1, 0x5771, 0x0c1b, 34, 41, 40, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x5449, 0x0375, 111, 121, 89, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -8751.63, 4575.81, 779.46, 1, 0x4f63, 0x09aa, 67, 82, 55, 255}, 
   { -9300.14, 4457.63, 754.99, 1, 0x634b, 0x0a6f, 34, 41, 40, 255}, 
   { -8745.68, 5125.38, -1966.56, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -9427.46, 4469.47, 1052.85, 1, 0xd624, 0x03c4, 34, 41, 40, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0xfcb1, 0x03d9, 34, 41, 40, 255}, 
   { -10680.54, 5240.33, 1450.38, 1, 0xff03, 0x0062, 66, 82, 77, 255}, 
   { -6865.84, 3742.14, -1676.22, 1, 0x3a19, 0x09e3, 34, 41, 40, 255}, 
   { -6911.30, 3833.80, -1688.15, 1, 0x3bc0, 0x09f7, 34, 41, 40, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0x3824, 0xfe67, 65, 86, 92, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0xe033, 0xfc6e, 87, 106, 100, 255}, 
   { -9634.67, 2694.38, 3457.81, 1, 0x04ae, 0x08cb, 103, 135, 143, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0xd100, 0x0259, 108, 133, 125, 255}, 
   { -9480.63, 4226.58, 2267.21, 1, 0xf25a, 0xfc9c, 98, 120, 112, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x2cf5, 0x0015, 34, 41, 40, 255}, 
   { -10504.33, 4882.18, 3121.95, 1, 0x2528, 0xfceb, 34, 41, 40, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x1660, 0xfd32, 34, 41, 40, 255}, 
   { -11069.12, 5395.58, 1154.74, 1, 0x09cc, 0x03e6, 34, 41, 40, 255}, 
   { -11535.19, 5478.69, 1133.92, 1, 0x16e8, 0x03f2, 34, 41, 40, 255}, 
   { -11606.74, 5476.17, 1475.60, 1, 0x198d, 0x0017, 146, 181, 167, 255}, 
   { -7526.38, 3861.59, 638.05, 1, 0xe175, 0xfdd2, 100, 131, 139, 255}, 
   { -6956.77, 3925.45, -1700.09, 1, 0xdfbf, 0x05f4, 34, 41, 40, 255}, 
   { -7002.23, 4017.11, -1712.02, 1, 0xe0b2, 0x05f6, 34, 41, 40, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x4461, 0x06a9, 93, 114, 107, 255}, 
   { -12925.66, 4404.84, 2220.18, 1, 0xd851, 0x058a, 34, 41, 40, 255}, 
   { -12808.02, 4879.21, 1850.68, 1, 0xd851, 0x0058, 34, 41, 40, 255}, 
   { -13381.27, 4495.01, 953.36, 1, 0xbed1, 0x0124, 34, 41, 40, 255}, 
   { -10027.70, 4261.87, 3558.17, 1, 0x464b, 0x0312, 108, 133, 125, 255}, 
   { -12064.56, 7374.46, 1043.93, 1, 0xfe1d, 0x04f5, 34, 41, 40, 255}, 
   { -12564.38, 7716.04, 1071.05, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -11957.13, 8638.13, -518.73, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -9043.00, 8223.11, -1162.10, 1, 0x5771, 0x0c1b, 34, 41, 40, 255}, 
   { -8706.08, 9210.26, 28.10, 1, 0x7ca8, 0x09ed, 34, 41, 40, 255}, 
   { -12659.41, 8176.02, 1158.58, 1, 0xe8e9, 0x0a64, 34, 41, 40, 255}, 
   { -12032.33, 9033.40, 580.98, 1, 0xf196, 0x0a3f, 34, 41, 40, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x55be, 0x0025, 149, 185, 171, 255}, 
   { -8706.45, 8890.42, 2190.55, 1, 0x7d0c, 0x002e, 34, 41, 40, 255}, 
   { -9193.14, 4483.23, 1543.22, 1, 0x42a9, 0x03db, 34, 41, 40, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x18a8, 0x0023, 98, 120, 112, 255}, 
   { -8523.79, 9497.38, 836.83, 1, 0x8e7d, 0x0710, 34, 41, 40, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x1a22, 0x0e4c, 106, 131, 122, 255}, 
   { -9814.02, 7202.98, 2515.22, 1, 0x2c5c, 0x08e2, 149, 185, 171, 255}, 
   { -10436.15, 8092.65, 3446.30, 1, 0x1d96, 0x024f, 34, 41, 40, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -9055.13, 8875.74, 2750.88, 1, 0x41c7, 0x00ce, 34, 41, 40, 255}, 
   { -11913.09, 8578.37, 2751.71, 1, 0xf545, 0x030c, 34, 41, 40, 255}, 
   { -12382.57, 6913.79, 2008.54, 1, 0xf81a, 0x0cf9, 72, 89, 84, 255}, 
   { -11458.20, 7038.87, 2647.85, 1, 0x0abd, 0x096f, 72, 89, 84, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x27b8, 0x03fa, 34, 41, 40, 255}, 
   { -11411.89, 7874.33, 3198.94, 1, 0x094d, 0x044a, 34, 41, 40, 255}, 
   { -12135.03, 9344.77, 1652.11, 1, 0xf196, 0x0a3f, 34, 41, 40, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x1d06, 0xffa5, 34, 41, 40, 255}, 
   { -11668.67, 4873.49, 2360.23, 1, 0x04e3, 0x00fc, 34, 41, 40, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0x3b03, 0x0900, 108, 133, 125, 255}, 
   { -11668.67, 4873.49, 2360.23, 1, 0x04e3, 0x00fc, 34, 41, 40, 255}, 
   { -12808.02, 4879.21, 1850.68, 1, 0xd851, 0x0058, 34, 41, 40, 255}, 
   { -12925.66, 4404.84, 2220.18, 1, 0xd851, 0x058a, 34, 41, 40, 255}, 
   { -11872.27, 4096.37, 2672.54, 1, 0x01bc, 0x07e1, 108, 133, 125, 255}, 
   { -13264.52, 5731.72, 1157.19, 1, 0x0828, 0x03cd, 37, 45, 43, 255}, 
   { -13914.47, 6098.32, 1035.46, 1, 0x2702, 0x03c3, 41, 50, 47, 255}, 
   { -14042.68, 5760.34, 1335.88, 1, 0x208f, 0x0035, 146, 181, 167, 255}, 
   { -12084.21, 6680.67, 1275.16, 1, 0x41bd, 0x03c7, 47, 59, 49, 255}, 
   { -11935.49, 7245.13, 1485.23, 1, 0x426a, 0xfff6, 146, 181, 167, 255}, 
   { -12495.48, 6988.91, 1450.70, 1, 0x2df0, 0xfffa, 146, 181, 167, 255}, 
   { -11778.78, 6758.94, 1281.91, 1, 0x3c6f, 0x0091, 40, 50, 44, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x49c1, 0x03d6, 34, 41, 40, 255}, 
   { -11935.49, 7245.13, 1485.23, 1, 0x4bed, 0x0026, 146, 181, 167, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x6c74, 0xfc90, 111, 121, 89, 255}, 
   { -9069.73, 6313.06, 1072.52, 1, 0x6c5f, 0x0424, 119, 129, 94, 255}, 
   { -8279.36, 6487.01, 992.89, 1, 0x8a6a, 0x0177, 129, 140, 101, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x1660, 0xfd32, 34, 41, 40, 255}, 
   { -10504.33, 4882.18, 3121.95, 1, 0x2528, 0xfceb, 34, 41, 40, 255}, 
   { -10033.24, 5315.04, 3430.33, 1, 0x1ca1, 0xfa14, 34, 41, 40, 255}, 
   { -10027.70, 4261.87, 3558.17, 1, 0x464b, 0x0312, 108, 133, 125, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x140e, 0x0018, 158, 196, 181, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0xfae4, 0x0003, 93, 114, 107, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0xfa02, 0x03f5, 79, 97, 91, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x3070, 0xfcb0, 150, 186, 172, 255}, 
   { -7311.44, 3219.03, -1406.84, 1, 0x268a, 0x081c, 34, 41, 40, 255}, 
   { -7544.40, 3391.98, 1500.64, 1, 0x1d86, 0x006c, 65, 86, 92, 255}, 
   { -7711.08, 3359.10, 1606.06, 1, 0x1c1c, 0x0015, 65, 86, 92, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0x1731, 0x0401, 87, 106, 100, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x18a8, 0x0023, 98, 120, 112, 255}, 
   { -7779.09, 3650.01, 1509.25, 1, 0x128e, 0x007f, 139, 183, 196, 255}, 
   { -9300.14, 4457.63, 754.99, 1, 0x0f0b, 0x07cc, 34, 41, 40, 255}, 
   { -9427.46, 4469.47, 1052.85, 1, 0x1114, 0x0682, 34, 41, 40, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0xebf1, 0x0670, 87, 106, 100, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -7843.87, 3709.43, 1731.47, 1, 0x44b4, 0xfe09, 158, 196, 181, 255}, 
   { -9193.14, 4483.23, 1543.22, 1, 0x0c3a, 0x0274, 34, 41, 40, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -9082.90, 3400.46, 1916.90, 1, 0x122d, 0x0038, 34, 41, 40, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0xd100, 0x0259, 108, 133, 125, 255}, 
   { -10680.54, 5240.33, 1450.38, 1, 0x2aeb, 0x03c0, 66, 82, 77, 255}, 
   { -10680.54, 5240.33, 1450.38, 1, 0x2aeb, 0x03c0, 66, 82, 77, 255}, 
   { -11606.74, 5476.17, 1475.60, 1, 0x3bbe, 0x03e6, 146, 181, 167, 255}, 
   { -11668.67, 4873.49, 2360.23, 1, 0x3860, 0x0037, 34, 41, 40, 255}, 
   { -9427.46, 4469.47, 1052.85, 1, 0x6848, 0x1688, 34, 41, 40, 255}, 
   { -9368.77, 5470.49, 992.36, 1, 0x6577, 0x0cbf, 129, 140, 101, 255}, 
   { -10004.54, 5359.57, 1088.05, 1, 0x4d29, 0x0eac, 84, 93, 72, 255}, 
   { -10140.08, 5683.39, 1092.87, 1, 0x462e, 0x0bb5, 126, 144, 106, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x2d93, 0x0774, 124, 148, 112, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -7860.61, 3612.52, 1600.91, 1, 0x12cf, 0x0022, 139, 183, 196, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x0fc0, 0x0038, 139, 183, 196, 255}, 
   { -8185.50, 1273.58, 1061.55, 1, 0x0307, 0xfc24, 152, 188, 174, 255}, 
   { -9103.82, -74.97, 654.48, 1, 0xe8f8, 0xfd82, 40, 48, 46, 255}, 
   { -9307.85, 521.93, -1520.78, 1, 0xee3c, 0x0813, 34, 41, 40, 255}, 
   { -8480.30, 1206.95, 1914.43, 1, 0xdfb7, 0x0015, 79, 97, 91, 255}, 
   { -9290.21, 81.37, 1587.41, 1, 0xc9e0, 0x0004, 40, 48, 46, 255}, 
   { -10233.29, 1864.50, 3429.80, 1, 0xf075, 0x07c6, 79, 97, 91, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x1e3d, 0x0325, 93, 114, 107, 255}, 
   { -9634.67, 2694.38, 3457.81, 1, 0x04ae, 0x08cb, 103, 135, 143, 255}, 
   { -8480.30, 1206.95, 1914.43, 1, 0x07dd, 0x02ad, 79, 97, 91, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0x1b48, 0xfc6b, 79, 97, 91, 255}, 
   { -8309.64, 1870.48, -1463.81, 1, 0x08d0, 0x0806, 40, 48, 46, 255}, 
   { -10831.91, 1520.83, 2912.13, 1, 0xdfee, 0x0724, 40, 48, 46, 255}, 
   { -10104.72, 6505.04, 1129.35, 1, 0x4253, 0x023c, 117, 134, 100, 255}, 
   { -10041.29, 6144.05, 1100.54, 1, 0x477f, 0x0717, 122, 139, 103, 255}, 
   { -9536.28, 6212.69, 1095.12, 1, 0x5abf, 0x05bf, 120, 130, 95, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x2d93, 0x0774, 124, 148, 112, 255}, 
   { -11861.30, 6454.76, 1114.81, 1, 0xfc38, 0x06c6, 142, 173, 132, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -12720.12, 6695.51, 962.51, 1, 0xd6e0, 0x06e1, 149, 181, 138, 255}, 
   { -12962.57, 6231.48, 942.18, 1, 0xd2e8, 0x0bfa, 149, 181, 138, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -14526.07, 7276.32, 728.68, 1, 0x7eb0, 0x063d, 149, 181, 138, 255}, 
   { -15173.28, 7276.32, 728.68, 1, 0x72c8, 0x095b, 149, 181, 138, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x991e, 0x0d02, 149, 181, 138, 255}, 
   { -13914.47, 6098.32, 1035.46, 1, 0x2702, 0x03c3, 41, 50, 47, 255}, 
   { -14614.45, 6574.10, 898.76, 1, 0x46af, 0x03ce, 37, 45, 43, 255}, 
   { -14601.50, 6209.98, 1254.54, 1, 0x3c39, 0x0042, 140, 173, 160, 255}, 
   { -13623.79, 7276.32, 989.90, 1, 0xf177, 0x004f, 44, 51, 42, 255}, 
   { -13901.04, 7276.32, 728.68, 1, 0xe437, 0x03c4, 149, 181, 138, 255}, 
   { -13211.18, 6909.52, 880.22, 1, 0xfde0, 0x03c0, 149, 181, 138, 255}, 
   { -15399.98, 7276.32, 989.90, 1, 0x56d4, 0x0049, 134, 166, 154, 255}, 
   { -13496.74, 6499.62, 865.02, 1, 0xbba6, 0x0b08, 149, 181, 138, 255}, 
   { -12519.74, 6752.05, 1249.66, 1, 0x3020, 0x03c8, 50, 60, 47, 255}, 
   { -12495.48, 6988.91, 1450.70, 1, 0x2df0, 0xfffa, 146, 181, 167, 255}, 
   { -12939.32, 7138.43, 1350.23, 1, 0x1b16, 0xfffa, 146, 181, 167, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0xf29c, 0x03c0, 34, 41, 40, 255}, 
   { -13264.52, 5731.72, 1157.19, 1, 0x0828, 0x03cd, 37, 45, 43, 255}, 
   { -13461.55, 5414.64, 1388.99, 1, 0x08ea, 0x001c, 90, 111, 103, 255}, 
   { -13496.74, 6499.62, 865.02, 1, 0xbba6, 0x0b08, 149, 181, 138, 255}, 
   { -13782.30, 6089.72, 849.83, 1, 0xb62f, 0x0fa6, 149, 181, 138, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0xcee3, 0x10f2, 149, 181, 138, 255}, 
   { -13088.08, 7002.22, 1092.81, 1, 0x0339, 0x0083, 54, 61, 45, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0xebbd, 0x0733, 149, 181, 138, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xe682, 0x1201, 149, 181, 138, 255}, 
   { -12066.43, 5603.75, 1070.61, 1, 0xfbac, 0x0fb8, 142, 173, 132, 255}, 
   { -11778.78, 6758.94, 1281.91, 1, 0x3c6f, 0x0091, 40, 50, 44, 255}, 
   { -12084.21, 6680.67, 1275.16, 1, 0x2eeb, 0x00b2, 47, 59, 49, 255}, 
   { -11861.30, 6454.76, 1114.81, 1, 0x38d2, 0x03fb, 142, 173, 132, 255}, 
   { -12152.22, 5338.89, 1058.78, 1, 0xfaab, 0x126f, 34, 41, 40, 255}, 
   { -11507.65, 6589.01, 1163.27, 1, 0x0a30, 0x04ac, 136, 165, 126, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -11553.71, 5735.24, 1139.02, 1, 0x0e94, 0x0d61, 136, 165, 126, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x0afe, 0x0089, 34, 41, 40, 255}, 
   { -11507.65, 6589.01, 1163.27, 1, 0x0a30, 0x04ac, 136, 165, 126, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -11535.19, 5478.69, 1133.92, 1, 0x1132, 0x0fd0, 34, 41, 40, 255}, 
   { -11069.12, 5395.58, 1154.74, 1, 0x2398, 0x0fd4, 34, 41, 40, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0xfcb1, 0x03d9, 34, 41, 40, 255}, 
   { -11069.12, 5395.58, 1154.74, 1, 0x09cc, 0x03e6, 34, 41, 40, 255}, 
   { -10680.54, 5240.33, 1450.38, 1, 0xff03, 0x0062, 66, 82, 77, 255}, 
   { -11606.74, 5476.17, 1475.60, 1, 0x198d, 0x0017, 146, 181, 167, 255}, 
   { -11935.49, 7245.13, 1485.23, 1, 0x4826, 0x01ee, 146, 181, 167, 255}, 
   { -12808.02, 4879.21, 1850.68, 1, 0xd851, 0x0058, 34, 41, 40, 255}, 
   { -12868.71, 5054.77, 1330.85, 1, 0xd0fc, 0xfe86, 66, 82, 77, 255}, 
   { -13381.27, 4495.01, 953.36, 1, 0xbed1, 0x0124, 34, 41, 40, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0xf2d8, 0x00de, 34, 41, 40, 255}, 
   { -9069.73, 6313.06, 1072.52, 1, 0x6c5f, 0x0424, 119, 129, 94, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x6c74, 0xfc90, 111, 121, 89, 255}, 
   { -9588.71, 6762.13, 1072.23, 1, 0x55e8, 0x0083, 111, 121, 89, 255}, 
   { -10237.67, 7099.72, 1190.36, 1, 0x3ab3, 0xfdf3, 34, 41, 40, 255}, 
   { -10620.74, 6536.84, 1186.47, 1, 0x2e6c, 0x03fd, 124, 148, 112, 255}, 
   { -10104.72, 6505.04, 1129.35, 1, 0x4253, 0x023c, 117, 134, 100, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -13496.74, 6499.62, 865.02, 1, 0xbba6, 0x0b08, 149, 181, 138, 255}, 
   { -13211.18, 6909.52, 880.22, 1, 0xc146, 0x064b, 149, 181, 138, 255}, 
   { -13901.04, 7276.32, 728.68, 1, 0x8aa6, 0x031d, 149, 181, 138, 255}, 
   { -14526.07, 7276.32, 728.68, 1, 0x7eb0, 0x063d, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -13141.44, 8309.85, 827.79, 1, 0x0000, 0x0000, 44, 51, 42, 255}, 
   { -13241.44, 8309.85, 727.79, 1, 0x0000, 0x0400, 149, 181, 138, 255}, 
   { -13477.99, 7848.84, 884.34, 1, 0x4000, 0x0000, 45, 54, 49, 255}, 
   { -13241.44, 8309.85, 727.79, 1, 0x655d, 0x1404, 149, 181, 138, 255}, 
   { -13591.44, 8309.85, 727.79, 1, 0x652f, 0x0f93, 149, 181, 138, 255}, 
   { -13583.92, 7858.06, 722.74, 1, 0x4e42, 0x0fba, 149, 181, 138, 255}, 
   { -13591.44, 8309.85, 727.79, 1, 0x652f, 0x0f93, 149, 181, 138, 255}, 
   { -13941.44, 8309.85, 727.79, 1, 0x655d, 0x0b22, 149, 181, 138, 255}, 
   { -14014.65, 7868.37, 815.92, 1, 0x4eb5, 0x0a2c, 149, 181, 138, 255}, 
   { -13941.44, 8309.85, 727.79, 1, 0xf36b, 0x0400, 149, 181, 138, 255}, 
   { -14041.44, 8309.85, 827.79, 1, 0xf36b, 0x0029, 34, 41, 40, 255}, 
   { -14312.71, 7929.53, 820.91, 1, 0x08f7, 0x0400, 149, 181, 138, 255}, 
   { -15584.75, 8309.85, 727.79, 1, 0x6344, 0xf600, 149, 181, 138, 255}, 
   { -15509.30, 7687.46, 820.91, 1, 0x439c, 0xf849, 149, 181, 138, 255}, 
   { -15234.75, 8309.85, 727.79, 1, 0x63a1, 0xfa6d, 149, 181, 138, 255}, 
   { -15684.75, 8309.85, 827.79, 1, 0x7b22, 0x0000, 34, 41, 40, 255}, 
   { -15509.30, 7687.46, 820.91, 1, 0x439c, 0xf849, 149, 181, 138, 255}, 
   { -15173.28, 7276.32, 728.68, 1, 0x2ec7, 0xfb7a, 149, 181, 138, 255}, 
   { -15115.04, 7727.58, 815.92, 1, 0x4605, 0xfc15, 149, 181, 138, 255}, 
   { -14704.83, 7859.31, 722.74, 1, 0x0001, 0x03a8, 149, 181, 138, 255}, 
   { -14312.71, 7929.53, 820.91, 1, 0x22b1, 0x03ff, 149, 181, 138, 255}, 
   { -14634.45, 7961.23, 874.23, 1, 0x0abd, 0x0082, 45, 54, 49, 255}, 
   { -13623.79, 7276.32, 989.90, 1, 0x86d4, 0x0000, 45, 54, 49, 255}, 
   { -15575.78, 7675.71, 997.52, 1, 0x5053, 0x0000, 45, 54, 49, 255}, 
   { -15399.98, 7276.32, 989.90, 1, 0x2f83, 0x0000, 45, 54, 49, 255}, 
   { -15509.30, 7687.46, 820.91, 1, 0x5053, 0x03ff, 149, 181, 138, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xffc0, 0x03b0, 149, 181, 138, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0x1173, 0x03b0, 149, 181, 138, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0xf2d8, 0x00de, 34, 41, 40, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -11069.12, 5395.58, 1154.74, 1, 0x2398, 0x0fd4, 34, 41, 40, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -10237.67, 7099.72, 1190.36, 1, 0x3ab3, 0xfdf3, 34, 41, 40, 255}, 
   { -10825.13, 7148.04, 1154.63, 1, 0x2272, 0x00c1, 34, 41, 40, 255}, 
   { -10620.74, 6536.84, 1186.47, 1, 0x2e6c, 0x03fd, 124, 148, 112, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x27b8, 0x03fa, 34, 41, 40, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x5449, 0x0375, 111, 121, 89, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x2c5d, 0x0005, 106, 131, 122, 255}, 
   { -8751.63, 4575.81, 779.46, 1, 0xea07, 0x0403, 67, 82, 55, 255}, 
   { -8756.41, 4756.97, 1028.24, 1, 0xea07, 0x0003, 67, 82, 55, 255}, 
   { -9300.14, 4457.63, 754.99, 1, 0xaa07, 0x0403, 34, 41, 40, 255}, 
   { -8279.36, 6487.01, 992.89, 1, 0x6616, 0x0003, 129, 140, 101, 255}, 
   { -8353.84, 5240.85, 1013.47, 1, 0x1a2e, 0x0003, 129, 140, 101, 255}, 
   { -8251.32, 6466.98, 794.02, 1, 0x6616, 0x0403, 67, 82, 55, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0x3605, 0x0ff2, 34, 41, 40, 255}, 
   { -10140.08, 5683.39, 1092.87, 1, 0x462e, 0x0bb5, 126, 144, 106, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -12962.57, 6231.48, 942.18, 1, 0xd2e8, 0x0bfa, 149, 181, 138, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xe682, 0x1201, 149, 181, 138, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -11553.71, 5735.24, 1139.02, 1, 0x0e94, 0x0d61, 136, 165, 126, 255}, 
   { -13496.74, 6499.62, 865.02, 1, 0xbba6, 0x0b08, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -13782.30, 6089.72, 849.83, 1, 0xb62f, 0x0fa6, 149, 181, 138, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x2d93, 0x0774, 124, 148, 112, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -10758.58, 5854.11, 1173.47, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -10041.29, 6144.05, 1100.54, 1, 0x477f, 0x0717, 122, 139, 103, 255}, 
   { -10140.08, 5683.39, 1092.87, 1, 0x462e, 0x0bb5, 126, 144, 106, 255}, 
   { -9536.28, 6212.69, 1095.12, 1, 0x5abf, 0x05bf, 120, 130, 95, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0x1064, 0x0a4b, 34, 41, 40, 255}, 
   { -8251.32, 6466.98, 794.02, 1, 0x2e6c, 0x0a4b, 67, 82, 55, 255}, 
   { -9191.07, 6877.13, -1773.69, 1, 0x18ac, 0x008c, 34, 41, 40, 255}, 
   { -8261.31, 5161.69, 797.65, 1, 0x1a2e, 0x0403, 67, 82, 55, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0x5cef, 0x0389, 34, 41, 40, 255}, 
   { -9043.00, 8223.11, -1162.10, 1, 0x5771, 0x0c1b, 34, 41, 40, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x55be, 0x0025, 149, 185, 171, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x5449, 0x0375, 111, 121, 89, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x3070, 0xfcb0, 150, 186, 172, 255}, 
   { -6865.84, 3742.14, -1676.22, 1, 0x3a19, 0x09e3, 34, 41, 40, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0x3824, 0xfe67, 65, 86, 92, 255}, 
   { -7002.23, 4017.11, -1712.02, 1, 0xe0b2, 0x05f6, 34, 41, 40, 255}, 
   { -8745.68, 5125.38, -1966.56, 1, 0x045e, 0x059c, 34, 41, 40, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0xe033, 0xfc6e, 87, 106, 100, 255}, 
   { -9480.63, 4226.58, 2267.21, 1, 0x0ac0, 0x0059, 98, 120, 112, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x2cf5, 0x0015, 34, 41, 40, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x1660, 0xfd32, 34, 41, 40, 255}, 
   { -7526.38, 3861.59, 638.05, 1, 0xe175, 0xfdd2, 100, 131, 139, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x554d, 0x01d3, 158, 196, 181, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x4461, 0x06a9, 93, 114, 107, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x1d06, 0xffa5, 34, 41, 40, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0x3b03, 0x0900, 108, 133, 125, 255}, 
   { -10504.33, 4882.18, 3121.95, 1, 0x3454, 0xfdb8, 34, 41, 40, 255}, 
   { -10027.70, 4261.87, 3558.17, 1, 0x464b, 0x0312, 108, 133, 125, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0x1731, 0x0401, 87, 106, 100, 255}, 
   { -9193.14, 4483.23, 1543.22, 1, 0x42a9, 0x03db, 34, 41, 40, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x18a8, 0x0023, 98, 120, 112, 255}, 
   { -8706.45, 8890.42, 2190.55, 1, 0x7d0c, 0x002e, 34, 41, 40, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -8523.79, 9497.38, 836.83, 1, 0x8e7d, 0x0710, 34, 41, 40, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x1a22, 0x0e4c, 106, 131, 122, 255}, 
   { -9814.02, 7202.98, 2515.22, 1, 0x2c5c, 0x08e2, 149, 185, 171, 255}, 
   { -11458.20, 7038.87, 2647.85, 1, 0x0abd, 0x096f, 72, 89, 84, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -11411.89, 7874.33, 3198.94, 1, 0x094d, 0x044a, 34, 41, 40, 255}, 
   { -12382.57, 6913.79, 2008.54, 1, 0xf81a, 0x0cf9, 72, 89, 84, 255}, 
   { -11872.27, 4096.37, 2672.54, 1, 0x01bc, 0x07e1, 108, 133, 125, 255}, 
   { -11668.67, 4873.49, 2360.23, 1, 0x04e3, 0x00fc, 34, 41, 40, 255}, 
   { -12925.66, 4404.84, 2220.18, 1, 0xd851, 0x058a, 34, 41, 40, 255}, 
   { -13461.55, 5414.64, 1388.99, 1, 0x08ea, 0x001c, 90, 111, 103, 255}, 
   { -13264.52, 5731.72, 1157.19, 1, 0x0828, 0x03cd, 37, 45, 43, 255}, 
   { -14042.68, 5760.34, 1335.88, 1, 0x208f, 0x0035, 146, 181, 167, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x1d98, 0x03f3, 150, 186, 172, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x140e, 0x0018, 158, 196, 181, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0xfa02, 0x03f5, 79, 97, 91, 255}, 
   { -6865.84, 3742.14, -1676.22, 1, 0x3a19, 0x09e3, 34, 41, 40, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x3070, 0xfcb0, 150, 186, 172, 255}, 
   { -7311.44, 3219.03, -1406.84, 1, 0x268a, 0x081c, 34, 41, 40, 255}, 
   { -7526.38, 3861.59, 638.05, 1, 0x1026, 0x03f3, 100, 131, 139, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0x1731, 0x0401, 87, 106, 100, 255}, 
   { -7779.09, 3650.01, 1509.25, 1, 0x128e, 0x007f, 139, 183, 196, 255}, 
   { -9480.63, 4226.58, 2267.21, 1, 0xf25a, 0xfc9c, 98, 120, 112, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x3dbb, 0xfc9c, 98, 120, 112, 255}, 
   { -9082.90, 3400.46, 1916.90, 1, 0x122d, 0x0038, 34, 41, 40, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -7711.08, 3359.10, 1606.06, 1, 0x5144, 0x0038, 65, 86, 92, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x2cf5, 0x0015, 34, 41, 40, 255}, 
   { -9193.14, 4483.23, 1543.22, 1, 0x0c3a, 0x0274, 34, 41, 40, 255}, 
   { -10680.54, 5240.33, 1450.38, 1, 0x2aeb, 0x03c0, 66, 82, 77, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0x2c74, 0x03fe, 65, 86, 92, 255}, 
   { -7544.40, 3391.98, 1500.64, 1, 0x1d86, 0x006c, 65, 86, 92, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x1d98, 0x03f3, 150, 186, 172, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x0fc0, 0x0038, 139, 183, 196, 255}, 
   { -7843.87, 3709.43, 1731.47, 1, 0x44b4, 0xfe09, 158, 196, 181, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0xfa02, 0x03f5, 79, 97, 91, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0xfae4, 0x0003, 93, 114, 107, 255}, 
   { -8185.50, 1273.58, 1061.55, 1, 0xe25d, 0x03f7, 152, 188, 174, 255}, 
   { -8309.64, 1870.48, -1463.81, 1, 0x08d0, 0x0806, 40, 48, 46, 255}, 
   { -9588.71, 6762.13, 1072.23, 1, 0x55e8, 0x0083, 111, 121, 89, 255}, 
   { -10104.72, 6505.04, 1129.35, 1, 0x4253, 0x023c, 117, 134, 100, 255}, 
   { -9536.28, 6212.69, 1095.12, 1, 0x5abf, 0x05bf, 120, 130, 95, 255}, 
   { -10620.74, 6536.84, 1186.47, 1, 0x2e6c, 0x03fd, 124, 148, 112, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x2d93, 0x0774, 124, 148, 112, 255}, 
   { -11507.65, 6589.01, 1163.27, 1, 0x0a30, 0x04ac, 136, 165, 126, 255}, 
   { -11861.30, 6454.76, 1114.81, 1, 0xfc38, 0x06c6, 142, 173, 132, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0xebbd, 0x0733, 149, 181, 138, 255}, 
   { -12720.12, 6695.51, 962.51, 1, 0xd6e0, 0x06e1, 149, 181, 138, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -14526.07, 7276.32, 728.68, 1, 0x7eb0, 0x063d, 149, 181, 138, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x991e, 0x0d02, 149, 181, 138, 255}, 
   { -14042.68, 5760.34, 1335.88, 1, 0x208f, 0x0035, 146, 181, 167, 255}, 
   { -13914.47, 6098.32, 1035.46, 1, 0x2702, 0x03c3, 41, 50, 47, 255}, 
   { -14601.50, 6209.98, 1254.54, 1, 0x3c39, 0x0042, 140, 173, 160, 255}, 
   { -13088.08, 7002.22, 1092.81, 1, 0x0339, 0x0083, 54, 61, 45, 255}, 
   { -13623.79, 7276.32, 989.90, 1, 0xf177, 0x004f, 44, 51, 42, 255}, 
   { -13211.18, 6909.52, 880.22, 1, 0xfde0, 0x03c0, 149, 181, 138, 255}, 
   { -12962.57, 6231.48, 942.18, 1, 0xd2e8, 0x0bfa, 149, 181, 138, 255}, 
   { -13088.08, 7002.22, 1092.81, 1, 0x16d5, 0x03c2, 54, 61, 45, 255}, 
   { -12519.74, 6752.05, 1249.66, 1, 0x3020, 0x03c8, 50, 60, 47, 255}, 
   { -12939.32, 7138.43, 1350.23, 1, 0x1b16, 0xfffa, 146, 181, 167, 255}, 
   { -12868.71, 5054.77, 1330.85, 1, 0xf47c, 0x0046, 34, 41, 40, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0xf29c, 0x03c0, 34, 41, 40, 255}, 
   { -13461.55, 5414.64, 1388.99, 1, 0x08ea, 0x001c, 90, 111, 103, 255}, 
   { -12962.57, 6231.48, 942.18, 1, 0xd2e8, 0x0bfa, 149, 181, 138, 255}, 
   { -13496.74, 6499.62, 865.02, 1, 0xbba6, 0x0b08, 149, 181, 138, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0xcee3, 0x10f2, 149, 181, 138, 255}, 
   { -13205.03, 5767.45, 921.86, 1, 0x1173, 0x03b0, 149, 181, 138, 255}, 
   { -13782.30, 6089.72, 849.83, 1, 0x34ff, 0x03aa, 149, 181, 138, 255}, 
   { -13264.52, 5731.72, 1157.19, 1, 0x13bd, 0x0005, 37, 45, 43, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -12066.43, 5603.75, 1070.61, 1, 0xfbac, 0x0fb8, 142, 173, 132, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -11507.65, 6589.01, 1163.27, 1, 0x0a30, 0x04ac, 136, 165, 126, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -11117.00, 6135.14, 1168.75, 1, 0x1d01, 0x08af, 130, 156, 119, 255}, 
   { -11544.35, 6074.80, 1157.53, 1, 0x0c6b, 0x0a02, 136, 165, 126, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -10825.13, 7148.04, 1154.63, 1, 0x2272, 0x00c1, 34, 41, 40, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x0afe, 0x0089, 34, 41, 40, 255}, 
   { -11077.86, 6475.59, 1181.25, 1, 0x1c84, 0x0539, 130, 156, 119, 255}, 
   { -11553.71, 5735.24, 1139.02, 1, 0x0e94, 0x0d61, 136, 165, 126, 255}, 
   { -11535.19, 5478.69, 1133.92, 1, 0x1132, 0x0fd0, 34, 41, 40, 255}, 
   { -11156.14, 5794.68, 1156.24, 1, 0x1daa, 0x0c1a, 130, 156, 119, 255}, 
   { -11668.67, 4873.49, 2360.23, 1, 0x3860, 0x0037, 34, 41, 40, 255}, 
   { -11606.74, 5476.17, 1475.60, 1, 0x3bbe, 0x03e6, 146, 181, 167, 255}, 
   { -12808.02, 4879.21, 1850.68, 1, 0x49a1, 0x0017, 34, 41, 40, 255}, 
   { -9536.28, 6212.69, 1095.12, 1, 0x5abf, 0x05bf, 120, 130, 95, 255}, 
   { -9069.73, 6313.06, 1072.52, 1, 0x6c5f, 0x0424, 119, 129, 94, 255}, 
   { -9588.71, 6762.13, 1072.23, 1, 0x55e8, 0x0083, 111, 121, 89, 255}, 
   { -13901.04, 7276.32, 728.68, 1, 0xa998, 0x04ea, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -13211.18, 6909.52, 880.22, 1, 0xc146, 0x064b, 149, 181, 138, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x5f1a, 0x03cf, 149, 181, 138, 255}, 
   { -15173.28, 7276.32, 728.68, 1, 0x964e, 0x03ce, 149, 181, 138, 255}, 
   { -14614.45, 6574.10, 898.76, 1, 0x6a17, 0x0049, 37, 45, 43, 255}, 
};

Gfx forest_entrance_Static_PolyList_0[] = { 



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

   gsSPVertex( forest_entrance_VertList_0+29,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xea070003),  /*New Coords: -43.94, 0.10*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xaa070003),  /*New Coords: -171.94, 0.10*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x1a2e0003),  /*New Coords: 52.36, 0.10*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x1a2e0403),  /*New Coords: 52.36, 32.10*/
     gsSP2Triangles(  17, 12, 23, 17, 9, 20, 24, 9  ),
   gsSPVertex( forest_entrance_VertList_0+58,30,0  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPVertex( forest_entrance_VertList_0+39,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x66160003),  /*New Coords: 204.18, 0.10*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xd2e30403),  /*New Coords: 421.78, 32.10*/
     gsSP1Triangle(  0, 14, 17, 0  ),
   gsSPVertex( forest_entrance_VertList_0+300,30,0  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 25, 26, 24  ),
   gsSPVertex( forest_entrance_VertList_0+322,30,0  ),
     gsSP1Triangle(  3, 0, 26, 3  ),
   gsSPVertex( forest_entrance_VertList_0+319,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xd2e30003),  /*New Coords: 421.78, 0.10*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xd2e30403),  /*New Coords: 421.78, 32.10*/
     gsSP1Triangle(  0, 5, 26, 0  ),


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

   gsSPVertex( forest_entrance_VertList_0+29,30,0  ),
     gsSP2Triangles(  20, 21, 22, 20, 25, 26, 27, 25  ),
   gsSPVertex( forest_entrance_VertList_0+53,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2e6c0a4b),  /*New Coords: 92.85, 82.35*/
     gsSP2Triangles(  27, 0, 28, 27, 0, 27, 1, 0  ),
   gsSPVertex( forest_entrance_VertList_0+82,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 8, 9, 10, 8  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x045e059c),  /*New Coords: 8.74, 44.90*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x0435fc37),  /*New Coords: 8.42, -30.25*/
     gsSP2Triangles(  14, 15, 16, 14, 10, 9, 17, 10  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPVertex( forest_entrance_VertList_0+111,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xe9f0090d),  /*New Coords: -44.12, 72.43*/
     gsSP2Triangles(  9, 14, 15, 9, 11, 13, 20, 11  ),
   gsSPVertex( forest_entrance_VertList_0+103,30,0  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x0c3a0274),  /*New Coords: 24.45, 19.63*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0ac00059),  /*New Coords: 21.50, 2.79*/
     gsSP1Triangle(  26, 2, 0, 26  ),
   gsSPVertex( forest_entrance_VertList_0+125,30,0  ),
     gsSP1Triangle(  1, 0, 17, 1  ),
   gsSPVertex( forest_entrance_VertList_0+154,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x1b48fc6b),  /*New Coords: 54.57, -28.65*/
     gsSP2Triangles(  8, 9, 10, 8, 15, 14, 16, 15  ),
     gsSP2Triangles(  22, 23, 24, 22, 23, 27, 24, 23  ),
   gsSPVertex( forest_entrance_VertList_0+177,30,0  ),
     gsSP2Triangles(  4, 0, 8, 4, 20, 21, 22, 20  ),
   gsSPVertex( forest_entrance_VertList_0+197,30,0  ),
     gsSP1Triangle(  9, 0, 10, 9  ),
   gsSPVertex( forest_entrance_VertList_0+80,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x42180a2c),  /*New Coords: 132.19, 81.38*/
     gsSP1Triangle(  12, 0, 4, 12  ),
   gsSPVertex( forest_entrance_VertList_0+341,30,0  ),
     gsSP2Triangles(  4, 5, 6, 4, 8, 9, 10, 8  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 19, 23, 17, 19  ),
   gsSPVertex( forest_entrance_VertList_0+120,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xe9f0090d),  /*New Coords: -44.12, 72.43*/
     gsSP1Triangle(  1, 0, 6, 1  ),
   gsSPVertex( forest_entrance_VertList_0+352,30,0  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPVertex( forest_entrance_VertList_0+381,30,0  ),
     gsSP2Triangles(  13, 14, 15, 13, 25, 26, 27, 25  ),
   gsSPVertex( forest_entrance_VertList_0+197,30,0  ),
     gsSP1Triangle(  10, 0, 2, 10  ),
   gsSPVertex( forest_entrance_VertList_0+396,30,0  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x1b48fc6b),  /*New Coords: 54.57, -28.65*/
     gsSP1Triangle(  0, 19, 22, 0  ),


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

   gsSPVertex( forest_entrance_VertList_0+0,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x4e420fba),  /*New Coords: 156.52, 125.83*/
     gsSP2Triangles(  3, 4, 1, 3, 5, 6, 4, 5  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x4d6b0154),  /*New Coords: 154.84, 10.63*/
     gsSP2Triangles(  12, 9, 13, 12, 14, 12, 15, 14  ),
     gsSP2Triangles(  18, 19, 12, 18, 12, 19, 9, 12  ),
     gsSP2Triangles(  20, 1, 4, 20, 4, 6, 19, 4  ),
     gsSP1Triangle(  19, 6, 9, 19  ),
   gsSPVertex( forest_entrance_VertList_0+29,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
     gsSP2Triangles(  4, 12, 13, 4, 14, 15, 16, 14  ),
     gsSP1Triangle(  12, 17, 11, 12  ),
   gsSPVertex( forest_entrance_VertList_0+57,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+35,30,0  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x0afe0089),  /*New Coords: 21.99, 4.30*/
     gsSP2Triangles(  10, 25, 0, 10, 28, 5, 4, 28  ),
     gsSP1Triangle(  5, 28, 29, 5  ),
   gsSPVertex( forest_entrance_VertList_0+42,30,0  ),
     gsSP1Triangle(  23, 0, 24, 23  ),
     gsSP2Triangles(  25, 1, 26, 25, 2, 1, 25, 2  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( forest_entrance_VertList_0+57,30,0  ),
     gsSP1Triangle(  15, 0, 16, 15  ),
     gsSP2Triangles(  17, 18, 19, 17, 20, 21, 22, 20  ),
   gsSPVertex( forest_entrance_VertList_0+40,30,0  ),
     gsSP1Triangle(  26, 0, 24, 26  ),
   gsSPVertex( forest_entrance_VertList_0+38,30,0  ),
     gsSP1Triangle(  8, 0, 2, 8  ),
   gsSPVertex( forest_entrance_VertList_0+154,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPVertex( forest_entrance_VertList_0+183,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
     gsSP2Triangles(  9, 8, 7, 9, 10, 11, 9, 10  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_VertList_0+212,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  3, 4, 5, 3, 6, 7, 8, 6  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xc146064b),  /*New Coords: -125.45, 50.35*/
     gsSP2Triangles(  9, 10, 11, 9, 17, 19, 7, 17  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_VertList_0+216,30,0  ),
     gsSP1Triangle(  26, 4, 0, 26  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( forest_entrance_VertList_0+244,30,0  ),
     gsSP1Triangle(  1, 0, 5, 1  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
   gsSPVertex( forest_entrance_VertList_0+209,30,0  ),
     gsSP1Triangle(  5, 1, 0, 5  ),
   gsSPVertex( forest_entrance_VertList_0+267,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
     gsSP2Triangles(  7, 8, 9, 7, 10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 15, 13, 19, 20, 21, 19  ),
     gsSP1Triangle(  22, 23, 24, 22  ),
   gsSPVertex( forest_entrance_VertList_0+12,30,0  ),
     gsSP1Triangle(  3, 0, 1, 3  ),
   gsSPVertex( forest_entrance_VertList_0+273,30,0  ),
     gsSP2Triangles(  22, 23, 24, 22, 26, 27, 28, 26  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x300003c4),  /*New Coords: 96.00, 30.14*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x30b90bbe),  /*New Coords: 97.45, 93.96*/
     gsSP1Triangle(  8, 7, 18, 8  ),
   gsSPVertex( forest_entrance_VertList_0+302,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
     gsSP1Triangle(  13, 14, 15, 13  ),
   gsSPVertex( forest_entrance_VertList_0+245,30,0  ),
     gsSP1Triangle(  9, 0, 14, 9  ),
   gsSPVertex( forest_entrance_VertList_0+303,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x195ffc90),  /*New Coords: 50.75, -27.48*/
     gsSP2Triangles(  12, 15, 13, 12, 24, 25, 26, 24  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( forest_entrance_VertList_0+332,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
     gsSP2Triangles(  4, 5, 6, 4, 7, 8, 9, 7  ),
     gsSP2Triangles(  10, 11, 12, 10, 10, 7, 11, 10  ),
   gsSPVertex( forest_entrance_VertList_0+419,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xc146064b),  /*New Coords: -125.45, 50.35*/
     gsSP2Triangles(  12, 13, 14, 12, 10, 20, 21, 10  ),
   gsSPVertex( forest_entrance_VertList_0+447,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+426,30,0  ),
     gsSP1Triangle(  0, 2, 27, 0  ),
     gsSP1Triangle(  27, 4, 28, 27  ),
   gsSPVertex( forest_entrance_VertList_0+455,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  3, 4, 5, 3, 6, 7, 8, 6  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( forest_entrance_VertList_0+420,30,0  ),
     gsSP1Triangle(  2, 4, 0, 2  ),
   gsSPVertex( forest_entrance_VertList_0+449,30,0  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 25, 26, 24  ),


//>-- MATERIAL 9: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

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

   gsSPVertex( forest_entrance_VertList_0+29,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x54490375),  /*New Coords: 168.57, 27.67*/
     gsSP1Triangle(  15, 18, 19, 15  ),
   gsSPVertex( forest_entrance_VertList_0+85,30,0  ),
     gsSP1Triangle(  3, 0, 4, 3  ),
   gsSPVertex( forest_entrance_VertList_0+114,30,0  ),
     gsSP1Triangle(  13, 8, 14, 13  ),
   gsSPVertex( forest_entrance_VertList_0+103,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x517a000d),  /*New Coords: 162.96, 0.41*/
     gsSP1Triangle(  26, 0, 27, 26  ),
   gsSPVertex( forest_entrance_VertList_0+132,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2c5d0005),  /*New Coords: 88.73, 0.17*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x06c90001),  /*New Coords: 13.58, 0.04*/
     gsSP2Triangles(  8, 0, 6, 8, 18, 19, 20, 18  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPVertex( forest_entrance_VertList_0+161,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
     gsSP2Triangles(  10, 11, 5, 10, 12, 13, 14, 12  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( forest_entrance_VertList_0+120,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x03c903a8),  /*New Coords: 7.57, 29.26*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x06c90001),  /*New Coords: 13.58, 0.04*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfa1e0401),  /*New Coords: -11.76, 32.03*/
     gsSP1Triangle(  0, 18, 5, 0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xe3ce001f),  /*New Coords: -56.38, 0.98*/
     gsSP1Triangle(  5, 18, 17, 5  ),
   gsSPVertex( forest_entrance_VertList_0+119,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x10ba03df),  /*New Coords: 33.46, 30.99*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x06c90001),  /*New Coords: 13.58, 0.04*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x03c903a8),  /*New Coords: 7.57, 29.26*/
     gsSP1Triangle(  0, 19, 1, 0  ),
     gsSP1Triangle(  21, 19, 0, 21  ),
   gsSPVertex( forest_entrance_VertList_0+174,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x14230022),  /*New Coords: 40.28, 1.08*/
     gsSP1Triangle(  0, 6, 1, 0  ),
   gsSPVertex( forest_entrance_VertList_0+166,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x1d9803f3),  /*New Coords: 59.19, 31.61*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x14230022),  /*New Coords: 40.28, 1.08*/
     gsSP2Triangles(  5, 0, 3, 5, 14, 29, 9, 14  ),
   gsSPVertex( forest_entrance_VertList_0+195,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xe25d03f7),  /*New Coords: -59.27, 31.73*/
     gsSP1Triangle(  2, 5, 6, 2  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xfae40003),  /*New Coords: -10.21, 0.10*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xdfb70015),  /*New Coords: -64.57, 0.66*/
     gsSP1Triangle(  8, 10, 2, 8  ),
   gsSPVertex( forest_entrance_VertList_0+224,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 1, 6, 2, 1  ),
     gsSP2Triangles(  8, 9, 10, 8, 11, 12, 13, 11  ),
   gsSPVertex( forest_entrance_VertList_0+246,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x41bd03c7),  /*New Coords: 131.48, 30.23*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x4e6603c1),  /*New Coords: 156.80, 30.06*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x3bbe03e6),  /*New Coords: 119.49, 31.19*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x4cef0389),  /*New Coords: 153.87, 28.29*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x49a10017),  /*New Coords: 147.26, 0.74*/
     gsSP2Triangles(  1, 0, 20, 1, 19, 22, 21, 19  ),
   gsSPVertex( forest_entrance_VertList_0+227,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x05130398),  /*New Coords: 10.15, 28.78*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x16d503c2),  /*New Coords: 45.67, 30.08*/
     gsSP1Triangle(  0, 14, 7, 0  ),
   gsSPVertex( forest_entrance_VertList_0+314,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( forest_entrance_VertList_0+343,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( forest_entrance_VertList_0+372,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP1Triangle(  16, 17, 18, 16  ),
   gsSPVertex( forest_entrance_VertList_0+232,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x41bd03c7),  /*New Coords: 131.48, 30.23*/
     gsSP1Triangle(  0, 15, 1, 0  ),
   gsSPVertex( forest_entrance_VertList_0+377,30,0  ),
     gsSP2Triangles(  14, 15, 16, 14, 20, 21, 22, 20  ),
   gsSPVertex( forest_entrance_VertList_0+386,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x38600037),  /*New Coords: 112.75, 1.73*/
     gsSP1Triangle(  20, 22, 0, 20  ),
   gsSPVertex( forest_entrance_VertList_0+125,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xe09a0401),  /*New Coords: -62.79, 32.03*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfa1e0401),  /*New Coords: -11.76, 32.03*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xe3ce001f),  /*New Coords: -56.38, 0.98*/
     gsSP1Triangle(  17, 0, 12, 17  ),
   gsSPVertex( forest_entrance_VertList_0+386,30,0  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
   gsSPVertex( forest_entrance_VertList_0+197,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xc87503dc),  /*New Coords: -111.08, 30.88*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xe25d03f7),  /*New Coords: -59.27, 31.73*/
     gsSP1Triangle(  1, 0, 4, 1  ),
   gsSPVertex( forest_entrance_VertList_0+400,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPVertex( forest_entrance_VertList_0+429,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
   gsSPVertex( forest_entrance_VertList_0+458,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),


//>-- MATERIAL 10: START ------------------------------------ 'Grass_to_Rock'-------------------------------------------------

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

   gsSPVertex( forest_entrance_VertList_0+0,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x08f70400),  /*New Coords: 17.93, 32.01*/
     gsSP2Triangles(  0, 1, 2, 0, 7, 8, 6, 7  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x505303ff),  /*New Coords: 160.65, 32.00*/
     gsSP2Triangles(  9, 10, 11, 9, 16, 17, 14, 16  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x22b103ff),  /*New Coords: 69.38, 32.00*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x22b10000),  /*New Coords: 69.38, 0.00*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0abd0082),  /*New Coords: 21.48, 4.07*/
     gsSP2Triangles(  6, 8, 10, 6, 21, 2, 1, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x2f8303ff),  /*New Coords: 95.03, 32.00*/
     gsSP2Triangles(  22, 18, 14, 22, 23, 24, 25, 23  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_VertList_0+29,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+58,30,0  ),
     gsSP1Triangle(  2, 3, 4, 2  ),
   gsSPVertex( forest_entrance_VertList_0+87,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPVertex( forest_entrance_VertList_0+145,30,0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPVertex( forest_entrance_VertList_0+140,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6c8a03cf),  /*New Coords: 217.08, 30.47*/
     gsSP1Triangle(  17, 0, 18, 17  ),
   gsSPVertex( forest_entrance_VertList_0+227,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+218,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x137a03bd),  /*New Coords: 38.96, 29.91*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x34ff03aa),  /*New Coords: 106.00, 29.31*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x3f34002d),  /*New Coords: 126.41, 1.41*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x13bd0005),  /*New Coords: 39.48, 0.18*/
     gsSP2Triangles(  23, 11, 0, 23, 21, 6, 18, 21  ),
   gsSPVertex( forest_entrance_VertList_0+246,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 16, 17, 18, 16  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x16e803f2),  /*New Coords: 45.82, 31.58*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x2b7803e6),  /*New Coords: 86.94, 31.21*/
     gsSP2Triangles(  18, 17, 19, 18, 19, 13, 3, 19  ),
   gsSPVertex( forest_entrance_VertList_0+242,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x285803ef),  /*New Coords: 80.69, 31.50*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x410f03d8),  /*New Coords: 130.12, 30.76*/
     gsSP2Triangles(  5, 0, 6, 5, 4, 6, 15, 4  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xd92e0084),  /*New Coords: -77.64, 4.15*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xe46c03ab),  /*New Coords: -55.15, 29.34*/
     gsSP1Triangle(  28, 26, 7, 28  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x3f100012),  /*New Coords: 126.13, 0.59*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x400903da),  /*New Coords: 128.07, 30.84*/   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x59da03bc),  /*New Coords: 179.71, 29.89*/
     gsSP1Triangle(  26, 28, 27, 26  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x2b7803e6),  /*New Coords: 86.94, 31.21*/
     gsSP1Triangle(  26, 23, 7, 26  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xffc003b0),  /*New Coords: -0.50, 29.51*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xf2d800de),  /*New Coords: -26.31, 6.96*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xe46c03ab),  /*New Coords: -55.15, 29.34*/
     gsSP1Triangle(  2, 28, 7, 2  ),
   gsSPVertex( forest_entrance_VertList_0+222,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x964e03ce),  /*New Coords: 300.61, 30.47*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x90d7008a),  /*New Coords: 289.68, 4.33*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x6a170049),  /*New Coords: 212.18, 2.28*/
     gsSP1Triangle(  0, 8, 3, 0  ),
   gsSPVertex( forest_entrance_VertList_0+280,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( forest_entrance_VertList_0+9,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x524803e9),  /*New Coords: 164.57, 31.29*/
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( forest_entrance_VertList_0+270,30,0  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x7b2203ff),  /*New Coords: 246.27, 32.00*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x505303ff),  /*New Coords: 160.65, 32.00*/
     gsSP1Triangle(  25, 28, 26, 25  ),
   gsSPVertex( forest_entrance_VertList_0+299,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),
   gsSPVertex( forest_entrance_VertList_0+280,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x86d40400),  /*New Coords: 269.66, 32.00*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x40000400),  /*New Coords: 128.00, 32.00*/
     gsSP2Triangles(  0, 25, 8, 0, 26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_VertList_0+223,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x34ff03aa),  /*New Coords: 106.00, 29.31*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f1a03cf),  /*New Coords: 190.21, 30.49*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3f34002d),  /*New Coords: 126.41, 1.41*/
     gsSP1Triangle(  16, 0, 1, 16  ),
   gsSPVertex( forest_entrance_VertList_0+309,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+232,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1c83008a),  /*New Coords: 57.03, 4.32*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x285803ef),  /*New Coords: 80.69, 31.50*/
     gsSP1Triangle(  15, 0, 10, 15  ),
   gsSPVertex( forest_entrance_VertList_0+435,30,0  ),
     gsSP1Triangle(  2, 3, 4, 2  ),
   gsSPVertex( forest_entrance_VertList_0+429,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x1c83008a),  /*New Coords: 57.03, 4.32*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x03390083),  /*New Coords: 6.45, 4.10*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x137a03bd),  /*New Coords: 38.96, 29.91*/
     gsSP2Triangles(  13, 12, 0, 13, 21, 22, 23, 21  ),
   gsSPVertex( forest_entrance_VertList_0+458,30,0  ),
     gsSP1Triangle(  18, 19, 20, 18  ),


//>-- MATERIAL 11: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 1,15 ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( forest_entrance_VertList_0+87,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xd1000031),  /*New Coords: -94.00, 1.56*/
     gsSP2Triangles(  13, 14, 15, 13, 16, 15, 17, 16  ),
     gsSP1Triangle(  14, 13, 27, 14  ),
   gsSPVertex( forest_entrance_VertList_0+115,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_VertList_0+102,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3b030900),  /*New Coords: 118.03, 72.03*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x3454fdb8),  /*New Coords: 104.66, -18.23*/
     gsSP1Triangle(  0, 16, 4, 0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x5f7506ba),  /*New Coords: 190.92, 53.83*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x585301cf),  /*New Coords: 176.65, 14.50*/
     gsSP1Triangle(  0, 1, 5, 0  ),
   gsSPVertex( forest_entrance_VertList_0+127,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3fb80d57),  /*New Coords: 127.44, 106.73*/
     gsSP2Triangles(  5, 0, 6, 5, 7, 8, 9, 7  ),
     gsSP2Triangles(  10, 11, 12, 10, 8, 7, 14, 8  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x4b57021e),  /*New Coords: 150.69, 16.97*/
     gsSP2Triangles(  9, 0, 1, 9, 5, 8, 12, 5  ),
     gsSP2Triangles(  16, 17, 18, 16, 19, 20, 21, 19  ),
     gsSP1Triangle(  18, 19, 22, 18  ),
   gsSPVertex( forest_entrance_VertList_0+156,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x3454fdb8),  /*New Coords: 104.66, -18.23*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x4d60f95c),  /*New Coords: 154.75, -53.11*/
     gsSP1Triangle(  7, 9, 8, 7  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x585301cf),  /*New Coords: 176.65, 14.50*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x3dbbfc9c),  /*New Coords: 123.47, -27.10*/
     gsSP2Triangles(  9, 6, 8, 9, 23, 24, 18, 23  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x554d01d3),  /*New Coords: 170.60, 14.60*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x51440038),  /*New Coords: 162.54, 1.77*/
     gsSP2Triangles(  26, 10, 16, 26, 26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_VertList_0+133,30,0  ),
     gsSP1Triangle(  2, 0, 3, 2  ),
   gsSPVertex( forest_entrance_VertList_0+127,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3fb80d57),  /*New Coords: 127.44, 106.73*/
     gsSP1Triangle(  0, 9, 6, 0  ),
   gsSPVertex( forest_entrance_VertList_0+180,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x46c2fe75),  /*New Coords: 141.52, -12.33*/
     gsSP1Triangle(  16, 15, 0, 16  ),
   gsSPVertex( forest_entrance_VertList_0+179,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xd1000031),  /*New Coords: -94.00, 1.56*/
     gsSP1Triangle(  5, 17, 0, 5  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x07dd02ad),  /*New Coords: 15.73, 21.43*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xebeb007e),  /*New Coords: -40.16, 3.94*/
     gsSP2Triangles(  21, 23, 22, 21, 24, 25, 26, 24  ),
     gsSP2Triangles(  25, 23, 26, 25, 23, 29, 22, 23  ),
   gsSPVertex( forest_entrance_VertList_0+266,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( forest_entrance_VertList_0+353,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x585301cf),  /*New Coords: 176.65, 14.50*/
     gsSP2Triangles(  15, 16, 17, 15, 18, 16, 10, 18  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( forest_entrance_VertList_0+137,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( forest_entrance_VertList_0+369,30,0  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 10, 12, 15  ),
     gsSP1Triangle(  16, 17, 18, 16  ),
   gsSPVertex( forest_entrance_VertList_0+398,30,0  ),
     gsSP1Triangle(  2, 3, 4, 2  ),
     gsSP2Triangles(  5, 6, 7, 5, 14, 15, 16, 14  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- forest_entrance -------------------------------------------------

 
 
 
 
 
//>-- Obj00: START ------------------------------------------ forest_entrance_LOD1 -------------------------------------------------

Vtx forest_entrance_LOD1_VertList_0 [] = {
   { -8353.84, 5240.85, 1013.47, 1, 0x8dff, 0x0daa, 129, 140, 101, 255}, 
   { -8279.36, 6487.01, 992.89, 1, 0x8a6a, 0x0177, 129, 140, 101, 255}, 
   { -9368.77, 5470.49, 992.36, 1, 0x6577, 0x0cbf, 129, 140, 101, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0x3605, 0x0ff2, 34, 41, 40, 255}, 
   { -9306.91, 4470.11, 1117.02, 1, 0x6848, 0x1688, 34, 41, 40, 255}, 
   { -10004.54, 5359.57, 1088.05, 1, 0x4d29, 0x0eac, 84, 93, 72, 255}, 
   { -10237.67, 7099.72, 1190.36, 1, 0x3ab3, 0xfdf3, 34, 41, 40, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x6c74, 0xfc90, 111, 121, 89, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x195f, 0xfc90, 34, 41, 40, 255}, 
   { -8756.41, 4756.97, 1028.24, 1, 0x80da, 0x12e1, 67, 82, 55, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x55be, 0x0025, 149, 185, 171, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x2c5d, 0x0005, 106, 131, 122, 255}, 
   { -8261.31, 5161.69, 797.65, 1, 0x4218, 0x0a2c, 67, 82, 55, 255}, 
   { -8751.63, 4575.81, 779.46, 1, 0x4f63, 0x09aa, 67, 82, 55, 255}, 
   { -8861.05, 5808.61, -1925.31, 1, 0x4177, 0x00c0, 34, 41, 40, 255}, 
   { -8251.32, 6466.98, 794.02, 1, 0x6616, 0x0403, 67, 82, 55, 255}, 
   { -9542.52, 7906.24, -1319.85, 1, 0xfd4f, 0x055e, 34, 41, 40, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0x1064, 0x0a4b, 34, 41, 40, 255}, 
   { -12084.21, 6680.67, 1275.16, 1, 0x41bd, 0x03c7, 47, 59, 49, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x4e66, 0x03c1, 40, 50, 44, 255}, 
   { -11935.49, 7245.13, 1485.23, 1, 0x4826, 0x01ee, 146, 181, 167, 255}, 
   { -9069.73, 6313.06, 1072.52, 1, 0x6c5f, 0x0424, 119, 129, 94, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0x1b48, 0xfc6b, 79, 97, 91, 255}, 
   { -8185.50, 1273.58, 1061.55, 1, 0x0307, 0xfc24, 152, 188, 174, 255}, 
   { -8309.64, 1870.48, -1463.81, 1, 0x08d0, 0x0806, 40, 48, 46, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -6865.84, 3742.14, -1676.22, 1, 0x3a19, 0x09e3, 34, 41, 40, 255}, 
   { -6911.30, 3833.80, -1688.15, 1, 0x3bc0, 0x09f7, 34, 41, 40, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0x3824, 0xfe67, 65, 86, 92, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x2cf5, 0x0015, 34, 41, 40, 255}, 
   { -10504.33, 4882.18, 3121.95, 1, 0x2528, 0xfceb, 34, 41, 40, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x1660, 0xfd32, 34, 41, 40, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -9634.67, 2694.38, 3457.81, 1, 0x04ae, 0x08cb, 103, 135, 143, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x4461, 0x06a9, 93, 114, 107, 255}, 
   { -9103.82, -74.97, 654.48, 1, 0xe8f8, 0xfd82, 40, 48, 46, 255}, 
   { -8706.45, 8890.42, 2190.55, 1, 0x7d0c, 0x002e, 34, 41, 40, 255}, 
   { -8706.08, 9210.26, 28.10, 1, 0x7ca8, 0x09ed, 34, 41, 40, 255}, 
   { -8523.79, 9497.38, 836.83, 1, 0x8e7d, 0x0710, 34, 41, 40, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x1a22, 0x0e4c, 106, 131, 122, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x3fb8, 0x0d57, 149, 185, 171, 255}, 
   { -9814.02, 7202.98, 2515.22, 1, 0x2c5c, 0x08e2, 149, 185, 171, 255}, 
   { -10436.15, 8092.65, 3446.30, 1, 0x1d96, 0x024f, 34, 41, 40, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -9055.13, 8875.74, 2750.88, 1, 0x41c7, 0x00ce, 34, 41, 40, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x27b8, 0x03fa, 34, 41, 40, 255}, 
   { -12382.57, 6913.79, 2008.54, 1, 0x06c9, 0x0001, 72, 89, 84, 255}, 
   { -11411.89, 7874.33, 3198.94, 1, 0x094d, 0x044a, 34, 41, 40, 255}, 
   { -11993.79, 7048.98, 2882.83, 1, 0x0abd, 0x096f, 72, 89, 84, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -13898.34, 7275.00, 728.79, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -10033.24, 5315.04, 3430.33, 1, 0x1ca1, 0xfa14, 34, 41, 40, 255}, 
   { -10027.70, 4261.87, 3558.17, 1, 0x464b, 0x0312, 108, 133, 125, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x140e, 0x0018, 158, 196, 181, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0xfa02, 0x03f5, 79, 97, 91, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x3070, 0xfcb0, 150, 186, 172, 255}, 
   { -7311.44, 3219.03, -1406.84, 1, 0x268a, 0x081c, 34, 41, 40, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0x1731, 0x0401, 87, 106, 100, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x18a8, 0x0023, 98, 120, 112, 255}, 
   { -7779.09, 3650.01, 1509.25, 1, 0x128e, 0x007f, 139, 183, 196, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -7843.87, 3709.43, 1731.47, 1, 0x44b4, 0xfe09, 158, 196, 181, 255}, 
   { -12064.56, 7374.46, 1043.93, 1, 0x10ba, 0x03df, 34, 41, 40, 255}, 
   { -7860.61, 3612.52, 1600.91, 1, 0x12cf, 0x0022, 139, 183, 196, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x0fc0, 0x0038, 139, 183, 196, 255}, 
   { -8185.50, 1273.58, 1061.55, 1, 0xe25d, 0x03f7, 152, 188, 174, 255}, 
   { -8480.30, 1206.95, 1914.43, 1, 0xdfb7, 0x0015, 79, 97, 91, 255}, 
   { -9290.21, 81.37, 1587.41, 1, 0xc9e0, 0x0004, 40, 48, 46, 255}, 
   { -10233.29, 1864.50, 3429.80, 1, 0xf075, 0x07c6, 79, 97, 91, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x1e3d, 0x0325, 93, 114, 107, 255}, 
   { -9634.67, 2694.38, 3457.81, 1, 0x04ae, 0x08cb, 103, 135, 143, 255}, 
   { -8480.30, 1206.95, 1914.43, 1, 0x07dd, 0x02ad, 79, 97, 91, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0xffc0, 0x03b0, 149, 181, 138, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -12084.21, 6680.67, 1275.16, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -14523.37, 7275.00, 728.79, 1, 0x7eb0, 0x063d, 149, 181, 138, 255}, 
   { -15173.78, 7275.00, 728.79, 1, 0x72c8, 0x095b, 149, 181, 138, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0xebbd, 0x0733, 149, 181, 138, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -10603.05, 5312.48, 1175.56, 1, 0x2cdd, 0x0ae8, 124, 148, 112, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x38d2, 0x03fb, 142, 173, 132, 255}, 
   { -11861.30, 6454.76, 1114.81, 1, 0x38d2, 0x03fb, 142, 173, 132, 255}, 
   { -11380.64, 6981.04, 1200.04, 1, 0x0afe, 0x0089, 34, 41, 40, 255}, 
   { -12152.22, 5338.89, 1058.78, 1, 0xe46c, 0x03ab, 34, 41, 40, 255}, 
   { -14601.50, 6209.98, 1254.54, 1, 0x3c39, 0x0042, 140, 173, 160, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x195f, 0xfc90, 34, 41, 40, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x4d29, 0x0eac, 84, 93, 72, 255}, 
   { -10004.54, 5359.57, 1088.05, 1, 0x6577, 0x0cbf, 129, 140, 101, 255}, 
   { -9368.77, 5470.49, 992.36, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -8861.05, 5808.61, -1925.31, 1, 0x045e, 0x059c, 34, 41, 40, 255}, 
   { -9306.91, 4470.11, 1117.02, 1, 0x0435, 0xfc37, 34, 41, 40, 255}, 
   { -7548.81, 4184.08, 1052.88, 1, 0xe033, 0xfc6e, 87, 106, 100, 255}, 
   { -9480.63, 4226.58, 2267.21, 1, 0x517a, 0x000d, 98, 120, 112, 255}, 
   { -7787.07, 4038.22, 1730.51, 1, 0x18a8, 0x0023, 98, 120, 112, 255}, 
   { -10992.99, 4790.04, 2558.43, 1, 0x2cf5, 0x0015, 34, 41, 40, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0xd100, 0x0259, 108, 133, 125, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -7526.38, 3861.59, 638.05, 1, 0xe175, 0xfdd2, 100, 131, 139, 255}, 
   { -6956.77, 3925.45, -1700.09, 1, 0xdfbf, 0x05f4, 34, 41, 40, 255}, 
   { -7002.23, 4017.11, -1712.02, 1, 0xe0b2, 0x05f6, 34, 41, 40, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x5853, 0x01cf, 34, 41, 40, 255}, 
   { -7544.40, 3391.98, 1500.64, 1, 0x1d86, 0x006c, 65, 86, 92, 255}, 
   { -7711.08, 3359.10, 1606.06, 1, 0x1c1c, 0x0015, 65, 86, 92, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x140e, 0x0018, 158, 196, 181, 255}, 
   { -9082.90, 3400.46, 1916.90, 1, 0x122d, 0x0038, 34, 41, 40, 255}, 
   { -7292.65, 3247.24, 848.37, 1, 0x1d98, 0x03f3, 150, 186, 172, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x0fc0, 0x0038, 139, 183, 196, 255}, 
   { -7779.09, 3650.01, 1509.25, 1, 0xf41d, 0xf8df, 139, 183, 196, 255}, 
   { -7860.61, 3612.52, 1600.91, 1, 0xf2e2, 0xf8df, 139, 183, 196, 255}, 
   { -7711.08, 3359.10, 1606.06, 1, 0xf2e2, 0x163c, 65, 86, 92, 255}, 
   { -7392.91, 3624.90, 623.41, 1, 0xffd6, 0x163c, 65, 86, 92, 255}, 
   { -6911.30, 3833.80, -1688.15, 1, 0x1d32, 0x163c, 34, 41, 40, 255}, 
   { -6956.77, 3925.45, -1700.09, 1, 0x1d32, 0xf8df, 34, 41, 40, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x27b8, 0x03fa, 34, 41, 40, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x5449, 0x0375, 111, 121, 89, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x2c5d, 0x0005, 106, 131, 122, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0xd2e3, 0x0003, 111, 121, 89, 255}, 
   { -8279.36, 6487.01, 992.89, 1, 0x6616, 0x0003, 129, 140, 101, 255}, 
   { -8883.82, 7162.14, 921.20, 1, 0xd2e3, 0x0403, 34, 41, 40, 255}, 
   { -7311.44, 3219.03, -1406.84, 1, 0x268a, 0x081c, 34, 41, 40, 255}, 
   { -7689.78, 2622.12, 768.42, 1, 0x1b48, 0xfc6b, 79, 97, 91, 255}, 
   { -8309.64, 1870.48, -1463.81, 1, 0x08d0, 0x0806, 40, 48, 46, 255}, 
   { -8961.76, 6691.78, 1750.61, 1, 0x55be, 0x0025, 149, 185, 171, 255}, 
   { -8961.03, 7072.49, 1160.02, 1, 0x5449, 0x0375, 111, 121, 89, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -6865.84, 3742.14, -1676.22, 1, 0x3a19, 0x09e3, 34, 41, 40, 255}, 
   { -7632.01, 3141.19, 1612.67, 1, 0x554d, 0x01d3, 158, 196, 181, 255}, 
   { -8715.24, 3119.44, 2050.05, 1, 0x1e3d, 0x0325, 150, 186, 172, 255}, 
   { -8092.98, 2332.52, 1541.25, 1, 0x4461, 0x06a9, 93, 114, 107, 255}, 
   { -8706.45, 8890.42, 2190.55, 1, 0x7d0c, 0x002e, 34, 41, 40, 255}, 
   { -8373.63, 8092.89, 864.12, 1, 0x752b, 0x03be, 106, 131, 122, 255}, 
   { -8523.79, 9497.38, 836.83, 1, 0x8e7d, 0x0710, 34, 41, 40, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -10782.63, 6752.01, 1690.41, 1, 0x1a22, 0x0e4c, 106, 131, 122, 255}, 
   { -9814.02, 7202.98, 2515.22, 1, 0x2c5c, 0x08e2, 149, 185, 171, 255}, 
   { -11993.79, 7048.98, 2882.83, 1, 0x0abd, 0x096f, 72, 89, 84, 255}, 
   { -10370.86, 7203.80, 2947.80, 1, 0x1f60, 0x076a, 149, 185, 171, 255}, 
   { -11411.89, 7874.33, 3198.94, 1, 0x094d, 0x044a, 34, 41, 40, 255}, 
   { -12382.57, 6913.79, 2008.54, 1, 0xf81a, 0x0cf9, 72, 89, 84, 255}, 
   { -12443.36, 6009.36, 1019.02, 1, 0xebbd, 0x0733, 149, 181, 138, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -9225.67, 3726.55, 2252.36, 1, 0x0a66, 0xff8f, 158, 196, 181, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0x0fc0, 0x0038, 139, 183, 196, 255}, 
   { -7843.87, 3709.43, 1731.47, 1, 0x44b4, 0xfe09, 158, 196, 181, 255}, 
   { -9103.82, -74.97, 654.48, 1, 0xc875, 0x03dc, 40, 48, 46, 255}, 
   { -8185.50, 1273.58, 1061.55, 1, 0xe25d, 0x03f7, 152, 188, 174, 255}, 
   { -9290.21, 81.37, 1587.41, 1, 0xc9e0, 0x0004, 40, 48, 46, 255}, 
   { -12643.95, 5502.82, 993.89, 1, 0xe93e, 0x0cb4, 149, 181, 138, 255}, 
   { -14053.22, 6916.17, 791.18, 1, 0xa157, 0x08f4, 149, 181, 138, 255}, 
   { -14523.37, 7275.00, 728.79, 1, 0x7eb0, 0x063d, 149, 181, 138, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x991e, 0x0d02, 149, 181, 138, 255}, 
   { -14601.50, 6209.98, 1254.54, 1, 0x3c39, 0x0042, 140, 173, 160, 255}, 
   { -12769.25, 5375.22, 1097.65, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -14383.86, 6598.69, 781.95, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -11861.30, 6454.76, 1114.81, 1, 0xfc38, 0x06c6, 142, 173, 132, 255}, 
   { -12242.76, 6515.91, 1044.15, 1, 0xebbd, 0x0733, 149, 181, 138, 255}, 
   { -11963.87, 6029.25, 1092.71, 1, 0xfbfa, 0x0b57, 142, 173, 132, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x38d2, 0x03fb, 142, 173, 132, 255}, 
   { -10237.67, 7099.72, 1190.36, 1, 0x3ab3, 0xfdf3, 34, 41, 40, 255}, 
   { -11053.04, 7338.24, 1139.80, 1, 0x195f, 0xfc90, 34, 41, 40, 255}, 
   { -10689.66, 6195.48, 1179.97, 1, 0x2272, 0x00c1, 34, 41, 40, 255}, 
   { -9368.77, 5470.49, 992.36, 1, 0x0000, 0x0400, 255, 255, 255, 255}, 
   { -12152.22, 5338.89, 1058.78, 1, 0xfbac, 0x0fb8, 142, 173, 132, 255}, 
   { -10027.70, 4261.87, 3558.17, 1, 0x464b, 0x0312, 108, 133, 125, 255}, 
   { -10291.45, 3608.37, 3273.30, 1, 0x3b03, 0x0900, 108, 133, 125, 255}, 
   { -9823.11, 4558.48, 3062.90, 1, 0x5853, 0x01cf, 34, 41, 40, 255}, 
   { -9168.90, 3615.22, 1958.66, 1, 0xe1b7, 0xf8df, 139, 183, 196, 255}, 
   { -9082.90, 3400.46, 1916.90, 1, 0xe1b7, 0x163c, 34, 41, 40, 255}, 
   { -7860.61, 3612.52, 1600.91, 1, 0xf2e2, 0xf8df, 139, 183, 196, 255}, 
};

Gfx forest_entrance_LOD1_Static_PolyList_0[] = { 



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

   gsSPVertex( forest_entrance_LOD1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1a2e0003),  /*New Coords: 52.36, 0.10*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x1a2e0403),  /*New Coords: 52.36, 32.10*/
     gsSP1Triangle(  0, 12, 15, 0  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xea070003),  /*New Coords: -43.94, 0.10*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xea070403),  /*New Coords: -43.94, 32.10*/
     gsSP1Triangle(  9, 13, 12, 9  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x66160003),  /*New Coords: 204.18, 0.10*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xd2e30403),  /*New Coords: 421.78, 32.10*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xaa070403),  /*New Coords: -171.94, 32.10*/
     gsSP2Triangles(  1, 15, 17, 1, 9, 4, 13, 9  ),
     gsSP2Triangles(  1, 0, 15, 1, 0, 9, 12, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+116,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),


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

   gsSPVertex( forest_entrance_LOD1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x18ac008c),  /*New Coords: 49.35, 4.38*/
     gsSP2Triangles(  12, 13, 14, 12, 14, 16, 17, 14  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x29710076),  /*New Coords: 82.89, 3.70*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x2e6c0a4b),  /*New Coords: 92.85, 82.35*/
     gsSP2Triangles(  14, 15, 12, 14, 22, 23, 24, 22  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+29,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+23,30,0  ),
     gsSP2Triangles(  1, 0, 12, 1, 2, 14, 15, 2  ),
     gsSP1Triangle(  8, 7, 29, 8  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+52,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x1b48fc6b),  /*New Coords: 54.57, -28.65*/
     gsSP1Triangle(  4, 3, 5, 4  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+16,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x57710c1b),  /*New Coords: 174.89, 96.86*/
     gsSP1Triangle(  9, 0, 21, 9  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x5cef0389),  /*New Coords: 185.87, 28.31*/
     gsSP1Triangle(  1, 0, 9, 1  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+14,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x2e6c0a4b),  /*New Coords: 92.85, 82.35*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x18ac008c),  /*New Coords: 49.35, 4.38*/
     gsSP1Triangle(  1, 0, 3, 1  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+4,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x634b0a6f),  /*New Coords: 198.59, 83.48*/
     gsSP1Triangle(  9, 0, 10, 9  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+91,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x0c3a0274),  /*New Coords: 24.45, 19.63*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x0ac00059),  /*New Coords: 21.50, 2.79*/
     gsSP2Triangles(  1, 2, 3, 1, 2, 6, 4, 2  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+82,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x11140682),  /*New Coords: 34.16, 52.09*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2aeb03c0),  /*New Coords: 85.84, 30.02*/
     gsSP2Triangles(  11, 0, 15, 11, 19, 20, 21, 19  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+111,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+109,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3070fcb0),  /*New Coords: 96.88, -26.49*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x3824fe67),  /*New Coords: 112.28, -12.78*/
     gsSP1Triangle(  0, 20, 5, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+95,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0ac00059),  /*New Coords: 21.50, 2.79*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x1660fd32),  /*New Coords: 44.75, -22.43*/
     gsSP1Triangle(  0, 2, 9, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+124,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+109,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3070fcb0),  /*New Coords: 96.88, -26.49*/
     gsSP1Triangle(  20, 0, 14, 20  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+92,30,0  ),
     gsSP1Triangle(  11, 0, 2, 11  ),
     gsSP1Triangle(  2, 9, 11, 2  ),


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
   gsDPLoadTextureBlock_4b(   Grass_Texture_2,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,15 ),
   gsDPLoadTLUT_pal16(   0, Grass_Texture_2_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( forest_entrance_LOD1_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 4, 9, 2, 4  ),
     gsSP2Triangles(  21, 2, 1, 21, 9, 0, 2, 9  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+29,30,0  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+1,30,0  ),
     gsSP1Triangle(  6, 20, 0, 6  ),
     gsSP1Triangle(  3, 1, 4, 3  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+51,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x991e0d02),  /*New Coords: -205.76, 104.07*/
     gsSP1Triangle(  0, 22, 23, 0  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x991e0d02),  /*New Coords: -205.76, 104.07*/
     gsSP1Triangle(  25, 26, 22, 25  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+79,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP1Triangle(  2, 3, 4, 2  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP1Triangle(  6, 5, 4, 6  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+6,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6c5f0424),  /*New Coords: 216.75, 33.14*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x6c74fc90),  /*New Coords: 216.91, -27.48*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3ab3fdf3),  /*New Coords: 117.40, -16.38*/
     gsSP1Triangle(  0, 15, 1, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+2,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP1Triangle(  0, 19, 4, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+50,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8aa6031d),  /*New Coords: -234.70, 24.93*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xa15708f4),  /*New Coords: -189.32, 71.63*/
     gsSP1Triangle(  0, 26, 1, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+79,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x227200c1),  /*New Coords: 68.90, 6.04*/
     gsSP1Triangle(  9, 6, 4, 9  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x4d290eac),  /*New Coords: 154.33, 117.39*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP1Triangle(  3, 11, 10, 3  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xfbac0fb8),  /*New Coords: -8.65, 125.76*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP1Triangle(  3, 2, 7, 3  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+74,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xe6821201),  /*New Coords: -50.98, 144.05*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfbac0fb8),  /*New Coords: -8.65, 125.76*/
     gsSP1Triangle(  6, 0, 12, 6  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+132,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x991e0d02),  /*New Coords: -205.76, 104.07*/
     gsSP2Triangles(  11, 12, 13, 11, 11, 13, 20, 11  ),
     gsSP2Triangles(  21, 22, 23, 21, 27, 28, 29, 27  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+159,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfbfa0b57),  /*New Coords: -8.05, 90.73*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP2Triangles(  0, 2, 3, 0, 4, 5, 6, 4  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x227200c1),  /*New Coords: 68.90, 6.04*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x4d290eac),  /*New Coords: 154.33, 117.39*/
     gsSP1Triangle(  4, 6, 7, 4  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+143,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xe93e0cb4),  /*New Coords: -45.51, 101.64*/
     gsSP1Triangle(  18, 0, 24, 18  ),


//>-- MATERIAL 9: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

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

   gsSPVertex( forest_entrance_LOD1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x54490375),  /*New Coords: 168.57, 27.67*/
     gsSP2Triangles(  7, 10, 11, 7, 18, 19, 20, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x5cef0389),  /*New Coords: 185.87, 28.31*/
     gsSP1Triangle(  7, 17, 25, 7  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+10,30,0  ),
     gsSP1Triangle(  0, 15, 26, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+39,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2c5d0005),  /*New Coords: 88.73, 0.17*/
     gsSP1Triangle(  6, 0, 7, 6  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+34,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfae40003),  /*New Coords: -10.21, 0.10*/
     gsSP1Triangle(  20, 0, 21, 20  ),
     gsSP2Triangles(  24, 25, 26, 24, 11, 12, 29, 11  ),
   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x14230022),  /*New Coords: 40.28, 1.08*/
     gsSP1Triangle(  25, 28, 26, 25  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+60,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x14230022),  /*New Coords: 40.28, 1.08*/
     gsSP1Triangle(  2, 4, 0, 2  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xfae40003),  /*New Coords: -10.21, 0.10*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xdfb70015),  /*New Coords: -64.57, 0.66*/
     gsSP2Triangles(  6, 7, 8, 6, 10, 12, 6, 10  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+49,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2eeb00b2),  /*New Coords: 93.84, 5.56*/   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0xffc003b0),  /*New Coords: -0.50, 29.51*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x00000400),  /*New Coords: 0.00, 32.00*/
     gsSP2Triangles(  26, 1, 0, 26, 29, 25, 24, 29  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+73,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x46af03ce),  /*New Coords: 141.37, 30.46*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x56d40049),  /*New Coords: 173.66, 2.28*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x42a903db),  /*New Coords: 133.32, 30.85*/
     gsSP2Triangles(  0, 4, 14, 0, 20, 22, 23, 20  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+102,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 3, 5, 7, 3  ),
     gsSP2Triangles(  15, 16, 17, 15, 24, 25, 26, 24  ),
   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x140e0018),  /*New Coords: 40.11, 0.75*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xfa0203f5),  /*New Coords: -11.98, 31.67*/
     gsSP1Triangle(  7, 28, 22, 7  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+94,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x102603f3),  /*New Coords: 32.30, 31.62*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x17310401),  /*New Coords: 46.39, 32.05*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x128e007f),  /*New Coords: 37.11, 3.98*/
     gsSP1Triangle(  7, 0, 17, 7  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+123,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xfa0203f5),  /*New Coords: -11.98, 31.67*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xfae40003),  /*New Coords: -10.21, 0.10*/
     gsSP2Triangles(  26, 27, 28, 26, 1, 9, 27, 1  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+152,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+93,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x17310401),  /*New Coords: 46.39, 32.05*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x42a903db),  /*New Coords: 133.32, 30.85*/
     gsSP1Triangle(  1, 0, 3, 1  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x2c7403fe),  /*New Coords: 88.91, 31.95*/     gsSP1Triangle(  21, 12, 16, 21  ),


//>-- MATERIAL 10: START ------------------------------------ 'Grass_to_Rock'-------------------------------------------------

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

   gsSPVertex( forest_entrance_LOD1_VertList_0+19,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x2c7403fe),  /*New Coords: 88.91, 31.95*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x49c103d6),  /*New Coords: 147.51, 30.71*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x6c8a03cf),  /*New Coords: 217.08, 30.47*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x4bed0026),  /*New Coords: 151.85, 1.20*/
     gsSP1Triangle(  0, 26, 1, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+75,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2eeb00b2),  /*New Coords: 93.84, 5.56*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x285803ef),  /*New Coords: 80.69, 31.50*/
     gsSP1Triangle(  0, 4, 9, 0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x3c6f0091),  /*New Coords: 120.87, 4.55*/
     gsSP1Triangle(  10, 0, 9, 10  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+74,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xffc003b0),  /*New Coords: -0.50, 29.51*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xf2d800de),  /*New Coords: -26.31, 6.96*/
     gsSP1Triangle(  0, 4, 12, 0  ),


//>-- MATERIAL 11: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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
   gsDPLoadTextureBlock_4b(   ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 1,15 ),
   gsDPLoadTLUT_pal16(   0, ground_cover_ferns_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( forest_entrance_LOD1_VertList_0+29,30,0  ),
     gsSP2Triangles(  3, 4, 5, 3, 10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 15, 13, 14, 13, 18, 14  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x4b57021e),  /*New Coords: 150.69, 16.97*/
     gsSP2Triangles(  15, 11, 7, 15, 10, 14, 19, 10  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x585301cf),  /*New Coords: 176.65, 14.50*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x4d60f95c),  /*New Coords: 154.75, -53.11*/
     gsSP1Triangle(  24, 2, 23, 24  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+58,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3dbbfc9c),  /*New Coords: 123.47, -27.10*/
     gsSP1Triangle(  3, 4, 1, 3  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+41,30,0  ),
     gsSP1Triangle(  2, 0, 3, 2  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+40,30,0  ),
     gsSP1Triangle(  0, 4, 1, 0  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x46c2fe75),  /*New Coords: 141.52, -12.33*/   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x07dd02ad),  /*New Coords: 15.73, 21.43*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xebeb007e),  /*New Coords: -40.16, 3.94*/
     gsSP2Triangles(  25, 24, 22, 25, 27, 29, 28, 27  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+69,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 2, 0, 3, 2  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+71,30,0  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0xf25afc9c),  /*New Coords: -27.29, -27.10*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xd1000031),  /*New Coords: -94.00, 1.56*/
     gsSP2Triangles(  0, 27, 28, 0, 24, 28, 29, 24  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+95,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x3b030900),  /*New Coords: 118.03, 72.03*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5f7506ba),  /*New Coords: 190.92, 53.83*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x554d01d3),  /*New Coords: 170.60, 14.60*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x51440038),  /*New Coords: 162.54, 1.77*/
     gsSP2Triangles(  4, 0, 9, 4, 3, 12, 11, 3  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xd1000259),  /*New Coords: -94.00, 18.81*/
     gsSP1Triangle(  3, 13, 4, 3  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xd1000031),  /*New Coords: -94.00, 1.56*/
     gsSP1Triangle(  4, 15, 5, 4  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+124,30,0  ),
     gsSP2Triangles(  6, 7, 8, 6, 12, 13, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 13, 15, 18  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+95,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf25afc9c),  /*New Coords: -27.29, -27.10*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3dbbfc9c),  /*New Coords: 123.47, -27.10*/
     gsSP1Triangle(  0, 5, 1, 0  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+124,30,0  ),
     gsSP1Triangle(  22, 23, 24, 22  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+153,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+108,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x51440038),  /*New Coords: 162.54, 1.77*/
     gsSP1Triangle(  0, 23, 5, 0  ),


//>-- MATERIAL 12: START ------------------------------------ 'Ocean_Water'-------------------------------------------------

//Last: water_grey1   Current: water_grey1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   water_grey1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 ),
   gsDPLoadTLUT_pal16(   0, water_grey1_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),

//>----- WARNING ----- TEX_ANIM_OFFSET() GBI commands not printed. In order to animate a texture, your object must be dynamic, not set to static. 

   gsDPSetPrimColor( 1,255,0,1,32,255  ),

   gsSPVertex( forest_entrance_LOD1_VertList_0+87,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xe1b7163c),  /*New Coords: -121.13, 88.94*/
     gsSP2Triangles(  24, 25, 26, 24, 21, 26, 25, 21  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xffd6163c),  /*New Coords: -0.66, 88.94*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x1d32163c),  /*New Coords: 116.79, 88.94*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x1d32f8df),  /*New Coords: 116.79, -28.51*/
     gsSP2Triangles(  27, 28, 29, 27, 21, 23, 12, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xf401163c),  /*New Coords: -47.98, 88.94*/
     gsSP2Triangles(  24, 18, 27, 24, 18, 24, 26, 18  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+145,30,0  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( forest_entrance_LOD1_VertList_0+101,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xffd6f8df),  /*New Coords: -0.66, -28.51*/
     gsSP1Triangle(  0, 13, 15, 0  ),
     gsSP1Triangle(  0, 10, 13, 0  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- forest_entrance_LOD1 -------------------------------------------------

 
 
 
 