#include "common.h"
#include "harvesterBeach.h"
#include "Scn06_Beach_defs.h"

extern int animCoordCycleH;
extern    int animCoordCycleV;
    
extern   void AnimCycle();


//>-- Obj00: START ------------------------------------------ hanging_lamp_full -------------------------------------------------

Vtx hanging_lamp_full_VertList_0 [] = {
   { 0.00, 26.60, 13.94, 1, 0x13e1, 0x1cd1, 130, 139, 158, 255}, 
   { 0.00, 31.31, -3.61, 1, 0x13e1, 0x2a3c, 255, 255, 255, 184}, 
   { -21.41, 21.41, -3.61, 1, 0x17da, 0x2a3c, 255, 255, 255, 184}, 
   { 26.60, -0.00, 13.94, 1, 0x0bed, 0x1cd1, 130, 139, 158, 255}, 
   { 31.31, 0.00, -3.61, 1, 0x0bed, 0x2a3c, 255, 255, 255, 184}, 
   { 21.41, 21.41, -3.61, 1, 0x0fe7, 0x2a3c, 255, 255, 255, 184}, 
   { 0.00, -26.60, 13.94, 1, 0x03fa, 0x1cd1, 130, 139, 158, 255}, 
   { 0.00, -31.31, -3.61, 1, 0x03fa, 0x2a3c, 255, 255, 255, 184}, 
   { 21.41, -21.41, -3.61, 1, 0x07f4, 0x2a3c, 255, 255, 255, 184}, 
   { -26.60, -0.00, 13.94, 1, 0xfc07, 0x1cd1, 130, 139, 158, 255}, 
   { -31.31, 0.00, -3.61, 1, 0xfc07, 0x2a3c, 255, 255, 255, 184}, 
   { -21.41, -21.41, -3.61, 1, 0x0000, 0x2a3c, 255, 255, 255, 184}, 
   { -17.38, 17.38, -18.95, 1, 0xf80d, 0x3533, 255, 255, 255, 199}, 
   { -25.42, 0.00, -18.95, 1, 0xfc07, 0x3533, 255, 255, 255, 199}, 
   { 17.38, -17.38, -18.95, 1, 0x07f4, 0x3533, 255, 255, 255, 199}, 
   { 25.42, 0.00, -18.95, 1, 0x0bed, 0x3533, 255, 255, 255, 199}, 
   { -17.38, -17.38, -18.95, 1, 0x0000, 0x3533, 255, 255, 255, 207}, 
   { 0.00, -25.42, -18.95, 1, 0x03fa, 0x3533, 255, 255, 255, 207}, 
   { 17.38, 17.38, -18.95, 1, 0x0fe7, 0x3533, 255, 255, 255, 199}, 
   { 0.00, 25.42, -18.95, 1, 0x13e1, 0x3533, 255, 255, 255, 199}, 
   { -18.19, 18.19, 13.94, 1, 0x02a0, 0x1cb2, 130, 139, 158, 255}, 
   { 0.00, 0.00, 28.42, 1, 0x026a, 0x1f09, 255, 255, 255, 255}, 
   { 18.19, 18.19, 13.94, 1, 0x0370, 0x1ea1, 130, 139, 158, 255}, 
   { 18.19, -18.19, 13.94, 1, 0x0228, 0x1f40, 130, 139, 158, 255}, 
   { -18.19, -18.19, 13.94, 1, 0x00ec, 0x1d39, 130, 139, 158, 255}, 
   { 0.00, -0.00, 82.50, 1, 0x0837, 0x0009, 38, 36, 48, 255}, 
   { 0.00, 0.00, -32.97, 1, 0xfff3, 0x3f41, 73, 78, 89, 255}, 
};

void hanging_lamp_full_PolyList( u8 animFrame ){ 

   Vtx *hanging_lamp_full_VTXPointer = &hanging_lamp_full_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'lamp_texture'-------------------------------------------------

//Last:    Current: lamp_textures
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineLERP(  glistp++, 	TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A,G_RM_ZB_XLU_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  lamp_textures,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 );
   gDPLoadTLUT_pal16(  glistp++,  0, lamp_textures_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   gDPSetAlphaDither(  glistp++,  G_CD_NOISE );
   gDPSetColorDither(  glistp++,  G_CD_NOISE );
   gDPSetPrimColor(glistp++,  1,255,100,219,255,200  );

  gSPVertex(glistp++,  hanging_lamp_full_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 7, 8, 6, 9, 10, 11, 9  );
     gSP2Triangles(glistp++,   11, 7, 6, 11, 5, 1, 0, 5  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0xf80d2a3c);  /*New Coords: -63.58, 84.47*/
     gSP2Triangles(glistp++,   2, 10, 9, 2, 8, 4, 3, 8  );
     gSP2Triangles(glistp++,   2, 12, 13, 2, 8, 14, 15, 8  );
     gSP2Triangles(glistp++,   11, 16, 17, 11, 5, 18, 19, 5  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x17da3533);  /*New Coords: 190.84, 106.40*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x17da2a3c);  /*New Coords: 190.84, 84.47*/
     gSP2Triangles(glistp++,   19, 12, 2, 19, 15, 18, 5, 15  );
     gSP2Triangles(glistp++,   17, 14, 8, 17, 13, 16, 11, 13  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x03e91ced);  /*New Coords: 31.30, 57.85*/
     gSP2Triangles(glistp++,   20, 21, 0, 20, 0, 21, 22, 0  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x02bb2087);  /*New Coords: 21.86, 65.06*/
     gSP2Triangles(glistp++,   22, 21, 3, 22, 3, 21, 23, 3  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x01971edc);  /*New Coords: 12.74, 61.73*/
     gSP2Triangles(glistp++,   23, 21, 6, 23, 6, 21, 24, 6  );
   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x021e1cb2);  /*New Coords: 16.95, 57.39*/
     gSP2Triangles(glistp++,   24, 21, 9, 24, 9, 21, 20, 9  );
     gSP2Triangles(glistp++,   13, 26, 16, 13, 17, 26, 14, 17  );
   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0x0fda3f41);  /*New Coords: 126.82, 126.52*/
     gSP2Triangles(glistp++,   15, 26, 18, 15, 19, 26, 12, 19  );
     gSP1Triangle(glistp++,   18, 26, 19, 18  );
   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0xfff33f41);  /*New Coords: -0.39, 126.52*/
     gSP1Triangle(glistp++,   16, 26, 17, 16  );
   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0x0fda3f41);  /*New Coords: 126.82, 126.52*/
     gSP1Triangle(glistp++,   14, 26, 15, 14  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0xf80d3533);  /*New Coords: -63.58, 106.40*/   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0xfff33f41);  /*New Coords: -0.39, 126.52*/
     gSP1Triangle(glistp++,   12, 26, 13, 12  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x17da1cd1);  /*New Coords: 190.84, 57.63*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x13e11cd1);  /*New Coords: 159.04, 57.63*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x0fe71cd1);  /*New Coords: 127.24, 57.63*/   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x0bed1cd1);  /*New Coords: 95.43, 57.63*/
     gSP2Triangles(glistp++,   20, 0, 2, 20, 22, 3, 5, 22  );
   gSPModifyVertex(glistp++,  23,   G_MWO_POINT_ST, 0x07f41cd1);  /*New Coords: 63.63, 57.63*/   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x03fa1cd1);  /*New Coords: 31.83, 57.63*/   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x00001cd1);  /*New Coords: 0.02, 57.63*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0xfc071cd1);  /*New Coords: -31.78, 57.63*/
     gSP2Triangles(glistp++,   23, 6, 8, 23, 24, 9, 11, 24  );
     gSP2Triangles(glistp++,   24, 11, 6, 24, 22, 5, 0, 22  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0xf80d1cd1);  /*New Coords: -63.58, 57.63*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0xf80d2a3c);  /*New Coords: -63.58, 84.47*/
     gSP2Triangles(glistp++,   20, 2, 9, 20, 23, 8, 3, 23  );
     gSP2Triangles(glistp++,   10, 2, 13, 10, 4, 8, 15, 4  );
     gSP2Triangles(glistp++,   7, 11, 17, 7, 1, 5, 19, 1  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x17da2a3c);  /*New Coords: 190.84, 84.47*/
     gSP2Triangles(glistp++,   1, 19, 2, 1, 4, 15, 5, 4  );
     gSP2Triangles(glistp++,   7, 17, 8, 7, 10, 13, 11, 10  );


//>-- MATERIAL 1: START ------------------------------------ 'lamp_texture_rope'-------------------------------------------------

//Last: lamp_textures   Current: lamp_textures
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   
   TEXTURE_FOG_VTXCOL(glistp,15,55,60,255,940,1020);
   
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_FOG   );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineLERP(  glistp++,  TEXEL0, 0, SHADE, 0,    TEXEL0, 0, TEXEL0, 0,    1, 0, 0, COMBINED,    TEXEL0, 0, 0, COMBINED );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2  );
   gDPLoadTextureBlock_4b(  glistp++,  lamp_textures,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 );
   gDPLoadTLUT_pal16(  glistp++,  0, lamp_textures_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,0,0,0,255  );

   gSPVertex(glistp++,  hanging_lamp_full_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  23,   G_MWO_POINT_ST, 0x07f41c8e);  /*New Coords: 63.63, 57.11*/
     gSP1Triangle(glistp++,   25, 23, 3, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0xf8500009);  /*New Coords: -61.49, 0.08*/   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0xf80d1c8e);  /*New Coords: -63.58, 57.11*/
     gSP1Triangle(glistp++,   25, 20, 9, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0x102a0009);  /*New Coords: 129.33, 0.08*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x0fe71c8e);  /*New Coords: 127.24, 57.11*/
     gSP1Triangle(glistp++,   25, 22, 0, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0x00430009);  /*New Coords: 2.11, 0.08*/   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x00001c8e);  /*New Coords: 0.02, 57.11*/
     gSP1Triangle(glistp++,   25, 24, 6, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0xfc490009);  /*New Coords: -29.69, 0.08*/
     gSP1Triangle(glistp++,   25, 9, 24, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0x043d0009);  /*New Coords: 33.92, 0.08*/
     gSP1Triangle(glistp++,   25, 6, 23, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0x0c300009);  /*New Coords: 97.53, 0.08*/
     gSP1Triangle(glistp++,   25, 3, 22, 25  );
   gSPModifyVertex(glistp++,  25,   G_MWO_POINT_ST, 0x14240009);  /*New Coords: 161.13, 0.08*/   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x17da1c8e);  /*New Coords: 190.84, 57.11*/
     gSP1Triangle(glistp++,   25, 0, 20, 25  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- hanging_lamp_full -------------------------------------------------

 
 



//>-- Obj00: START ------------------------------------------ palm_multi_3 -------------------------------------------------

Vtx palm_multi_3_VertList_0 [] = {
   { 85.94, -137.39, 521.21, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { 83.47, -148.63, 529.32, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 78.15, -152.75, 531.93, 1, 0x021d, 0xd9b4, 38, 48, 43, 255}, 
   { 1.61, -96.67, 18.43, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 34.37, -126.54, 15.61, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 60.78, -130.28, 322.13, 1, 0xf87e, 0xf903, 182, 229, 206, 255}, 
   { 62.59, -95.65, 343.12, 1, 0x0f85, 0xf9a8, 38, 48, 43, 255}, 
   { 73.49, -127.51, 522.22, 1, 0x0767, 0xd8f5, 38, 48, 43, 255}, 
   { 65.85, -141.47, 522.88, 1, 0x1000, 0x0058, 38, 48, 43, 255}, 
   { 73.74, -149.13, 530.08, 1, 0x0000, 0x1000, 38, 48, 43, 255}, 
   { 132.14, -188.45, 520.82, 1, 0x0c95, 0x0006, 38, 48, 43, 255}, 
   { 158.95, -156.52, 510.05, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 173.26, -227.45, 491.01, 1, 0x0711, 0x0007, 38, 48, 43, 255}, 
   { 206.55, -196.55, 488.15, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { 223.79, -279.47, 401.33, 1, 0x0000, 0x0009, 77, 97, 87, 255}, 
   { 80.63, -66.76, 508.89, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 41.79, -12.26, 495.39, 1, 0x04b5, 0x00df, 38, 48, 43, 255}, 
   { 10.83, -36.87, 515.83, 1, 0x04b5, 0x0000, 77, 97, 87, 255}, 
   { -39.90, 19.96, 450.49, 1, 0x0000, 0x0000, 38, 48, 43, 255}, 
   { 103.96, -217.24, 515.77, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 141.48, -264.59, 467.80, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 34.37, -65.31, 15.61, 1, 0x174a, 0x3735, 38, 48, 43, 255}, 
   { 83.13, -111.48, 330.78, 1, 0x04c7, 0xfa52, 77, 97, 87, 255}, 
   { 40.25, -111.48, 334.47, 1, 0x04c7, 0xfa52, 38, 48, 43, 255}, 
   { -3.80, -156.52, 524.08, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 24.46, -188.45, 530.10, 1, 0x0caa, 0x0000, 77, 97, 87, 255}, 
   { -67.63, -206.97, 507.14, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { -33.03, -237.61, 501.94, 1, 0x071d, 0x0001, 77, 97, 87, 255}, 
   { -112.76, -300.63, 395.63, 1, 0x0000, 0x0002, 38, 48, 43, 255}, 
   { 45.40, -94.25, 529.48, 1, 0x0b94, 0x0000, 77, 97, 87, 255}, 
   { 1.76, -120.26, 510.15, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { -28.54, -60.00, 496.34, 1, 0x04b5, 0x00df, 38, 48, 43, 255}, 
   { -5.58, -276.91, 468.82, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 51.36, -217.24, 520.31, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 78.15, -152.75, 531.93, 1, 0x1000, 0x001d, 38, 48, 43, 255}, 
   { 83.47, -148.63, 529.32, 1, 0x0000, 0x1000, 38, 48, 43, 255}, 
   { 401.12, -265.75, 504.67, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { 395.68, -264.74, 509.92, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 298.54, -247.86, 321.32, 1, 0xf87e, 0xf903, 77, 97, 87, 255}, 
   { 123.96, -200.38, -22.40, 1, 0x174a, 0x3735, 38, 48, 43, 255}, 
   { 245.81, -204.92, 184.62, 1, 0x140a, 0x1973, 38, 48, 43, 255}, 
   { 260.90, -241.41, 167.81, 1, 0x0454, 0x1aa8, 182, 229, 206, 255}, 
   { 146.10, -245.45, -34.98, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 223.08, -239.71, 172.69, 1, 0xf464, 0x19a2, 74, 94, 84, 255}, 
   { 328.59, -248.76, 316.46, 1, 0x04c7, 0xfa52, 182, 229, 206, 255}, 
   { 315.30, -220.99, 330.05, 1, 0x0f85, 0xf9a8, 38, 48, 43, 255}, 
   { 394.11, -249.18, 508.39, 1, 0x0767, 0xd8f5, 38, 48, 43, 255}, 
   { 401.92, -334.18, 500.83, 1, 0x0c95, 0x0006, 182, 229, 206, 255}, 
   { 437.86, -329.10, 469.83, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 390.37, -415.42, 465.22, 1, 0x0711, 0x0007, 182, 229, 206, 255}, 
   { 436.39, -416.90, 442.06, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { 337.17, -519.44, 351.57, 1, 0x0000, 0x0009, 38, 48, 43, 255}, 
   { 465.66, -246.10, 446.33, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 438.76, -205.14, 488.38, 1, 0x0b94, 0x0000, 113, 142, 128, 255}, 
   { 501.96, -169.37, 388.93, 1, 0x04b5, 0x00df, 38, 48, 43, 255}, 
   { 480.40, -134.13, 427.95, 1, 0x04b5, 0x0000, 77, 97, 87, 255}, 
   { 474.63, -85.38, 325.81, 1, 0x0000, 0x0000, 38, 48, 43, 255}, 
   { 359.41, -336.68, 515.34, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 326.51, -424.50, 462.26, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 390.23, -263.91, 515.72, 1, 0x1000, 0x001d, 38, 48, 43, 255}, 
   { 322.47, -205.85, 535.16, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 233.22, -199.89, 557.09, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { 236.54, -251.10, 552.32, 1, 0x071d, 0x0001, 77, 97, 87, 255}, 
   { 84.00, -249.02, 494.92, 1, 0x0000, 0x0002, 38, 48, 43, 255}, 
   { 8.16, -675.33, 239.00, 1, 0xf87e, 0xf903, 169, 213, 191, 255}, 
   { -10.86, -775.22, 429.05, 1, 0x021d, 0xd9b4, 38, 48, 43, 255}, 
   { -9.88, -779.21, 423.83, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 435.90, -98.81, 426.33, 1, 0x04b5, 0x00df, 38, 48, 43, 255}, 
   { 388.92, -164.12, 489.79, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 215.32, -305.73, 525.21, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 322.12, -296.85, 536.45, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 325.58, -252.65, 544.05, 1, 0x0c95, 0x0006, 77, 97, 87, 255}, 
   { 388.42, -257.78, 513.93, 1, 0x1000, 0x01dc, 38, 48, 43, 255}, 
   { -17.27, -784.66, 416.57, 1, 0x0f4c, 0x0000, 38, 48, 43, 255}, 
   { -66.80, -819.44, 390.69, 1, 0x0b94, 0x0000, 77, 97, 87, 255}, 
   { -20.21, -846.45, 355.08, 1, 0x0b94, 0x0100, 169, 213, 191, 255}, 
   { 58.47, -822.71, 393.31, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 59.38, -788.09, 426.15, 1, 0x0caa, 0x0000, 169, 213, 191, 255}, 
   { 53.16, -512.80, -110.91, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 72.63, -476.92, -84.85, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 27.79, -594.57, 94.28, 1, 0xf464, 0x19a2, 169, 213, 191, 255}, 
   { -5.03, -705.33, 236.66, 1, 0x04c7, 0xfa52, 169, 213, 191, 255}, 
   { -17.96, -772.52, 426.52, 1, 0x0000, 0x1000, 38, 48, 43, 255}, 
   { 60.76, -746.23, 442.58, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 269.27, -725.49, 312.94, 1, 0x0000, 0x0009, 38, 48, 43, 255}, 
   { 157.33, -714.96, 406.41, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 145.81, -778.48, 405.22, 1, 0x0711, 0x0007, 169, 213, 191, 255}, 
   { -127.85, -856.20, 317.54, 1, 0x04b5, 0x0000, 77, 97, 87, 255}, 
   { -158.35, -845.04, 208.98, 1, 0x0000, 0x0000, 38, 48, 43, 255}, 
   { -87.22, -877.76, 284.17, 1, 0x04b5, 0x00df, 169, 213, 191, 255}, 
   { 149.71, -823.70, 380.80, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { -24.85, -769.94, 424.52, 1, 0x0f4c, 0x0000, 38, 48, 43, 255}, 
   { 9.98, -633.90, 92.06, 1, 0x0454, 0x1aa8, 169, 213, 191, 255}, 
   { -25.78, -710.17, 458.08, 1, 0x0c95, 0x0006, 77, 97, 87, 255}, 
   { -13.19, -467.09, 418.83, 1, 0x0000, 0x0009, 38, 48, 43, 255}, 
   { -25.82, -621.47, 469.57, 1, 0x0711, 0x0007, 77, 97, 87, 255}, 
   { 33.28, -601.47, 452.91, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 19.16, -708.17, 458.17, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { -160.92, -810.33, 311.80, 1, 0x04b5, 0x00df, 38, 48, 43, 255}, 
   { -105.83, -768.12, 387.19, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { -76.97, -616.33, 465.78, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { -70.26, -704.94, 441.58, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { -21.71, -677.21, 244.62, 1, 0x04c7, 0xfa52, 38, 48, 43, 255}, 
   { -9.37, -597.07, 102.65, 1, 0x0454, 0x1aa8, 38, 48, 43, 255}, 
   { 8.16, -675.33, 239.00, 1, 0xf87e, 0xf903, 169, 213, 191, 255}, 
   { 28.80, -472.04, -90.29, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 67.14, -96.67, 12.78, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 83.13, -111.48, 330.78, 1, 0x04c7, 0xfa52, 77, 97, 87, 255}, 
   { 60.78, -130.28, 322.13, 1, 0xf87e, 0xf903, 182, 229, 206, 255}, 
   { 123.96, -200.38, -22.40, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 107.41, -244.94, -13.14, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 223.08, -239.71, 172.69, 1, 0xf464, 0x19a2, 74, 94, 84, 255}, 
   { 298.54, -247.86, 321.32, 1, 0xf87e, 0xf903, 77, 97, 87, 255}, 
   { 390.23, -263.91, 515.72, 1, 0x021d, 0xd9b4, 38, 48, 43, 255}, 
   { 388.42, -257.78, 513.93, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 78.15, -152.75, 531.93, 1, 0x021d, 0xd9b4, 38, 48, 43, 255}, 
   { 60.78, -130.28, 322.13, 1, 0xf87e, 0xf903, 182, 229, 206, 255}, 
   { 85.94, -137.39, 521.21, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { 40.25, -111.48, 334.47, 1, 0x04c7, 0xfa52, 38, 48, 43, 255}, 
   { 1.61, -96.67, 18.43, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 60.78, -130.28, 322.13, 1, 0xf87e, 0xf903, 182, 229, 206, 255}, 
   { 62.59, -95.65, 343.12, 1, 0x0f85, 0xf9a8, 38, 48, 43, 255}, 
   { 158.95, -156.52, 510.05, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 85.94, -137.39, 521.21, 1, 0x0fe5, 0x0026, 38, 48, 43, 255}, 
   { 132.14, -188.45, 520.82, 1, 0x0c95, 0x0006, 38, 48, 43, 255}, 
   { 206.55, -196.55, 488.15, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { 158.95, -156.52, 510.05, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 173.26, -227.45, 491.01, 1, 0x0711, 0x0007, 38, 48, 43, 255}, 
   { 141.48, -264.59, 467.80, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 173.26, -227.45, 491.01, 1, 0x0711, 0x0007, 38, 48, 43, 255}, 
   { 103.96, -217.24, 515.77, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 65.85, -141.47, 522.88, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { 73.74, -149.13, 530.08, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 34.37, -65.31, 15.61, 1, 0x174a, 0x3735, 38, 48, 43, 255}, 
   { 24.46, -188.45, 530.10, 1, 0x0caa, 0x0000, 77, 97, 87, 255}, 
   { 24.46, -188.45, 530.10, 1, 0x0caa, 0x0000, 77, 97, 87, 255}, 
   { -3.80, -156.52, 524.08, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { -33.03, -237.61, 501.94, 1, 0x071d, 0x0001, 77, 97, 87, 255}, 
   { 73.49, -127.51, 522.22, 1, 0x0f4c, 0x0000, 38, 48, 43, 255}, 
   { 45.40, -94.25, 529.48, 1, 0x0b94, 0x0000, 77, 97, 87, 255}, 
   { 65.85, -141.47, 522.88, 1, 0x1000, 0x0037, 38, 48, 43, 255}, 
   { 45.40, -94.25, 529.48, 1, 0x0b94, 0x0000, 77, 97, 87, 255}, 
   { 10.83, -36.87, 515.83, 1, 0x04b5, 0x0000, 77, 97, 87, 255}, 
   { 1.76, -120.26, 510.15, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 51.36, -217.24, 520.31, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 390.23, -263.91, 515.72, 1, 0x021d, 0xd9b4, 38, 48, 43, 255}, 
   { 298.54, -247.86, 321.32, 1, 0xf87e, 0xf903, 77, 97, 87, 255}, 
   { 395.68, -264.74, 509.92, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 328.59, -248.76, 316.46, 1, 0x04c7, 0xfa52, 182, 229, 206, 255}, 
   { 401.12, -265.75, 504.67, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { 298.54, -247.86, 321.32, 1, 0xf87e, 0xf903, 77, 97, 87, 255}, 
   { 146.10, -245.45, -34.98, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 123.96, -200.38, -22.40, 1, 0x174a, 0x3735, 38, 48, 43, 255}, 
   { 260.90, -241.41, 167.81, 1, 0x0454, 0x1aa8, 182, 229, 206, 255}, 
   { 107.41, -244.94, -13.14, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 146.10, -245.45, -34.98, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 223.08, -239.71, 172.69, 1, 0xf464, 0x19a2, 74, 94, 84, 255}, 
   { 245.81, -204.92, 184.62, 1, 0x140a, 0x1973, 38, 48, 43, 255}, 
   { 315.30, -220.99, 330.05, 1, 0x0f85, 0xf9a8, 38, 48, 43, 255}, 
   { 437.86, -329.10, 469.83, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 401.12, -265.75, 504.67, 1, 0x0fe5, 0x0026, 38, 48, 43, 255}, 
   { 401.92, -334.18, 500.83, 1, 0x0c95, 0x0006, 182, 229, 206, 255}, 
   { 436.39, -416.90, 442.06, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { 437.86, -329.10, 469.83, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 390.37, -415.42, 465.22, 1, 0x0711, 0x0007, 182, 229, 206, 255}, 
   { 394.11, -249.18, 508.39, 1, 0x0f4c, 0x0000, 38, 48, 43, 255}, 
   { 401.12, -265.75, 504.67, 1, 0x1000, 0x0037, 38, 48, 43, 255}, 
   { 438.76, -205.14, 488.38, 1, 0x0b94, 0x0000, 113, 142, 128, 255}, 
   { 438.76, -205.14, 488.38, 1, 0x0b94, 0x0000, 113, 142, 128, 255}, 
   { 465.66, -246.10, 446.33, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 480.40, -134.13, 427.95, 1, 0x04b5, 0x0000, 77, 97, 87, 255}, 
   { 326.51, -424.50, 462.26, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { 390.37, -415.42, 465.22, 1, 0x0711, 0x0007, 182, 229, 206, 255}, 
   { 359.41, -336.68, 515.34, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { -5.03, -705.33, 236.66, 1, 0x04c7, 0xfa52, 169, 213, 191, 255}, 
   { 8.16, -675.33, 239.00, 1, 0xf87e, 0xf903, 169, 213, 191, 255}, 
   { -9.88, -779.21, 423.83, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 388.92, -164.12, 489.79, 1, 0x0b94, 0x0100, 38, 48, 43, 255}, 
   { 388.42, -257.78, 513.93, 1, 0x0fe5, 0x0000, 38, 48, 43, 255}, 
   { 325.58, -252.65, 544.05, 1, 0x0c95, 0x0006, 77, 97, 87, 255}, 
   { 390.23, -263.91, 515.72, 1, 0x1000, 0x001d, 38, 48, 43, 255}, 
   { -17.27, -784.66, 416.57, 1, 0x0fe5, 0x0026, 38, 48, 43, 255}, 
   { 58.47, -822.71, 393.31, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { -9.88, -779.21, 423.83, 1, 0x1000, 0x0005, 38, 48, 43, 255}, 
   { -9.88, -779.21, 423.83, 1, 0x0fe5, 0x0000, 38, 48, 43, 255}, 
   { 59.38, -788.09, 426.15, 1, 0x0c95, 0x0006, 169, 213, 191, 255}, 
   { -10.86, -775.22, 429.05, 1, 0x1000, 0x001d, 38, 48, 43, 255}, 
   { 59.38, -788.09, 426.15, 1, 0x0c95, 0x0006, 169, 213, 191, 255}, 
   { 145.81, -778.48, 405.22, 1, 0x0711, 0x0007, 169, 213, 191, 255}, 
   { 60.76, -746.23, 442.58, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { 27.79, -594.57, 94.28, 1, 0xf464, 0x19a2, 169, 213, 191, 255}, 
   { 8.16, -675.33, 239.00, 1, 0xf87e, 0xf903, 169, 213, 191, 255}, 
   { 9.98, -633.90, 92.06, 1, 0x0454, 0x1aa8, 169, 213, 191, 255}, 
   { 19.16, -708.17, 458.17, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { -25.78, -710.17, 458.08, 1, 0x0c95, 0x0006, 77, 97, 87, 255}, 
   { -10.86, -775.22, 429.05, 1, 0x1000, 0x001d, 38, 48, 43, 255}, 
   { 33.28, -601.47, 452.91, 1, 0x06ca, 0x0100, 38, 48, 43, 255}, 
   { -25.82, -621.47, 469.57, 1, 0x0711, 0x0007, 77, 97, 87, 255}, 
   { 19.16, -708.17, 458.17, 1, 0x0cb0, 0x00ce, 38, 48, 43, 255}, 
   { -17.27, -784.66, 416.57, 1, 0x0f4c, 0x0000, 38, 48, 43, 255}, 
   { -24.85, -769.94, 424.52, 1, 0x1000, 0x0037, 38, 48, 43, 255}, 
   { -66.80, -819.44, 390.69, 1, 0x0b94, 0x0000, 77, 97, 87, 255}, 
   { -76.97, -616.33, 465.78, 1, 0x06b7, 0x0100, 38, 48, 43, 255}, 
   { -70.26, -704.94, 441.58, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { -25.82, -621.47, 469.57, 1, 0x0711, 0x0007, 77, 97, 87, 255}, 
   { -21.71, -677.21, 244.62, 1, 0x04c7, 0xfa52, 38, 48, 43, 255}, 
   { -5.03, -705.33, 236.66, 1, 0x0f85, 0xf9a8, 169, 213, 191, 255}, 
   { -24.85, -769.94, 424.52, 1, 0x04ba, 0xdbb7, 38, 48, 43, 255}, 
   { -9.37, -597.07, 102.65, 1, 0x0454, 0x1aa8, 38, 48, 43, 255}, 
   { 72.63, -476.92, -84.85, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 28.80, -472.04, -90.29, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 27.79, -594.57, 94.28, 1, 0xf464, 0x19a2, 169, 213, 191, 255}, 
   { 53.16, -512.80, -110.91, 1, 0x174a, 0x3735, 38, 48, 43, 255}, 
   { -17.96, -772.52, 426.52, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
   { 34.37, -126.54, 15.61, 1, 0xef2d, 0x3836, 38, 48, 43, 255}, 
   { 67.14, -96.67, 12.78, 1, 0x0354, 0x392b, 38, 48, 43, 255}, 
   { 60.78, -130.28, 322.13, 1, 0xf87e, 0xf903, 182, 229, 206, 255}, 
   { 394.11, -249.18, 508.39, 1, 0x0fe5, 0x0026, 38, 48, 43, 255}, 
   { 322.47, -205.85, 535.16, 1, 0x0cbc, 0x00e8, 38, 48, 43, 255}, 
   { 388.42, -257.78, 513.93, 1, 0x1000, 0x0005, 38, 48, 43, 255}, 
   { 315.30, -220.99, 330.05, 1, 0x04c7, 0xfa52, 38, 48, 43, 255}, 
   { 298.54, -247.86, 321.32, 1, 0xf87e, 0xf903, 77, 97, 87, 255}, 
   { 388.42, -257.78, 513.93, 1, 0x036c, 0xdab5, 38, 48, 43, 255}, 
};


void palm_multi_3_PolyList( u8 animFrame ){ 

   Vtx *palm_multi_3_VTXPointer = &palm_multi_3_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'palm_trunk_1'-------------------------------------------------

//Last:    Current: foliage_trunk_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  foliage_trunk_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, foliage_trunk_1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  palm_multi_3_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP1Triangle(glistp++,   6, 7, 0, 6  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x10000373);  /*New Coords: 64.00, 13.80*/
     gSP1Triangle(glistp++,   8, 9, 7, 8  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/
     gSP2Triangles(glistp++,   2, 8, 5, 2, 21, 6, 22, 21  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x0767d8f5);  /*New Coords: 29.62, -156.16*/
     gSP2Triangles(glistp++,   21, 3, 23, 21, 8, 7, 6, 8  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0fe50263);  /*New Coords: 63.59, 9.56*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   1, 0, 7, 1  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+7,30,0  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x100001dc);  /*New Coords: 64.00, 7.45*/   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   2, 27, 0, 2  );
   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   28, 0, 27, 28  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+36,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
     gSP2Triangles(glistp++,   3, 4, 5, 3, 6, 5, 7, 6  );
     gSP2Triangles(glistp++,   5, 8, 2, 5, 4, 9, 8, 4  );
     gSP1Triangle(glistp++,   9, 10, 0, 9  );
   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x04c7fa52);  /*New Coords: 19.12, -22.71*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x04541aa8);  /*New Coords: 17.32, 106.63*/
     gSP1Triangle(glistp++,   2, 9, 4, 2  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0fe50263);  /*New Coords: 63.59, 9.56*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   1, 0, 10, 1  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+64,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+46,30,0  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   26, 13, 0, 26  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+37,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   0, 9, 22, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+66,30,0  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/
     gSP2Triangles(glistp++,   12, 13, 14, 12, 15, 0, 7, 15  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+65,30,0  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   17, 8, 0, 17  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x100001dc);  /*New Coords: 64.00, 7.45*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   1, 0, 8, 1  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0fe50263);  /*New Coords: 63.59, 9.56*/
     gSP1Triangle(glistp++,   17, 26, 8, 17  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+64,30,0  );
     gSP1Triangle(glistp++,   0, 17, 28, 0  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0f85f9a8);  /*New Coords: 62.09, -25.37*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x0767d8f5);  /*New Coords: 29.62, -156.16*/   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/
     gSP1Triangle(glistp++,   17, 9, 27, 17  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+81,30,0  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x140a1973);  /*New Coords: 80.17, 101.81*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f85f9a8);  /*New Coords: 62.09, -25.37*/
     gSP1Triangle(glistp++,   11, 0, 21, 11  );
     gSP1Triangle(glistp++,   22, 21, 23, 22  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+80,30,0  );
     gSP1Triangle(glistp++,   25, 23, 0, 25  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+78,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x174a3735);  /*New Coords: 93.16, 220.84*/   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x140a1973);  /*New Coords: 80.17, 101.81*/   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x036cdab5);  /*New Coords: 13.69, -149.16*/
     gSP2Triangles(glistp++,   0, 14, 25, 0, 13, 4, 26, 13  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+106,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+45,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x04c7fa52);  /*New Coords: 19.12, -22.71*/   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0x036cdab5);  /*New Coords: 13.69, -149.16*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/
     gSP1Triangle(glistp++,   0, 27, 1, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+103,30,0  );
     gSP2Triangles(glistp++,   6, 7, 8, 6, 9, 10, 11, 9  );
     gSP2Triangles(glistp++,   12, 13, 14, 12, 4, 14, 13, 4  );
     gSP2Triangles(glistp++,   15, 16, 17, 15, 4, 18, 14, 4  );
     gSP2Triangles(glistp++,   15, 17, 28, 15, 12, 29, 28, 12  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+106,30,0  );
     gSP2Triangles(glistp++,   0, 27, 1, 0, 15, 27, 12, 15  );
     gSP1Triangle(glistp++,   12, 25, 15, 12  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+135,30,0  );
     gSP1Triangle(glistp++,   10, 11, 12, 10  );
     gSP2Triangles(glistp++,   13, 14, 15, 13, 16, 17, 18, 16  );
     gSP2Triangles(glistp++,   19, 20, 21, 19, 21, 18, 15, 21  );
     gSP2Triangles(glistp++,   18, 22, 13, 18, 13, 23, 14, 13  );
   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x04541aa8);  /*New Coords: 17.32, 106.63*/
     gSP1Triangle(glistp++,   21, 15, 22, 21  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+164,30,0  );
     gSP1Triangle(glistp++,   10, 11, 12, 10  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+78,30,0  );
     gSP1Triangle(glistp++,   14, 0, 2, 14  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+165,30,0  );
     gSP1Triangle(glistp++,   25, 26, 27, 25  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+194,30,0  );
     gSP1Triangle(glistp++,   11, 12, 13, 11  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+192,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x140a1973);  /*New Coords: 80.17, 101.81*/
     gSP1Triangle(glistp++,   16, 0, 13, 16  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+190,30,0  );
     gSP2Triangles(glistp++,   0, 18, 1, 0, 19, 20, 21, 19  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x021dd9b4);  /*New Coords: 8.46, -153.19*/
     gSP2Triangles(glistp++,   20, 22, 18, 20, 5, 1, 23, 5  );
     gSP2Triangles(glistp++,   15, 17, 1, 15, 24, 25, 26, 24  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+152,30,0  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x04541aa8);  /*New Coords: 17.32, 106.63*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0354392b);  /*New Coords: 13.31, 228.67*/
     gSP1Triangle(glistp++,   5, 0, 4, 5  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+210,30,0  );
     gSP1Triangle(glistp++,   10, 11, 12, 10  );


//>-- MATERIAL 1: START ------------------------------------ 'palm_leaf_1'-------------------------------------------------

//Last: palm_leaf   Current: palm_leaf
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  palm_leaf,	G_IM_FMT_CI,	64, 16,	0, G_TX_WRAP,G_TX_WRAP, 6,4, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, palm_leaf_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  palm_multi_3_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0ff4000b);  /*New Coords: 63.82, 0.72*/
     gSP2Triangles(glistp++,   0, 1, 10, 0, 11, 10, 12, 11  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   13, 12, 14, 13, 7, 0, 15, 7  );
     gSP2Triangles(glistp++,   15, 16, 17, 15, 17, 16, 18, 17  );
     gSP2Triangles(glistp++,   12, 10, 19, 12, 14, 12, 20, 14  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x1000001d);  /*New Coords: 64.00, 1.86*/   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP2Triangles(glistp++,   10, 1, 2, 10, 8, 24, 25, 8  );
     gSP2Triangles(glistp++,   24, 26, 27, 24, 26, 28, 27, 26  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+8,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   21, 22, 0, 21, 9, 23, 22, 9  );
   gSPModifyVertex(glistp++,  19,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP2Triangles(glistp++,   9, 10, 23, 9, 19, 24, 25, 19  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x00000009);  /*New Coords: 0.00, 0.61*/   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0c950006);  /*New Coords: 50.33, 0.41*/
     gSP2Triangles(glistp++,   20, 24, 19, 20, 17, 25, 26, 17  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+36,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0ff4000b);  /*New Coords: 63.82, 0.72*/
     gSP2Triangles(glistp++,   0, 1, 11, 0, 12, 11, 13, 12  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   14, 13, 15, 14, 0, 16, 17, 0  );
     gSP2Triangles(glistp++,   16, 18, 19, 16, 19, 18, 20, 19  );
     gSP2Triangles(glistp++,   13, 11, 21, 13, 15, 13, 22, 15  );
     gSP2Triangles(glistp++,   11, 1, 23, 11, 24, 25, 26, 24  );
     gSP1Triangle(glistp++,   25, 27, 26, 25  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+55,30,0  );
     gSP1Triangle(glistp++,   0, 12, 13, 0  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP2Triangles(glistp++,   0, 1, 12, 0, 7, 14, 15, 7  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x00000009);  /*New Coords: 0.00, 0.61*/
     gSP2Triangles(glistp++,   8, 14, 7, 8, 16, 15, 4, 16  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x10000005);  /*New Coords: 64.00, 0.34*/
     gSP2Triangles(glistp++,   18, 19, 20, 18, 21, 22, 11, 21  );
   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x0c950006);  /*New Coords: 50.33, 0.41*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x1000001d);  /*New Coords: 64.00, 1.86*/
     gSP1Triangle(glistp++,   22, 28, 10, 22  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+84,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+83,30,0  );
     gSP2Triangles(glistp++,   3, 2, 0, 3, 4, 5, 6, 4  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+75,30,0  );
   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x00000002);  /*New Coords: 0.00, 0.18*/   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x071d0001);  /*New Coords: 28.46, 0.11*/
     gSP2Triangles(glistp++,   12, 14, 0, 12, 15, 9, 11, 15  );
     gSP1Triangle(glistp++,   1, 15, 11, 1  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+65,30,0  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0ff4000b);  /*New Coords: 63.82, 0.72*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x1000001d);  /*New Coords: 64.00, 1.86*/
     gSP1Triangle(glistp++,   28, 17, 0, 28  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+94,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+93,30,0  );
     gSP1Triangle(glistp++,   2, 0, 4, 2  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+87,30,0  );
     gSP2Triangles(glistp++,   0, 11, 1, 0, 12, 11, 0, 12  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+74,30,0  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   17, 25, 0, 17, 26, 21, 20, 26  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x0ff4000b);  /*New Coords: 63.82, 0.72*/
     gSP2Triangles(glistp++,   27, 19, 21, 27, 17, 8, 19, 17  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+60,30,0  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x0caa0000);  /*New Coords: 50.66, 0.00*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x10000005);  /*New Coords: 64.00, 0.34*/
     gSP1Triangle(glistp++,   0, 11, 12, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+46,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/
     gSP1Triangle(glistp++,   0, 7, 22, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+104,30,0  );
     gSP2Triangles(glistp++,   18, 19, 20, 18, 21, 22, 23, 21  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+7,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/
     gSP2Triangles(glistp++,   22, 0, 8, 22, 22, 8, 10, 22  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+123,30,0  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+115,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x1000001d);  /*New Coords: 64.00, 1.86*/
     gSP1Triangle(glistp++,   15, 9, 0, 15  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x10000005);  /*New Coords: 64.00, 0.34*/   gSPModifyVertex(glistp++,  16,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP2Triangles(glistp++,   17, 16, 19, 17, 20, 21, 22, 20  );
     gSP2Triangles(glistp++,   23, 24, 25, 23, 26, 27, 28, 26  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x0c950006);  /*New Coords: 50.33, 0.41*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP1Triangle(glistp++,   20, 22, 29, 20  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   17, 20, 0, 17  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+144,30,0  );
     gSP2Triangles(glistp++,   15, 16, 17, 15, 18, 19, 20, 18  );
     gSP2Triangles(glistp++,   21, 22, 23, 21, 24, 25, 26, 24  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x1000001d);  /*New Coords: 64.00, 1.86*/
     gSP2Triangles(glistp++,   27, 28, 29, 27, 29, 17, 1, 29  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+60,30,0  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x0caa0000);  /*New Coords: 50.66, 0.00*/
     gSP1Triangle(glistp++,   11, 0, 2, 11  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+168,30,0  );
     gSP1Triangle(glistp++,   0, 2, 9, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+62,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP1Triangle(glistp++,   9, 0, 8, 9  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+178,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
     gSP2Triangles(glistp++,   3, 4, 5, 3, 6, 7, 8, 6  );
     gSP1Triangle(glistp++,   9, 10, 11, 9  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+74,30,0  );
     gSP1Triangle(glistp++,   0, 13, 1, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+161,30,0  );
   gSPModifyVertex(glistp++,  26,   G_MWO_POINT_ST, 0x0caa0000);  /*New Coords: 50.66, 0.00*/   gSPModifyVertex(glistp++,  27,   G_MWO_POINT_ST, 0x071d0001);  /*New Coords: 28.46, 0.11*/
     gSP1Triangle(glistp++,   26, 21, 27, 26  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+190,30,0  );
     gSP1Triangle(glistp++,   3, 4, 5, 3  );
     gSP1Triangle(glistp++,   6, 7, 8, 6  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+74,30,0  );
     gSP1Triangle(glistp++,   0, 25, 13, 0  );
   gSPVertex(glistp++,  palm_multi_3_VTXPointer+190,30,0  );
     gSP2Triangles(glistp++,   9, 10, 11, 9, 12, 13, 14, 12  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP2Triangles(glistp++,   13, 10, 4, 13, 27, 28, 29, 27  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- palm_multi_3 -------------------------------------------------

 

//>-- Obj00: START ------------------------------------------ palm_single -------------------------------------------------

Vtx palm_single_VertList_0 [] = {
   { 133.40, -5.13, 494.00, 1, 0x04ba, 0xdbb7, 30, 41, 35, 255}, 
   { 127.99, -9.37, 497.30, 1, 0x036c, 0xdab5, 30, 41, 35, 255}, 
   { 71.76, 8.27, 292.80, 1, 0xf87e, 0xf903, 255, 255, 255, 255}, 
   { -2.29, 73.24, -5.81, 1, 0x174a, 0x3735, 30, 41, 35, 255}, 
   { 38.58, 66.19, 159.00, 1, 0x140a, 0x1973, 33, 44, 38, 255}, 
   { 61.36, 41.88, 138.57, 1, 0x0454, 0x1aa8, 112, 119, 115, 255}, 
   { 29.63, 41.88, -13.73, 1, 0x0354, 0x392b, 30, 41, 35, 255}, 
   { 31.68, 19.05, 131.16, 1, 0xf464, 0x19a2, 177, 181, 179, 255}, 
   { 95.19, 27.07, 297.85, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 76.84, 42.90, 313.25, 1, 0x0f85, 0xf9a8, 30, 41, 35, 255}, 
   { 122.23, 8.33, 496.30, 1, 0x0767, 0xd8f5, 30, 41, 35, 255}, 
   { 111.28, -5.13, 499.48, 1, 0x1000, 0x0058, 30, 41, 35, 255}, 
   { 117.47, -9.92, 499.82, 1, 0x0000, 0x1000, 30, 41, 35, 255}, 
   { 179.78, -53.50, 479.56, 1, 0x0c95, 0x0006, 255, 255, 255, 255}, 
   { 207.26, -18.11, 463.12, 1, 0x0cbc, 0x00e8, 135, 138, 136, 255}, 
   { 229.99, -107.98, 429.44, 1, 0x0711, 0x0007, 255, 255, 255, 255}, 
   { 268.14, -74.02, 422.50, 1, 0x06b7, 0x0100, 135, 138, 136, 255}, 
   { 275.53, -177.82, 289.39, 1, 0x0000, 0x0009, 255, 255, 255, 255}, 
   { 176.17, 67.03, 463.70, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 160.27, 163.92, 434.40, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { 115.59, 163.92, 469.52, 1, 0x04b5, 0x0000, 255, 255, 255, 255}, 
   { 93.48, 230.28, 380.37, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { 148.06, -85.40, 478.92, 1, 0x0cb0, 0x00ce, 135, 138, 136, 255}, 
   { 189.34, -151.54, 404.54, 1, 0x06ca, 0x0100, 135, 138, 136, 255}, 
   { 122.61, -13.94, 501.08, 1, 0x1000, 0x001d, 30, 41, 35, 255}, 
   { -34.21, 41.88, 2.10, 1, 0x0354, 0x392b, 48, 58, 52, 255}, 
   { 8.90, 41.88, 151.58, 1, 0x0454, 0x1aa8, 112, 119, 115, 255}, 
   { -2.29, 12.01, -5.81, 1, 0xef2d, 0x3836, 30, 41, 35, 255}, 
   { 53.42, 27.07, 308.21, 1, 0x04c7, 0xfa52, 177, 181, 179, 255}, 
   { 31.55, -18.11, 506.70, 1, 0x0cbc, 0x00e8, 48, 58, 52, 255}, 
   { 63.53, -53.50, 508.39, 1, 0x0caa, 0x0000, 255, 255, 255, 255}, 
   { -41.25, -74.02, 499.23, 1, 0x06b7, 0x0100, 48, 58, 52, 255}, 
   { -4.28, -107.98, 487.54, 1, 0x071d, 0x0001, 255, 255, 255, 255}, 
   { -109.98, -177.82, 385.00, 1, 0x0000, 0x0002, 255, 255, 255, 255}, 
   { 123.36, 67.03, 500.84, 1, 0x0b94, 0x0000, 255, 255, 255, 255}, 
   { 59.31, 67.03, 492.69, 1, 0x0b94, 0x0100, 48, 58, 52, 255}, 
   { 59.68, 163.92, 459.35, 1, 0x04b5, 0x00df, 48, 58, 52, 255}, 
   { 20.02, -151.54, 446.53, 1, 0x06ca, 0x0100, 143, 146, 144, 255}, 
   { 91.28, -85.40, 493.00, 1, 0x0cb0, 0x00ce, 143, 146, 144, 255}, 
};


void palm_single_PolyList( u8 animFrame ){ 

   Vtx *palm_single_VTXPointer = &palm_single_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'palm_trunk_1'-------------------------------------------------

//Last:    Current: foliage_trunk_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  foliage_trunk_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, foliage_trunk_1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  palm_single_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 5, 7, 6, 5, 8, 2, 5  );
     gSP2Triangles(glistp++,   4, 9, 8, 4, 9, 10, 0, 9  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x10000373);  /*New Coords: 64.00, 13.80*/
     gSP1Triangle(glistp++,   11, 12, 10, 11  );
   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x021dd9b4);  /*New Coords: 8.46, -153.19*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x036cdab5);  /*New Coords: 13.69, -149.16*/
     gSP1Triangle(glistp++,   24, 12, 2, 24  );
     gSP2Triangles(glistp++,   3, 25, 26, 3, 25, 27, 7, 25  );
     gSP2Triangles(glistp++,   2, 28, 26, 2, 28, 9, 4, 28  );
   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x0767d8f5);  /*New Coords: 29.62, -156.16*/
     gSP1Triangle(glistp++,   11, 10, 9, 11  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0fe50263);  /*New Coords: 63.59, 9.56*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   1, 0, 10, 1  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x100001dc);  /*New Coords: 64.00, 7.45*/   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/
     gSP1Triangle(glistp++,   12, 24, 10, 12  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x00001000);  /*New Coords: 0.00, 64.00*/   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   1, 10, 24, 1  );
   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x021dd9b4);  /*New Coords: 8.46, -153.19*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x036cdab5);  /*New Coords: 13.69, -149.16*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x04badbb7);  /*New Coords: 18.92, -145.13*/
     gSP2Triangles(glistp++,   24, 2, 1, 24, 8, 0, 2, 8  );
     gSP2Triangles(glistp++,   6, 3, 5, 6, 27, 6, 7, 27  );
     gSP2Triangles(glistp++,   7, 5, 2, 7, 5, 4, 8, 5  );
     gSP2Triangles(glistp++,   8, 9, 0, 8, 28, 2, 11, 28  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x036cdab5);  /*New Coords: 13.69, -149.16*/
     gSP2Triangles(glistp++,   12, 11, 2, 12, 4, 3, 26, 4  );
     gSP2Triangles(glistp++,   26, 25, 7, 26, 7, 2, 26, 7  );
     gSP2Triangles(glistp++,   26, 28, 4, 26, 28, 11, 9, 28  );


//>-- MATERIAL 1: START ------------------------------------ 'palm_leaf_1'-------------------------------------------------

//Last: palm_leaf   Current: palm_leaf
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  palm_leaf,	G_IM_FMT_CI,	64, 16,	0, G_TX_WRAP,G_TX_WRAP, 6,4, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, palm_leaf_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  palm_single_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0ff4000b);  /*New Coords: 63.82, 0.72*/
     gSP2Triangles(glistp++,   0, 1, 13, 0, 14, 13, 15, 14  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   16, 15, 17, 16, 10, 0, 18, 10  );
     gSP2Triangles(glistp++,   18, 19, 20, 18, 20, 19, 21, 20  );
     gSP2Triangles(glistp++,   15, 13, 22, 15, 17, 15, 23, 17  );
     gSP1Triangle(glistp++,   13, 1, 24, 13  );
   gSPVertex(glistp++,  palm_single_VTXPointer+11,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP1Triangle(glistp++,   0, 18, 19, 0  );
     gSP2Triangles(glistp++,   18, 20, 21, 18, 20, 22, 21, 20  );
   gSPVertex(glistp++,  palm_single_VTXPointer+10,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/
     gSP2Triangles(glistp++,   0, 24, 25, 0, 10, 26, 25, 10  );
   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP2Triangles(glistp++,   10, 11, 26, 10, 22, 27, 28, 22  );
   gSPModifyVertex(glistp++,  23,   G_MWO_POINT_ST, 0x00000009);  /*New Coords: 0.00, 0.61*/   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x0c950006);  /*New Coords: 50.33, 0.41*/
     gSP2Triangles(glistp++,   23, 27, 22, 23, 20, 28, 14, 20  );
   gSPVertex(glistp++,  palm_single_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP2Triangles(glistp++,   14, 0, 13, 14, 16, 14, 15, 16  );
   gSPVertex(glistp++,  palm_single_VTXPointer+10,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x0f4c0000);  /*New Coords: 61.20, 0.00*/
     gSP2Triangles(glistp++,   24, 0, 8, 24, 24, 8, 10, 24  );
     gSP2Triangles(glistp++,   13, 5, 12, 13, 12, 3, 14, 12  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x10000005);  /*New Coords: 64.00, 0.34*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x0fe50026);  /*New Coords: 63.59, 2.39*/
     gSP2Triangles(glistp++,   2, 1, 20, 2, 20, 19, 22, 20  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x10000037);  /*New Coords: 64.00, 3.45*/
     gSP2Triangles(glistp++,   1, 0, 25, 1, 24, 10, 25, 24  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x0c950006);  /*New Coords: 50.33, 0.41*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x07110007);  /*New Coords: 28.27, 0.48*/
     gSP1Triangle(glistp++,   20, 22, 28, 20  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x0fe50000);  /*New Coords: 63.58, 0.00*/
     gSP1Triangle(glistp++,   2, 20, 14, 2  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- palm_single -------------------------------------------------

 
 
 
 
 



// //>-- Obj00: START ------------------------------------------ Sky_Moon -------------------------------------------------

// Vtx Sky_Moon_VertList_0 [] = {
   // { 139.13, 125.11, 46.42, 1, 0x0020, 0x0010, 255, 255, 255, 255}, 
   // { 169.35, 121.40, -347.85, 1, 0x0020, 0x100f, 255, 255, 255, 255}, 
   // { -139.13, -125.11, -369.18, 1, 0x101f, 0x100f, 255, 255, 255, 255}, 
   // { -169.35, -121.40, 25.09, 1, 0x101f, 0x0010, 255, 255, 255, 255}, 
// };

// void Sky_Moon_PolyList( u8 animFrame ){ 

   // Vtx *Sky_Moon_VTXPointer = &Sky_Moon_VertList_0[0]; 



// //>-- MATERIAL 0: START ------------------------------------ 'Moon'-------------------------------------------------

// //Last:    Current: Sky_Moon_1
// //NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   // gDPPipeSync( glistp++ );
   // gDPSetCycleType( glistp++,  G_CYC_1CYCLE );
   // gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   // gSPSetGeometryMode( glistp++,   G_SHADE | G_SHADING_SMOOTH  );
   // gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   // gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   // gDPSetCombineMode(  glistp++,  G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA );
   // gDPSetRenderMode(  glistp++,  G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2  );
   // gDPLoadTextureBlock_4b(  glistp++,  Sky_Moon_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   // gDPLoadTLUT_pal16(  glistp++,  0, Sky_Moon_1_tlut );
   // gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   // gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   // gSPVertex(glistp++,  Sky_Moon_VTXPointer+0,30,0  );
     // gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 0, 2, 3  );
   // gDPPipeSync(  glistp++  );
// } 

// //>-- Obj00: END ------------------------------------------- Sky_Moon -------------------------------------------------


//>-- Obj00: START ------------------------------------------ rock_wall_0 -------------------------------------------------

Vtx rock_wall_0_VertList_0 [] = {
   { -4329.62, -4780.77, 465.97, 1, 0xd3ef, 0x0000, 78, 103, 83, 255}, 
   { -4235.08, -4479.88, 409.00, 1, 0xeae9, 0x0000, 101, 140, 110, 255}, 
   { -4742.95, -4284.12, 834.96, 1, 0xeae9, 0xf142, 255, 255, 255, 255}, 
   { -4742.95, -4887.00, 595.06, 1, 0x0523, 0x003b, 255, 255, 255, 255}, 
   { -4344.11, -5129.98, 216.58, 1, 0x10af, 0x052b, 84, 112, 90, 255}, 
   { -3725.12, -3508.88, 612.93, 1, 0x3e93, 0x0000, 84, 112, 90, 255}, 
   { -3676.85, -3120.30, 642.59, 1, 0x5a0e, 0x0000, 84, 112, 90, 255}, 
   { -4656.61, -3390.65, 1376.87, 1, 0x5a0e, 0xf142, 101, 140, 110, 255}, 
   { -3764.14, -2220.23, 860.54, 1, 0x982a, 0x0000, 75, 99, 80, 255}, 
   { -4463.72, -2260.14, 1916.25, 1, 0x96f9, 0xf46f, 101, 140, 110, 255}, 
   { -4720.15, -3763.04, 1376.87, 1, 0x3e93, 0xf142, 101, 140, 110, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0xfe62, 0x0419, 50, 58, 50, 255}, 
   { -2760.51, -284.39, 936.75, 1, 0xf00a, 0xffe6, 67, 85, 70, 255}, 
   { -3506.40, -1718.44, 828.74, 1, 0xb1f7, 0x0006, 67, 85, 70, 255}, 
   { -4882.58, -5511.63, -167.77, 1, 0xf3ac, 0x093a, 101, 140, 110, 255}, 
   { -4106.08, -4512.47, 64.28, 1, 0xeae9, 0x0400, 55, 66, 56, 255}, 
   { -3545.78, -3370.12, 283.56, 1, 0x3e93, 0x0400, 68, 84, 70, 255}, 
   { -3502.15, -2976.63, 322.21, 1, 0x5a0e, 0x0400, 68, 84, 70, 255}, 
   { -3674.39, -2146.44, 442.70, 1, 0xa346, 0x0419, 50, 58, 50, 255}, 
   { -4106.08, -4851.63, 35.14, 1, 0x21e3, 0x0630, 55, 66, 56, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0xdcde, 0xf786, 100, 138, 109, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0xb980, 0xf17a, 100, 138, 109, 255}, 
   { -3642.83, -1965.59, 897.24, 1, 0xa347, 0x0004, 64, 81, 67, 255}, 
   { -4273.83, -5187.99, -102.58, 1, 0x12c7, 0x08b6, 68, 84, 70, 255}, 
};

Gfx rock_wall_0_Static_PolyList_0[] = { 



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

   gsSPVertex( rock_wall_0_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1dce001e),  /*New Coords: 59.61, 0.95*/
     gsSP2Triangles(  0, 3, 4, 0, 4, 3, 14, 4  ),
     gsSP2Triangles(  19, 0, 4, 19, 23, 4, 14, 23  ),
     gsSP1Triangle(  23, 19, 4, 23  ),


//>-- MATERIAL 8: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

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

   gsSPVertex( rock_wall_0_VertList_0+0,30,0  ),
     gsSP2Triangles(  11, 12, 13, 11, 15, 16, 5, 15  ),
     gsSP2Triangles(  17, 18, 8, 17, 16, 17, 6, 16  ),
     gsSP2Triangles(  15, 1, 0, 15, 18, 13, 22, 18  ),
     gsSP2Triangles(  18, 11, 13, 18, 1, 15, 5, 1  ),
     gsSP2Triangles(  6, 17, 8, 6, 5, 16, 6, 5  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xd3ef0400),  /*New Coords: -88.13, 32.00*/
     gsSP2Triangles(  19, 15, 0, 19, 8, 18, 22, 8  ),


//>-- MATERIAL 9: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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

   gsSPVertex( rock_wall_0_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 5, 6, 7, 5  ),
     gsSP2Triangles(  8, 9, 7, 8, 5, 10, 2, 5  ),
     gsSP2Triangles(  13, 12, 20, 13, 21, 22, 13, 21  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xd3eff142),  /*New Coords: -88.13, -117.91*/
     gsSP2Triangles(  9, 8, 22, 9, 3, 0, 2, 3  ),
     gsSP2Triangles(  10, 5, 7, 10, 6, 8, 7, 6  ),
     gsSP2Triangles(  1, 5, 2, 1, 20, 21, 13, 20  ),
     gsSP1Triangle(  21, 9, 22, 21  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rock_wall_0 -------------------------------------------------

 
//>-- Obj00: START ------------------------------------------ rock_wall_1 -------------------------------------------------

Vtx rock_wall_1_VertList_0 [] = {
   { 2464.99, -857.62, 446.66, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2679.18, -468.19, 838.28, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 3405.92, -2737.92, 133.15, 1, 0x63ac, 0x0400, 49, 56, 48, 255}, 
   { 3531.90, -2685.15, 380.99, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 3087.83, -2286.90, 570.69, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 2659.93, -2105.52, 222.23, 1, 0x2aa7, 0x0400, 100, 138, 109, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3744.31, -3387.94, -108.16, 1, 0x9186, 0x0400, 40, 54, 42, 255}, 
   { 4087.40, -3244.60, 494.16, 1, 0x9186, 0x0000, 103, 142, 112, 255}, 
   { 3747.33, -2999.04, 385.88, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 3562.77, -3164.96, 31.79, 1, 0x7bf1, 0x0400, 49, 56, 48, 255}, 
   { 4613.71, -3772.65, -257.45, 1, 0xac4a, 0x0467, 103, 142, 112, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0xa979, 0x0400, 50, 58, 50, 255}, 
   { 3686.22, 828.23, 1976.07, 1, 0x9a2d, 0xf472, 101, 140, 110, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0x9eea, 0xfff0, 101, 140, 110, 255}, 
   { 3673.04, 148.84, 1821.61, 1, 0xc2ac, 0xf4fb, 101, 140, 110, 255}, 
   { 3422.32, -831.78, 1495.78, 1, 0xfeda, 0xf710, 50, 58, 50, 255}, 
   { 2735.78, -2277.93, 193.82, 1, 0x3a60, 0x0400, 100, 138, 109, 255}, 
   { 3378.66, -2749.34, 79.51, 1, 0x07cb, 0x03bf, 49, 56, 48, 255}, 
   { 3531.84, -3192.77, -27.54, 1, 0x08bc, 0x03d8, 49, 56, 48, 255}, 
   { 2689.19, -2276.74, 143.95, 1, 0x5248, 0x03da, 40, 54, 42, 255}, 
   { 3711.08, -3401.83, -166.49, 1, 0x93b0, 0x0422, 40, 54, 42, 255}, 
   { 2619.78, -2126.01, 167.94, 1, 0x4403, 0x03e4, 40, 54, 42, 255}, 
   { 4381.36, -5351.44, -228.51, 1, 0x62d3, 0xff0c, 49, 56, 48, 255}, 
   { 3914.12, -5401.97, -175.15, 1, 0x51c5, 0xfe82, 49, 56, 48, 255}, 
   { 4217.90, -5600.73, 486.30, 1, 0x566d, 0x06b8, 49, 56, 48, 255}, 
   { 3985.90, -5738.64, 820.54, 1, 0x4b0f, 0x09f6, 68, 86, 71, 255}, 
   { 3478.45, -5720.19, -201.38, 1, 0x3e44, 0xfdfb, 49, 56, 48, 255}, 
   { 3743.52, -5894.55, 552.46, 1, 0x40d0, 0x06f4, 68, 86, 71, 255}, 
   { 3458.38, -6049.74, -239.77, 1, 0x31fc, 0xfea7, 49, 56, 48, 255}, 
   { 3564.38, -6386.34, 271.28, 1, 0x2b73, 0x0598, 49, 56, 48, 255}, 
   { 3332.31, -6765.05, 301.70, 1, 0x1abe, 0x065c, 68, 86, 71, 255}, 
   { 2456.48, -6771.52, -320.71, 1, 0x04ac, 0xfc04, 49, 56, 48, 255}, 
   { 2729.11, -7020.75, 547.66, 1, 0x0249, 0x05f4, 68, 86, 71, 255}, 
   { 1896.07, -8710.17, -394.82, 1, 0xb9d0, 0x00df, 49, 56, 48, 255}, 
   { 2935.39, -7733.44, 869.90, 1, 0xe2a2, 0x0a78, 101, 139, 110, 255}, 
   { 2419.59, -8141.80, 647.89, 1, 0xacb4, 0x063e, 101, 139, 110, 255}, 
   { 3426.36, -6858.86, 425.13, 1, 0x2e93, 0x0177, 101, 139, 110, 255}, 
   { 3658.43, -6480.15, 394.71, 1, 0x51d3, 0x0020, 101, 139, 110, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3601.59, -1624.88, 1495.78, 1, 0x219b, 0xf6ae, 50, 58, 50, 255}, 
   { 2679.18, -468.19, 838.28, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 3087.83, -2286.90, 570.69, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 3531.90, -2685.15, 380.99, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 3828.00, -2561.13, 963.56, 1, 0x5ca5, 0xf7a0, 49, 56, 48, 255}, 
   { 3748.05, -2303.72, 1277.43, 1, 0x439c, 0xf6ea, 49, 56, 48, 255}, 
   { 3747.33, -2999.04, 385.88, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 4087.40, -3244.60, 494.16, 1, 0x9186, 0x0000, 103, 142, 112, 255}, 
   { 3981.19, -2788.80, 834.54, 1, 0x7723, 0xfb5b, 49, 56, 48, 255}, 
   { 2735.78, -2277.93, 193.82, 1, 0x3a60, 0x0400, 100, 138, 109, 255}, 
   { 3405.92, -2737.92, 133.15, 1, 0x63ac, 0x0400, 49, 56, 48, 255}, 
   { 3087.83, -2286.90, 570.69, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 2464.99, -857.62, 446.66, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 3562.77, -3164.96, 31.79, 1, 0x7bf1, 0x0400, 49, 56, 48, 255}, 
   { 3744.31, -3387.94, -108.16, 1, 0x9186, 0x0400, 40, 54, 42, 255}, 
   { 3747.33, -2999.04, 385.88, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0x9eea, 0xfff0, 101, 140, 110, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0xa979, 0x0400, 50, 58, 50, 255}, 
   { 2679.18, -468.19, 838.28, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 2659.93, -2105.52, 222.23, 1, 0x2aa7, 0x0400, 100, 138, 109, 255}, 
   { 2689.19, -2276.74, 143.95, 1, 0x06d2, 0x03c9, 40, 54, 42, 255}, 
   { 3378.66, -2749.34, 79.51, 1, 0x07cb, 0x03bf, 49, 56, 48, 255}, 
   { 2735.78, -2277.93, 193.82, 1, 0x06cb, 0x03a5, 100, 138, 109, 255}, 
   { 2619.78, -2126.01, 167.94, 1, 0x4403, 0x03e4, 40, 54, 42, 255}, 
};

Gfx rock_wall_1_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

//Last:    Current: RocktoFerns
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

   gsSPVertex( rock_wall_1_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  0, 6, 7, 0, 8, 9, 10, 8  ),
     gsSP2Triangles(  3, 11, 10, 3, 9, 8, 12, 9  ),
     gsSP2Triangles(  13, 0, 2, 13, 18, 5, 7, 18  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x519800bf),  /*New Coords: 163.19, 5.99*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x414000c1),  /*New Coords: 130.50, 6.03*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x92b203fa),  /*New Coords: 293.39, 31.83*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xa0460438),  /*New Coords: 320.55, 33.75*/
     gsSP2Triangles(  21, 18, 6, 21, 8, 22, 12, 8  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xb75b034b),  /*New Coords: -145.28, 26.35*/
     gsSP1Triangle(  0, 23, 6, 0  ),
   gsSPVertex( rock_wall_1_VertList_0+29,30,0  ),
     gsSP1Triangle(  22, 23, 24, 22  ),
     gsSP2Triangles(  11, 25, 12, 11, 26, 27, 28, 26  ),
     gsSP1Triangle(  16, 23, 28, 16  ),
   gsSPVertex( rock_wall_1_VertList_0+58,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( rock_wall_1_VertList_0+41,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x524803da),  /*New Coords: 164.56, 30.82*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x414000c1),  /*New Coords: 130.50, 6.03*/
     gsSP2Triangles(  20, 10, 0, 20, 24, 21, 20, 24  ),


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

   gsSPVertex( rock_wall_1_VertList_0+0,30,0  ),
     gsSP2Triangles(  24, 25, 26, 24, 26, 25, 27, 26  ),
     gsSP2Triangles(  25, 28, 27, 25, 27, 28, 29, 27  ),
   gsSPVertex( rock_wall_1_VertList_0+28,30,0  ),
     gsSP1Triangle(  1, 0, 2, 1  ),
   gsSPVertex( rock_wall_1_VertList_0+27,30,0  ),
     gsSP1Triangle(  0, 2, 4, 0  ),
     gsSP2Triangles(  2, 3, 4, 2, 5, 4, 6, 5  ),
     gsSP2Triangles(  6, 4, 3, 6, 7, 6, 8, 7  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xde4f0b12),  /*New Coords: -67.38, 88.59*/
     gsSP2Triangles(  10, 7, 8, 10, 6, 7, 5, 6  ),


//>-- MATERIAL 8: START ------------------------------------ 'Beach-Stone-Transition-1'-------------------------------------------------

//Last: Sand_Texture_3_Stones   Current: Sand_Texture_3_Stones
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_3_Stones,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_3_Stones_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( rock_wall_1_VertList_0+0,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x07bd039a),  /*New Coords: 61.93, 28.84*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x06cb03a5),  /*New Coords: 54.37, 29.19*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x08a503b0),  /*New Coords: 69.16, 29.53*/
     gsSP2Triangles(  19, 3, 18, 19, 19, 20, 11, 19  ),
   gsSPVertex( rock_wall_1_VertList_0+58,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( rock_wall_1_VertList_0+52,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x07bd039a),  /*New Coords: 61.93, 28.84*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x08a503b0),  /*New Coords: 69.16, 29.53*/
     gsSP1Triangle(  0, 11, 3, 0  ),


//>-- MATERIAL 9: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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

   gsSPVertex( rock_wall_1_VertList_0+0,30,0  ),
     gsSP2Triangles(  2, 14, 15, 2, 2, 16, 14, 2  ),
     gsSP1Triangle(  17, 16, 2, 17  ),
   gsSPVertex( rock_wall_1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfa73fd2b),  /*New Coords: -11.10, -22.64*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x2f4cfde3),  /*New Coords: 94.60, -16.90*/
     gsSP1Triangle(  5, 7, 3, 5  ),
     gsSP2Triangles(  5, 8, 7, 5, 3, 9, 10, 3  ),
     gsSP1Triangle(  7, 9, 3, 7  ),
   gsSPVertex( rock_wall_1_VertList_0+27,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x5366fc87),  /*New Coords: 166.80, -27.77*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x97b50447),  /*New Coords: 303.42, 34.22*/
     gsSP1Triangle(  4, 12, 0, 4  ),
     gsSP1Triangle(  13, 14, 15, 13  ),
   gsSPVertex( rock_wall_1_VertList_0+17,30,0  ),
     gsSP1Triangle(  23, 0, 26, 23  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( rock_wall_1_VertList_0+41,30,0  ),
     gsSP1Triangle(  0, 3, 6, 0  ),
     gsSP2Triangles(  7, 8, 9, 7, 4, 7, 9, 4  ),
   gsSPVertex( rock_wall_1_VertList_0+31,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x5366fc87),  /*New Coords: 166.80, -27.77*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x2f4cfde3),  /*New Coords: 94.60, -16.90*/
     gsSP1Triangle(  0, 1, 8, 0  ),
   gsSPVertex( rock_wall_1_VertList_0+17,30,0  ),
     gsSP1Triangle(  0, 23, 25, 0  ),
   gsSPVertex( rock_wall_1_VertList_0+46,30,0  ),
     gsSP1Triangle(  1, 7, 0, 1  ),
   gsSPVertex( rock_wall_1_VertList_0+41,30,0  ),
     gsSP1Triangle(  1, 0, 6, 1  ),
     gsSP1Triangle(  5, 4, 9, 5  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rock_wall_1 -------------------------------------------------

 
 
 
 
 
 
//>-- Obj01: START ------------------------------------------ shoreline -------------------------------------------------

Vtx shoreline_VertList_0 [] = {
   { 2026.60, -3735.34, 29.46, 1, 0x14dd, 0x0e99, 138, 193, 142, 255}, 
   { 1866.18, -3101.88, 116.04, 1, 0x1590, 0x0925, 138, 193, 142, 255}, 
   { 1279.98, -3153.83, 132.19, 1, 0x112c, 0x08bd, 128, 178, 131, 255}, 
   { 3629.40, -3448.77, -161.04, 1, 0xa137, 0x2f6c, 58, 69, 54, 255}, 
   { 3711.08, -3401.83, -166.49, 1, 0xa519, 0x2dbc, 50, 55, 45, 255}, 
   { 3531.84, -3192.77, -27.54, 1, 0x9e3b, 0x2616, 50, 55, 45, 255}, 
   { 2058.95, -4351.29, -56.37, 1, 0x15a5, 0x13f6, 49, 54, 44, 255}, 
   { 1257.69, -3872.10, 50.26, 1, 0x1079, 0x0e31, 128, 178, 131, 255}, 
   { 3451.99, -3221.55, -24.52, 1, 0x2690, 0x09ca, 63, 76, 59, 255}, 
   { 3378.66, -2749.34, 79.51, 1, 0x2655, 0x0601, 50, 55, 45, 255}, 
   { -929.37, -3958.47, 91.49, 1, 0xfa38, 0x0d62, 139, 195, 143, 255}, 
   { -1181.73, -3175.68, 198.37, 1, 0xf84d, 0x0749, 139, 195, 143, 255}, 
   { -1981.57, -3450.62, 172.13, 1, 0xf09a, 0x0777, 145, 189, 138, 255}, 
   { -929.37, -4664.03, -32.12, 1, 0xec1e, 0x4b2d, 49, 54, 44, 255}, 
   { -1855.39, -4115.59, 91.49, 1, 0xc582, 0x325a, 139, 195, 143, 255}, 
   { -2781.41, -4978.27, -32.12, 1, 0xa562, 0x44ce, 49, 54, 44, 255}, 
   { -2781.41, -4272.71, 91.49, 1, 0xa224, 0x2f2c, 136, 190, 140, 255}, 
   { -4106.08, -4851.63, 35.14, 1, 0x6bd6, 0x3749, 49, 54, 44, 255}, 
   { -2781.41, -3725.56, 145.89, 1, 0xe8e7, 0x07a5, 136, 190, 140, 255}, 
   { -4106.08, -4512.47, 64.28, 1, 0xdb2f, 0x0b40, 59, 70, 55, 255}, 
   { -491.96, -3941.20, 83.24, 1, 0xfedc, 0x0e92, 139, 195, 143, 255}, 
   { -54.55, -3923.92, 75.00, 1, 0x0381, 0x0fc3, 137, 192, 141, 255}, 
   { -68.53, -3059.19, 181.08, 1, 0x03f3, 0x092d, 137, 192, 141, 255}, 
   { 479.44, -3902.84, 64.93, 1, 0x09f0, 0x0e48, 138, 193, 142, 255}, 
   { 820.28, -3889.38, 58.51, 1, 0x0c15, 0x0dc9, 88, 114, 86, 255}, 
   { 842.57, -3171.10, 144.74, 1, 0x0cc8, 0x0856, 84, 108, 82, 255}, 
   { -54.55, -4629.48, -32.12, 1, 0x113e, 0x549c, 49, 54, 44, 255}, 
   { 820.28, -4594.93, -32.12, 1, 0x3387, 0x4ca7, 49, 54, 44, 255}, 
   { 3289.80, -2770.05, 81.65, 1, 0x2559, 0x05f0, 62, 76, 59, 255}, 
   { 2689.19, -2276.74, 143.95, 1, 0x1ff8, 0x028d, 50, 55, 45, 255}, 
   { 1279.98, -3153.83, 132.19, 1, 0x112c, 0x087d, 128, 178, 131, 255}, 
   { 1866.18, -3101.88, 116.04, 1, 0x1590, 0x08e5, 138, 193, 142, 255}, 
   { 1699.79, -2444.17, 177.16, 1, 0x15eb, 0x034e, 138, 193, 142, 255}, 
   { -1176.48, -2664.24, 282.17, 1, 0xf8ca, 0x02f2, 159, 186, 135, 255}, 
   { -2802.72, -3086.93, 290.47, 1, 0xe91d, 0x0331, 144, 136, 102, 255}, 
   { -3545.78, -3370.12, 283.56, 1, 0xe159, 0x0343, 59, 70, 55, 255}, 
   { -55.02, -2388.34, 259.57, 1, 0x0470, 0x030b, 59, 98, 97, 255}, 
   { -615.75, -2526.29, 270.87, 1, 0xfe9d, 0x02ff, 87, 116, 91, 255}, 
   { 487.60, -3127.50, 158.90, 1, 0x0a93, 0x084c, 138, 193, 142, 255}, 
   { 825.10, -2485.04, 240.83, 1, 0x0d1a, 0x02fc, 49, 54, 44, 255}, 
   { 3711.08, -3401.83, -166.49, 1, 0xa519, 0x2dbc, 50, 55, 45, 255}, 
   { 3629.40, -3448.77, -161.04, 1, 0xa137, 0x2f6c, 58, 69, 54, 255}, 
   { 4613.71, -3772.65, -257.45, 1, 0xcc0d, 0x3b58, 49, 54, 44, 255}, 
   { -2799.59, -2874.62, 335.87, 1, 0xe856, 0x002c, 137, 132, 104, 255}, 
   { 2576.94, -2295.74, 147.72, 1, 0x1e11, 0x03aa, 85, 109, 83, 255}, 
   { 2500.28, -2259.26, 162.84, 1, 0x1d4d, 0x0328, 51, 57, 46, 255}, 
   { 1696.47, -2184.89, 243.19, 1, 0x14fa, 0x0061, 59, 70, 55, 255}, 
   { 1260.14, -2208.65, 289.76, 1, 0x1065, 0x0030, 59, 70, 55, 255}, 
   { -1093.05, -2379.91, 375.41, 1, 0xf940, 0x0000, 165, 185, 134, 255}, 
   { -1946.32, -2627.26, 355.64, 1, 0xf0cb, 0x0016, 227, 210, 145, 255}, 
   { -48.86, -2067.16, 368.16, 1, 0x04ce, 0x0000, 59, 70, 55, 255}, 
   { -570.95, -2223.53, 371.78, 1, 0xff07, 0x0000, 59, 70, 55, 255}, 
   { 482.20, -2447.36, 248.13, 1, 0x095f, 0x0370, 49, 55, 45, 255}, 
   { 823.80, -2232.41, 336.32, 1, 0x0bd0, 0x0000, 49, 54, 44, 255}, 
   { -1989.60, -2875.58, 286.32, 1, 0xf056, 0x0306, 194, 181, 128, 255}, 
   { -1981.57, -3450.62, 172.13, 1, 0xf09a, 0x0737, 145, 189, 138, 255}, 
   { -1855.39, -4821.15, -32.12, 1, 0xc8c0, 0x47fd, 49, 54, 44, 255}, 
   { -1855.39, -4115.59, 91.49, 1, 0xc582, 0x325a, 139, 195, 143, 255}, 
   { -2781.41, -4272.71, 91.49, 1, 0xa224, 0x2f2c, 136, 190, 140, 255}, 
   { -2781.41, -3725.56, 145.89, 1, 0xe8e7, 0x07a5, 136, 190, 140, 255}, 
   { -4106.08, -4512.47, 64.28, 1, 0xdb2f, 0x0b00, 59, 70, 55, 255}, 
   { -625.13, -3117.44, 189.73, 1, 0xfe20, 0x07fb, 135, 189, 139, 255}, 
   { -491.96, -4646.75, -32.12, 1, 0xfeae, 0x4fe4, 49, 54, 44, 255}, 
   { -491.96, -3941.20, 83.24, 1, 0xfb72, 0x3a4a, 139, 195, 143, 255}, 
   { -929.37, -3958.47, 91.49, 1, 0xe8e0, 0x3588, 139, 195, 143, 255}, 
   { -55.02, -2388.34, 259.57, 1, 0x0461, 0x02b8, 59, 98, 97, 255}, 
   { 139.31, -2409.69, 255.43, 1, 0x0682, 0x0332, 62, 120, 119, 255}, 
   { 143.82, -2103.65, 361.13, 1, 0x06cc, 0x0000, 50, 56, 46, 255}, 
   { -68.53, -3059.19, 181.08, 1, 0x03f3, 0x08ed, 137, 192, 141, 255}, 
   { 132.63, -3083.90, 173.06, 1, 0x085e, 0x0882, 138, 193, 142, 255}, 
   { 138.61, -4621.85, -32.12, 1, 0x2263, 0x50a2, 49, 54, 44, 255}, 
   { 138.61, -3916.30, 71.36, 1, 0x1f2d, 0x3b1a, 138, 193, 142, 255}, 
   { -54.55, -3923.92, 75.00, 1, 0x0e05, 0x3f0c, 137, 192, 141, 255}, 
   { -615.75, -2526.29, 270.87, 1, 0xfe9d, 0x02ff, 87, 116, 91, 255}, 
   { 483.81, -2168.03, 348.72, 1, 0x0998, 0x0000, 49, 55, 45, 255}, 
   { 487.60, -3127.50, 158.90, 1, 0x0a93, 0x084c, 138, 193, 142, 255}, 
   { 479.44, -4608.39, -32.12, 1, 0x2af5, 0x4ea4, 49, 54, 44, 255}, 
   { 479.44, -3902.84, 64.93, 1, 0x27c1, 0x3921, 138, 193, 142, 255}, 
   { 1262.44, -2464.61, 209.00, 1, 0x1033, 0x031c, 128, 178, 131, 255}, 
   { 1260.14, -2208.65, 289.76, 1, 0x1065, 0x0030, 59, 70, 55, 255}, 
   { 1279.98, -3153.83, 132.19, 1, 0x112c, 0x087d, 128, 178, 131, 255}, 
   { 1262.44, -2464.61, 209.00, 1, 0x1182, 0x0325, 128, 178, 131, 255}, 
   { 825.10, -2485.04, 240.83, 1, 0x0d1a, 0x02fc, 49, 54, 44, 255}, 
   { 1257.69, -4577.66, -32.12, 1, 0x1143, 0x1390, 49, 54, 44, 255}, 
   { 1257.69, -3872.10, 50.26, 1, 0x1079, 0x0e31, 128, 178, 131, 255}, 
   { 820.28, -3889.38, 58.51, 1, 0x0c15, 0x0dc9, 88, 114, 86, 255}, 
   { 842.57, -3171.10, 144.74, 1, 0x0cc8, 0x0856, 84, 108, 82, 255}, 
   { 3629.40, -3448.77, -161.04, 1, 0xa137, 0x2f6c, 58, 69, 54, 255}, 
   { 2058.95, -4351.29, -56.37, 1, 0x5695, 0x4fd9, 49, 54, 44, 255}, 
   { 4613.71, -3772.65, -257.45, 1, 0xcc0d, 0x3b58, 49, 54, 44, 255}, 
   { 2026.60, -3735.34, 29.46, 1, 0x5377, 0x3a66, 138, 193, 142, 255}, 
   { 3451.99, -3221.55, -24.52, 1, 0x9a43, 0x272a, 63, 76, 59, 255}, 
   { 3629.40, -3448.77, -161.04, 1, 0xa137, 0x2f6c, 58, 69, 54, 255}, 
   { 3531.84, -3192.77, -27.54, 1, 0x9e3b, 0x2616, 50, 55, 45, 255}, 
   { 3289.80, -2770.05, 81.65, 1, 0x2559, 0x0630, 62, 76, 59, 255}, 
   { 3451.99, -3221.55, -24.52, 1, 0x2690, 0x09ca, 63, 76, 59, 255}, 
   { 3378.66, -2749.34, 79.51, 1, 0x2655, 0x0601, 50, 55, 45, 255}, 
   { -1855.39, -4821.15, -32.12, 1, 0xc8c0, 0x47fd, 49, 54, 44, 255}, 
   { -929.37, -4664.03, -32.12, 1, 0xec1e, 0x4b2d, 49, 54, 44, 255}, 
   { -1855.39, -4115.59, 91.49, 1, 0xc582, 0x325a, 139, 195, 143, 255}, 
   { -4273.83, -5187.99, -102.58, 1, 0x6994, 0x41f3, 49, 54, 44, 255}, 
   { -2781.41, -4978.27, -32.12, 1, 0xa562, 0x44ce, 49, 54, 44, 255}, 
   { -4106.08, -4851.63, 35.14, 1, 0x6bd6, 0x3749, 49, 54, 44, 255}, 
   { -4106.08, -4851.63, 35.14, 1, 0xdaf5, 0x0dd2, 49, 54, 44, 255}, 
   { -2781.41, -4272.71, 91.49, 1, 0xe889, 0x0bcb, 136, 190, 140, 255}, 
   { -4106.08, -4512.47, 64.28, 1, 0xdb2f, 0x0b40, 59, 70, 55, 255}, 
   { -491.96, -4646.75, -32.12, 1, 0xfeae, 0x4fe4, 49, 54, 44, 255}, 
   { -54.55, -4629.48, -32.12, 1, 0x113e, 0x549c, 49, 54, 44, 255}, 
   { -491.96, -3941.20, 83.24, 1, 0xfb72, 0x3a4a, 139, 195, 143, 255}, 
   { 479.44, -4608.39, -32.12, 1, 0x2af5, 0x4ea4, 49, 54, 44, 255}, 
   { 820.28, -4594.93, -32.12, 1, 0x3387, 0x4ca7, 49, 54, 44, 255}, 
   { 479.44, -3902.84, 64.93, 1, 0x27c1, 0x3921, 138, 193, 142, 255}, 
   { 2576.94, -2295.74, 147.72, 1, 0x1ed4, 0x02a3, 85, 109, 83, 255}, 
   { 3289.80, -2770.05, 81.65, 1, 0x2559, 0x05f0, 62, 76, 59, 255}, 
   { 2689.19, -2276.74, 143.95, 1, 0x1ff8, 0x028d, 50, 55, 45, 255}, 
   { 1262.44, -2464.61, 209.00, 1, 0x1182, 0x0325, 128, 178, 131, 255}, 
   { 1279.98, -3153.83, 132.19, 1, 0x112c, 0x087d, 128, 178, 131, 255}, 
   { 1699.79, -2444.17, 177.16, 1, 0x15eb, 0x034e, 138, 193, 142, 255}, 
   { 482.20, -2447.36, 248.13, 1, 0x0af0, 0x0300, 49, 55, 45, 255}, 
   { 487.60, -3127.50, 158.90, 1, 0x0a93, 0x084c, 138, 193, 142, 255}, 
   { 825.10, -2485.04, 240.83, 1, 0x0d1a, 0x02fc, 49, 54, 44, 255}, 
   { 1260.14, -2208.65, 289.76, 1, 0x1065, 0x0030, 59, 70, 55, 255}, 
   { 483.81, -2168.03, 348.72, 1, 0x0998, 0x0000, 49, 55, 45, 255}, 
   { 482.20, -2447.36, 248.13, 1, 0x095f, 0x0370, 49, 55, 45, 255}, 
   { 823.80, -2232.41, 336.32, 1, 0x0bd0, 0x0000, 49, 54, 44, 255}, 
   { -2781.41, -3725.56, 145.89, 1, 0xe8e7, 0x07a5, 136, 190, 140, 255}, 
   { -1176.48, -2664.24, 282.17, 1, 0xf870, 0x03a1, 159, 186, 135, 255}, 
   { -615.75, -2526.29, 270.87, 1, 0xfe68, 0x032d, 87, 116, 91, 255}, 
   { -1093.05, -2379.91, 375.41, 1, 0xf940, 0x0000, 165, 185, 134, 255}, 
   { -1181.73, -3175.68, 198.37, 1, 0xf84d, 0x0709, 139, 195, 143, 255}, 
   { -625.13, -3117.44, 189.73, 1, 0xfe20, 0x07fb, 135, 189, 139, 255}, 
   { -1176.48, -2664.24, 282.17, 1, 0xf8ca, 0x02f2, 159, 186, 135, 255}, 
   { -929.37, -4664.03, -32.12, 1, 0xec1e, 0x4b2d, 49, 54, 44, 255}, 
   { -491.96, -4646.75, -32.12, 1, 0xfeae, 0x4fe4, 49, 54, 44, 255}, 
   { -929.37, -3958.47, 91.49, 1, 0xe8e0, 0x3588, 139, 195, 143, 255}, 
   { -54.55, -4629.48, -32.12, 1, 0x113e, 0x549c, 49, 54, 44, 255}, 
   { 138.61, -4621.85, -32.12, 1, 0x2263, 0x50a2, 49, 54, 44, 255}, 
   { -54.55, -3923.92, 75.00, 1, 0x0e05, 0x3f0c, 137, 192, 141, 255}, 
   { -68.53, -3059.19, 181.08, 1, 0x03f3, 0x092d, 137, 192, 141, 255}, 
   { -54.55, -3923.92, 75.00, 1, 0x0381, 0x0fc3, 137, 192, 141, 255}, 
   { 132.63, -3083.90, 173.06, 1, 0x085e, 0x08c2, 138, 193, 142, 255}, 
   { 143.82, -2103.65, 361.13, 1, 0x06cc, 0x0000, 50, 56, 46, 255}, 
   { 139.31, -2409.69, 255.43, 1, 0x0682, 0x0332, 62, 120, 119, 255}, 
   { 483.81, -2168.03, 348.72, 1, 0x0998, 0x0000, 49, 55, 45, 255}, 
   { 138.61, -4621.85, -32.12, 1, 0x2263, 0x50a2, 49, 54, 44, 255}, 
   { 479.44, -4608.39, -32.12, 1, 0x2af5, 0x4ea4, 49, 54, 44, 255}, 
   { 138.61, -3916.30, 71.36, 1, 0x1f2d, 0x3b1a, 138, 193, 142, 255}, 
   { 842.57, -3171.10, 144.74, 1, 0x0cc8, 0x0816, 84, 108, 82, 255}, 
   { 1279.98, -3153.83, 132.19, 1, 0x112c, 0x087d, 128, 178, 131, 255}, 
   { 825.10, -2485.04, 240.83, 1, 0x0d1a, 0x02fc, 49, 54, 44, 255}, 
   { 820.28, -3889.38, 58.51, 1, 0x0c15, 0x0dc9, 88, 114, 86, 255}, 
   { 1257.69, -3872.10, 50.26, 1, 0x1079, 0x0e31, 128, 178, 131, 255}, 
   { 842.57, -3171.10, 144.74, 1, 0x0cc8, 0x0856, 84, 108, 82, 255}, 
   { 1866.18, -3101.88, 116.04, 1, 0x1590, 0x0925, 138, 193, 142, 255}, 
   { 2026.60, -3735.34, 29.46, 1, 0x14dd, 0x0e99, 138, 193, 142, 255}, 
   { 3289.80, -2770.05, 81.65, 1, 0x2559, 0x0630, 62, 76, 59, 255}, 
   { 1699.79, -2444.17, 177.16, 1, 0x15eb, 0x034e, 138, 193, 142, 255}, 
   { 1866.18, -3101.88, 116.04, 1, 0x1590, 0x08e5, 138, 193, 142, 255}, 
   { 2576.94, -2295.74, 147.72, 1, 0x1ed4, 0x02a3, 85, 109, 83, 255}, 
   { 3451.99, -3221.55, -24.52, 1, 0x9a43, 0x272a, 63, 76, 59, 255}, 
   { 2026.60, -3735.34, 29.46, 1, 0x5377, 0x3a66, 138, 193, 142, 255}, 
   { 3629.40, -3448.77, -161.04, 1, 0xa137, 0x2f6c, 58, 69, 54, 255}, 
   { 1696.47, -2184.89, 243.19, 1, 0x14fa, 0x0061, 59, 70, 55, 255}, 
   { 1699.79, -2444.17, 177.16, 1, 0x14bd, 0x028a, 138, 193, 142, 255}, 
   { 2500.28, -2259.26, 162.84, 1, 0x1d4d, 0x0328, 51, 57, 46, 255}, 
};

Gfx shoreline_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Beach-Sand1'-------------------------------------------------

//Last:    Current: Sand_Texture_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_1_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( shoreline_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 6, 0, 7, 6  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x278e0985),  /*New Coords: 316.46, 76.18*/
     gsSP2Triangles(  8, 5, 9, 8, 10, 11, 12, 10  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xe8890bcb),  /*New Coords: -187.72, 94.35*/
     gsSP2Triangles(  16, 18, 19, 16, 20, 21, 22, 20  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x265505c1),  /*New Coords: 306.68, 46.05*/
     gsSP2Triangles(  23, 24, 25, 23, 28, 9, 29, 28  ),
   gsSPVertex( shoreline_VertList_0+29,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( shoreline_VertList_0+11,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xf09a0737),  /*New Coords: -123.16, 57.73*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf84d0709),  /*New Coords: -61.56, 56.29*/
     gsSP1Triangle(  1, 0, 22, 1  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xe8e70765),  /*New Coords: -184.77, 59.16*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x03f308ed),  /*New Coords: 31.62, 71.43*/
     gsSP2Triangles(  7, 23, 24, 7, 11, 25, 26, 11  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x0cc80816),  /*New Coords: 102.27, 64.70*/
     gsSP1Triangle(  27, 14, 28, 27  ),
   gsSPVertex( shoreline_VertList_0+34,30,0  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xf0f30312),  /*New Coords: -120.38, 24.56*/
     gsSP1Triangle(  21, 20, 0, 21  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0xf1600c96),  /*New Coords: -116.98, 100.71*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xf09a0777),  /*New Coords: -123.16, 59.73*/
     gsSP1Triangle(  23, 21, 25, 23  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0xe8e70765),  /*New Coords: -184.77, 59.16*/
     gsSP1Triangle(  26, 25, 1, 26  ),
   gsSPVertex( shoreline_VertList_0+33,30,0  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xf0f30312),  /*New Coords: -120.38, 24.56*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xe8e70765),  /*New Coords: -184.77, 59.16*/
     gsSP2Triangles(  21, 22, 0, 21, 26, 22, 1, 26  ),
     gsSP1Triangle(  28, 4, 0, 28  ),
   gsSPVertex( shoreline_VertList_0+61,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfa380d62),  /*New Coords: -46.25, 107.07*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xfedc0e92),  /*New Coords: -9.10, 116.58*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfe20083b),  /*New Coords: -14.97, 65.86*/
     gsSP1Triangle(  3, 2, 0, 3  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x08c50304),  /*New Coords: 70.18, 24.13*/
     gsSP1Triangle(  7, 8, 5, 7  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x03810fc3),  /*New Coords: 28.04, 126.10*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x07cb0ec6),  /*New Coords: 62.36, 118.21*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x085e08c2),  /*New Coords: 66.95, 70.06*/
     gsSP1Triangle(  11, 10, 8, 11  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfe2007fb),  /*New Coords: -14.97, 63.86*/
     gsSP1Triangle(  0, 7, 12, 0  ),
   gsSPVertex( shoreline_VertList_0+52,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0af00300),  /*New Coords: 87.50, 24.01*/
     gsSP1Triangle(  17, 23, 0, 17  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x07cb0ec6),  /*New Coords: 62.36, 118.21*/   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x09f00e48),  /*New Coords: 79.51, 114.26*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x0a93088c),  /*New Coords: 84.61, 68.38*/
     gsSP1Triangle(  19, 25, 23, 19  ),
   gsSPVertex( shoreline_VertList_0+80,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x112c08bd),  /*New Coords: 137.39, 69.93*/
     gsSP2Triangles(  3, 4, 5, 3, 4, 0, 6, 4  ),
   gsSPVertex( shoreline_VertList_0+0,30,0  ),
   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0x25590630),  /*New Coords: 298.79, 49.53*/
     gsSP1Triangle(  0, 8, 28, 0  ),
   gsSPVertex( shoreline_VertList_0+28,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x1ed402a3),  /*New Coords: 246.66, 21.10*/
     gsSP1Triangle(  3, 0, 16, 3  ),
   gsSPVertex( shoreline_VertList_0+80,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x14dd0e99),  /*New Coords: 166.94, 116.80*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x112c08bd),  /*New Coords: 137.39, 69.93*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x15a513f6),  /*New Coords: 173.17, 159.70*/
     gsSP2Triangles(  4, 10, 0, 4, 3, 8, 4, 3  ),
     gsSP1Triangle(  14, 15, 16, 14  ),
   gsSPVertex( shoreline_VertList_0+55,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xf1600c96),  /*New Coords: -116.98, 100.71*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xfa380d62),  /*New Coords: -46.25, 107.07*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf09a0777),  /*New Coords: -123.16, 59.73*/
     gsSP1Triangle(  2, 9, 0, 2  ),
   gsSPVertex( shoreline_VertList_0+84,30,0  ),
     gsSP1Triangle(  19, 20, 21, 19  ),
   gsSPVertex( shoreline_VertList_0+61,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfe20083b),  /*New Coords: -14.97, 65.86*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xfedc0e92),  /*New Coords: -9.10, 116.58*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x03f3092d),  /*New Coords: 31.62, 73.43*/
     gsSP1Triangle(  0, 2, 7, 0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x0a93088c),  /*New Coords: 84.61, 68.38*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x09f00e48),  /*New Coords: 79.51, 114.26*/
     gsSP1Triangle(  14, 16, 25, 14  ),
   gsSPVertex( shoreline_VertList_0+90,30,0  ),
     gsSP1Triangle(  22, 23, 24, 22  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( shoreline_VertList_0+118,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( shoreline_VertList_0+99,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf1600c96),  /*New Coords: -116.98, 100.71*/
     gsSP1Triangle(  5, 0, 26, 5  ),
   gsSPVertex( shoreline_VertList_0+128,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xf84d0749),  /*New Coords: -61.56, 58.29*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfa380d62),  /*New Coords: -46.25, 107.07*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xfe20083b),  /*New Coords: -14.97, 65.86*/
     gsSP1Triangle(  1, 6, 2, 1  ),
   gsSPVertex( shoreline_VertList_0+65,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0470030b),  /*New Coords: 35.53, 24.37*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x08c50304),  /*New Coords: 70.18, 24.13*/
     gsSP1Triangle(  0, 3, 1, 0  ),
   gsSPVertex( shoreline_VertList_0+123,30,0  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x08c50304),  /*New Coords: 70.18, 24.13*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x085e0882),  /*New Coords: 66.95, 68.06*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0af00300),  /*New Coords: 87.50, 24.01*/
     gsSP2Triangles(  15, 16, 17, 15, 19, 17, 0, 19  ),
   gsSPVertex( shoreline_VertList_0+119,30,0  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x07cb0ec6),  /*New Coords: 62.36, 118.21*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x0a93088c),  /*New Coords: 84.61, 68.38*/
     gsSP1Triangle(  21, 27, 0, 21  ),
   gsSPVertex( shoreline_VertList_0+147,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( shoreline_VertList_0+83,30,0  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x0ce11329),  /*New Coords: 103.06, 153.31*/
     gsSP1Triangle(  27, 0, 2, 27  ),
   gsSPVertex( shoreline_VertList_0+141,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),


//>-- MATERIAL 1: START ------------------------------------ 'Beach-Stone-Transition-1'-------------------------------------------------

//Last: Sand_Texture_3_Stones   Current: Sand_Texture_3_Stones
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_3_Stones,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_3_Stones_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( shoreline_VertList_0+29,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xe01703d4),  /*New Coords: -255.25, 30.64*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xe83c026a),  /*New Coords: -190.12, 19.32*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1f4203cf),  /*New Coords: 250.09, 30.48*/
     gsSP2Triangles(  6, 5, 14, 6, 15, 0, 16, 15  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x14bd028a),  /*New Coords: 165.92, 20.34*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xf87003a1),  /*New Coords: -60.50, 29.06*/
     gsSP2Triangles(  3, 17, 18, 3, 4, 19, 20, 4  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x046102b8),  /*New Coords: 35.05, 21.76*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0ba903ad),  /*New Coords: 93.31, 29.42*/
     gsSP2Triangles(  7, 21, 22, 7, 23, 10, 24, 23  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xfe68032d),  /*New Coords: -12.72, 25.41*/
     gsSP2Triangles(  25, 20, 14, 25, 8, 22, 19, 8  ),
   gsSPVertex( shoreline_VertList_0+58,30,0  ),
     gsSP1Triangle(  7, 8, 9, 7  ),
   gsSPVertex( shoreline_VertList_0+52,30,0  ),
     gsSP1Triangle(  14, 0, 22, 14  ),
     gsSP1Triangle(  26, 27, 1, 26  ),
   gsSPVertex( shoreline_VertList_0+32,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x14bd028a),  /*New Coords: 165.92, 20.34*/
     gsSP1Triangle(  0, 12, 13, 0  ),
   gsSPVertex( shoreline_VertList_0+115,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1033031c),  /*New Coords: 129.62, 24.88*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x14bd028a),  /*New Coords: 165.92, 20.34*/
     gsSP1Triangle(  0, 2, 6, 0  ),
   gsSPVertex( shoreline_VertList_0+33,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf87003a1),  /*New Coords: -60.50, 29.06*/
     gsSP1Triangle(  21, 0, 16, 21  ),
   gsSPVertex( shoreline_VertList_0+51,30,0  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xfe68032d),  /*New Coords: -12.72, 25.41*/
     gsSP1Triangle(  22, 14, 0, 22  ),
   gsSPVertex( shoreline_VertList_0+109,30,0  ),
     gsSP1Triangle(  13, 14, 15, 13  ),
   gsSPVertex( shoreline_VertList_0+34,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xe83c026a),  /*New Coords: -190.12, 19.32*/
     gsSP1Triangle(  0, 20, 9, 0  ),
   gsSPVertex( shoreline_VertList_0+121,30,0  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPVertex( shoreline_VertList_0+50,30,0  ),
     gsSP1Triangle(  0, 15, 17, 0  ),
   gsSPVertex( shoreline_VertList_0+137,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( shoreline_VertList_0+115,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x0ba903ad),  /*New Coords: 93.31, 29.42*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1033031c),  /*New Coords: 129.62, 24.88*/
     gsSP1Triangle(  5, 0, 9, 5  ),
   gsSPVertex( shoreline_VertList_0+144,30,0  ),
     gsSP1Triangle(  18, 19, 20, 18  ),


//>-- MATERIAL 5: START ------------------------------------ 'Beach-Sand-Wet'-------------------------------------------------

//Last: Sand_Texture_2_Wet   Current: Sand_Texture_2_Wet
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_2_Wet,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_2_Wet_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( shoreline_VertList_0+0,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xe8e03588),  /*New Coords: -92.49, 214.14*/
     gsSP2Triangles(  3, 4, 5, 3, 13, 10, 14, 13  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x0e053f0c),  /*New Coords: 56.08, 252.20*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xfb723a4a),  /*New Coords: -18.20, 233.17*/
     gsSP2Triangles(  15, 16, 17, 15, 26, 21, 20, 26  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x30553727),  /*New Coords: 193.34, 220.62*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x27c13921),  /*New Coords: 159.02, 228.52*/
     gsSP1Triangle(  27, 24, 23, 27  ),
   gsSPVertex( shoreline_VertList_0+29,30,0  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( shoreline_VertList_0+58,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
     gsSP2Triangles(  12, 13, 14, 12, 18, 19, 13, 18  ),
   gsSPVertex( shoreline_VertList_0+87,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 1, 0, 3  ),
     gsSP2Triangles(  4, 5, 6, 4, 10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 15, 13, 19, 20, 21, 19  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xa2242f2c),  /*New Coords: -375.43, 188.69*/
     gsSP2Triangles(  22, 23, 24, 22, 14, 10, 17, 14  ),
   gsSPVertex( shoreline_VertList_0+116,30,0  ),
     gsSP2Triangles(  16, 17, 18, 16, 19, 20, 21, 19  ),
   gsSPVertex( shoreline_VertList_0+144,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 15, 16, 17, 15  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj01: END ------------------------------------------- shoreline -------------------------------------------------












//>-- Obj00: START ------------------------------------------ cliff_edge -------------------------------------------------

Vtx cliff_edge_VertList_0 [] = {
   { 1702.86, -1845.61, 492.10, 1, 0x8dc4, 0x124d, 95, 133, 98, 255}, 
   { 2619.78, -2126.01, 167.94, 1, 0xb6ed, 0x1610, 39, 52, 41, 255}, 
   { 2464.99, -857.62, 446.66, 1, 0xc0d2, 0x0c48, 39, 52, 41, 255}, 
   { 1699.03, -1184.99, 550.28, 1, 0x96b1, 0x0d59, 54, 73, 58, 255}, 
   { 832.22, -1713.28, 705.44, 1, 0x64d7, 0x0fbb, 136, 191, 141, 255}, 
   { -906.05, -1065.33, 739.55, 1, 0x186b, 0x07ba, 57, 76, 59, 255}, 
   { -898.07, 191.14, 798.48, 1, 0x2a24, 0xfe55, 90, 109, 76, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0xd870, 0xfe83, 41, 54, 40, 255}, 
   { -2714.26, -627.17, 565.31, 1, 0xc5aa, 0x012b, 41, 54, 40, 255}, 
   { -2504.99, -713.34, 557.16, 1, 0xcec1, 0x0232, 61, 79, 61, 255}, 
   { 830.81, -1865.45, 648.90, 1, 0x5238, 0x03a0, 143, 201, 148, 255}, 
   { 1701.99, -1987.79, 448.51, 1, 0x8953, 0x0360, 136, 192, 141, 255}, 
   { -38.31, -1563.37, 772.79, 1, 0x3c28, 0x0d08, 80, 111, 90, 255}, 
   { -37.97, -1089.97, 772.68, 1, 0x42b4, 0x097d, 90, 109, 76, 255}, 
   { -908.95, -1521.62, 718.15, 1, 0x11fb, 0x0b24, 100, 141, 104, 255}, 
   { -40.37, -1762.65, 712.13, 1, 0x230c, 0x039d, 100, 141, 104, 255}, 
   { 387.47, -2149.79, 352.24, 1, 0x2fdc, 0x03a1, 73, 101, 76, 255}, 
   { 823.80, -2232.41, 336.32, 1, 0x3c2b, 0x03a5, 95, 133, 98, 255}, 
   { 1696.47, -2184.89, 243.19, 1, 0x5201, 0x03ad, 95, 133, 98, 255}, 
   { -2707.14, -2556.01, 404.09, 1, 0x9a65, 0x0073, 137, 132, 104, 255}, 
   { -2264.79, -2381.65, 467.64, 1, 0xb001, 0x01c7, 177, 157, 110, 255}, 
   { -2272.69, -2306.10, 479.97, 1, 0xb00e, 0x00c7, 152, 139, 103, 255}, 
   { -48.86, -2067.16, 368.16, 1, 0x1dd9, 0x039d, 51, 69, 55, 255}, 
   { -911.55, -1848.27, 662.02, 1, 0xf9e3, 0x0000, 136, 191, 141, 255}, 
   { 2689.19, -2276.74, 143.95, 1, 0x1d27, 0x00d8, 39, 52, 41, 255}, 
   { -2252.96, -2716.16, 348.54, 1, 0xcc94, 0x03a7, 227, 210, 145, 255}, 
   { -3502.15, -2976.63, 322.21, 1, 0xddd2, 0x0019, 63, 82, 62, 255}, 
   { -3545.78, -3370.12, 283.56, 1, 0xd0ea, 0x0442, 63, 82, 62, 255}, 
   { -2799.59, -2874.62, 335.87, 1, 0xdb7b, 0x0372, 137, 132, 104, 255}, 
   { -35.03, -843.00, 772.79, 1, 0x4641, 0x07a4, 90, 109, 76, 255}, 
   { 833.35, -1152.99, 707.33, 1, 0x6c9f, 0x0b8a, 51, 69, 59, 255}, 
   { 833.92, -872.72, 708.27, 1, 0x7084, 0x0971, 47, 63, 49, 255}, 
   { -3674.39, -2146.44, 442.70, 1, 0x8190, 0x0acf, 39, 52, 41, 255}, 
   { 835.95, 129.61, 711.64, 1, 0x7e71, 0x01f0, 38, 50, 40, 255}, 
   { 402.45, 80.04, 742.22, 1, 0x6879, 0x0186, 64, 79, 58, 255}, 
   { 1702.03, -1185.27, 549.70, 1, 0x96d6, 0x0d5b, 54, 73, 58, 255}, 
   { 2464.99, -857.62, 446.66, 1, 0xc0d2, 0x0c48, 39, 52, 41, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0xa7ca, 0x041b, 38, 50, 40, 255}, 
   { -1519.70, -2087.97, 574.66, 1, 0xd2e0, 0x02d4, 176, 153, 111, 255}, 
   { -1093.05, -2379.91, 375.41, 1, 0xf4d2, 0x0394, 142, 135, 100, 255}, 
   { 395.22, -1814.05, 680.52, 1, 0x3aa2, 0x039f, 95, 133, 102, 255}, 
   { 830.81, -1865.45, 648.90, 1, 0x5238, 0x03a0, 143, 201, 148, 255}, 
   { 832.22, -1713.28, 705.44, 1, 0x5219, 0x0018, 136, 191, 141, 255}, 
   { 181.23, -1103.68, 756.43, 1, 0x4d48, 0x09fc, 51, 69, 59, 255}, 
   { -36.14, -1087.24, 772.79, 1, 0x42d5, 0x0978, 90, 109, 76, 255}, 
   { -38.31, -1563.37, 772.79, 1, 0x3c28, 0x0d08, 80, 111, 90, 255}, 
   { 398.60, -1120.11, 740.06, 1, 0x57ba, 0x0a81, 51, 69, 59, 255}, 
   { 396.95, -1638.32, 739.12, 1, 0x5080, 0x0e62, 108, 151, 115, 255}, 
   { 177.43, -1788.35, 696.33, 1, 0x2ed7, 0x039e, 50, 67, 57, 255}, 
   { 399.44, -857.86, 740.53, 1, 0x5b63, 0x088a, 68, 85, 62, 255}, 
   { 185.69, 55.25, 757.51, 1, 0x5d7c, 0x0151, 77, 94, 67, 255}, 
   { 169.31, -2108.47, 360.20, 1, 0x259c, 0x039f, 50, 67, 57, 255}, 
   { 387.47, -2149.79, 352.24, 1, 0x2fdc, 0x03a1, 73, 101, 76, 255}, 
   { -48.86, -2067.16, 368.16, 1, 0x1dd9, 0x039d, 51, 69, 55, 255}, 
   { 169.31, -2108.47, 360.20, 1, 0x259c, 0x039f, 50, 67, 57, 255}, 
   { 177.43, -1788.35, 696.33, 1, 0x25fe, 0xfff8, 50, 67, 57, 255}, 
   { 182.21, -850.43, 756.66, 1, 0x50d2, 0x0817, 79, 97, 70, 255}, 
   { -31.06, 30.46, 772.79, 1, 0x5280, 0x011c, 90, 109, 76, 255}, 
   { -40.37, -1762.65, 712.13, 1, 0x230c, 0x039d, 100, 141, 104, 255}, 
   { 179.32, -1600.84, 755.96, 1, 0x2f2f, 0x0018, 50, 67, 57, 255}, 
   { -37.97, -1089.97, 772.68, 1, 0x42b4, 0x097d, 90, 109, 76, 255}, 
   { -36.14, -1087.24, 772.79, 1, 0x42d5, 0x0978, 90, 109, 76, 255}, 
   { -35.03, -843.00, 772.79, 1, 0x4641, 0x07a4, 90, 109, 76, 255}, 
   { 1701.69, -1185.09, 549.80, 1, 0x96d2, 0x0d5a, 54, 73, 58, 255}, 
   { 1699.03, -1184.99, 550.28, 1, 0x96b1, 0x0d59, 54, 73, 58, 255}, 
   { 1702.03, -1185.27, 549.70, 1, 0x96d6, 0x0d5b, 54, 73, 58, 255}, 
   { 1702.86, -1845.61, 492.10, 1, 0x8dc4, 0x124d, 95, 133, 98, 255}, 
   { 2464.99, -857.62, 446.66, 1, 0xc0d2, 0x0c48, 39, 52, 41, 255}, 
   { 833.35, -1152.99, 707.33, 1, 0x6c9f, 0x0b8a, 51, 69, 59, 255}, 
   { -906.05, -1065.33, 739.55, 1, 0x186b, 0x07ba, 57, 76, 59, 255}, 
   { -908.95, -1521.62, 718.15, 1, 0x11fb, 0x0b24, 100, 141, 104, 255}, 
   { -37.97, -1089.97, 772.68, 1, 0x42b4, 0x097d, 90, 109, 76, 255}, 
   { -911.55, -1848.27, 662.02, 1, 0xef57, 0x03a5, 136, 191, 141, 255}, 
   { 830.81, -1865.45, 648.90, 1, 0x3c62, 0x0007, 143, 201, 148, 255}, 
   { 823.80, -2232.41, 336.32, 1, 0x3c2b, 0x03a5, 95, 133, 98, 255}, 
   { 1701.99, -1987.79, 448.51, 1, 0x5229, 0x001a, 136, 192, 141, 255}, 
   { -1093.05, -2379.91, 375.41, 1, 0xf4d2, 0x0394, 142, 135, 100, 255}, 
   { -898.07, 191.14, 798.48, 1, 0x2a24, 0xfe55, 90, 109, 76, 255}, 
   { -2272.69, -2306.10, 479.97, 1, 0xc431, 0x0e8b, 152, 139, 103, 255}, 
   { -908.95, -1521.62, 718.15, 1, 0x11fb, 0x0b24, 100, 141, 104, 255}, 
   { -2504.99, -713.34, 557.16, 1, 0xcec1, 0x0232, 61, 79, 61, 255}, 
   { -2264.79, -2381.65, 467.64, 1, 0xb001, 0x01c7, 177, 157, 110, 255}, 
   { -1519.70, -2087.97, 574.66, 1, 0xd2e0, 0x02d4, 176, 153, 111, 255}, 
   { -2272.69, -2306.10, 479.97, 1, 0xb00e, 0x00c7, 152, 139, 103, 255}, 
   { 833.92, -872.72, 708.27, 1, 0x7084, 0x0971, 47, 63, 49, 255}, 
   { 1699.03, -1184.99, 550.28, 1, 0x96b1, 0x0d59, 54, 73, 58, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0xa7ca, 0x041b, 45, 60, 51, 255}, 
   { 835.95, 129.61, 711.64, 1, 0x7e71, 0x01f0, 38, 50, 40, 255}, 
};

Gfx cliff_edge_Static_PolyList_0[] = { 



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

   gsSPVertex( cliff_edge_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x893c0018),  /*New Coords: 274.47, 0.76*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x238c0018),  /*New Coords: 71.10, 0.76*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xf1320018),  /*New Coords: -29.61, 0.76*/
     gsSP2Triangles(  10, 11, 0, 10, 15, 12, 14, 15  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xc31d0020),  /*New Coords: 390.23, 1.00*/
     gsSP2Triangles(  11, 1, 0, 11, 19, 20, 21, 19  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x13fe0073),  /*New Coords: 39.99, 3.61*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0xc6c302f0),  /*New Coords: 397.53, 23.51*/
     gsSP2Triangles(  26, 27, 19, 26, 24, 1, 11, 24  ),
   gsSPVertex( cliff_edge_VertList_0+14,30,0  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xef5703a5),  /*New Coords: -33.32, 29.17*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xf1320018),  /*New Coords: -29.61, 0.76*/
     gsSP2Triangles(  24, 9, 0, 24, 24, 0, 7, 24  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( cliff_edge_VertList_0+40,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x3ad20018),  /*New Coords: 117.65, 0.76*/
     gsSP1Triangle(  8, 0, 7, 8  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x2ed7039e),  /*New Coords: 93.68, 28.95*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x893c0018),  /*New Coords: 274.47, 0.76*/
     gsSP2Triangles(  18, 15, 19, 18, 2, 1, 26, 2  ),
   gsSPVertex( cliff_edge_VertList_0+58,30,0  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xf1320018),  /*New Coords: -29.61, 0.76*/
     gsSP2Triangles(  14, 0, 12, 14, 23, 24, 25, 23  ),
   gsSPVertex( cliff_edge_VertList_0+40,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x3ad20018),  /*New Coords: 117.65, 0.76*/
     gsSP1Triangle(  7, 0, 2, 7  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x2ed7039e),  /*New Coords: 93.68, 28.95*/
     gsSP1Triangle(  19, 15, 7, 19  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x238c0018),  /*New Coords: 71.10, 0.76*/     gsSP1Triangle(  5, 18, 19, 5  ),


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
   gsDPLoadTextureBlock_4b(   Sand_Texture_4_Hill,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_CLAMP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_4_Hill_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( cliff_edge_VertList_0+0,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x238c0018),  /*New Coords: 71.10, 0.76*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x3c620007),  /*New Coords: 120.77, 0.22*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x5229001a),  /*New Coords: 164.32, 0.83*/
     gsSP2Triangles(  16, 17, 10, 16, 17, 18, 11, 17  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x1e400015),  /*New Coords: 60.50, 0.67*/
     gsSP2Triangles(  22, 15, 23, 22, 18, 24, 11, 18  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xcc38ffe8),  /*New Coords: -103.56, -0.73*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xdc700041),  /*New Coords: -71.12, 2.05*/
     gsSP1Triangle(  25, 20, 19, 25  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x1c4500b3),  /*New Coords: 56.55, 5.60*/
     gsSP1Triangle(  27, 28, 19, 27  ),
   gsSPVertex( cliff_edge_VertList_0+25,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xdd440000),  /*New Coords: -69.46, -0.02*/
     gsSP1Triangle(  0, 14, 13, 0  ),
   gsSPVertex( cliff_edge_VertList_0+20,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcc38ffe8),  /*New Coords: -103.56, -0.73*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xdd440000),  /*New Coords: -69.46, -0.02*/
     gsSP1Triangle(  0, 5, 18, 0  ),
     gsSP1Triangle(  19, 3, 18, 19  ),
   gsSPVertex( cliff_edge_VertList_0+40,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3039fffd),  /*New Coords: 96.45, -0.08*/
     gsSP1Triangle(  11, 12, 0, 11  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3c620007),  /*New Coords: 120.77, 0.22*/
     gsSP2Triangles(  13, 14, 15, 13, 0, 12, 1, 0  ),
   gsSPVertex( cliff_edge_VertList_0+69,30,0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( cliff_edge_VertList_0+53,30,0  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xf9e30000),  /*New Coords: -12.22, -0.00*/
     gsSP1Triangle(  23, 0, 19, 23  ),
   gsSPVertex( cliff_edge_VertList_0+19,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xdc700041),  /*New Coords: -71.12, 2.05*/
     gsSP1Triangle(  9, 6, 0, 9  ),
   gsSPVertex( cliff_edge_VertList_0+40,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3039fffd),  /*New Coords: 96.45, -0.08*/
     gsSP1Triangle(  15, 14, 0, 15  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x1e400015),  /*New Coords: 60.50, 0.67*/     gsSP1Triangle(  18, 13, 15, 18  ),


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

   gsSPVertex( cliff_edge_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 0, 3, 4, 0  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 9, 7, 8  ),
     gsSP2Triangles(  12, 13, 14, 12, 6, 5, 29, 6  ),
   gsSPVertex( cliff_edge_VertList_0+3,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xab690fa1),  /*New Coords: -169.18, 125.04*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xc4310e8b),  /*New Coords: -119.61, 116.36*/
     gsSP2Triangles(  27, 0, 28, 27, 16, 18, 6, 16  ),
     gsSP1Triangle(  6, 5, 29, 6  ),
   gsSPVertex( cliff_edge_VertList_0+31,30,0  ),
     gsSP1Triangle(  0, 2, 3, 0  ),
     gsSP1Triangle(  4, 5, 6, 4  ),
   gsSPVertex( cliff_edge_VertList_0+5,30,0  ),
     gsSP1Triangle(  9, 0, 4, 9  ),
   gsSPVertex( cliff_edge_VertList_0+34,30,0  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPVertex( cliff_edge_VertList_0+30,30,0  ),
     gsSP1Triangle(  0, 16, 17, 0  ),
     gsSP2Triangles(  19, 4, 20, 19, 26, 20, 27, 26  ),
   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x46540db5),  /*New Coords: 140.66, 109.66*/
     gsSP2Triangles(  17, 16, 29, 17, 16, 13, 29, 16  ),
     gsSP2Triangles(  14, 13, 26, 14, 13, 16, 19, 13  ),
     gsSP1Triangle(  16, 0, 1, 16  ),
   gsSPVertex( cliff_edge_VertList_0+59,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( cliff_edge_VertList_0+37,30,0  ),
     gsSP1Triangle(  26, 0, 27, 26  ),
   gsSPVertex( cliff_edge_VertList_0+65,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( cliff_edge_VertList_0+42,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x64d70fbb),  /*New Coords: 201.68, 125.87*/
     gsSP2Triangles(  26, 0, 22, 26, 24, 23, 22, 24  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPVertex( cliff_edge_VertList_0+5,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( cliff_edge_VertList_0+63,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
   gsSPVertex( cliff_edge_VertList_0+45,30,0  ),
     gsSP1Triangle(  0, 16, 26, 0  ),
   gsSPVertex( cliff_edge_VertList_0+57,30,0  ),
     gsSP1Triangle(  0, 20, 5, 0  ),
   gsSPVertex( cliff_edge_VertList_0+19,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x7e911156),  /*New Coords: -258.86, 138.71*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xab690fa1),  /*New Coords: -169.18, 125.04*/
     gsSP1Triangle(  13, 7, 0, 13  ),
   gsSPVertex( cliff_edge_VertList_0+9,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xab690fa1),  /*New Coords: -169.18, 125.04*/
     gsSP1Triangle(  10, 0, 23, 10  ),
   gsSPVertex( cliff_edge_VertList_0+31,30,0  ),
     gsSP1Triangle(  18, 0, 3, 18  ),
   gsSPVertex( cliff_edge_VertList_0+60,30,0  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( cliff_edge_VertList_0+43,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x46540db5),  /*New Coords: 140.66, 109.66*/
     gsSP1Triangle(  16, 0, 2, 16  ),
   gsSPVertex( cliff_edge_VertList_0+42,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x64d70fbb),  /*New Coords: 201.68, 125.87*/
     gsSP2Triangles(  0, 26, 5, 0, 14, 7, 8, 14  ),
     gsSP2Triangles(  20, 14, 15, 20, 20, 19, 14, 20  ),
     gsSP1Triangle(  14, 1, 7, 14  ),
   gsSPVertex( cliff_edge_VertList_0+31,30,0  ),
     gsSP1Triangle(  18, 15, 0, 18  ),
   gsSPVertex( cliff_edge_VertList_0+60,30,0  ),
     gsSP2Triangles(  9, 11, 2, 9, 24, 25, 26, 24  ),
     gsSP2Triangles(  3, 5, 26, 3, 26, 27, 24, 26  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- cliff_edge -------------------------------------------------

 
 
 //>-- Obj00: START ------------------------------------------ fire_pit_flames -------------------------------------------------

Vtx fire_pit_flames_VertList_0 [] = {
   { -0.78, -17.25, 57.95, 1, 0x0204, 0x017b, 229, 195, 175, 255}, 
   { 41.97, -0.02, 47.94, 1, 0x03c9, 0x01ad, 207, 109, 107, 255}, 
   { 33.03, 14.67, 97.51, 1, 0x03a5, 0x0000, 207, 109, 107, 255}, 
   { 0.28, -3.29, -8.89, 1, 0x01c8, 0x041e, 252, 197, 237, 255}, 
   { 34.38, 10.56, -22.15, 1, 0x032b, 0x041e, 207, 137, 168, 255}, 
   { -48.55, 11.53, 42.03, 1, 0xffe1, 0x0143, 207, 109, 107, 255}, 
   { -1.80, -8.64, 106.02, 1, 0x0202, 0x0009, 207, 109, 107, 255}, 
   { -40.38, 13.03, 72.25, 1, 0x0041, 0x0000, 207, 109, 107, 255}, 
   { 23.91, 35.61, -3.49, 1, 0x0015, 0x042d, 207, 137, 168, 255}, 
   { -1.04, 29.83, 77.89, 1, 0xffe7, 0x005b, 207, 109, 107, 255}, 
   { -23.84, 12.93, 87.50, 1, 0x03e4, 0x0003, 229, 195, 175, 255}, 
   { -29.03, 17.15, 1.35, 1, 0x03cb, 0x03ff, 252, 197, 237, 255}, 
   { -39.52, 22.88, -23.52, 1, 0x0002, 0x041e, 207, 137, 168, 255}, 
};

u8 textureAnimCounter = 0;
void fire_pit_flames_PolyList( u8 animFrame ){ 

   Vtx *fire_pit_flames_VTXPointer = &fire_pit_flames_VertList_0[0]; 
   
   
  // if(animFrame == )
   
   u8 *textureFrame = &Flame_Effects_2[0];

   if(textureAnimCounter < 2)
        textureFrame = &Flame_Effects_1[0];
   else if(textureAnimCounter < 4)
        textureFrame = &Flame_Effects_2[0];        
   else if(textureAnimCounter < 6)
        textureFrame = &Flame_Effects_3[0];
   else if(textureAnimCounter < 8)
        textureFrame = &Flame_Effects_4[0];        
   else if(textureAnimCounter < 10)
        textureFrame = &Flame_Effects_5[0];        
   else if(textureAnimCounter < 12)
        textureFrame = &Flame_Effects_6[0];
   else if(textureAnimCounter < 14)
        textureFrame = &Flame_Effects_7[0];        
   else if(textureAnimCounter < 16)
        textureFrame = &Flame_Effects_8[0];        
   else{   
        textureFrame = &Flame_Effects_1[0];
        textureAnimCounter = 0;
    }
    
    textureAnimCounter ++;
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

   gSPVertex(glistp++,  fire_pit_flames_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 1, 3  );
     gSP2Triangles(glistp++,   3, 0, 5, 3, 0, 6, 7, 0  );
     gSP2Triangles(glistp++,   8, 9, 10, 8, 11, 8, 10, 11  );
     gSP2Triangles(glistp++,   6, 0, 2, 6, 0, 3, 1, 0  );
     gSP2Triangles(glistp++,   12, 3, 5, 12, 5, 0, 7, 5  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- fire_pit_flames -------------------------------------------------









//>-- Obj00: START ------------------------------------------ sea_wall -------------------------------------------------

Vtx sea_wall_VertList_0 [] = {
   { 778.46, -48.27, 189.09, 1, 0x5295, 0xfff1, 160, 224, 166, 255}, 
   { 866.80, -48.27, 128.51, 1, 0x529b, 0x00cd, 160, 224, 166, 255}, 
   { 866.35, 48.27, 130.02, 1, 0x6b15, 0x00c5, 51, 69, 59, 255}, 
   { -1312.24, 366.10, -45.84, 1, 0x846d, 0x00b9, 51, 69, 59, 255}, 
   { -593.63, 133.11, 99.54, 1, 0xdfc4, 0xfff7, 51, 69, 59, 255}, 
   { -593.63, 133.11, -170.01, 1, 0xe21a, 0x05c5, 28, 38, 33, 255}, 
   { -1351.26, 277.80, -45.84, 1, 0x8154, 0x027c, 139, 195, 144, 255}, 
   { -1448.03, 393.62, -258.24, 1, 0x6058, 0x0455, 51, 69, 59, 255}, 
   { -1487.04, 305.32, -258.24, 1, 0x6ced, 0x04d0, 89, 124, 94, 255}, 
   { -1290.43, 245.24, -238.08, 1, 0x8645, 0x04cc, 100, 140, 105, 255}, 
   { 837.95, -48.27, -14.26, 1, 0x8701, 0x045c, 39, 54, 44, 255}, 
   { -626.73, 42.43, 99.54, 1, 0xdd64, 0x010a, 160, 224, 166, 255}, 
   { 211.56, -48.27, 198.16, 1, 0x3dbc, 0x00e9, 160, 224, 166, 255}, 
   { 209.31, -48.27, -47.76, 1, 0x3e17, 0x040a, 139, 195, 144, 255}, 
   { -626.73, 42.43, -170.01, 1, 0xdbd3, 0x04be, 139, 195, 144, 255}, 
   { 211.56, 48.27, 198.16, 1, 0x3ddc, 0x0004, 51, 69, 59, 255}, 
   { 209.31, 48.27, -47.76, 1, 0x3e5e, 0x0543, 28, 38, 33, 255}, 
   { 913.90, -48.27, -10.21, 1, 0x5295, 0x0606, 28, 38, 33, 255}, 
   { 913.71, 48.27, -9.55, 1, 0x6b0e, 0x0606, 51, 69, 59, 255}, 
   { 778.46, 48.27, 189.09, 1, 0x87a0, 0x01da, 51, 69, 59, 255}, 
   { -1671.76, 465.68, -85.15, 1, 0x1a43, 0x0426, 76, 105, 84, 255}, 
   { -1762.26, 391.75, -85.61, 1, 0x16b7, 0x05ec, 160, 224, 166, 255}, 
   { -2159.95, 592.24, -399.17, 1, 0xff5c, 0xfb6e, 28, 38, 33, 255}, 
   { -2013.85, 592.24, -18.03, 1, 0xff91, 0x0428, 51, 69, 59, 255}, 
   { 2177.60, 5.20, 152.29, 1, 0x12fd, 0x006e, 51, 69, 59, 255}, 
   { 2930.51, -99.36, 88.26, 1, 0x3e9a, 0x0065, 51, 69, 59, 255}, 
   { 2837.36, -90.03, -290.78, 1, 0x3c70, 0x04d5, 28, 38, 33, 255}, 
   { -2198.96, 503.94, -399.17, 1, 0x0139, 0x0ebd, 28, 38, 33, 255}, 
   { 2158.53, -89.39, 154.92, 1, 0x2d19, 0x029b, 160, 224, 166, 255}, 
   { 2051.53, -63.37, 44.26, 1, 0x3364, 0x027c, 51, 69, 59, 255}, 
   { 2824.41, -185.68, -289.61, 1, 0x41cf, 0x03e2, 89, 124, 94, 255}, 
   { 2917.56, -195.02, 89.44, 1, 0x42b1, 0x0054, 139, 195, 144, 255}, 
   { 2032.47, -157.97, 46.90, 1, 0x0705, 0x017a, 139, 195, 144, 255}, 
   { 3653.53, -95.75, -422.47, 1, 0x7c14, 0x03b2, 28, 38, 33, 255}, 
   { 3743.81, -104.58, -58.50, 1, 0xd348, 0xff2a, 28, 38, 33, 255}, 
   { 3724.05, -10.31, -52.05, 1, 0x7bcb, 0x0033, 51, 69, 59, 255}, 
   { 3633.77, -1.48, -416.02, 1, 0x7cdc, 0x0487, 28, 38, 33, 255}, 
   { 1795.71, -31.44, 149.01, 1, 0x4251, 0x0260, 80, 111, 88, 255}, 
   { 1748.52, -137.38, 163.42, 1, 0x4403, 0x03fb, 160, 224, 166, 255}, 
   { 1427.42, -85.11, 157.20, 1, 0x56dc, 0x03ab, 160, 224, 166, 255}, 
   { 1446.49, 9.49, 154.57, 1, 0x56a8, 0x024a, 51, 69, 59, 255}, 
   { 1231.86, 22.43, -24.07, 1, 0x628d, 0x0329, 51, 69, 59, 255}, 
   { 1212.79, -72.17, -21.44, 1, 0xcfec, 0x0393, 139, 195, 144, 255}, 
   { 1609.47, -113.69, 11.63, 1, 0xea96, 0x028f, 139, 195, 144, 255}, 
   { 1518.45, -93.70, -84.12, 1, 0xe585, 0x03a2, 129, 181, 134, 255}, 
   { 2005.61, -31.77, -152.61, 1, 0xf29d, 0x045e, 38, 52, 45, 255}, 
   { 2000.35, -127.64, -182.94, 1, 0x0793, 0x03ba, 114, 160, 119, 255}, 
   { -2052.86, 503.94, -18.03, 1, 0xff5c, 0x0621, 34, 46, 39, 255}, 
};

Gfx sea_wall_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Rock-Sea-Wall'-------------------------------------------------

//Last:    Current: rock_sea_wall
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   rock_sea_wall,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, rock_sea_wall_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( sea_wall_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x74bf0201),  /*New Coords: -278.51, 16.04*/
     gsSP1Triangle(  6, 3, 7, 6  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x815401f8),  /*New Coords: -253.34, 15.78*/
     gsSP1Triangle(  6, 8, 9, 6  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8a010114),  /*New Coords: 276.01, 8.63*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x8d9a0308),  /*New Coords: 283.21, 24.28*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x846d00b9),  /*New Coords: -247.15, 5.80*/
     gsSP2Triangles(  0, 10, 1, 0, 11, 4, 3, 11  ),
     gsSP2Triangles(  12, 13, 0, 12, 11, 14, 13, 11  ),
     gsSP2Triangles(  4, 11, 12, 4, 4, 15, 16, 4  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x529b00cd),  /*New Coords: 165.22, 6.42*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x892c0327),  /*New Coords: 274.35, 25.23*/
     gsSP2Triangles(  1, 17, 18, 1, 12, 0, 19, 12  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x95e70447),  /*New Coords: 299.81, 34.24*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x8c0c0280),  /*New Coords: 280.10, 20.01*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x30a605ca),  /*New Coords: 97.30, 46.32*/
     gsSP2Triangles(  18, 16, 2, 18, 20, 21, 8, 20  ),
     gsSP2Triangles(  22, 23, 20, 22, 24, 25, 26, 24  ),
     gsSP2Triangles(  27, 8, 21, 27, 16, 15, 19, 16  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x2ce40139),  /*New Coords: 89.79, 9.80*/
     gsSP2Triangles(  21, 20, 23, 21, 28, 24, 29, 28  ),
   gsSPVertex( sea_wall_VertList_0+29,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( sea_wall_VertList_0+24,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x01300259),  /*New Coords: 2.38, 18.80*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x015600f7),  /*New Coords: 2.68, 7.74*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2ce40139),  /*New Coords: 89.79, 9.80*/
     gsSP1Triangle(  7, 1, 0, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x42b10054),  /*New Coords: 133.39, 2.65*/
     gsSP1Triangle(  7, 6, 9, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x01300259),  /*New Coords: 2.38, 18.80*/
     gsSP1Triangle(  1, 7, 10, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x3e9a0065),  /*New Coords: 125.21, 3.18*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x339903dd),  /*New Coords: 103.20, 30.93*/
     gsSP2Triangles(  1, 11, 12, 1, 13, 14, 8, 13  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x9fe903d9),  /*New Coords: -192.17, 30.80*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xb25a000a),  /*New Coords: -155.29, 0.34*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xd235001f),  /*New Coords: -91.58, 0.98*/
     gsSP1Triangle(  17, 16, 13, 17  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xdbac016e),  /*New Coords: -72.65, 11.44*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x42510260),  /*New Coords: 132.64, 19.00*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x56a8024a),  /*New Coords: 173.31, 18.32*/
     gsSP2Triangles(  18, 19, 15, 18, 14, 13, 16, 14  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfc1e0050),  /*New Coords: -7.76, 2.53*/
     gsSP2Triangles(  19, 18, 20, 19, 5, 2, 21, 5  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x42b10054),  /*New Coords: 133.39, 2.65*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x0d850037),  /*New Coords: 27.04, 1.73*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x0705017a),  /*New Coords: 14.04, 11.82*/
     gsSP2Triangles(  7, 4, 8, 7, 6, 8, 22, 6  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xf21800e0),  /*New Coords: -27.81, 7.02*/
     gsSP2Triangles(  19, 8, 14, 19, 19, 20, 22, 19  ),
     gsSP1Triangle(  19, 14, 15, 19  ),
   gsSPVertex( sea_wall_VertList_0+6,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x815401f8),  /*New Coords: -253.34, 15.78*/
     gsSP1Triangle(  5, 0, 8, 5  ),
   gsSPVertex( sea_wall_VertList_0+1,30,0  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x8fd10466),  /*New Coords: 287.63, 35.20*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8d9a0308),  /*New Coords: 283.21, 24.28*/
     gsSP1Triangle(  9, 16, 0, 9  ),
   gsSPVertex( sea_wall_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8a010114),  /*New Coords: 276.01, 8.63*/
     gsSP1Triangle(  13, 10, 0, 13  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x815401f8),  /*New Coords: -253.34, 15.78*/
     gsSP1Triangle(  14, 6, 9, 14  ),
   gsSPVertex( sea_wall_VertList_0+29,30,0  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x9fe903d9),  /*New Coords: -192.17, 30.80*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfc1e0050),  /*New Coords: -7.76, 2.53*/
     gsSP1Triangle(  12, 0, 16, 12  ),
   gsSPVertex( sea_wall_VertList_0+0,30,0  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x6b0efff0),  /*New Coords: 214.11, -0.49*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x73f705d8),  /*New Coords: -280.07, 46.76*/
     gsSP2Triangles(  19, 0, 2, 19, 7, 3, 5, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x60580455),  /*New Coords: -319.31, 34.67*/
     gsSP1Triangle(  8, 6, 7, 8  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x815401f8),  /*New Coords: -253.34, 15.78*/
     gsSP1Triangle(  6, 11, 3, 6  ),
     gsSP2Triangles(  12, 11, 13, 12, 15, 4, 12, 15  ),
     gsSP2Triangles(  5, 4, 16, 5, 2, 1, 18, 2  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x87a001da),  /*New Coords: 271.25, 14.83*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x361a020b),  /*New Coords: 108.21, 16.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x30a605ca),  /*New Coords: 97.30, 46.32*/
     gsSP2Triangles(  15, 12, 19, 15, 7, 20, 8, 7  ),
   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0xfc1e0050),  /*New Coords: -7.76, 2.53*/
     gsSP2Triangles(  7, 22, 20, 7, 29, 24, 26, 29  ),
   gsSPVertex( sea_wall_VertList_0+21,30,0  ),
     gsSP1Triangle(  26, 6, 0, 26  ),
   gsSPVertex( sea_wall_VertList_0+2,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x8c0c0280),  /*New Coords: 280.10, 20.01*/
     gsSP1Triangle(  0, 14, 17, 0  ),
   gsSPVertex( sea_wall_VertList_0+21,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x339903dd),  /*New Coords: 103.20, 30.93*/
     gsSP2Triangles(  26, 0, 2, 26, 11, 7, 8, 11  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x01300259),  /*New Coords: 2.38, 18.80*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x2ce40139),  /*New Coords: 89.79, 9.80*/
     gsSP1Triangle(  7, 10, 3, 7  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x7d020054),  /*New Coords: 250.02, 2.65*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x42b10054),  /*New Coords: 133.39, 2.65*/
     gsSP1Triangle(  13, 10, 12, 13  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xd545fde0),  /*New Coords: -85.46, -16.98*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x015600f7),  /*New Coords: 2.68, 7.74*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0xd348ff2a),  /*New Coords: -89.43, -6.68*/
     gsSP1Triangle(  14, 4, 13, 14  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x3e9a0065),  /*New Coords: 125.21, 3.18*/
     gsSP1Triangle(  5, 4, 15, 5  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x62c1048b),  /*New Coords: 197.51, 36.35*/
     gsSP2Triangles(  8, 16, 11, 8, 21, 18, 20, 21  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xfc1e0050),  /*New Coords: -7.76, 2.53*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x9fe903d9),  /*New Coords: -192.17, 30.80*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xd235001f),  /*New Coords: -91.58, 0.98*/
     gsSP2Triangles(  8, 20, 16, 8, 18, 17, 19, 18  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x0705017a),  /*New Coords: 14.04, 11.82*/     gsSP1Triangle(  11, 22, 25, 11  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- sea_wall -------------------------------------------------

 
 
 
 
 
 
 
 
 
//>-- Obj01: START ------------------------------------------ fire_pit_base -------------------------------------------------

Vtx fire_pit_base_VertList_0 [] = {
   { 101.21, 33.86, -25.26, 1, 0x0006, 0x09a4, 0, 0, 0, 255}, 
   { 109.69, 24.72, -29.84, 1, 0x0077, 0x09a4, 0, 0, 0, 255}, 
   { 17.09, -3.47, 34.87, 1, 0x0077, 0x0010, 166, 137, 102, 255}, 
   { 8.61, 5.66, 39.44, 1, 0x00e6, 0x0042, 235, 203, 152, 255}, 
   { 18.56, -5.02, 49.37, 1, 0x0092, 0x0005, 235, 203, 152, 255}, 
   { 110.77, 23.60, -15.73, 1, 0x00e0, 0x09b3, 203, 154, 111, 255}, 
   { 81.57, -74.58, -43.51, 1, 0x0159, 0x0634, 203, 154, 111, 255}, 
   { 74.45, -83.87, -49.78, 1, 0x00e8, 0x0634, 0, 0, 0, 255}, 
   { 13.42, -0.84, 27.92, 1, 0x00e8, 0x0fc8, 166, 137, 102, 255}, 
   { 20.54, 8.45, 34.19, 1, 0x0079, 0x0f96, 235, 203, 152, 255}, 
   { 11.91, -4.87, 41.93, 1, 0x00cd, 0x0fd4, 235, 203, 152, 255}, 
   { 73.28, -87.37, -36.07, 1, 0x007f, 0x0625, 203, 154, 111, 255}, 
   { -40.78, -88.40, -49.41, 1, 0x010e, 0x0634, 203, 154, 111, 255}, 
   { -50.99, -83.26, -56.16, 1, 0x009d, 0x0634, 0, 0, 0, 255}, 
   { 11.54, -8.38, 28.32, 1, 0x009d, 0x0fc8, 166, 137, 102, 255}, 
   { 21.75, -13.53, 35.08, 1, 0x002e, 0x0f96, 235, 203, 152, 255}, 
   { 6.40, -8.28, 42.05, 1, 0x0082, 0x0fd4, 235, 203, 152, 255}, 
   { -55.53, -83.36, -42.71, 1, 0x0034, 0x0625, 203, 154, 111, 255}, 
   { -88.91, -48.40, -40.20, 1, 0x0159, 0x0634, 203, 154, 111, 255}, 
   { -96.93, -39.53, -45.99, 1, 0x00e8, 0x0634, 0, 0, 0, 255}, 
   { 0.70, 3.27, 26.75, 1, 0x00e8, 0x0fc8, 166, 137, 102, 255}, 
   { 8.72, -5.59, 32.54, 1, 0x0079, 0x0f96, 235, 203, 152, 255}, 
   { -2.18, 5.47, 40.96, 1, 0x00cd, 0x0fd4, 235, 203, 152, 255}, 
   { -99.38, -37.77, -32.12, 1, 0x007f, 0x0625, 203, 154, 111, 255}, 
   { 89.45, -9.44, -8.01, 1, 0x102b, 0x0fe8, 203, 154, 111, 255}, 
   { 12.91, 72.88, 14.52, 1, 0x1006, 0x0036, 86, 54, 55, 255}, 
   { 16.14, 33.46, 25.95, 1, 0x0be9, 0x04cd, 199, 176, 146, 255}, 
   { -63.63, -9.44, -8.01, 1, 0x0023, 0x0001, 203, 154, 111, 255}, 
   { 33.50, -0.45, 20.74, 1, 0x0a1f, 0x0a2d, 235, 208, 172, 255}, 
   { 16.72, -67.91, -18.95, 1, 0x0038, 0x0fe8, 203, 154, 111, 255}, 
   { -7.67, 1.59, 20.74, 1, 0x060c, 0x0599, 201, 164, 128, 255}, 
   { 16.67, -0.34, 31.27, 1, 0x0861, 0x0861, 235, 208, 172, 255}, 
};


void fire_pit_base_PolyList( u8 animFrame ){ 

   Vtx *fire_pit_base_VTXPointer = &fire_pit_base_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'Effects-Fire-Pit'-------------------------------------------------

//Last: Flame_Fire_Pit   Current: Flame_Fire_Pit
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Flame_Fire_Pit,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 1,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, Flame_Fire_Pit_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  fire_pit_base_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   24, 25, 26, 24, 27, 26, 25, 27  );
     gSP1Triangle(glistp++,   24, 28, 29, 24  );
   gSPVertex(glistp++,  fire_pit_base_VTXPointer+26,30,0  );
     gSP1Triangle(glistp++,   1, 4, 0, 1  );
     gSP2Triangles(glistp++,   3, 2, 5, 3, 2, 0, 5, 2  );
   gSPVertex(glistp++,  fire_pit_base_VTXPointer+24,30,0  );
     gSP2Triangles(glistp++,   0, 2, 4, 0, 6, 7, 2, 6  );
     gSP2Triangles(glistp++,   5, 7, 6, 5, 3, 5, 6, 3  );


//>-- MATERIAL 1: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

//Last:    Current: wood_dock_pillars
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, wood_dock_pillars_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetPrimColor(glistp++,  1,255,255,202,152,255  );

   gSPVertex(glistp++,  fire_pit_base_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x00180042);  /*New Coords: 1.54, 1.05*/
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 2, 4, 3  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x015f0010);  /*New Coords: 21.95, 0.26*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x00e00010);  /*New Coords: 14.05, 0.26*/
     gSP1Triangle(glistp++,   3, 4, 5, 3  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x00770010);  /*New Coords: 7.47, 0.26*/
     gSP1Triangle(glistp++,   5, 4, 2, 5  );
     gSP1Triangle(glistp++,   6, 7, 8, 6  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x01470f96);  /*New Coords: 20.47, 62.35*/
     gSP1Triangle(glistp++,   9, 8, 10, 9  );
   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x00000fc8);  /*New Coords: 0.05, 63.14*/   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x007f0fc8);  /*New Coords: 7.95, 63.14*/
     gSP1Triangle(glistp++,   9, 10, 11, 9  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x00e80fc8);  /*New Coords: 14.54, 63.14*/
     gSP1Triangle(glistp++,   11, 10, 8, 11  );
     gSP1Triangle(glistp++,   12, 13, 14, 12  );
   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x00fc0f96);  /*New Coords: 15.78, 62.35*/
     gSP1Triangle(glistp++,   15, 14, 16, 15  );
   gSPModifyVertex(glistp++,  15,   G_MWO_POINT_ST, 0xffb50fc8);  /*New Coords: -4.63, 63.14*/   gSPModifyVertex(glistp++,  16,   G_MWO_POINT_ST, 0x00340fc8);  /*New Coords: 3.27, 63.14*/
     gSP1Triangle(glistp++,   15, 16, 17, 15  );
   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x009d0fc8);  /*New Coords: 9.85, 63.14*/
     gSP1Triangle(glistp++,   17, 16, 14, 17  );
     gSP1Triangle(glistp++,   18, 19, 20, 18  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x01470f96);  /*New Coords: 20.47, 62.35*/
     gSP1Triangle(glistp++,   21, 20, 22, 21  );
   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x00000fc8);  /*New Coords: 0.05, 63.14*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0x007f0fc8);  /*New Coords: 7.95, 63.14*/
     gSP1Triangle(glistp++,   21, 22, 23, 21  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x00e80fc8);  /*New Coords: 14.54, 63.14*/
     gSP1Triangle(glistp++,   23, 22, 20, 23  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x00060010);  /*New Coords: 0.42, 0.26*/
     gSP1Triangle(glistp++,   3, 0, 2, 3  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x015f09b3);  /*New Coords: 21.95, 38.81*/   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x015f0010);  /*New Coords: 21.95, 0.26*/
     gSP1Triangle(glistp++,   0, 3, 5, 0  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x007709b3);  /*New Coords: 7.47, 38.81*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x01590fc8);  /*New Coords: 21.59, 63.14*/
     gSP2Triangles(glistp++,   1, 5, 2, 1, 9, 6, 8, 9  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x00000625);  /*New Coords: 0.05, 24.59*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x00000fc8);  /*New Coords: 0.05, 63.14*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x00e80625);  /*New Coords: 14.54, 24.59*/
     gSP2Triangles(glistp++,   6, 9, 11, 6, 7, 11, 8, 7  );
   gSPModifyVertex(glistp++,  15,   G_MWO_POINT_ST, 0x010e0fc8);  /*New Coords: 16.90, 63.14*/
     gSP1Triangle(glistp++,   15, 12, 14, 15  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0xffb50625);  /*New Coords: -4.63, 24.59*/   gSPModifyVertex(glistp++,  15,   G_MWO_POINT_ST, 0xffb50fc8);  /*New Coords: -4.63, 63.14*/
     gSP1Triangle(glistp++,   12, 15, 17, 12  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x009d0625);  /*New Coords: 9.85, 24.59*/   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x01590fc8);  /*New Coords: 21.59, 63.14*/
     gSP2Triangles(glistp++,   13, 17, 14, 13, 21, 18, 20, 21  );
   gSPModifyVertex(glistp++,  18,   G_MWO_POINT_ST, 0x00000625);  /*New Coords: 0.05, 24.59*/   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x00000fc8);  /*New Coords: 0.05, 63.14*/   gSPModifyVertex(glistp++,  19,   G_MWO_POINT_ST, 0x00e80625);  /*New Coords: 14.54, 24.59*/
     gSP2Triangles(glistp++,   18, 21, 23, 18, 19, 23, 20, 19  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj01: END ------------------------------------------- fire_pit_base -------------------------------------------------

 
 
 
 
//>-- Obj00: START ------------------------------------------ destroyed_home -------------------------------------------------

Vtx destroyed_home_VertList_0 [] = {
   { 134.42, 204.80, 163.20, 1, 0x002d, 0x09ef, 95, 60, 49, 255}, 
   { 132.82, 194.43, 172.59, 1, 0x0026, 0x0963, 95, 60, 49, 255}, 
   { 50.98, 239.25, 180.66, 1, 0x0113, 0x0963, 133, 84, 70, 255}, 
   { 124.26, 139.09, 222.76, 1, 0x0033, 0x0b87, 95, 60, 49, 255}, 
   { 122.10, 125.12, 235.42, 1, 0x0026, 0x0acf, 95, 60, 49, 255}, 
   { 56.69, 172.28, 243.78, 1, 0x00f3, 0x0acf, 95, 60, 49, 255}, 
   { 28.17, 248.56, 171.23, 1, 0x0028, 0x0a23, 193, 159, 140, 255}, 
   { 29.22, 238.94, 180.73, 1, 0x0026, 0x099a, 95, 60, 49, 255}, 
   { -70.33, 237.53, 181.09, 1, 0x0121, 0x099a, 95, 60, 49, 255}, 
   { 23.75, 246.99, 169.20, 1, 0x002d, 0x0be9, 193, 159, 140, 255}, 
   { 34.40, 235.38, 178.46, 1, 0x0026, 0x0b33, 95, 60, 49, 255}, 
   { -57.99, 209.30, 225.95, 1, 0x0114, 0x0b33, 95, 60, 49, 255}, 
   { -111.28, 75.33, 218.73, 1, 0x04e3, 0x0556, 205, 171, 152, 255}, 
   { -145.96, 124.51, 234.98, 1, 0x04fa, 0x0dd0, 205, 171, 152, 255}, 
   { -81.57, 93.71, 244.89, 1, 0x0295, 0x06d3, 205, 171, 152, 255}, 
   { -231.87, 0.37, 130.81, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -223.74, 25.33, -11.70, 1, 0x00dd, 0x4108, 95, 60, 49, 255}, 
   { -225.15, 69.51, -4.22, 1, 0xff98, 0x4103, 140, 105, 91, 255}, 
   { -232.11, 63.10, 153.92, 1, 0x0077, 0x1cbb, 95, 60, 49, 255}, 
   { -159.29, 68.64, 253.70, 1, 0xffbe, 0x0dad, 95, 60, 49, 255}, 
   { -151.32, 15.70, 281.15, 1, 0x00d2, 0x09ea, 95, 60, 49, 255}, 
   { -229.70, 88.90, 0.45, 1, 0x0068, 0x36e7, 95, 60, 49, 255}, 
   { -188.08, 175.97, 24.77, 1, 0xfefe, 0x350a, 171, 128, 110, 255}, 
   { -175.83, 166.37, 168.41, 1, 0x045b, 0x1988, 200, 166, 147, 255}, 
   { -82.58, 229.91, 178.68, 1, 0x02db, 0x1b3b, 95, 60, 49, 255}, 
   { -68.86, 190.18, 231.35, 1, 0x0301, 0x12e5, 95, 60, 49, 255}, 
   { -65.40, 180.16, 244.65, 1, 0x00ea, 0x0985, 95, 60, 49, 255}, 
   { -127.92, 93.74, 268.06, 1, 0xfdc2, 0x087f, 95, 60, 49, 255}, 
   { -180.81, 163.01, 168.75, 1, 0xfe4d, 0x1b04, 205, 171, 152, 255}, 
   { -233.34, 46.36, 138.59, 1, 0xff98, 0x2451, 140, 105, 91, 255}, 
   { -134.86, -6.23, 318.66, 1, 0x004e, 0x032e, 126, 97, 88, 255}, 
   { -133.10, -61.11, 309.37, 1, 0x0260, 0x042b, 95, 60, 49, 255}, 
   { -102.85, -109.18, 301.07, 1, 0x0483, 0x0337, 95, 60, 49, 255}, 
   { -179.69, -126.20, 109.10, 1, 0x0461, 0x2437, 95, 60, 49, 255}, 
   { -173.61, -96.26, -32.56, 1, 0x0469, 0x40e9, 95, 60, 49, 255}, 
   { -222.33, -18.85, -19.18, 1, 0x0221, 0x410d, 171, 128, 110, 255}, 
   { -230.40, -45.62, 123.02, 1, 0x021c, 0x251f, 255, 191, 164, 255}, 
   { -82.30, 236.84, 24.81, 1, 0x02de, 0x2ec3, 95, 60, 49, 255}, 
   { 46.09, 84.86, 332.99, 1, 0x0164, 0x0017, 133, 84, 70, 255}, 
   { 64.65, 78.82, 331.86, 1, 0x00e6, 0x0017, 133, 84, 70, 255}, 
   { 50.13, 249.27, 171.22, 1, 0x00e6, 0x0988, 133, 84, 70, 255}, 
   { 28.16, 248.56, 171.23, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { 47.16, 264.43, 27.12, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
   { -179.72, -4.84, -27.86, 1, 0x00e0, 0x09b3, 92, 58, 48, 255}, 
   { -147.98, -16.11, 113.10, 1, 0x00e0, 0x0010, 255, 191, 164, 255}, 
   { -164.93, -11.86, 107.88, 1, 0x0077, 0x0010, 108, 74, 63, 255}, 
   { -160.80, 1.30, 117.00, 1, 0x015f, 0x0010, 255, 191, 164, 255}, 
   { 26.06, 263.76, 27.13, 1, 0x000c, 0x0f8b, 92, 58, 48, 255}, 
   { 35.97, 255.01, 17.20, 1, 0x007c, 0x0f8b, 92, 58, 48, 255}, 
   { 38.08, 239.82, 161.30, 1, 0x007c, 0x0988, 255, 191, 164, 255}, 
   { 56.01, 76.11, 323.07, 1, 0x007c, 0x0017, 219, 150, 140, 255}, 
   { -192.04, 11.88, -24.11, 1, 0x0006, 0x09a4, 95, 60, 49, 255}, 
   { -196.17, -1.27, -33.23, 1, 0x0077, 0x09a4, 95, 60, 49, 255}, 
   { -46.70, 100.69, 344.79, 1, 0x00d0, 0x0017, 133, 84, 70, 255}, 
   { -27.96, 106.27, 344.65, 1, 0x0052, 0x0017, 255, 255, 255, 255}, 
   { -70.14, 247.67, 165.11, 1, 0x0052, 0x0988, 133, 84, 70, 255}, 
   { -91.46, 242.35, 164.87, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -70.54, 245.89, 20.19, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -91.02, 240.78, 19.96, 1, 0xff78, 0x0f8b, 92, 58, 48, 255}, 
   { -79.12, 233.29, 11.27, 1, 0xffe9, 0x0f8b, 92, 58, 48, 255}, 
   { -79.57, 234.86, 156.18, 1, 0xffe9, 0x0988, 255, 191, 164, 255}, 
   { -32.83, 98.36, 336.10, 1, 0xffe9, 0x0017, 255, 191, 164, 255}, 
   { -203.17, 174.02, 153.33, 1, 0x016f, 0x0988, 133, 84, 70, 255}, 
   { -103.14, 51.81, 326.68, 1, 0x016f, 0x0017, 133, 84, 70, 255}, 
   { -90.35, 66.59, 327.16, 1, 0x00f0, 0x0017, 133, 84, 70, 255}, 
   { -186.16, 187.86, 154.68, 1, 0x00f0, 0x0988, 133, 84, 70, 255}, 
   { -184.34, 195.91, 9.99, 1, 0x00f0, 0x0f94, 92, 58, 48, 255}, 
   { -200.69, 182.61, 8.70, 1, 0x0016, 0x0f8b, 95, 60, 49, 255}, 
   { -186.64, 181.49, 0.05, 1, 0x0087, 0x0f8b, 95, 60, 49, 255}, 
   { -189.13, 172.90, 144.69, 1, 0x0087, 0x0988, 255, 191, 164, 255}, 
   { -90.42, 57.87, 318.03, 1, 0x0087, 0x0017, 255, 191, 164, 255}, 
   { -131.85, -14.20, 321.05, 1, 0x00d0, 0x0017, 133, 84, 70, 255}, 
   { -125.99, 4.20, 324.06, 1, 0x0052, 0x0017, 133, 84, 70, 255}, 
   { -239.89, 74.80, 135.01, 1, 0x0052, 0x0988, 133, 84, 70, 255}, 
   { -247.37, 54.49, 131.19, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -224.91, 93.58, -7.91, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -232.10, 74.07, -11.58, 1, 0xff78, 0x0f8b, 127, 92, 78, 255}, 
   { -218.46, 80.71, -18.15, 1, 0xffe9, 0x0f8b, 95, 60, 49, 255}, 
   { -233.74, 61.13, 124.62, 1, 0xffe9, 0x0988, 255, 191, 164, 255}, 
   { -121.38, -3.04, 314.82, 1, 0xffe9, 0x0017, 255, 191, 164, 255}, 
   { -107.45, -125.52, 265.79, 1, 0x016f, 0x0017, 133, 84, 70, 255}, 
   { -113.53, -106.47, 266.80, 1, 0x00f0, 0x0017, 133, 84, 70, 255}, 
   { -186.71, -115.04, 103.15, 1, 0x00f0, 0x0988, 133, 84, 70, 255}, 
   { -182.73, -136.54, 100.93, 1, 0x016f, 0x0988, 95, 60, 49, 255}, 
   { -169.34, -99.47, -39.88, 1, 0x00f0, 0x0f94, 95, 60, 49, 255}, 
   { -165.51, -120.12, -42.02, 1, 0x0016, 0x0f8b, 95, 60, 49, 255}, 
   { -156.40, -107.91, -48.45, 1, 0x0087, 0x0f8b, 95, 60, 49, 255}, 
   { -173.62, -124.33, 94.50, 1, 0x0087, 0x0988, 255, 191, 164, 255}, 
   { -103.66, -111.45, 258.62, 1, 0x0087, 0x0017, 255, 191, 164, 255}, 
   { 135.98, 194.79, 171.23, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { 157.04, 188.50, 171.22, 1, 0x00e6, 0x0988, 133, 84, 70, 255}, 
   { 159.02, 203.83, 27.12, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
   { 138.79, 209.87, 27.13, 1, 0x000c, 0x0f8b, 92, 58, 48, 255}, 
   { 145.43, 198.44, 17.20, 1, 0x007c, 0x0f8b, 92, 58, 48, 255}, 
   { 142.61, 183.36, 161.30, 1, 0x007c, 0x0988, 255, 191, 164, 255}, 
   { 110.46, 97.58, 263.38, 1, 0x00e6, 0x0017, 255, 255, 255, 255}, 
   { 194.62, 98.17, -14.46, 1, 0x0006, 0x09a4, 95, 60, 49, 255}, 
   { 193.32, 85.02, -24.38, 1, 0x0077, 0x09a4, 95, 60, 49, 255}, 
   { 182.22, 74.43, 119.72, 1, 0x0077, 0x0010, 255, 191, 164, 255}, 
   { 183.52, 87.58, 129.64, 1, 0x00e6, 0x0042, 92, 58, 48, 255}, 
   { 196.93, 70.17, 129.63, 1, 0x0092, 0x0005, 92, 58, 48, 255}, 
   { 207.50, 81.45, -14.47, 1, 0x00e0, 0x09b3, 92, 58, 48, 255}, 
   { 204.78, 33.05, -17.16, 1, 0x0006, 0x09a4, 92, 58, 48, 255}, 
   { 205.63, 25.34, -31.76, 1, 0x0077, 0x09a4, 92, 58, 48, 255}, 
   { 152.85, -32.84, 87.24, 1, 0x0077, 0x0010, 255, 191, 164, 255}, 
   { 154.28, -24.76, 101.59, 1, 0x00e6, 0x0042, 92, 58, 48, 255}, 
   { 164.52, -43.49, 96.36, 1, 0x0092, 0x0005, 92, 58, 48, 255}, 
   { 215.26, 15.14, -21.03, 1, 0x00e0, 0x09b3, 92, 58, 48, 255}, 
   { 50.13, 249.27, 171.22, 1, 0x011e, 0x09e6, 193, 159, 140, 255}, 
   { 134.42, 204.80, 163.20, 1, 0x002d, 0x09ef, 95, 60, 49, 255}, 
   { 50.98, 239.25, 180.66, 1, 0x0113, 0x0963, 133, 84, 70, 255}, 
   { 55.54, 185.77, 231.06, 1, 0x0106, 0x0b7b, 193, 159, 140, 255}, 
   { 124.26, 139.09, 222.76, 1, 0x0033, 0x0b87, 95, 60, 49, 255}, 
   { 56.69, 172.28, 243.78, 1, 0x00f3, 0x0acf, 95, 60, 49, 255}, 
   { -72.30, 245.34, 171.28, 1, 0x0126, 0x0a19, 95, 60, 49, 255}, 
   { 28.17, 248.56, 171.23, 1, 0x0028, 0x0a23, 193, 159, 140, 255}, 
   { -70.33, 237.53, 181.09, 1, 0x0121, 0x099a, 95, 60, 49, 255}, 
   { -69.25, 218.21, 216.68, 1, 0x011c, 0x0bdc, 95, 60, 49, 255}, 
   { 23.75, 246.99, 169.20, 1, 0x002d, 0x0be9, 193, 159, 140, 255}, 
   { -57.99, 209.30, 225.95, 1, 0x0114, 0x0b33, 95, 60, 49, 255}, 
   { -152.14, 132.76, 222.05, 1, 0x0509, 0x0feb, 205, 171, 152, 255}, 
   { -175.83, 166.37, 168.41, 1, 0x045b, 0x1988, 200, 166, 147, 255}, 
   { -68.86, 190.18, 231.35, 1, 0x0301, 0x12e5, 95, 60, 49, 255}, 
   { -145.96, 124.51, 234.98, 1, 0x002b, 0x0985, 205, 171, 152, 255}, 
   { -133.98, -33.67, 314.02, 1, 0x0157, 0x03ad, 95, 60, 49, 255}, 
   { -231.87, 0.37, 130.81, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -134.86, -6.23, 318.66, 1, 0x004e, 0x032e, 126, 97, 88, 255}, 
   { -133.10, -61.11, 309.37, 1, 0x0260, 0x042b, 95, 60, 49, 255}, 
   { -230.40, -45.62, 123.02, 1, 0x021c, 0x251f, 255, 191, 164, 255}, 
   { -222.33, -18.85, -19.18, 1, 0x0221, 0x410d, 171, 128, 110, 255}, 
   { -231.87, 0.37, 130.81, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -188.08, 175.97, 24.77, 1, 0x0452, 0x2d10, 171, 128, 110, 255}, 
   { -82.30, 236.84, 24.81, 1, 0x02de, 0x2ec3, 95, 60, 49, 255}, 
   { -175.83, 166.37, 168.41, 1, 0x00a7, 0x1fe7, 200, 166, 147, 255}, 
};

Gfx destroyed_home_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

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
   gsDPLoadTextureBlock_4b(   wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, wood_dock_pillars_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( destroyed_home_VertList_0+29,30,0  ),
     gsSP2Triangles(  9, 10, 11, 9, 12, 11, 13, 12  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 15, 14, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x00e60042),  /*New Coords: 14.43, 1.05*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x00920005),  /*New Coords: 9.14, 0.08*/
     gsSP2Triangles(  17, 16, 15, 17, 18, 19, 20, 18  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x000c0017),  /*New Coords: 0.75, 0.36*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x000c0988),  /*New Coords: 0.75, 38.13*/
     gsSP2Triangles(  9, 12, 20, 9, 11, 10, 21, 11  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x017c0057),  /*New Coords: 23.77, 1.36*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x00000057),  /*New Coords: 0.06, 1.36*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00e00019),  /*New Coords: 14.04, 0.40*/
     gsSP2Triangles(  13, 11, 20, 13, 9, 21, 10, 9  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP2Triangles(  22, 23, 16, 22, 24, 25, 26, 24  ),
     gsSP1Triangle(  27, 26, 28, 27  ),
   gsSPVertex( destroyed_home_VertList_0+58,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( destroyed_home_VertList_0+56,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff780988),  /*New Coords: -8.49, 38.13*/
     gsSP1Triangle(  0, 4, 5, 0  ),
   gsSPVertex( destroyed_home_VertList_0+54,30,0  ),
     gsSP1Triangle(  1, 0, 7, 1  ),
     gsSP1Triangle(  3, 1, 6, 3  ),
   gsSPVertex( destroyed_home_VertList_0+53,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00e80057),  /*New Coords: 14.53, 1.36*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff6d0057),  /*New Coords: -9.18, 1.36*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x004c0019),  /*New Coords: 4.80, 0.40*/
     gsSP1Triangle(  0, 8, 1, 0  ),
     gsSP2Triangles(  9, 10, 11, 9, 9, 12, 13, 9  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x00160988),  /*New Coords: 1.42, 38.13*/
     gsSP2Triangles(  14, 15, 16, 14, 9, 16, 17, 9  ),
     gsSP2Triangles(  12, 11, 17, 12, 13, 12, 16, 13  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x01870057),  /*New Coords: 24.44, 1.36*/   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x000b0057),  /*New Coords: 0.73, 1.36*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00eb0019),  /*New Coords: 14.71, 0.40*/
     gsSP2Triangles(  10, 17, 11, 10, 18, 19, 20, 18  ),
     gsSP2Triangles(  21, 20, 22, 21, 23, 24, 25, 23  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xff780988),  /*New Coords: -8.49, 38.13*/
     gsSP2Triangles(  21, 25, 26, 21, 20, 19, 26, 20  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00e80057),  /*New Coords: 14.53, 1.36*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xff6d0057),  /*New Coords: -9.18, 1.36*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x004c0019),  /*New Coords: 4.80, 0.40*/
     gsSP2Triangles(  22, 20, 25, 22, 18, 26, 19, 18  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( destroyed_home_VertList_0+82,30,0  ),
     gsSP1Triangle(  1, 0, 2, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00160988),  /*New Coords: 1.42, 38.13*/
     gsSP2Triangles(  3, 4, 5, 3, 1, 5, 6, 1  ),
   gsSPVertex( destroyed_home_VertList_0+81,30,0  ),
     gsSP2Triangles(  1, 0, 7, 1, 3, 1, 6, 3  ),
   gsSPVertex( destroyed_home_VertList_0+80,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01870057),  /*New Coords: 24.44, 1.36*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x000b0057),  /*New Coords: 0.73, 1.36*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00eb0019),  /*New Coords: 14.71, 0.40*/
     gsSP2Triangles(  0, 8, 1, 0, 9, 10, 11, 9  ),
     gsSP2Triangles(  12, 13, 14, 12, 11, 10, 14, 11  ),
     gsSP1Triangle(  9, 15, 10, 9  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x000c0017),  /*New Coords: 0.75, 0.36*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x000c0988),  /*New Coords: 0.75, 38.13*/
     gsSP1Triangle(  15, 9, 14, 15  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x007c0017),  /*New Coords: 7.81, 0.36*/
     gsSP2Triangles(  10, 15, 14, 10, 16, 17, 18, 16  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP1Triangle(  19, 18, 20, 19  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  19, 20, 21, 19  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP2Triangles(  21, 20, 18, 21, 22, 23, 24, 22  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP1Triangle(  25, 24, 26, 25  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP1Triangle(  27, 26, 24, 27  ),
   gsSPVertex( destroyed_home_VertList_0+38,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x01640f94),  /*New Coords: 22.29, 62.32*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/
     gsSP2Triangles(  9, 3, 4, 9, 14, 5, 7, 14  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x000c0988),  /*New Coords: 0.75, 38.13*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x000c0f8b),  /*New Coords: 0.75, 62.18*/
     gsSP2Triangles(  13, 8, 5, 13, 3, 9, 11, 3  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x000c0017),  /*New Coords: 0.75, 0.36*/
     gsSP2Triangles(  12, 0, 11, 12, 11, 2, 12, 11  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x000609a4),  /*New Coords: 0.42, 38.58*/
     gsSP2Triangles(  10, 4, 11, 10, 8, 13, 7, 8  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x00d00f94),  /*New Coords: 13.05, 62.32*/
     gsSP2Triangles(  18, 15, 17, 18, 20, 18, 19, 20  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xff780988),  /*New Coords: -8.49, 38.13*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xff780f8b),  /*New Coords: -8.49, 62.18*/
     gsSP1Triangle(  18, 20, 22, 18  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0xff780017),  /*New Coords: -8.49, 0.36*/
     gsSP1Triangle(  15, 18, 23, 15  ),
     gsSP2Triangles(  22, 17, 23, 22, 21, 19, 22, 21  ),
   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x016f0f94),  /*New Coords: 22.96, 62.32*/
     gsSP2Triangles(  27, 24, 26, 27, 29, 24, 28, 29  ),
   gsSPVertex( destroyed_home_VertList_0+62,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00160988),  /*New Coords: 1.42, 38.13*/
     gsSP1Triangle(  0, 5, 7, 0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x00160017),  /*New Coords: 1.42, 0.36*/
     gsSP1Triangle(  1, 0, 8, 1  ),
     gsSP2Triangles(  7, 3, 8, 7, 6, 4, 7, 6  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00d00f94),  /*New Coords: 13.05, 62.32*/
     gsSP2Triangles(  12, 9, 11, 12, 14, 12, 13, 14  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xff780988),  /*New Coords: -8.49, 38.13*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xff780f8b),  /*New Coords: -8.49, 62.18*/
     gsSP1Triangle(  12, 14, 16, 12  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xff780017),  /*New Coords: -8.49, 0.36*/
     gsSP1Triangle(  9, 12, 17, 9  ),
     gsSP2Triangles(  16, 11, 17, 16, 15, 13, 16, 15  ),
   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x016f0f94),  /*New Coords: 22.96, 62.32*/
     gsSP2Triangles(  21, 18, 20, 21, 23, 21, 22, 23  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x00160988),  /*New Coords: 1.42, 38.13*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x00160f8b),  /*New Coords: 1.42, 62.18*/
     gsSP1Triangle(  21, 23, 25, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00160017),  /*New Coords: 1.42, 0.36*/
     gsSP1Triangle(  18, 21, 26, 18  ),
     gsSP2Triangles(  25, 20, 26, 25, 24, 22, 25, 24  ),
   gsSPVertex( destroyed_home_VertList_0+89,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x01640f94),  /*New Coords: 22.29, 62.32*/
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x000c0988),  /*New Coords: 0.75, 38.13*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x000c0f8b),  /*New Coords: 0.75, 62.18*/
     gsSP1Triangle(  0, 3, 5, 0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP2Triangles(  4, 2, 5, 4, 10, 7, 9, 10  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/
     gsSP2Triangles(  7, 10, 12, 7, 8, 12, 9, 8  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP1Triangle(  16, 13, 15, 16  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/
     gsSP1Triangle(  13, 16, 18, 13  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/     gsSP1Triangle(  14, 18, 15, 14  ),


//>-- MATERIAL 1: START ------------------------------------ 'Homes-Wall-Cracked'-------------------------------------------------

//Last: Homes_Wall_Cracked   Current: Homes_Wall_Cracked
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Cracked,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Cracked_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( destroyed_home_VertList_0+0,30,0  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
     gsSP2Triangles(  18, 19, 20, 18, 18, 21, 22, 18  ),
     gsSP2Triangles(  23, 24, 25, 23, 20, 19, 27, 20  ),
     gsSP2Triangles(  27, 19, 28, 27, 28, 19, 18, 28  ),
   gsSPVertex( destroyed_home_VertList_0+15,30,0  ),
     gsSP2Triangles(  0, 14, 15, 0, 16, 17, 18, 16  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( destroyed_home_VertList_0+13,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x030a10ca),  /*New Coords: 24.34, 33.58*/
     gsSP1Triangle(  0, 13, 1, 0  ),
     gsSP2Triangles(  18, 23, 2, 18, 22, 3, 2, 22  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x043a1fe7),  /*New Coords: 33.83, 63.81*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00a71fe7),  /*New Coords: 5.24, 63.81*/
     gsSP2Triangles(  24, 11, 10, 24, 16, 2, 4, 16  ),
     gsSP1Triangle(  15, 5, 9, 15  ),
   gsSPVertex( destroyed_home_VertList_0+100,30,0  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPVertex( destroyed_home_VertList_0+31,30,0  ),
     gsSP1Triangle(  5, 0, 2, 5  ),
     gsSP1Triangle(  5, 2, 4, 5  ),
   gsSPVertex( destroyed_home_VertList_0+118,30,0  ),
     gsSP1Triangle(  6, 9, 7, 6  ),
     gsSP2Triangles(  10, 11, 12, 10, 13, 14, 15, 13  ),


//>-- MATERIAL 2: START ------------------------------------ 'Wood-Dock-Planks'-------------------------------------------------

//Last:    Current: wood_dock_planks
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_1CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA ),
   gsDPSetRenderMode(   G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2  ),
   gsDPLoadTextureBlock_4b(   wood_dock_planks,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, wood_dock_planks_tlut ),
   gsDPSetTextureFilter(   G_TF_BILERP ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( destroyed_home_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x00ed08d9),  /*New Coords: 14.85, 35.40*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x002b0985),  /*New Coords: 2.69, 38.08*/
     gsSP1Triangle(  25, 26, 13, 25  ),
   gsSPVertex( destroyed_home_VertList_0+87,30,0  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
     gsSP2Triangles(  24, 25, 26, 24, 27, 28, 29, 27  ),
   gsSPVertex( destroyed_home_VertList_0+116,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x002608d9),  /*New Coords: 2.41, 35.40*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x00ed08d9),  /*New Coords: 14.85, 35.40*/
     gsSP2Triangles(  1, 2, 3, 1, 4, 6, 7, 4  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- destroyed_home -------------------------------------------------

 
//>-- Obj00: START ------------------------------------------ weathered_home -------------------------------------------------

Vtx weathered_home_VertList_0 [] = {
   { 77.50, -222.70, -252.46, 1, 0x0006, 0x09a4, 36, 22, 18, 255}, 
   { 56.46, -219.70, -272.64, 1, 0x0077, 0x09a4, 36, 22, 18, 255}, 
   { 26.80, -138.27, -30.78, 1, 0x0077, 0x0010, 99, 96, 87, 255}, 
   { 47.84, -141.27, -10.60, 1, 0x00e6, 0x0042, 142, 159, 145, 255}, 
   { 12.42, -157.44, -9.06, 1, 0x0092, 0x0005, 112, 106, 94, 255}, 
   { 43.49, -238.24, -250.98, 1, 0x00e0, 0x09b3, 36, 22, 18, 255}, 
   { 205.49, -170.61, -242.34, 1, 0x0006, 0x09a4, 36, 22, 18, 255}, 
   { 185.95, -167.81, -263.99, 1, 0x0077, 0x09a4, 36, 22, 18, 255}, 
   { 134.14, -96.28, -22.73, 1, 0x0077, 0x0010, 56, 35, 29, 255}, 
   { 153.68, -99.08, -1.07, 1, 0x00e6, 0x0042, 177, 219, 204, 255}, 
   { 119.03, -116.80, -2.82, 1, 0x0092, 0x0005, 112, 106, 94, 255}, 
   { 172.21, -187.64, -244.01, 1, 0x00e0, 0x09b3, 36, 22, 18, 255}, 
   { -219.85, -216.97, -243.59, 1, 0x0006, 0x09a4, 36, 22, 18, 255}, 
   { -233.59, -197.87, -261.06, 1, 0x0077, 0x09a4, 36, 22, 18, 255}, 
   { -151.25, -133.86, -26.26, 1, 0x0077, 0x0010, 56, 35, 29, 255}, 
   { -137.50, -152.95, -8.79, 1, 0x00e6, 0x0042, 181, 160, 140, 255}, 
   { -171.53, -135.59, -1.14, 1, 0x0092, 0x0005, 181, 160, 140, 255}, 
   { -252.53, -200.29, -236.24, 1, 0x00e0, 0x09b3, 36, 22, 18, 255}, 
   { -26.96, -260.13, -240.06, 1, 0x0006, 0x09a4, 36, 22, 18, 255}, 
   { -42.33, -247.07, -261.31, 1, 0x0077, 0x09a4, 36, 22, 18, 255}, 
   { -37.35, -156.93, -20.77, 1, 0x0077, 0x0010, 56, 35, 29, 255}, 
   { -21.98, -169.99, 0.48, 1, 0x00e6, 0x0042, 108, 101, 90, 255}, 
   { -60.66, -165.37, -0.00, 1, 0x0092, 0x0005, 181, 160, 140, 255}, 
   { -64.12, -255.69, -240.53, 1, 0x00e0, 0x09b3, 36, 22, 18, 255}, 
   { 206.75, -174.59, 193.11, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 246.20, 82.66, 289.53, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { 8.74, -103.88, 377.79, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { 109.00, 201.05, 286.14, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { -52.23, 186.54, 314.88, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -123.26, -124.43, 251.19, 1, 0x10ea, 0xee23, 56, 35, 29, 255}, 
   { -86.48, -45.23, 278.17, 1, 0x0d55, 0xee29, 31, 21, 17, 255}, 
   { -241.22, -22.64, 149.65, 1, 0x0d5a, 0x1fad, 95, 60, 49, 255}, 
   { -119.22, 22.21, 298.09, 1, 0x09c0, 0xee2f, 31, 21, 17, 255}, 
   { -225.40, 96.57, 172.96, 1, 0x09c5, 0x1fb3, 95, 60, 49, 255}, 
   { -73.10, 82.32, 306.13, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { 35.53, 91.53, 297.48, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { -38.64, 241.37, 184.96, 1, 0x029b, 0x1fbf, 36, 22, 18, 255}, 
   { 115.19, 40.23, 319.83, 1, 0xff00, 0xee43, 59, 48, 44, 255}, 
   { 82.27, 228.17, 170.44, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { 210.01, -71.91, 95.46, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { 139.10, -34.04, 289.96, 1, 0x1ef4, 0xee06, 31, 21, 17, 255}, 
   { 90.90, -135.54, 264.75, 1, 0x1b84, 0xee0c, 36, 22, 18, 255}, 
   { -97.66, -203.51, 97.98, 1, 0x1484, 0x1fa1, 181, 160, 140, 255}, 
   { -53.79, -175.41, 233.80, 1, 0x147f, 0xee1d, 31, 21, 17, 255}, 
   { 23.24, -216.71, 83.46, 1, 0x17f4, 0x1f9b, 112, 106, 94, 255}, 
   { 37.76, -155.86, 266.52, 1, 0x17ef, 0xee17, 31, 21, 17, 255}, 
   { 191.52, 90.52, 131.11, 1, 0x0093, 0x35f1, 93, 59, 48, 255}, 
   { 225.82, 47.30, 118.77, 1, 0xff42, 0x35e8, 117, 110, 105, 255}, 
   { 202.91, 75.30, -21.57, 1, 0xff5b, 0x508f, 117, 110, 105, 255}, 
   { -194.46, -132.47, 122.21, 1, 0x10ef, 0x1fa7, 103, 75, 63, 255}, 
   { -245.75, 8.12, 8.10, 1, 0x0d5d, 0x3f4a, 56, 35, 29, 255}, 
   { -230.55, 122.63, 30.48, 1, 0x09c8, 0x3f50, 56, 35, 29, 255}, 
   { -151.25, 193.20, 185.88, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { -159.32, 215.46, 42.90, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { -51.14, 261.73, 42.01, 1, 0x029e, 0x3f5c, 36, 22, 18, 255}, 
   { 65.01, 249.05, 28.07, 1, 0xff09, 0x3f62, 56, 35, 29, 255}, 
   { 145.56, 107.21, 203.38, 1, 0x01e4, 0x29ba, 93, 59, 48, 255}, 
   { 187.72, -39.22, -43.96, 1, 0x1efd, 0x3f2c, 177, 219, 204, 255}, 
   { 135.86, -168.54, 82.54, 1, 0x1b89, 0x1f95, 177, 219, 204, 255}, 
   { 107.28, -110.03, -30.92, 1, 0x1b8d, 0x3f32, 177, 219, 204, 255}, 
   { -200.83, -97.40, -18.27, 1, 0x10f3, 0x3f44, 56, 35, 29, 255}, 
   { -0.91, -156.31, -30.04, 1, 0x17f8, 0x3f38, 112, 106, 94, 255}, 
   { 118.66, 182.32, 157.34, 1, 0x0360, 0x35f1, 93, 59, 48, 255}, 
   { 170.73, 115.84, -9.99, 1, 0x00be, 0x3fff, 56, 35, 29, 255}, 
   { 78.77, 118.90, 16.10, 1, 0x021d, 0x3f14, 212, 187, 163, 255}, 
   { 93.08, 90.93, 127.24, 1, 0x01eb, 0x397c, 212, 187, 163, 255}, 
   { 96.48, 209.39, 16.74, 1, 0x029c, 0x1178, 56, 35, 29, 255}, 
   { -13.67, -263.58, 158.05, 1, 0x035c, 0x0c07, 129, 119, 105, 255}, 
   { 8.74, -103.88, 377.79, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -234.27, -132.56, 191.43, 1, 0x7f07, 0x0bc8, 103, 75, 63, 255}, 
   { -52.23, 186.54, 314.88, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -219.33, 99.38, 289.79, 1, 0x7f07, 0x0bf2, 57, 36, 30, 255}, 
   { 206.75, -174.59, 193.11, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { 246.20, 82.66, 289.53, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { 109.00, 201.05, 286.14, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { 8.74, -103.88, 377.79, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { -107.84, -165.64, -41.54, 1, 0x1488, 0x3f3e, 79, 51, 42, 255}, 
   { -97.66, -203.51, 97.98, 1, 0x1484, 0x1fa1, 181, 160, 140, 255}, 
};

Gfx weathered_home_Static_PolyList_0[] = { 



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

   gsSPVertex( weathered_home_VertList_0+29,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 2, 1, 3, 2  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x09c0ee31),  /*New Coords: 78.01, -35.61*/
     gsSP2Triangles(  4, 3, 5, 4, 5, 6, 7, 5  ),
     gsSP2Triangles(  6, 8, 9, 6, 10, 11, 12, 10  ),
     gsSP2Triangles(  13, 14, 0, 13, 15, 16, 14, 15  ),
     gsSP2Triangles(  17, 18, 19, 17, 20, 2, 21, 20  ),
     gsSP2Triangles(  2, 4, 22, 2, 4, 23, 24, 4  ),
     gsSP2Triangles(  23, 7, 25, 23, 7, 9, 26, 7  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x04c535ea),  /*New Coords: 38.18, 107.83*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP2Triangles(  9, 8, 27, 9, 18, 10, 28, 18  ),
   gsSPVertex( weathered_home_VertList_0+39,30,0  ),
     gsSP2Triangles(  0, 19, 20, 0, 3, 10, 21, 3  ),
   gsSPVertex( weathered_home_VertList_0+38,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x04ac5091),  /*New Coords: 37.39, 161.14*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04c535ea),  /*New Coords: 38.18, 107.83*/
     gsSP2Triangles(  17, 0, 24, 17, 25, 26, 27, 25  ),
   gsSPVertex( weathered_home_VertList_0+37,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x2289ee00),  /*New Coords: 276.31, -36.00*/
     gsSP1Triangle(  10, 0, 3, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xff4235e8),  /*New Coords: -5.92, 107.82*/
     gsSP1Triangle(  10, 9, 19, 10  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x01d533ff),  /*New Coords: 14.66, 103.99*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x00c937ec),  /*New Coords: 6.29, 111.85*/   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x030c379e),  /*New Coords: 24.39, 111.24*/
     gsSP2Triangles(  19, 9, 28, 19, 25, 28, 27, 25  ),
     gsSP1Triangle(  25, 19, 28, 25  ),
   gsSPVertex( weathered_home_VertList_0+29,30,0  ),
     gsSP1Triangle(  20, 0, 2, 20  ),
     gsSP2Triangles(  4, 2, 3, 4, 23, 4, 5, 23  ),
     gsSP2Triangles(  23, 5, 7, 23, 7, 6, 9, 7  ),
     gsSP2Triangles(  29, 10, 12, 29, 20, 13, 0, 20  ),
     gsSP1Triangle(  13, 15, 14, 13  ),
   gsSPVertex( weathered_home_VertList_0+46,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x00975097),  /*New Coords: 4.74, 161.18*/
     gsSP1Triangle(  17, 0, 2, 17  ),
     gsSP1Triangle(  14, 3, 4, 14  ),
   gsSPVertex( weathered_home_VertList_0+31,30,0  ),
     gsSP1Triangle(  19, 0, 20, 19  ),
     gsSP2Triangles(  20, 2, 22, 20, 22, 21, 23, 22  ),
     gsSP1Triangle(  23, 5, 24, 23  ),
   gsSPVertex( weathered_home_VertList_0+38,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04c535ea),  /*New Coords: 38.18, 107.83*/
     gsSP1Triangle(  24, 0, 18, 24  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x22923f26),  /*New Coords: 276.58, 126.30*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP2Triangles(  10, 9, 19, 10, 19, 1, 21, 19  ),
   gsSPVertex( weathered_home_VertList_0+60,30,0  ),
     gsSP1Triangle(  16, 17, 0, 16  ),
   gsSPVertex( weathered_home_VertList_0+55,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x03775097),  /*New Coords: 27.73, 161.19*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04ac5091),  /*New Coords: 37.39, 161.14*/
     gsSP1Triangle(  11, 0, 7, 11  ),
   gsSPVertex( weathered_home_VertList_0+46,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x00c937ec),  /*New Coords: 6.29, 111.85*/
     gsSP1Triangle(  0, 17, 19, 0  ),
   gsSPVertex( weathered_home_VertList_0+39,30,0  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x228f1f89),  /*New Coords: 276.47, 63.08*/
     gsSP1Triangle(  0, 8, 1, 0  ),
   gsSPVertex( weathered_home_VertList_0+37,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x01b9106d),  /*New Coords: 13.78, 32.85*/   gsSPModifyVertex( 29,   G_MWO_POINT_ST, 0x03523f26),  /*New Coords: 26.56, 126.30*/   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x030c379e),  /*New Coords: 24.39, 111.24*/
     gsSP2Triangles(  0, 10, 19, 0, 29, 25, 27, 29  ),


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

   gsSPVertex( weathered_home_VertList_0+42,30,0  ),
     gsSP1Triangle(  19, 2, 0, 19  ),
   gsSPVertex( weathered_home_VertList_0+61,30,0  ),
     gsSP1Triangle(  15, 0, 16, 15  ),


//>-- MATERIAL 2: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

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

   gsSPVertex( weathered_home_VertList_0+0,30,0  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  24, 25, 26, 24, 27, 28, 26, 27  ),
   gsSPVertex( weathered_home_VertList_0+58,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x16d9ff95),  /*New Coords: 45.70, -3.32*/
     gsSP2Triangles(  9, 10, 11, 9, 12, 13, 10, 12  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xc37e0bf2),  /*New Coords: -121.01, 95.58*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x35b60bf2),  /*New Coords: 107.42, 95.58*/
     gsSP1Triangle(  11, 10, 13, 11  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x16d9ff74),  /*New Coords: 45.70, -4.35*/
     gsSP1Triangle(  9, 14, 10, 9  ),
     gsSP1Triangle(  15, 16, 17, 15  ),


//>-- MATERIAL 3: START ------------------------------------ 'Homes-Wall-Cracked'-------------------------------------------------

//Last: Homes_Wall_Cracked   Current: Homes_Wall_Cracked
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Cracked,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Cracked_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( weathered_home_VertList_0+44,30,0  ),
     gsSP1Triangle(  15, 14, 0, 15  ),
   gsSPVertex( weathered_home_VertList_0+41,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x1b84ee11),  /*New Coords: 220.15, -35.86*/
     gsSP1Triangle(  0, 4, 3, 0  ),
     gsSP2Triangles(  20, 18, 3, 20, 17, 0, 3, 17  ),


//>-- MATERIAL 4: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

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

   gsSPVertex( weathered_home_VertList_0+0,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP2Triangles(  0, 1, 2, 0, 3, 2, 4, 3  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  3, 4, 5, 3  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP1Triangle(  5, 4, 2, 5  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP1Triangle(  9, 8, 10, 9  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP1Triangle(  11, 10, 8, 11  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP1Triangle(  15, 14, 16, 15  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP1Triangle(  17, 16, 14, 17  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x00180042),  /*New Coords: 1.54, 1.05*/
     gsSP1Triangle(  21, 20, 22, 21  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x00e00010),  /*New Coords: 14.05, 0.26*/
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x00770010),  /*New Coords: 7.47, 0.26*/
     gsSP1Triangle(  23, 22, 20, 23  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/
     gsSP1Triangle(  0, 3, 5, 0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP2Triangles(  1, 5, 2, 1, 9, 6, 8, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/
     gsSP2Triangles(  6, 9, 11, 6, 7, 11, 8, 7  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP1Triangle(  15, 12, 14, 15  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/
     gsSP1Triangle(  12, 15, 17, 12  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x00060010),  /*New Coords: 0.42, 0.26*/
     gsSP2Triangles(  13, 17, 14, 13, 21, 18, 20, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x015f09b3),  /*New Coords: 21.95, 38.81*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x015f0010),  /*New Coords: 21.95, 0.26*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x007709b3),  /*New Coords: 7.47, 38.81*/
     gsSP2Triangles(  18, 21, 23, 18, 19, 23, 20, 19  ),


//>-- MATERIAL 5: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

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

   gsSPVertex( weathered_home_VertList_0+53,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfcd91169),  /*New Coords: -50.42, 69.65*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff3c1477),  /*New Coords: -12.20, 81.87*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x0325fdcc),  /*New Coords: 50.34, -8.80*/
     gsSP1Triangle(  0, 1, 6, 0  ),
   gsSPVertex( weathered_home_VertList_0+51,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfb560b88),  /*New Coords: -74.59, 46.13*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xfcd91169),  /*New Coords: -50.42, 69.65*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00c1fabe),  /*New Coords: 12.12, -21.02*/
     gsSP1Triangle(  0, 2, 10, 0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x04ea0235),  /*New Coords: 78.63, 8.83*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x0325fdcc),  /*New Coords: 50.34, -8.80*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x02480bee),  /*New Coords: 36.50, 47.72*/
     gsSP1Triangle(  6, 8, 13, 6  ),
   gsSPVertex( weathered_home_VertList_0+50,30,0  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xfc39fdef),  /*New Coords: -60.38, -8.25*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xfb1c0467),  /*New Coords: -78.24, 17.62*/   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xfb560b88),  /*New Coords: -74.59, 46.13*/
     gsSP1Triangle(  10, 0, 1, 10  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x0325fdcc),  /*New Coords: 50.34, -8.80*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xff3c1477),  /*New Coords: -12.20, 81.87*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x02480bee),  /*New Coords: 36.50, 47.72*/
     gsSP1Triangle(  9, 4, 14, 9  ),
   gsSPVertex( weathered_home_VertList_0+48,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x05240956),  /*New Coords: 82.27, 37.35*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x04ea0235),  /*New Coords: 78.63, 8.83*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x02480bee),  /*New Coords: 36.50, 47.72*/
     gsSP1Triangle(  0, 9, 16, 0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x01dd13e0),  /*New Coords: 29.83, 79.51*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x00c1fabe),  /*New Coords: 12.12, -21.02*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfcd91169),  /*New Coords: -50.42, 69.65*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x0325fdcc),  /*New Coords: 50.34, -8.80*/
     gsSP2Triangles(  7, 18, 16, 7, 13, 5, 11, 13  ),
   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xfe63f9dc),  /*New Coords: -25.80, -24.55*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfb560b88),  /*New Coords: -74.59, 46.13*/
     gsSP1Triangle(  28, 3, 13, 28  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfc39fdef),  /*New Coords: -60.38, -8.25*/
     gsSP1Triangle(  28, 12, 3, 28  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x04600bcc),  /*New Coords: 70.04, 47.19*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xff3c1477),  /*New Coords: -12.20, 81.87*/
     gsSP2Triangles(  15, 0, 16, 15, 6, 7, 16, 6  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- weathered_home -------------------------------------------------

 



//>-- Obj00: START ------------------------------------------ dock_posts_2 -------------------------------------------------

Vtx dock_posts_2_VertList_0 [] = {
   { 618.14, -8.49, -366.15, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 591.62, -8.49, -15.85, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 617.85, -37.08, -13.97, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 616.98, -35.78, -366.23, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 590.45, -35.78, -15.93, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 808.92, 206.94, 18.33, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { 804.78, 168.34, 19.70, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 826.06, 185.47, 19.49, 1, 0xff08, 0xffc0, 147, 207, 162, 255}, 
   { 832.07, 173.98, -308.21, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 810.79, 156.84, -308.01, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 805.14, -33.41, -362.26, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 813.35, -25.51, -10.01, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 811.92, 13.30, -10.93, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 823.74, -13.42, -363.14, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 831.96, -5.52, -10.89, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { 526.80, 161.38, -289.68, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 537.04, 168.87, 31.79, 1, 0x0134, 0x0025, 147, 207, 162, 255}, 
   { 498.21, 168.35, 32.93, 1, 0xffca, 0x0025, 56, 41, 34, 255}, 
   { 507.24, 180.45, -289.50, 1, 0x0232, 0x13d7, 56, 41, 34, 255}, 
   { 517.48, 187.94, 31.98, 1, 0x0232, 0x0025, 56, 41, 34, 255}, 
   { 643.80, -1440.15, -827.18, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 611.63, -1426.32, -365.69, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 624.43, -1462.95, -363.81, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { 631.94, -1464.77, -827.26, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 599.78, -1450.93, -365.77, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 801.58, -843.60, -372.34, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 797.43, -882.21, -373.39, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 818.71, -865.10, -372.52, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 826.97, -851.96, -835.07, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 805.69, -869.08, -835.95, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 794.62, -1453.66, -846.87, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 803.14, -1466.04, -384.31, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 810.87, -1427.97, -383.54, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 817.41, -1438.58, -846.88, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 825.93, -1450.96, -384.32, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { 619.01, -505.05, -715.49, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 627.27, -491.22, -252.96, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 623.13, -529.83, -251.84, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 597.73, -522.16, -714.59, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 605.99, -508.33, -252.06, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 808.37, -357.98, -257.97, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 804.23, -396.20, -252.36, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 825.51, -379.19, -254.45, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 831.65, -428.75, -594.66, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 810.37, -445.76, -592.57, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 621.81, -405.31, -574.77, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 627.27, -333.39, -277.30, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 623.13, -370.95, -268.26, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 600.53, -421.87, -570.38, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 605.99, -349.95, -272.90, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { -183.04, 142.71, -156.67, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { -187.18, 104.60, -150.34, 1, 0xffbc, 0x0025, 73, 232, 212, 255}, 
   { -165.90, 121.57, -152.75, 1, 0xff08, 0xffc0, 73, 232, 212, 255}, 
   { -161.49, 81.31, -396.69, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { -182.77, 64.35, -394.28, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { -380.67, 94.27, -400.76, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -422.83, 261.00, -221.34, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -419.28, 233.00, -194.64, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -397.89, 76.87, -388.63, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -440.05, 243.60, -209.21, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 629.80, -2526.58, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 603.27, -2526.58, -402.57, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 629.50, -2555.18, -400.69, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 628.63, -2553.88, -752.96, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 602.11, -2553.88, -402.65, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 800.18, -3025.04, -368.39, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { 796.04, -3063.65, -367.02, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 817.32, -3046.51, -367.23, 1, 0xff08, 0xffc0, 147, 207, 162, 255}, 
   { 823.33, -3058.00, -694.94, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 802.05, -3075.14, -694.73, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 816.79, -2551.51, -748.99, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 825.01, -2543.61, -396.74, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 823.57, -2504.80, -397.66, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 835.40, -2531.52, -749.86, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 843.61, -2523.62, -397.62, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { 626.69, -2227.70, -676.40, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 619.84, -2217.02, -354.93, 1, 0x0134, 0x0025, 147, 207, 162, 255}, 
   { 617.98, -2255.81, -353.79, 1, 0xffca, 0x0025, 56, 41, 34, 255}, 
   { 606.45, -2246.05, -676.22, 1, 0x0232, 0x13d7, 56, 41, 34, 255}, 
   { 599.61, -2235.37, -354.74, 1, 0x0232, 0x0025, 56, 41, 34, 255}, 
   { 633.20, -3053.50, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 606.67, -3053.50, -402.57, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 632.90, -3082.10, -400.69, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 632.03, -3080.80, -752.96, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 605.51, -3080.80, -402.65, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 644.37, -37.08, -364.27, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 618.14, -8.49, -366.15, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 617.85, -37.08, -13.97, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 618.14, -8.49, -366.15, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 616.98, -35.78, -366.23, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 591.62, -8.49, -15.85, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 814.93, 195.45, -309.38, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { 808.92, 206.94, 18.33, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { 832.07, 173.98, -308.21, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 810.79, 156.84, -308.01, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 832.07, 173.98, -308.21, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 804.78, 168.34, 19.70, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 803.70, 5.40, -363.18, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 805.14, -33.41, -362.26, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 811.92, 13.30, -10.93, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 805.14, -33.41, -362.26, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 823.74, -13.42, -363.14, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 813.35, -25.51, -10.01, 1, 0xff4d, 0x0025, 147, 207, 162, 255}, 
   { 487.97, 160.86, -288.54, 1, 0xffca, 0x13d7, 56, 41, 34, 255}, 
   { 526.80, 161.38, -289.68, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 498.21, 168.35, 32.93, 1, 0xffca, 0x0025, 56, 41, 34, 255}, 
   { 526.80, 161.38, -289.68, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 507.24, 180.45, -289.50, 1, 0x0232, 0x13d7, 56, 41, 34, 255}, 
   { 537.04, 168.87, 31.79, 1, 0x0134, 0x0025, 147, 207, 162, 255}, 
   { 656.59, -1476.79, -825.30, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 643.80, -1440.15, -827.18, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 624.43, -1462.95, -363.81, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { 643.80, -1440.15, -827.18, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 631.94, -1464.77, -827.26, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 611.63, -1426.32, -365.69, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 809.83, -830.46, -834.89, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 801.58, -843.60, -372.34, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 826.97, -851.96, -835.07, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 805.69, -869.08, -835.95, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 826.97, -851.96, -835.07, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 797.43, -882.21, -373.39, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 802.35, -1415.59, -846.11, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 794.62, -1453.66, -846.87, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 810.87, -1427.97, -383.54, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 794.62, -1453.66, -846.87, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 817.41, -1438.58, -846.88, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 803.14, -1466.04, -384.31, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 614.87, -543.66, -714.37, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 619.01, -505.05, -715.49, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 623.13, -529.83, -251.84, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 619.01, -505.05, -715.49, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 597.73, -522.16, -714.59, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 627.27, -491.22, -252.96, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 814.51, -407.54, -598.17, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 808.37, -357.98, -257.97, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 831.65, -428.75, -594.66, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 810.37, -445.76, -592.57, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 831.65, -428.75, -594.66, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 804.23, -396.20, -252.36, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 617.66, -442.86, -565.73, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { 621.81, -405.31, -574.77, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 623.13, -370.95, -268.26, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 621.81, -405.31, -574.77, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 600.53, -421.87, -570.38, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 627.27, -333.39, -277.30, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { -178.63, 102.45, -400.61, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { -183.04, 142.71, -156.67, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { -161.49, 81.31, -396.69, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { -182.77, 64.35, -394.28, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { -161.49, 81.31, -396.69, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { -187.18, 104.60, -150.34, 1, 0xffbc, 0x0025, 73, 232, 212, 255}, 
   { -377.12, 66.27, -374.06, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { -380.67, 94.27, -400.76, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -419.28, 233.00, -194.64, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -380.67, 94.27, -400.76, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -397.89, 76.87, -388.63, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -422.83, 261.00, -221.34, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 656.03, -2555.18, -750.99, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 629.80, -2526.58, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 629.50, -2555.18, -400.69, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 629.80, -2526.58, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 628.63, -2553.88, -752.96, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 603.27, -2526.58, -402.57, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 806.19, -3036.54, -696.10, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { 800.18, -3025.04, -368.39, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { 823.33, -3058.00, -694.94, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 802.05, -3075.14, -694.73, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 823.33, -3058.00, -694.94, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 796.04, -3063.65, -367.02, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 815.36, -2512.70, -749.90, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 816.79, -2551.51, -748.99, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 823.57, -2504.80, -397.66, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 816.79, -2551.51, -748.99, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 835.40, -2531.52, -749.86, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 825.01, -2543.61, -396.74, 1, 0xff4d, 0x0025, 147, 207, 162, 255}, 
   { 624.83, -2266.49, -675.27, 1, 0xffca, 0x13d7, 56, 41, 34, 255}, 
   { 626.69, -2227.70, -676.40, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 617.98, -2255.81, -353.79, 1, 0xffca, 0x0025, 56, 41, 34, 255}, 
   { 626.69, -2227.70, -676.40, 1, 0x0134, 0x13d7, 56, 41, 34, 255}, 
   { 606.45, -2246.05, -676.22, 1, 0x0232, 0x13d7, 56, 41, 34, 255}, 
   { 619.84, -2217.02, -354.93, 1, 0x0134, 0x0025, 147, 207, 162, 255}, 
   { 659.43, -3082.10, -750.99, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 633.20, -3053.50, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 632.90, -3082.10, -400.69, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 633.20, -3053.50, -752.87, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 632.03, -3080.80, -752.96, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 606.67, -3053.50, -402.57, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
};

Gfx dock_posts_2_Static_PolyList_0[] = { 



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

   gsSPVertex( dock_posts_2_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 1, 3  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  2, 4, 3, 2  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  2, 1, 4, 2  ),
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x019e0025),  /*New Coords: 25.91, 0.59*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x00ba0025),  /*New Coords: 11.65, 0.59*/
     gsSP1Triangle(  5, 7, 8, 5  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  8, 7, 6, 8, 9, 6, 5, 9  ),
     gsSP2Triangles(  10, 11, 12, 10, 13, 14, 11, 13  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  12, 14, 13, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  12, 11, 14, 12  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 16, 18  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x03160025),  /*New Coords: 49.43, 0.59*/
     gsSP1Triangle(  17, 19, 18, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xffca0025),  /*New Coords: -3.32, 0.59*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x0080ffc0),  /*New Coords: 8.05, -1.00*/
     gsSP1Triangle(  17, 16, 19, 17  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 21, 23  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  22, 24, 23, 22  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  22, 21, 24, 22  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  25, 27, 28, 25  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  28, 27, 26, 28, 29, 26, 25, 29  ),
   gsSPVertex( dock_posts_2_VertList_0+29,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 2, 4  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  3, 5, 4, 3  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  3, 2, 5, 3  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 7, 9  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  8, 10, 9, 8  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  8, 7, 10, 8  ),
     gsSP1Triangle(  11, 12, 13, 11  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x016b0025),  /*New Coords: 22.72, 0.59*/
     gsSP1Triangle(  11, 13, 14, 11  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  14, 13, 12, 14, 15, 12, 11, 15  ),
     gsSP2Triangles(  16, 17, 18, 16, 19, 20, 17, 19  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP1Triangle(  18, 20, 19, 18  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xff9e0025),  /*New Coords: -6.09, 0.59*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x0054ffc0),  /*New Coords: 5.28, -1.00*/
     gsSP1Triangle(  18, 17, 20, 18  ),
     gsSP1Triangle(  21, 22, 23, 21  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x019e0025),  /*New Coords: 25.91, 0.59*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x00ba0025),  /*New Coords: 11.65, 0.59*/
     gsSP1Triangle(  21, 23, 24, 21  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  24, 23, 22, 24, 25, 22, 21, 25  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( dock_posts_2_VertList_0+56,30,0  ),
     gsSP1Triangle(  2, 3, 0, 2  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  1, 3, 2, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  1, 0, 3, 1  ),
     gsSP2Triangles(  4, 5, 6, 4, 7, 8, 5, 7  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  6, 8, 7, 6  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  6, 5, 8, 6  ),
     gsSP1Triangle(  9, 10, 11, 9  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x019e0025),  /*New Coords: 25.91, 0.59*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x00ba0025),  /*New Coords: 11.65, 0.59*/
     gsSP1Triangle(  9, 11, 12, 9  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  12, 11, 10, 12, 13, 10, 9, 13  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 18, 15, 17  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP1Triangle(  16, 18, 17, 16  ),
   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0xfde30025),  /*New Coords: -33.76, 0.59*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xfe99ffc0),  /*New Coords: -22.39, -1.00*/
     gsSP1Triangle(  16, 15, 18, 16  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 23, 20, 22  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x03160025),  /*New Coords: 49.43, 0.59*/
     gsSP1Triangle(  21, 23, 22, 21  ),
   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0xffca0025),  /*New Coords: -3.32, 0.59*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x0080ffc0),  /*New Coords: 8.05, -1.00*/
     gsSP1Triangle(  21, 20, 23, 21  ),
     gsSP2Triangles(  24, 25, 26, 24, 27, 28, 25, 27  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  26, 28, 27, 26  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 28,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  26, 25, 28, 26  ),
   gsSPVertex( dock_posts_2_VertList_0+85,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  0, 2, 4, 0, 6, 7, 8, 6  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfe5213d7),  /*New Coords: -26.84, 79.37*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  9, 10, 11, 9, 6, 9, 7, 6  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  12, 14, 16, 12, 18, 19, 20, 18  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x031613d7),  /*New Coords: 49.43, 79.37*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x03160025),  /*New Coords: 49.43, 0.59*/
     gsSP2Triangles(  21, 22, 23, 21, 18, 20, 22, 18  ),
     gsSP2Triangles(  24, 25, 26, 24, 27, 28, 29, 27  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  24, 26, 28, 24  ),
   gsSPVertex( dock_posts_2_VertList_0+114,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  4, 5, 6, 4, 1, 4, 2, 1  ),
     gsSP2Triangles(  7, 8, 9, 7, 10, 11, 12, 10  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  7, 9, 11, 7, 13, 14, 15, 13  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  16, 17, 18, 16, 13, 15, 17, 13  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 23, 24, 22  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  19, 22, 20, 19, 25, 26, 27, 25  ),
   gsSPVertex( dock_posts_2_VertList_0+142,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( dock_posts_2_VertList_0+139,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x02ea13d7),  /*New Coords: 46.67, 79.37*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP1Triangle(  0, 2, 4, 0  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 11, 9  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xfe5213d7),  /*New Coords: -26.84, 79.37*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  6, 9, 7, 6, 12, 13, 14, 12  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  15, 16, 17, 15, 12, 14, 16, 12  ),
     gsSP2Triangles(  18, 19, 20, 18, 21, 22, 23, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  18, 20, 22, 18, 24, 25, 26, 24  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0xfe5213d7),  /*New Coords: -26.84, 79.37*/   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  27, 28, 29, 27, 24, 27, 25, 24  ),
   gsSPVertex( dock_posts_2_VertList_0+168,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 6, 4  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  1, 3, 5, 1, 7, 8, 9, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x031613d7),  /*New Coords: 49.43, 79.37*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x03160025),  /*New Coords: 49.43, 0.59*/
     gsSP2Triangles(  10, 11, 12, 10, 7, 9, 11, 7  ),
     gsSP2Triangles(  13, 14, 15, 13, 16, 17, 18, 16  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/     gsSP1Triangle(  13, 15, 17, 13  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- dock_posts_2 -------------------------------------------------

 
 
//>-- Obj02: START ------------------------------------------ dock_posts_1 -------------------------------------------------

Vtx dock_posts_1_VertList_0 [] = {
   { -22.86, 11.03, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { -40.37, 11.03, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -14.14, -17.56, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { -24.02, -16.26, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { -41.53, -16.26, 113.96, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 165.24, 283.79, 107.40, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 161.09, 245.17, 106.34, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 182.37, 262.29, 107.21, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 190.63, 275.42, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 169.35, 258.31, -356.21, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 151.39, -13.90, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 151.47, -28.93, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { 179.25, -1.78, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 178.70, -14.23, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 178.79, -29.26, 95.41, 1, 0x004b, 0x0025, 147, 207, 162, 255}, 
   { -35.51, 280.03, -348.04, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -27.26, 293.86, 114.49, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -31.40, 255.24, 115.61, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -56.79, 262.91, -347.14, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -48.54, 276.74, 115.39, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 165.24, 719.30, 334.05, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 161.09, 681.08, 339.65, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 182.37, 698.09, 337.56, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 188.51, 648.53, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 167.23, 631.52, -0.55, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -32.72, 671.97, 17.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -27.26, 743.88, 314.72, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { -31.40, 706.33, 323.76, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { -54.00, 655.40, 21.64, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { -48.54, 727.32, 319.12, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { 165.24, 1226.26, 323.06, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { 161.09, 1188.16, 329.39, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 182.37, 1205.12, 326.98, 1, 0xff08, 0xffc0, 147, 207, 162, 255}, 
   { 186.79, 1164.86, 83.04, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 165.51, 1147.90, 85.45, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { -32.40, 1177.82, 78.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -74.55, 1344.55, 258.39, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -71.00, 1316.55, 285.09, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -49.62, 1160.42, 91.10, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -91.77, 1327.15, 270.52, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 3.37, -17.56, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { -24.02, -16.26, -116.79, 1, 0x016b, 0x09fe, 73, 232, 212, 255}, 
   { -6.52, -16.26, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -22.86, 11.03, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
   { -5.35, 11.03, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -14.14, -17.56, 115.92, 1, 0xff03, 0x0025, 117, 164, 129, 255}, 
   { -40.37, 11.03, 114.04, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 173.49, 296.92, -355.16, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 165.24, 283.79, 107.40, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 190.63, 275.42, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 169.35, 258.31, -356.21, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 190.63, 275.42, -355.34, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 161.09, 245.17, 106.34, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 179.17, 13.25, -366.38, 1, 0xfde3, 0x13d7, 56, 41, 34, 255}, 
   { 151.39, -13.90, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 179.25, -1.78, 96.19, 1, 0xfde3, 0x0025, 56, 41, 34, 255}, 
   { 151.39, -13.90, -367.14, 1, 0xff4d, 0x13d7, 56, 41, 34, 255}, 
   { 178.70, -14.23, -367.15, 1, 0x004b, 0x13d7, 56, 41, 34, 255}, 
   { 151.47, -28.93, 95.43, 1, 0xff4d, 0x0025, 56, 41, 34, 255}, 
   { -39.66, 241.41, -346.92, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { -35.51, 280.03, -348.04, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -31.40, 255.24, 115.61, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -35.51, 280.03, -348.04, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -56.79, 262.91, -347.14, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -27.26, 293.86, 114.49, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 171.37, 669.74, -6.16, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 165.24, 719.30, 334.05, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 188.51, 648.53, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 167.23, 631.52, -0.55, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 188.51, 648.53, -2.64, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 161.09, 681.08, 339.65, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { -36.86, 634.41, 26.28, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { -32.72, 671.97, 17.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -31.40, 706.33, 323.76, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { -32.72, 671.97, 17.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { -54.00, 655.40, 21.64, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { -27.26, 743.88, 314.72, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 169.65, 1186.00, 79.13, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { 165.24, 1226.26, 323.06, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { 186.79, 1164.86, 83.04, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 165.51, 1147.90, 85.45, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 186.79, 1164.86, 83.04, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 161.09, 1188.16, 329.39, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { -28.85, 1149.82, 105.67, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { -32.40, 1177.82, 78.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -71.00, 1316.55, 285.09, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { -32.40, 1177.82, 78.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -49.62, 1160.42, 91.10, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -74.55, 1344.55, 258.39, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 20.88, -17.56, -345.57, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 3.37, -17.56, -114.82, 1, 0x024f, 0x09fe, 86, 102, 81, 255}, 
   { -6.52, -16.26, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -5.35, 11.03, -347.44, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { -6.52, -16.26, -347.53, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { -22.86, 11.03, -116.70, 1, 0x006d, 0x09fe, 62, 111, 100, 255}, 
};

Gfx dock_posts_1_Static_PolyList_0[] = { 



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

   gsSPVertex( dock_posts_1_VertList_0+0,30,0  ),
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
   gsSPVertex( dock_posts_1_VertList_0+29,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x019e0025),  /*New Coords: 25.91, 0.59*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x00ba0025),  /*New Coords: 11.65, 0.59*/
     gsSP2Triangles(  1, 2, 3, 1, 1, 3, 4, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  4, 3, 2, 4, 5, 2, 1, 5  ),
     gsSP2Triangles(  6, 7, 8, 6, 9, 10, 7, 9  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP1Triangle(  8, 10, 9, 8  ),
   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  8, 7, 10, 8  ),
     gsSP2Triangles(  11, 12, 13, 11, 13, 12, 14, 13  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  15, 14, 11, 15, 11, 14, 16, 11  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x024f09fe),  /*New Coords: 36.98, 39.98*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  14, 12, 17, 14, 11, 16, 12, 11  ),
     gsSP2Triangles(  18, 19, 20, 18, 21, 22, 23, 21  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  18, 21, 19, 18, 24, 25, 26, 24  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x012f13d7),  /*New Coords: 18.99, 79.37*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x012f0025),  /*New Coords: 18.99, 0.59*/
     gsSP2Triangles(  27, 28, 29, 27, 24, 26, 28, 24  ),
   gsSPVertex( dock_posts_1_VertList_0+58,30,0  ),
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 6, 4  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  1, 3, 5, 1, 7, 8, 9, 7  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  10, 11, 12, 10, 7, 10, 8, 7  ),
     gsSP2Triangles(  13, 14, 15, 13, 16, 17, 18, 16  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x02ea13d7),  /*New Coords: 46.67, 79.37*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x02ea0025),  /*New Coords: 46.66, 0.59*/
     gsSP2Triangles(  13, 15, 17, 13, 19, 20, 21, 19  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xfe5213d7),  /*New Coords: -26.84, 79.37*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  22, 23, 24, 22, 19, 22, 20, 19  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( dock_posts_1_VertList_0+86,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( dock_posts_1_VertList_0+83,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x024f13d7),  /*New Coords: 36.98, 79.37*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x024f0025),  /*New Coords: 36.98, 0.59*/
     gsSP2Triangles(  0, 2, 4, 0, 6, 7, 8, 6  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xff0309fe),  /*New Coords: -15.77, 39.98*/
     gsSP2Triangles(  9, 10, 11, 9, 6, 9, 7, 6  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj02: END ------------------------------------------- dock_posts_1 -------------------------------------------------

 

//>-- Obj00: START ------------------------------------------ rotting_dock -------------------------------------------------

Vtx rotting_dock_VertList_0 [] = {
   { -97.60, -250.00, -11.62, 1, 0x000c, 0x3a9b, 47, 54, 47, 255}, 
   { 97.60, -250.00, 19.69, 1, 0x03ec, 0x3a9b, 103, 140, 112, 255}, 
   { 97.60, 250.00, 0.00, 1, 0x03ec, 0xe89a, 74, 95, 78, 255}, 
   { -97.51, -649.32, -211.86, 1, 0x000d, 0x7c19, 47, 54, 47, 255}, 
   { 97.52, -649.32, -203.59, 1, 0x03eb, 0x7c19, 142, 200, 157, 255}, 
   { -94.41, -761.89, -232.20, 1, 0x0007, 0x1a06, 47, 54, 47, 255}, 
   { -92.62, -939.41, -245.02, 1, 0x0026, 0xabad, 74, 95, 78, 255}, 
   { 102.40, -939.41, -219.67, 1, 0x0404, 0xabad, 82, 107, 87, 255}, 
   { 430.23, -939.41, -354.56, 1, 0x0009, 0x1c73, 147, 207, 162, 255}, 
   { 428.44, -761.89, -354.56, 1, 0x03e6, 0x1c29, 142, 200, 157, 255}, 
   { 548.60, -939.41, -354.56, 1, 0x0009, 0x2f8d, 147, 207, 162, 255}, 
   { 546.81, -761.89, -369.28, 1, 0x03e6, 0x2f43, 142, 200, 157, 255}, 
   { 727.20, -939.41, -354.56, 1, 0x0009, 0x4c5f, 142, 200, 157, 255}, 
   { 725.40, -761.89, -380.79, 1, 0x03e6, 0x4c15, 120, 161, 143, 255}, 
   { 548.60, -1293.33, -541.76, 1, 0x0007, 0x14b2, 123, 171, 135, 255}, 
   { 727.20, -1293.33, -554.39, 1, 0x03ef, 0x14b2, 142, 200, 157, 255}, 
   { 547.24, -1411.00, -557.31, 1, 0x0000, 0x28b6, 125, 174, 137, 255}, 
   { 726.15, -1410.93, -573.99, 1, 0x03ea, 0x28b3, 144, 203, 159, 255}, 
   { 547.87, -1799.02, -694.66, 1, 0x0003, 0x6ab8, 113, 155, 123, 255}, 
   { 727.20, -3165.76, -693.61, 1, 0x03d9, 0x5dff, 161, 224, 185, 255}, 
   { 548.33, -3164.84, -684.64, 1, 0x0010, 0x5ddd, 161, 224, 185, 255}, 
   { 548.60, -3997.43, -692.85, 1, 0x0011, 0xd6de, 161, 224, 185, 255}, 
   { -97.60, 250.00, -40.97, 1, 0x000c, 0xe89a, 47, 54, 47, 255}, 
   { 97.60, 509.80, -77.94, 1, 0x03ec, 0xbdff, 47, 54, 47, 255}, 
   { 727.20, -1801.46, -678.53, 1, 0x03d9, 0x97b7, 147, 207, 162, 255}, 
   { 548.24, -2898.23, -686.60, 1, 0x000f, 0x371d, 161, 224, 185, 255}, 
   { 727.20, -2899.45, -706.39, 1, 0x03d9, 0x374b, 161, 224, 185, 255}, 
   { 100.61, -761.89, -203.46, 1, 0x00fe, 0x1a06, 82, 107, 87, 255}, 
   { 727.20, -3997.43, -678.53, 1, 0x03d9, 0xd6de, 161, 224, 185, 255}, 
   { -97.60, 509.80, -118.91, 1, 0x000c, 0xbdff, 47, 54, 47, 255}, 
};

Gfx rotting_dock_Static_PolyList_0[] = { 



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

   gsSPVertex( rotting_dock_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 0, 3, 4, 0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x001c8e8f),  /*New Coords: 0.90, 285.12*/
     gsSP1Triangle(  5, 6, 7, 5  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0009e78c),  /*New Coords: 0.28, -48.91*/
     gsSP1Triangle(  7, 8, 9, 7  ),
     gsSP2Triangles(  8, 10, 11, 8, 10, 12, 13, 10  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x03efd87d),  /*New Coords: 31.50, -79.02*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0007d87d),  /*New Coords: 0.25, -79.02*/
     gsSP2Triangles(  12, 10, 14, 12, 15, 14, 16, 15  ),
     gsSP2Triangles(  17, 16, 18, 17, 19, 20, 21, 19  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x000d975c),  /*New Coords: 0.42, -209.27*/
     gsSP2Triangles(  22, 2, 23, 22, 24, 18, 25, 24  ),
     gsSP2Triangles(  26, 25, 20, 26, 22, 0, 2, 22  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x03fb8e8f),  /*New Coords: 31.86, 285.12*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0404abad),  /*New Coords: 32.14, 343.35*/
     gsSP2Triangles(  1, 0, 4, 1, 27, 5, 7, 27  ),
   gsSPModifyVertex( 27,   G_MWO_POINT_ST, 0x03e6e742),  /*New Coords: 31.20, -49.48*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x0009e78c),  /*New Coords: 0.28, -48.91*/
     gsSP2Triangles(  27, 7, 9, 27, 9, 8, 11, 9  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00092f8d),  /*New Coords: 0.28, 95.10*/
     gsSP2Triangles(  11, 10, 13, 11, 15, 12, 14, 15  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x03ef6b23),  /*New Coords: 31.50, 214.27*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x00036ab8),  /*New Coords: 0.12, 213.44*/
     gsSP2Triangles(  17, 15, 16, 17, 24, 17, 18, 24  ),
     gsSP2Triangles(  28, 19, 21, 28, 29, 22, 23, 29  ),
   gsSPModifyVertex( 24,   G_MWO_POINT_ST, 0x03d997b7),  /*New Coords: 30.81, -208.56*/
     gsSP2Triangles(  26, 24, 25, 26, 19, 26, 20, 19  ),


//>-- MATERIAL 2: START ------------------------------------ 'Wood-Dock-Pillar-Solid'-------------------------------------------------

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

   gsSPVertex( rotting_dock_VertList_0+0,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x00fa1568),  /*New Coords: 15.68, 85.64*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x00031568),  /*New Coords: 0.21, 85.64*/
     gsSP2Triangles(  4, 3, 5, 4, 27, 4, 5, 27  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- rotting_dock -------------------------------------------------

 
 
 
 
 

 
 
 
//>-- Obj00: START ------------------------------------------ oceanwater -------------------------------------------------




//>-- Obj00: START ------------------------------------------ ocean_water -------------------------------------------------

Vtx ocean_water_VertList_0 [] = {
   { 2669.48, -177.24, -168.88, 1, 0x29cd, 0xebfe, 103, 156, 126, 255}, 
   { 5495.95, 482.91, -168.88, 1, 0x4809, 0xeba9, 30, 53, 64, 255}, 
   { 4407.67, 1887.28, -168.88, 1, 0x4023, 0xdaec, 30, 53, 64, 255}, 
   { -3610.84, -1572.07, -168.88, 1, 0xe6ca, 0xebfe, 103, 156, 126, 255}, 
   { -3966.10, 27.50, -168.88, 1, 0xe6ca, 0xdaec, 88, 120, 112, 255}, 
   { -6059.54, -437.44, -168.88, 1, 0xd073, 0xdaec, 30, 53, 64, 255}, 
   { -1517.40, -1107.13, -168.88, 1, 0xfd20, 0xebfe, 103, 156, 126, 255}, 
   { -1872.66, 492.44, -168.88, 1, 0xfd20, 0xdaec, 88, 120, 112, 255}, 
   { 576.04, -642.18, -168.88, 1, 0x1377, 0xebfe, 103, 156, 126, 255}, 
   { 220.79, 957.39, -168.88, 1, 0x1377, 0xdaec, 88, 120, 112, 255}, 
   { 2314.23, 1422.33, -168.88, 1, 0x29cd, 0xdaec, 88, 120, 112, 255}, 
   { 3807.37, -5464.22, -168.88, 1, 0x296e, 0x2453, 59, 104, 126, 255}, 
   { 3471.21, -3882.99, -168.88, 1, 0x2996, 0x137c, 30, 53, 64, 255}, 
   { 1377.77, -4347.93, -168.88, 1, 0x133f, 0x137c, 30, 53, 64, 255}, 
   { 3130.70, -2288.97, -168.88, 1, 0x29b9, 0x0281, 40, 70, 85, 255}, 
   { 1037.26, -2753.91, -168.88, 1, 0x1362, 0x0281, 40, 70, 85, 255}, 
   { 1713.93, -5929.17, -168.88, 1, 0x1318, 0x2453, 39, 70, 84, 255}, 
   { -715.67, -4812.88, -168.88, 1, 0xfce9, 0x137c, 30, 53, 64, 255}, 
   { -1056.18, -3218.86, -168.88, 1, 0xfd0c, 0x0281, 40, 70, 85, 255}, 
   { -379.51, -6394.11, -168.88, 1, 0xfcc2, 0x2453, 39, 70, 84, 255}, 
   { -2809.11, -5277.82, -168.88, 1, 0xe692, 0x137c, 30, 53, 64, 255}, 
   { -3149.62, -3683.80, -168.88, 1, 0xe6b5, 0x0281, 30, 53, 64, 255}, 
   { -5326.76, -7484.93, -168.88, 1, 0xc7fc, 0x243e, 109, 176, 217, 255}, 
   { -2472.95, -6859.06, -168.88, 1, 0xe66b, 0x2453, 59, 104, 126, 255}, 
   { -6407.57, -4396.03, -168.88, 1, 0xc3f8, 0x0264, 40, 70, 85, 255}, 
   { -6464.65, -2197.95, -168.88, 1, 0xc85b, 0xebe9, 30, 53, 64, 255}, 
   { 6633.84, -4804.08, -168.88, 1, 0x47aa, 0x23fe, 109, 176, 217, 255}, 
   { 6607.93, -3156.55, -168.88, 1, 0x4b1f, 0x132e, 59, 100, 122, 255}, 
   { 6267.42, -1562.53, -168.88, 1, 0x4b42, 0x0234, 40, 70, 85, 255}, 
   { 6159.73, -6207.05, -168.88, 1, 0x3fad, 0x3130, 109, 176, 217, 255}, 
   { -4307.48, -8531.77, -168.88, 1, 0xcffc, 0x3130, 109, 176, 217, 255}, 
   { -2038.07, -8859.48, -168.88, 1, 0xe653, 0x39a5, 109, 176, 217, 255}, 
   { 163.34, -8880.89, -168.88, 1, 0xfca9, 0x3ed6, 109, 176, 217, 255}, 
   { 2256.78, -8415.94, -168.88, 1, 0x12ff, 0x3ed6, 109, 176, 217, 255}, 
   { 4242.26, -7464.65, -168.88, 1, 0x2956, 0x39a5, 109, 176, 217, 255}, 
   { -6067.06, -5990.06, -168.88, 1, 0xc3d5, 0x135e, 59, 100, 122, 255}, 
};


void ocean_water_PolyList( u8 animFrame ){ 

   Vtx *ocean_water_VTXPointer = &ocean_water_VertList_0[0]; 



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
   TEX_ANIM_OFFSET(glistp, 64, 64, animCoordCycleH*0, animCoordCycleV*-1 );
   gDPSetPrimColor(glistp++,  1,255,0,1,32,255  );

   gSPVertex(glistp++,  ocean_water_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 7, 4, 6, 8, 9, 7, 8  );
     gSP2Triangles(glistp++,   0, 10, 9, 0, 11, 12, 13, 11  );
     gSP2Triangles(glistp++,   12, 14, 15, 12, 14, 0, 8, 14  );
     gSP2Triangles(glistp++,   16, 13, 17, 16, 13, 15, 18, 13  );
     gSP2Triangles(glistp++,   15, 8, 6, 15, 19, 17, 20, 19  );
     gSP2Triangles(glistp++,   17, 18, 21, 17, 18, 6, 3, 18  );
     gSP2Triangles(glistp++,   22, 23, 20, 22, 20, 21, 24, 20  );
     gSP2Triangles(glistp++,   21, 3, 25, 21, 26, 27, 12, 26  );
     gSP2Triangles(glistp++,   27, 28, 14, 27, 14, 28, 1, 14  );
     gSP1Triangle(glistp++,   29, 26, 11, 29  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+23,30,0  );
     gSP1Triangle(glistp++,   7, 8, 0, 7  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+19,30,0  );
     gSP1Triangle(glistp++,   12, 13, 0, 12  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+16,30,0  );
     gSP1Triangle(glistp++,   17, 0, 3, 17  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+11,30,0  );
     gSP1Triangle(glistp++,   23, 0, 5, 23  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+0,30,0  );
     gSP1Triangle(glistp++,   10, 0, 2, 10  );
     gSP2Triangles(glistp++,   25, 3, 5, 25, 3, 6, 4, 3  );
     gSP2Triangles(glistp++,   6, 8, 7, 6, 8, 0, 9, 8  );
     gSP2Triangles(glistp++,   16, 11, 13, 16, 13, 12, 15, 13  );
     gSP2Triangles(glistp++,   15, 14, 8, 15, 19, 16, 17, 19  );
     gSP2Triangles(glistp++,   17, 13, 18, 17, 18, 15, 6, 18  );
     gSP2Triangles(glistp++,   23, 19, 20, 23, 20, 17, 21, 20  );
     gSP1Triangle(glistp++,   21, 18, 3, 21  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+20,30,0  );
     gSP1Triangle(glistp++,   15, 2, 0, 15  );
     gSP2Triangles(glistp++,   15, 0, 4, 15, 4, 1, 5, 4  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+11,30,0  );
     gSP2Triangles(glistp++,   0, 15, 1, 0, 1, 16, 3, 1  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+0,30,0  );
     gSP1Triangle(glistp++,   0, 14, 1, 0  );
   gSPVertex(glistp++,  ocean_water_VTXPointer+11,30,0  );
     gSP1Triangle(glistp++,   23, 18, 0, 23  );
     gSP2Triangles(glistp++,   11, 19, 12, 11, 12, 20, 8, 12  );
     gSP2Triangles(glistp++,   21, 22, 8, 21, 22, 23, 5, 22  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- ocean_water -------------------------------------------------

 
 
 
 
 
//>-- Obj03: START ------------------------------------------ dock_net -------------------------------------------------

Vtx dock_net_VertList_0 [] = {
   { 46.77, -135.18, -238.33, 1, 0x0485, 0x225d, 42, 59, 46, 255}, 
   { 88.54, -144.73, -184.07, 1, 0x0709, 0x0cbe, 42, 59, 46, 255}, 
   { 90.88, -150.12, -188.20, 1, 0x072d, 0x0e63, 42, 59, 46, 255}, 
   { 8.20, -149.09, -240.29, 1, 0x0233, 0x2326, 100, 139, 109, 255}, 
   { 38.35, -152.69, -220.23, 1, 0x0404, 0x1b27, 100, 139, 109, 255}, 
   { 7.27, -136.79, -265.36, 1, 0x0225, 0x2d22, 42, 59, 46, 255}, 
   { 55.40, -155.11, -253.59, 1, 0x050a, 0x2872, 42, 59, 46, 255}, 
   { 46.99, -172.62, -235.50, 1, 0x0489, 0x213c, 164, 229, 180, 255}, 
   { 8.16, -174.17, -252.60, 1, 0x0232, 0x280d, 164, 229, 180, 255}, 
   { 7.23, -161.87, -277.66, 1, 0x0224, 0x320a, 100, 139, 109, 255}, 
   { 88.60, -154.85, -183.31, 1, 0x070a, 0x0c70, 42, 59, 46, 255}, 
   { 86.27, -149.46, -179.18, 1, 0x06e6, 0x0acb, 42, 59, 46, 255}, 
   { -34.13, -136.07, -244.54, 1, 0xffa7, 0x24d6, 42, 59, 46, 255}, 
   { -38.97, -156.18, -261.18, 1, 0xff5c, 0x2b78, 100, 139, 109, 255}, 
   { -86.90, -152.52, -206.34, 1, 0xfc79, 0x159d, 42, 59, 46, 255}, 
   { -33.91, -173.51, -241.71, 1, 0xffaa, 0x23b6, 142, 198, 155, 255}, 
   { -29.08, -153.40, -225.07, 1, 0xfff4, 0x1d14, 142, 198, 155, 255}, 
   { -84.22, -151.76, -196.57, 1, 0xfca3, 0x11b9, 100, 139, 109, 255}, 
   { -85.53, -157.20, -201.07, 1, 0xfc8e, 0x1384, 44, 62, 48, 255}, 
   { -85.59, -147.08, -201.83, 1, 0xfc8e, 0x13d2, 100, 139, 109, 255}, 
   { -92.10, 130.86, -199.04, 1, 0xfcca, 0x06d5, 47, 54, 47, 255}, 
   { -111.02, 118.48, -189.04, 1, 0xfd48, 0x046c, 47, 54, 47, 255}, 
   { -102.09, 116.99, -179.32, 1, 0xfd58, 0x0215, 47, 54, 47, 255}, 
   { -93.43, 92.92, -203.54, 1, 0xfe4e, 0x07eb, 65, 83, 68, 255}, 
   { -107.03, 92.45, -178.58, 1, 0xfe53, 0x01e7, 65, 83, 68, 255}, 
   { -102.29, 71.34, -196.76, 1, 0xff2b, 0x0649, 159, 222, 175, 255}, 
   { -128.97, 95.66, -187.68, 1, 0xfe32, 0x0418, 65, 83, 68, 255}, 
   { -115.74, 71.22, -220.85, 1, 0xff2c, 0x0c16, 47, 54, 47, 255}, 
   { -109.90, 50.10, -236.63, 1, 0x0005, 0x0fe4, 73, 97, 78, 255}, 
   { -98.43, 47.79, -206.12, 1, 0x001c, 0x088a, 159, 222, 175, 255}, 
   { -108.64, -8.19, -248.26, 1, 0x025a, 0x12b1, 111, 156, 123, 255}, 
   { -113.68, -78.03, -238.35, 1, 0x0525, 0x104e, 58, 81, 64, 255}, 
   { -103.50, -75.18, -207.61, 1, 0x0508, 0x08e6, 159, 222, 175, 255}, 
   { -101.63, 2.21, -217.16, 1, 0x01ef, 0x0b33, 159, 222, 175, 255}, 
   { -105.59, -126.45, -198.33, 1, 0x0715, 0x06a9, 47, 54, 47, 255}, 
   { -96.80, -123.26, -192.47, 1, 0x06f4, 0x0540, 47, 54, 47, 255}, 
   { -99.52, -101.97, -195.06, 1, 0x061a, 0x05e0, 50, 59, 51, 255}, 
   { -92.92, -80.21, -228.24, 1, 0x053b, 0x0dde, 65, 83, 68, 255}, 
   { -91.80, 11.37, -229.05, 1, 0x0191, 0x0e10, 109, 154, 121, 255}, 
   { -88.02, -123.66, -214.90, 1, 0x06f8, 0x0aa8, 47, 54, 47, 255}, 
   { -90.46, -103.77, -222.16, 1, 0x062c, 0x0c67, 65, 83, 68, 255}, 
   { -89.05, 47.61, -229.42, 1, 0x001e, 0x0e28, 65, 83, 68, 255}, 
   { -93.38, 72.24, -215.38, 1, 0xff22, 0x0ac5, 65, 83, 68, 255}, 
   { -120.25, -100.05, -219.66, 1, 0x0606, 0x0bcd, 50, 59, 51, 255}, 
   { -113.25, -48.65, -397.79, 1, 0x03f8, 0x36ba, 104, 174, 154, 255}, 
   { -105.59, -126.13, -367.29, 1, 0x0711, 0x2f60, 113, 201, 181, 255}, 
   { -108.70, 53.88, -389.73, 1, 0xffde, 0x34c8, 92, 128, 100, 255}, 
   { -104.16, 5.67, -405.17, 1, 0x01cc, 0x3881, 111, 156, 123, 255}, 
   { -111.02, 108.91, -347.01, 1, 0xfdaa, 0x2a7d, 65, 83, 68, 255}, 
   { -115.43, 49.44, -405.17, 1, 0x000b, 0x3881, 105, 147, 116, 255}, 
   { -110.99, 100.04, -370.54, 1, 0xfe05, 0x3029, 65, 83, 68, 255}, 
   { -111.25, 5.11, -419.37, 1, 0x01d1, 0x3bed, 92, 128, 100, 255}, 
   { -119.61, -44.84, -412.58, 1, 0x03d1, 0x3a4a, 104, 174, 154, 255}, 
   { -102.72, -116.08, -389.19, 1, 0x06aa, 0x34a7, 113, 201, 181, 255}, 
};

Gfx dock_net_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'beach-net-wrapped'-------------------------------------------------

//Last:    Current: beach_net
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   beach_net,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 1,2 ),
   gsDPLoadTLUT_pal16(   0, beach_net_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( dock_net_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 0, 3  ),
     gsSP2Triangles(  5, 0, 6, 5, 7, 4, 3, 7  ),
     gsSP2Triangles(  8, 9, 6, 8, 10, 11, 4, 10  ),
     gsSP2Triangles(  2, 10, 7, 2, 4, 11, 1, 4  ),
     gsSP2Triangles(  12, 13, 14, 12, 3, 5, 12, 3  ),
     gsSP2Triangles(  13, 12, 5, 13, 15, 8, 3, 15  ),
     gsSP2Triangles(  13, 9, 8, 13, 16, 17, 18, 16  ),
     gsSP2Triangles(  15, 18, 14, 15, 16, 12, 19, 16  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 24, 25, 23  ),
     gsSP2Triangles(  23, 20, 22, 23, 26, 27, 25, 26  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( dock_net_VertList_0+29,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( dock_net_VertList_0+21,30,0  ),
     gsSP2Triangles(  0, 5, 3, 0, 7, 9, 12, 7  ),
     gsSP2Triangles(  13, 14, 15, 13, 16, 17, 12, 16  ),
     gsSP2Triangles(  13, 18, 14, 13, 18, 19, 15, 18  ),
     gsSP2Triangles(  17, 20, 8, 17, 21, 4, 8, 21  ),
     gsSP2Triangles(  22, 23, 24, 22, 6, 5, 25, 6  ),
     gsSP2Triangles(  7, 6, 25, 7, 9, 26, 23, 9  ),
     gsSP2Triangles(  5, 0, 27, 5, 9, 7, 25, 9  ),
     gsSP2Triangles(  22, 15, 11, 22, 22, 10, 23, 22  ),
     gsSP2Triangles(  19, 16, 11, 19, 26, 25, 28, 26  ),
     gsSP1Triangle(  25, 27, 29, 25  ),
   gsSPVertex( dock_net_VertList_0+47,30,0  ),
     gsSP1Triangle(  0, 4, 5, 0  ),
   gsSPVertex( dock_net_VertList_0+44,30,0  ),
     gsSP1Triangle(  0, 8, 9, 0  ),
   gsSPVertex( dock_net_VertList_0+0,30,0  ),
     gsSP1Triangle(  6, 0, 2, 6  ),
     gsSP2Triangles(  5, 3, 0, 5, 9, 5, 6, 9  ),
     gsSP2Triangles(  8, 7, 3, 8, 7, 8, 6, 7  ),
     gsSP2Triangles(  7, 10, 4, 7, 6, 2, 7, 6  ),
     gsSP2Triangles(  0, 4, 1, 0, 19, 12, 14, 19  ),
     gsSP2Triangles(  16, 3, 12, 16, 9, 13, 5, 9  ),
     gsSP2Triangles(  16, 15, 3, 16, 15, 13, 8, 15  ),
     gsSP2Triangles(  15, 16, 18, 15, 13, 15, 14, 13  ),
     gsSP1Triangle(  17, 16, 19, 17  ),
   gsSPVertex( dock_net_VertList_0+23,30,0  ),
     gsSP1Triangle(  19, 0, 2, 19  ),
   gsSPVertex( dock_net_VertList_0+22,30,0  ),
     gsSP2Triangles(  2, 1, 0, 2, 2, 4, 3, 2  ),
     gsSP2Triangles(  3, 5, 7, 3, 11, 8, 10, 11  ),
   gsSPVertex( dock_net_VertList_0+21,30,0  ),
     gsSP2Triangles(  1, 0, 3, 1, 8, 7, 12, 8  ),
     gsSP2Triangles(  22, 13, 15, 22, 11, 16, 12, 11  ),
     gsSP2Triangles(  14, 18, 15, 14, 12, 17, 8, 12  ),
     gsSP2Triangles(  20, 21, 8, 20, 13, 22, 24, 13  ),
     gsSP2Triangles(  10, 9, 23, 10, 25, 5, 27, 25  ),
     gsSP2Triangles(  26, 9, 25, 26, 10, 22, 11, 10  ),
     gsSP1Triangle(  15, 19, 11, 15  ),
   gsSPVertex( dock_net_VertList_0+47,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( dock_net_VertList_0+46,30,0  ),
     gsSP1Triangle(  3, 0, 4, 3  ),
   gsSPVertex( dock_net_VertList_0+44,30,0  ),
     gsSP1Triangle(  0, 3, 8, 0  ),
     gsSP1Triangle(  1, 0, 9, 1  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj03: END ------------------------------------------- dock_net -------------------------------------------------

 
 
//>-- Obj00: START ------------------------------------------ beach_boat -------------------------------------------------

Vtx beach_boat_VertList_0 [] = {
   { 70.18, 383.29, -27.35, 1, 0x0b29, 0x07d6, 100, 100, 100, 255}, 
   { 0.00, 306.07, -113.20, 1, 0x19ce, 0x0fc2, 8, 8, 8, 255}, 
   { 0.00, 383.29, -27.35, 1, 0x223a, 0x07b7, 97, 97, 97, 255}, 
   { 149.27, 94.59, 22.11, 1, 0x17b0, 0x00f9, 255, 255, 255, 255}, 
   { 133.16, 78.68, 22.11, 1, 0x1b99, 0x0056, 84, 84, 88, 255}, 
   { 133.16, -93.76, 22.11, 1, 0x3d6d, 0x0056, 84, 84, 88, 255}, 
   { 70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { 111.85, 94.59, -29.99, 1, 0x1879, 0x05a5, 162, 162, 162, 255}, 
   { 149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 255, 255, 255, 255}, 
   { 120.38, -159.04, -29.99, 1, 0x0431, 0x0782, 162, 162, 162, 255}, 
   { 0.00, -116.89, -113.20, 1, 0x0bd0, 0x0fa9, 8, 8, 8, 255}, 
   { 0.00, 379.87, 35.34, 1, 0xd429, 0x0003, 255, 255, 255, 255}, 
   { 60.18, 330.36, -22.78, 1, 0xea38, 0x04bd, 8, 8, 8, 255}, 
   { 0.00, 370.70, 19.67, 1, 0x3ec7, 0x0660, 57, 57, 57, 255}, 
   { 0.00, 338.63, 19.67, 1, 0x3c08, 0x0660, 255, 255, 255, 255}, 
   { 38.20, 338.63, 19.67, 1, 0x3c08, 0x04bd, 255, 255, 255, 255}, 
   { -133.16, 78.68, 22.11, 1, 0x2333, 0x0084, 8, 8, 8, 255}, 
   { -133.16, -93.76, 22.11, 1, 0x19d5, 0x0084, 8, 8, 8, 255}, 
   { 3.74, -93.33, 21.61, 1, 0x19d5, 0x0660, 255, 255, 255, 255}, 
   { -70.18, 383.29, -27.35, 1, 0x394c, 0x0798, 97, 97, 97, 255}, 
   { -11.46, -328.36, 48.31, 1, 0x6ce8, 0x0027, 84, 84, 88, 255}, 
   { -149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 162, 162, 162, 255}, 
   { -149.27, 94.59, 22.11, 1, 0x1879, 0x0056, 162, 162, 162, 255}, 
   { -111.85, 94.59, -29.99, 1, 0x1879, 0x05a5, 97, 97, 97, 255}, 
   { -70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { -120.37, -159.04, -29.99, 1, 0x4c4e, 0x05a5, 97, 97, 97, 255}, 
   { 0.00, 94.59, -113.20, 1, 0x2a66, 0x0fa9, 8, 8, 8, 255}, 
   { 0.00, 115.71, 19.67, 1, 0x25f3, 0x0660, 255, 255, 255, 255}, 
   { 101.98, 116.06, 19.67, 1, 0x25f3, 0x0211, 255, 255, 255, 255}, 
   { 58.78, 370.70, 19.67, 1, 0x3ec7, 0x03db, 57, 57, 57, 255}, 
   { -38.20, 338.63, 19.67, 1, 0x3c08, 0x04bb, 255, 255, 255, 255}, 
   { 11.46, -341.30, 45.33, 1, 0x3cd8, 0x05c6, 162, 162, 162, 255}, 
   { 11.46, -340.15, 69.86, 1, 0x476b, 0x05c6, 249, 249, 249, 255}, 
   { 0.00, -340.15, 69.86, 1, 0x476b, 0x043a, 240, 240, 240, 255}, 
   { 0.00, -328.36, 48.31, 1, 0x3e37, 0x043a, 88, 88, 92, 255}, 
   { 0.00, -278.79, -113.20, 1, 0xf417, 0x043a, 13, 13, 13, 255}, 
   { 0.00, -324.42, -27.74, 1, 0x12ee, 0x043a, 100, 100, 100, 255}, 
   { -11.46, -323.14, -27.40, 1, 0x12ee, 0x0199, 0, 0, 0, 255}, 
   { 0.00, -341.30, 45.33, 1, 0x3cd8, 0x043a, 91, 91, 91, 255}, 
   { 0.00, -82.54, -22.78, 1, 0x18aa, 0x0409, 8, 8, 8, 255}, 
   { 0.00, -284.98, -22.78, 1, 0x0c79, 0x0409, 8, 8, 8, 255}, 
   { 22.76, -271.53, -22.78, 1, 0x0d49, 0x04b8, 8, 8, 8, 255}, 
   { -98.99, 116.06, 19.67, 1, 0x25f3, 0x0210, 247, 247, 247, 255}, 
   { -58.78, 370.70, 19.67, 1, 0x3ec7, 0x03d9, 57, 57, 57, 255}, 
   { 120.38, -159.04, -29.99, 1, 0x4c4e, 0x05a5, 162, 162, 162, 255}, 
   { 149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 255, 255, 255, 255}, 
   { 11.46, -328.36, 48.31, 1, 0x7c9d, 0x007d, 162, 162, 162, 255}, 
   { 133.16, -93.76, 22.11, 1, 0x3d6d, 0x0056, 84, 84, 88, 255}, 
   { 0.00, -116.89, -113.20, 1, 0x0bd0, 0x0fa9, 8, 8, 8, 255}, 
   { 11.46, -323.14, -27.40, 1, 0xee68, 0x07f0, 162, 162, 162, 255}, 
   { 0.00, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { 0.00, 330.36, -22.78, 1, 0xea38, 0x04bd, 0, 0, 0, 255}, 
   { 60.18, 330.36, -22.78, 1, 0xea38, 0x04bd, 8, 8, 8, 255}, 
   { 108.43, -82.54, -22.78, 1, 0x3b3a, 0x04bd, 8, 8, 8, 255}, 
   { 133.16, 78.68, 22.11, 1, 0x1b99, 0x0056, 84, 84, 88, 255}, 
   { 108.43, 70.95, -22.78, 1, 0x1d1c, 0x04bd, 8, 8, 8, 255}, 
   { -22.76, -271.53, -22.78, 1, 0x604e, 0x04bd, 8, 8, 8, 255}, 
   { -11.46, -328.36, 48.31, 1, 0x6ce8, 0x0027, 84, 84, 88, 255}, 
   { -133.16, 78.68, 22.11, 1, 0x1b99, 0x0056, 8, 8, 8, 255}, 
   { -108.43, 70.95, -22.78, 1, 0x1d1c, 0x04bd, 8, 8, 8, 255}, 
   { -60.18, 330.36, -22.78, 1, 0xea38, 0x04bd, 124, 124, 124, 255}, 
   { -108.43, -82.54, -22.78, 1, 0x3b3a, 0x04bd, 8, 8, 8, 255}, 
   { -133.16, -93.76, 22.11, 1, 0x3d6d, 0x0056, 8, 8, 8, 255}, 
   { -11.46, -341.30, 45.33, 1, 0x3cd8, 0x0199, 16, 16, 16, 255}, 
   { -11.46, -340.15, 69.86, 1, 0x48ca, 0x0199, 240, 240, 240, 255}, 
   { 0.00, -340.15, 69.86, 1, 0x48ca, 0x043a, 240, 240, 240, 255}, 
   { 0.00, -328.36, 48.31, 1, 0x3e37, 0x043a, 88, 88, 92, 255}, 
   { 0.00, 70.95, -22.78, 1, 0x21e9, 0x0409, 8, 8, 8, 255}, 
   { -7.16, -146.66, 473.01, 1, 0xeb40, 0x0372, 78, 78, 78, 255}, 
   { -14.79, -139.03, 473.01, 1, 0xeb40, 0x05f3, 0, 0, 0, 255}, 
   { -14.79, -139.03, -31.25, 1, 0xcec4, 0x05f3, 0, 0, 0, 255}, 
   { -7.16, -131.40, 473.01, 1, 0xeb40, 0x0372, 0, 0, 0, 255}, 
   { -6.11, -123.74, -27.80, 1, 0xcec4, 0x0372, 255, 255, 255, 255}, 
   { 0.47, -139.03, 473.01, 1, 0xeb40, 0xffdd, 255, 255, 255, 255}, 
   { -7.16, -146.66, -31.25, 1, 0xcec4, 0x0372, 255, 255, 255, 255}, 
   { -37.12, -139.03, 492.30, 1, 0x0000, 0x0000, 0, 0, 0, 255}, 
   { -7.16, -168.98, 492.30, 1, 0x0000, 0x06a2, 255, 255, 255, 255}, 
   { 22.80, -139.03, 492.30, 1, 0x4000, 0x06a2, 255, 255, 255, 255}, 
   { -7.16, -109.07, 492.30, 1, 0xcec4, 0x0372, 78, 78, 78, 255}, 
   { -21.62, -128.17, -33.08, 1, 0x373d, 0x0a9b, 255, 255, 255, 255}, 
   { -43.77, -131.87, 438.54, 1, 0x0ae9, 0x0a9b, 255, 255, 255, 255}, 
   { -31.85, -141.59, -33.66, 1, 0x373d, 0x0819, 255, 255, 255, 255}, 
   { -62.67, -144.59, 333.16, 1, 0x1351, 0x0819, 255, 255, 255, 255}, 
   { 149.27, -116.89, 22.11, 1, 0x412e, 0x00f9, 255, 255, 255, 255}, 
   { 149.27, 94.59, 22.11, 1, 0x17b0, 0x00f9, 255, 255, 255, 255}, 
   { 133.16, -93.76, 22.11, 1, 0x3d6d, 0x0056, 84, 84, 88, 255}, 
   { 120.38, -159.04, -29.99, 1, 0x4c4e, 0x05a5, 162, 162, 162, 255}, 
   { 111.85, 94.59, -29.99, 1, 0x1879, 0x05a5, 162, 162, 162, 255}, 
   { 149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 255, 255, 255, 255}, 
   { 0.00, 94.59, -113.20, 1, 0x2a66, 0x0fa9, 8, 8, 8, 255}, 
   { 111.85, 94.59, -29.99, 1, 0x2a66, 0x0782, 162, 162, 162, 255}, 
   { 0.00, -116.89, -113.20, 1, 0x0bd0, 0x0fa9, 8, 8, 8, 255}, 
   { 0.00, 306.07, -113.20, 1, 0x48fc, 0x0fa9, 8, 8, 8, 255}, 
   { 70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { 70.18, 383.29, -27.35, 1, 0xdfaa, 0x05a5, 100, 100, 100, 255}, 
   { 0.00, 379.87, 35.34, 1, 0xd429, 0x0003, 255, 255, 255, 255}, 
   { 0.00, 115.71, 19.67, 1, 0x25f3, 0x0660, 255, 255, 255, 255}, 
   { -133.16, 78.68, 22.11, 1, 0x2333, 0x0084, 8, 8, 8, 255}, 
   { 3.74, -93.33, 21.61, 1, 0x19d5, 0x0660, 255, 255, 255, 255}, 
   { -149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 162, 162, 162, 255}, 
   { -133.16, -93.76, 22.11, 1, 0x3ca5, 0x013f, 8, 8, 8, 255}, 
   { -149.27, 94.59, 22.11, 1, 0x1879, 0x0056, 162, 162, 162, 255}, 
   { -111.85, 94.59, -29.99, 1, 0x1879, 0x05a5, 97, 97, 97, 255}, 
   { -70.18, 383.29, -27.35, 1, 0x5446, 0x0782, 97, 97, 97, 255}, 
   { -70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { -58.78, 370.70, 19.67, 1, 0x3ec7, 0x03d9, 57, 57, 57, 255}, 
   { -38.20, 338.63, 19.67, 1, 0x3c08, 0x04bb, 255, 255, 255, 255}, 
   { 0.00, 370.70, 19.67, 1, 0x3ec7, 0x0660, 57, 57, 57, 255}, 
   { 0.00, -341.30, 45.33, 1, 0x3cd8, 0x043a, 240, 240, 240, 255}, 
   { 11.46, -341.30, 45.33, 1, 0x3cd8, 0x05c6, 162, 162, 162, 255}, 
   { 0.00, -340.15, 69.86, 1, 0x476b, 0x043a, 240, 240, 240, 255}, 
   { 11.46, -328.36, 48.31, 1, 0x3e37, 0x05c6, 162, 162, 162, 255}, 
   { 0.00, -328.36, 48.31, 1, 0x3e37, 0x043a, 88, 88, 92, 255}, 
   { 11.46, -340.15, 69.86, 1, 0x48ca, 0x05c6, 240, 240, 240, 255}, 
   { -11.46, -341.30, 45.33, 1, 0x3cd8, 0x0199, 13, 13, 13, 255}, 
   { -11.46, -323.14, -27.40, 1, 0x12ee, 0x0199, 0, 0, 0, 255}, 
   { 0.00, -341.30, 45.33, 1, 0x3cd8, 0x043a, 91, 91, 91, 255}, 
   { 133.16, -93.76, 22.11, 1, 0x19d5, 0x0086, 84, 84, 88, 255}, 
   { 133.16, 78.68, 22.11, 1, 0x2333, 0x0086, 84, 84, 88, 255}, 
   { 3.74, -93.33, 21.61, 1, 0x19d5, 0x0660, 255, 255, 255, 255}, 
   { -98.99, 116.06, 19.67, 1, 0x25f3, 0x0210, 247, 247, 247, 255}, 
   { 11.46, -323.14, -27.40, 1, 0x7b04, 0x05f0, 162, 162, 162, 255}, 
   { 120.38, -159.04, -29.99, 1, 0x4c4e, 0x05a5, 162, 162, 162, 255}, 
   { 11.46, -328.36, 48.31, 1, 0x7c9d, 0x007d, 162, 162, 162, 255}, 
   { 0.00, -284.98, -22.78, 1, 0x62f1, 0x04bd, 8, 8, 8, 255}, 
   { 70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { 0.00, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { 60.18, 330.36, -22.78, 1, 0xea38, 0x04bd, 8, 8, 8, 255}, 
   { 22.76, -271.53, -22.78, 1, 0x604e, 0x04bd, 8, 8, 8, 255}, 
   { 108.43, -82.54, -22.78, 1, 0x3b3a, 0x04bd, 8, 8, 8, 255}, 
   { -149.27, -116.89, 22.11, 1, 0x41f7, 0x0056, 162, 162, 162, 255}, 
   { -120.37, -159.04, -29.99, 1, 0x4c4e, 0x05a5, 97, 97, 97, 255}, 
   { -11.46, -328.36, 48.31, 1, 0x7c9d, 0x007d, 84, 84, 88, 255}, 
   { -70.18, 379.87, 35.34, 1, 0xdf75, 0x0015, 255, 255, 255, 255}, 
   { -133.16, 78.68, 22.11, 1, 0x1b99, 0x0056, 8, 8, 8, 255}, 
   { -60.18, 330.36, -22.78, 1, 0xea38, 0x04bd, 124, 124, 124, 255}, 
   { -11.46, -328.36, 48.31, 1, 0x6ce8, 0x0027, 84, 84, 88, 255}, 
   { -22.76, -271.53, -22.78, 1, 0x604e, 0x04bd, 8, 8, 8, 255}, 
   { -133.16, -93.76, 22.11, 1, 0x3d6d, 0x0056, 8, 8, 8, 255}, 
   { -108.43, -82.54, -22.78, 1, 0x3b3a, 0x04bd, 8, 8, 8, 255}, 
   { 0.00, -324.42, -27.74, 1, 0x12ee, 0x043a, 100, 100, 100, 255}, 
   { -11.46, -328.36, 48.31, 1, 0x3e37, 0x0199, 84, 84, 88, 255}, 
   { -11.46, -340.15, 69.86, 1, 0x48ca, 0x0199, 240, 240, 240, 255}, 
   { 0.00, -328.36, 48.31, 1, 0x3e37, 0x043a, 88, 88, 92, 255}, 
   { 108.43, 70.95, -22.78, 1, 0x21e9, 0x0638, 8, 8, 8, 255}, 
   { 60.18, 330.36, -22.78, 1, 0x3188, 0x04c4, 8, 8, 8, 255}, 
   { 0.00, 70.95, -22.78, 1, 0x21e9, 0x0409, 8, 8, 8, 255}, 
   { 0.00, -82.54, -22.78, 1, 0x18aa, 0x0409, 8, 8, 8, 255}, 
   { 0.00, 330.36, -22.78, 1, 0x3188, 0x0409, 0, 0, 0, 255}, 
   { -108.43, 70.95, -22.78, 1, 0x21e9, 0x00c5, 8, 8, 8, 255}, 
   { 0.47, -139.03, -31.25, 1, 0xcec4, 0xffdd, 255, 255, 255, 255}, 
   { -6.11, -123.74, -27.80, 1, 0xcec4, 0x0372, 255, 255, 255, 255}, 
   { 0.47, -139.03, 473.01, 1, 0xeb40, 0xffdd, 255, 255, 255, 255}, 
   { -7.16, -146.66, -31.25, 1, 0xcec4, 0x0372, 255, 255, 255, 255}, 
   { -7.16, -146.66, 473.01, 1, 0xcec4, 0x0372, 78, 78, 78, 255}, 
   { 0.47, -139.03, 473.01, 1, 0xcec4, 0x05f3, 255, 255, 255, 255}, 
   { -7.16, -168.98, 492.30, 1, 0xcec4, 0x0372, 255, 255, 255, 255}, 
   { 22.80, -139.03, 492.30, 1, 0xcec4, 0x05f3, 255, 255, 255, 255}, 
   { 0.47, -139.03, 473.01, 1, 0xcec4, 0x05f3, 0, 0, 0, 255}, 
   { -7.16, -109.07, 492.30, 1, 0xcec4, 0x0372, 78, 78, 78, 255}, 
   { -7.16, -131.40, 473.01, 1, 0x07ad, 0x0cf3, 0, 0, 0, 255}, 
   { -6.11, -123.74, -27.80, 1, 0x3753, 0x0cf3, 255, 255, 255, 255}, 
   { -43.77, -131.87, 438.54, 1, 0x0ae9, 0x0a9b, 255, 255, 255, 255}, 
   { -43.77, -131.87, 438.54, 1, 0x0ae9, 0x0a9b, 255, 255, 255, 255}, 
   { -21.62, -128.17, -33.08, 1, 0x373d, 0x0a9b, 255, 255, 255, 255}, 
   { -62.67, -144.59, 333.16, 1, 0x1351, 0x0819, 255, 255, 255, 255}, 
};

Gfx beach_boat_Static_PolyList_0[] = { 



//>-- MATERIAL 0: START ------------------------------------ 'beach_boat_1'-------------------------------------------------

//Last: beach_boat_textures   Current: beach_boat_textures
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureTile_4b(   beach_boat_textures, G_IM_FMT_CI, 128, 64, 
      0, 0, 127, 31, 
      0, 
      G_TX_WRAP,G_TX_CLAMP, 
      7,5, 
      2,1 ),
   gsDPLoadTLUT_pal16(   0, beach_boat_textures_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( beach_boat_VertList_0+0,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x18790056),  /*New Coords: 48.95, 1.35*/
     gsSP2Triangles(  3, 4, 5, 3, 6, 3, 7, 6  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xdfaa05a5),  /*New Coords: -64.67, 22.58*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xd45e0592),  /*New Coords: -87.26, 22.29*/
     gsSP2Triangles(  7, 3, 8, 7, 0, 2, 11, 0  ),
     gsSP2Triangles(  4, 6, 12, 4, 3, 6, 4, 3  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x3d6d0056),  /*New Coords: 122.86, 1.35*/
     gsSP1Triangle(  20, 17, 21, 20  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x3ca5013f),  /*New Coords: 121.29, 4.99*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x1ad0013f),  /*New Coords: 53.63, 4.99*/
     gsSP1Triangle(  17, 16, 22, 17  ),
     gsSP2Triangles(  23, 22, 24, 23, 23, 25, 21, 23  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xdfaa05a5),  /*New Coords: -64.67, 22.58*/   gsSPModifyVertex( 16,   G_MWO_POINT_ST, 0x1b990056),  /*New Coords: 55.20, 1.35*/
     gsSP2Triangles(  11, 2, 19, 11, 22, 16, 24, 22  ),
   gsSPVertex( beach_boat_VertList_0+29,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x48ca043a),  /*New Coords: 145.58, 16.91*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x48ca05c6),  /*New Coords: 145.58, 23.10*/
     gsSP2Triangles(  2, 3, 4, 2, 5, 4, 3, 5  ),
     gsSP2Triangles(  6, 7, 8, 6, 8, 7, 9, 8  ),
     gsSP2Triangles(  10, 11, 12, 10, 15, 16, 17, 15  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x6851012a),  /*New Coords: 208.64, 4.66*/
     gsSP1Triangle(  17, 16, 18, 17  ),
   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x604e04bd),  /*New Coords: 192.61, 18.96*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x62f104bd),  /*New Coords: 197.89, 18.96*/
     gsSP1Triangle(  17, 12, 11, 17  ),
     gsSP2Triangles(  21, 22, 23, 21, 18, 24, 12, 18  ),
     gsSP1Triangle(  25, 26, 24, 25  ),
   gsSPVertex( beach_boat_VertList_0+20,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x7b0405f0),  /*New Coords: 246.03, 23.75*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x7c9d007d),  /*New Coords: 249.23, 1.96*/
     gsSP1Triangle(  5, 17, 0, 5  ),
   gsSPVertex( beach_boat_VertList_0+40,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x62f104bd),  /*New Coords: 197.89, 18.96*/
     gsSP2Triangles(  0, 16, 17, 0, 18, 19, 20, 18  ),
     gsSP2Triangles(  20, 11, 10, 20, 16, 21, 22, 16  ),
     gsSP1Triangle(  21, 19, 18, 21  ),
   gsSPVertex( beach_boat_VertList_0+31,30,0  ),
   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0x12ee05c6),  /*New Coords: 37.86, 23.10*/   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x3e3705c6),  /*New Coords: 124.43, 23.10*/
     gsSP1Triangle(  18, 15, 0, 18  ),
     gsSP2Triangles(  4, 18, 5, 4, 18, 0, 7, 18  ),
   gsSPVertex( beach_boat_VertList_0+37,30,0  ),
   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x3e370199),  /*New Coords: 124.43, 6.39*/
     gsSP2Triangles(  0, 26, 20, 0, 27, 28, 29, 27  ),
   gsSPVertex( beach_boat_VertList_0+51,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x318804c4),  /*New Coords: 99.06, 19.07*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x31880409),  /*New Coords: 99.06, 16.14*/
     gsSP1Triangle(  1, 0, 16, 1  ),
   gsSPVertex( beach_boat_VertList_0+39,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x18aa0638),  /*New Coords: 49.33, 24.88*/
     gsSP1Triangle(  28, 0, 14, 28  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x0d490359),  /*New Coords: 26.57, 13.40*/   gsSPModifyVertex( 21,   G_MWO_POINT_ST, 0x31880239),  /*New Coords: 99.06, 8.90*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x21e900c5),  /*New Coords: 67.82, 3.09*/
     gsSP2Triangles(  17, 1, 0, 17, 21, 20, 28, 21  ),
   gsSPModifyVertex( 22,   G_MWO_POINT_ST, 0x18aa00c5),  /*New Coords: 49.33, 3.09*/
     gsSP1Triangle(  22, 0, 28, 22  ),
   gsSPVertex( beach_boat_VertList_0+68,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP2Triangles(  1, 3, 4, 1, 4, 3, 5, 4  ),
     gsSP2Triangles(  5, 0, 6, 5, 7, 8, 9, 7  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xcec4ffdd),  /*New Coords: 413.54, -0.54*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcec40372),  /*New Coords: 413.54, 13.80*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xcec40372),  /*New Coords: 413.54, 13.80*/
     gsSP1Triangle(  1, 0, 8, 1  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0xcec405f3),  /*New Coords: 413.54, 23.81*/   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0xcec405f3),  /*New Coords: 413.54, 23.81*/
     gsSP1Triangle(  5, 9, 8, 5  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xcec4ffdd),  /*New Coords: 413.54, -0.54*/   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0xcec40372),  /*New Coords: 413.54, 13.80*/
     gsSP2Triangles(  1, 7, 10, 1, 5, 3, 10, 5  ),
   gsSPVertex( beach_boat_VertList_0+57,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3e370199),  /*New Coords: 124.43, 6.39*/
     gsSP1Triangle(  6, 7, 0, 6  ),
   gsSPVertex( beach_boat_VertList_0+31,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x3e3705c6),  /*New Coords: 124.43, 23.10*/
     gsSP1Triangle(  0, 15, 1, 0  ),
   gsSPVertex( beach_boat_VertList_0+60,30,0  ),
   gsSPModifyVertex( 5,   G_MWO_POINT_ST, 0x476b043a),  /*New Coords: 142.84, 16.91*/   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x476b0199),  /*New Coords: 142.84, 6.39*/
     gsSP2Triangles(  5, 4, 3, 5, 23, 24, 25, 23  ),
   gsSPVertex( beach_boat_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xdfaa05a5),  /*New Coords: -64.67, 22.58*/
     gsSP1Triangle(  0, 6, 7, 0  ),
   gsSPVertex( beach_boat_VertList_0+86,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
     gsSP1Triangle(  7, 8, 9, 7  ),
   gsSPVertex( beach_boat_VertList_0+52,30,0  ),
     gsSP1Triangle(  3, 2, 0, 3  ),
   gsSPVertex( beach_boat_VertList_0+81,30,0  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( beach_boat_VertList_0+19,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xdfaa05a5),  /*New Coords: -64.67, 22.58*/
     gsSP1Triangle(  0, 4, 5, 0  ),
   gsSPVertex( beach_boat_VertList_0+77,30,0  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0xdfaa05a5),  /*New Coords: -64.67, 22.58*/
     gsSP2Triangles(  24, 25, 22, 24, 27, 18, 26, 27  ),
   gsSPVertex( beach_boat_VertList_0+106,30,0  ),
     gsSP2Triangles(  2, 3, 4, 2, 5, 6, 7, 5  ),
     gsSP1Triangle(  8, 9, 10, 8  ),
   gsSPVertex( beach_boat_VertList_0+39,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x18aa0638),  /*New Coords: 49.33, 24.88*/
     gsSP1Triangle(  14, 0, 2, 14  ),
   gsSPVertex( beach_boat_VertList_0+97,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x6a2600c6),  /*New Coords: 212.30, 3.10*/   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x6851012a),  /*New Coords: 208.64, 4.66*/
     gsSP2Triangles(  24, 25, 26, 24, 15, 26, 27, 15  ),
   gsSPVertex( beach_boat_VertList_0+125,30,0  ),
     gsSP1Triangle(  0, 1, 2, 0  ),
   gsSPVertex( beach_boat_VertList_0+117,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x6851012a),  /*New Coords: 208.64, 4.66*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3d6d0056),  /*New Coords: 122.86, 1.35*/
     gsSP1Triangle(  6, 0, 11, 6  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x1b990056),  /*New Coords: 55.20, 1.35*/
     gsSP2Triangles(  0, 1, 12, 0, 13, 14, 15, 13  ),
   gsSPVertex( beach_boat_VertList_0+112,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x6a2600c6),  /*New Coords: 212.30, 3.10*/   gsSPModifyVertex( 20,   G_MWO_POINT_ST, 0x6ce80027),  /*New Coords: 217.82, 0.61*/
     gsSP2Triangles(  0, 12, 20, 0, 21, 22, 23, 21  ),
     gsSP2Triangles(  21, 23, 14, 21, 24, 25, 26, 24  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x12ee05c6),  /*New Coords: 37.86, 23.10*/
     gsSP2Triangles(  26, 27, 22, 26, 28, 9, 4, 28  ),
   gsSPVertex( beach_boat_VertList_0+141,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPVertex( beach_boat_VertList_0+129,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x18aa0638),  /*New Coords: 49.33, 24.88*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x18aa00c5),  /*New Coords: 49.33, 3.09*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0x0d490359),  /*New Coords: 26.57, 13.40*/
     gsSP2Triangles(  15, 17, 0, 15, 10, 8, 18, 10  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x31880239),  /*New Coords: 99.06, 8.90*/
     gsSP2Triangles(  19, 6, 17, 19, 20, 10, 17, 20  ),
   gsSPVertex( beach_boat_VertList_0+68,30,0  ),
     gsSP2Triangles(  6, 0, 2, 6, 2, 1, 4, 2  ),
   gsSPVertex( beach_boat_VertList_0+126,30,0  ),
     gsSP2Triangles(  24, 25, 26, 24, 24, 26, 27, 24  ),
   gsSPVertex( beach_boat_VertList_0+75,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x40000000),  /*New Coords: 128.00, 0.00*/
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( beach_boat_VertList_0+69,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xcec4ffdd),  /*New Coords: 413.54, -0.54*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcec4ffdd),  /*New Coords: 413.54, -0.54*/   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xcec40372),  /*New Coords: 413.54, 13.80*/
     gsSP1Triangle(  6, 0, 7, 6  ),
   gsSPVertex( beach_boat_VertList_0+127,30,0  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( beach_boat_VertList_0+69,30,0  ),
   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0xcec40372),  /*New Coords: 413.54, 13.80*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xcec4ffdd),  /*New Coords: 413.54, -0.54*/
     gsSP1Triangle(  2, 0, 9, 2  ),
   gsSPVertex( beach_boat_VertList_0+156,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
   gsSPVertex( beach_boat_VertList_0+110,30,0  ),
     gsSP1Triangle(  6, 0, 4, 6  ),


//>-- MATERIAL 1: START ------------------------------------ 'beach_boat_2'-------------------------------------------------

//Last:    Current: beach_boat_textures
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureTile_4b(   beach_boat_textures, G_IM_FMT_CI, 128, 64, 
      0, 32, 127, 63, 
      0, 
      G_TX_WRAP,G_TX_MIRROR, 
      7,5, 
      2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, beach_boat_textures_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( beach_boat_VertList_0+0,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0x2a660782),  /*New Coords: 84.80, 30.04*/
     gsSP2Triangles(  0, 1, 2, 0, 7, 9, 10, 7  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x48fc0fa9),  /*New Coords: 145.97, 62.65*/   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x54460782),  /*New Coords: 168.55, 30.04*/
     gsSP1Triangle(  1, 0, 7, 1  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x19ce0fc2),  /*New Coords: 51.61, 63.04*/
     gsSP1Triangle(  19, 2, 1, 19  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x04310782),  /*New Coords: 8.38, 30.04*/   gsSPModifyVertex( 23,   G_MWO_POINT_ST, 0x2a660782),  /*New Coords: 84.80, 30.04*/
     gsSP1Triangle(  10, 25, 23, 10  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x48fc0fa9),  /*New Coords: 145.97, 62.65*/
     gsSP1Triangle(  1, 26, 23, 1  ),
   gsSPVertex( beach_boat_VertList_0+29,30,0  ),
   gsSPModifyVertex( 15,   G_MWO_POINT_ST, 0x04310782),  /*New Coords: 8.38, 30.04*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0xf4650fa9),  /*New Coords: -23.20, 62.65*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xee6807f0),  /*New Coords: -35.18, 31.75*/
     gsSP2Triangles(  19, 15, 20, 19, 19, 6, 8, 19  ),
   gsSPVertex( beach_boat_VertList_0+58,30,0  ),
   gsSPModifyVertex( 14,   G_MWO_POINT_ST, 0x37530cf3),  /*New Coords: 110.65, 51.81*/
     gsSP2Triangles(  14, 21, 22, 14, 21, 23, 24, 21  ),
   gsSPVertex( beach_boat_VertList_0+25,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x04310782),  /*New Coords: 8.38, 30.04*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0xee6807f0),  /*New Coords: -35.18, 31.75*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xf4650fa9),  /*New Coords: -23.20, 62.65*/
     gsSP2Triangles(  0, 23, 12, 0, 10, 23, 24, 10  ),
   gsSPVertex( beach_boat_VertList_0+83,30,0  ),
     gsSP2Triangles(  6, 7, 8, 6, 6, 9, 7, 6  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0x2a660782),  /*New Coords: 84.80, 30.04*/
     gsSP2Triangles(  6, 8, 19, 6, 20, 9, 19, 20  ),
   gsSPVertex( beach_boat_VertList_0+141,30,0  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 23, 24, 22  ),


//>-- MATERIAL 2: START ------------------------------------ 'beach_boat_seat'-------------------------------------------------

//Last: beach_boat_textures   Current: beach_boat_textures
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH   ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureTile_4b(   beach_boat_textures, G_IM_FMT_CI, 128, 64, 
      0, 0, 127, 31, 
      0, 
      G_TX_WRAP,G_TX_CLAMP, 
      7,5, 
      2,1 ),
   gsDPLoadTLUT_pal16(   0, beach_boat_textures_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( beach_boat_VertList_0+0,30,0  ),
     gsSP2Triangles(  13, 14, 15, 13, 16, 17, 18, 16  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x23330086),  /*New Coords: 70.40, 2.10*/
     gsSP2Triangles(  27, 4, 28, 27, 29, 15, 28, 29  ),
   gsSPVertex( beach_boat_VertList_0+13,30,0  ),
     gsSP1Triangle(  17, 1, 0, 17  ),
   gsSPVertex( beach_boat_VertList_0+4,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x23330086),  /*New Coords: 70.40, 2.10*/
     gsSP1Triangle(  0, 23, 14, 0  ),
   gsSPVertex( beach_boat_VertList_0+30,30,0  ),
     gsSP1Triangle(  12, 0, 13, 12  ),
   gsSPVertex( beach_boat_VertList_0+16,30,0  ),
     gsSP1Triangle(  11, 26, 0, 11  ),
   gsSPVertex( beach_boat_VertList_0+13,30,0  ),
     gsSP1Triangle(  16, 0, 2, 16  ),
   gsSPVertex( beach_boat_VertList_0+71,30,0  ),
     gsSP1Triangle(  25, 26, 27, 25  ),
   gsSPVertex( beach_boat_VertList_0+28,30,0  ),
   gsSPModifyVertex( 26,   G_MWO_POINT_ST, 0x23330086),  /*New Coords: 70.40, 2.10*/
     gsSP1Triangle(  26, 1, 0, 26  ),
   gsSPVertex( beach_boat_VertList_0+86,30,0  ),
     gsSP1Triangle(  19, 20, 21, 19  ),
   gsSPVertex( beach_boat_VertList_0+115,30,0  ),
     gsSP1Triangle(  2, 3, 4, 2  ),
   gsSPVertex( beach_boat_VertList_0+97,30,0  ),
     gsSP1Triangle(  0, 23, 8, 0  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- beach_boat -------------------------------------------------

 
 
 
 
 
 
 
 
 
 //>-- Obj00: START ------------------------------------------ beach_transp_LOD1 -------------------------------------------------

Vtx beach_transp_LOD1_VertList_0 [] = {
   { -97.60, -250.00, -11.62, 1, 0xe3f5, 0xfd0d, 47, 54, 47, 255}, 
   { 97.60, -250.00, 19.69, 1, 0xe7f5, 0xfd0d, 103, 140, 112, 255}, 
   { 97.60, 250.00, 0.00, 1, 0xe7f5, 0x732d, 74, 95, 78, 255}, 
   { -97.51, -649.32, -211.86, 1, 0xe3f5, 0x9b36, 47, 54, 47, 255}, 
   { 97.52, -649.32, -203.59, 1, 0xe7f5, 0x9b36, 142, 200, 157, 255}, 
   { -97.60, 250.00, -40.97, 1, 0xe3f5, 0x732d, 47, 54, 47, 255}, 
   { 97.60, 509.80, -77.94, 1, 0xe7f5, 0xb32d, 47, 54, 47, 255}, 
   { -97.60, -250.00, -26.67, 1, 0xe42f, 0xfc21, 47, 54, 47, 255}, 
   { -97.60, 509.80, -118.91, 1, 0xe3f5, 0xb32d, 47, 54, 47, 255}, 
   { -97.60, 509.80, -133.95, 1, 0xe42d, 0xb3f0, 47, 54, 47, 255}, 
   { -97.60, 250.00, -56.01, 1, 0xe42e, 0x7294, 47, 54, 47, 255}, 
   { -97.51, -649.32, -226.91, 1, 0xe430, 0x9b1b, 47, 54, 47, 255}, 
   { -2463.39, -1136.79, -252.10, 1, 0x04e3, 0x0556, 205, 171, 152, 255}, 
   { -2498.07, -1087.62, -235.85, 1, 0x04fa, 0x0dd0, 205, 171, 152, 255}, 
   { -2433.67, -1118.41, -225.94, 1, 0x0295, 0x06d3, 205, 171, 152, 255}, 
   { -2583.98, -1211.76, -340.02, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -2575.85, -1186.79, -482.53, 1, 0x00dd, 0x4108, 95, 60, 49, 255}, 
   { -2577.26, -1142.61, -475.05, 1, 0xff98, 0x4103, 140, 105, 91, 255}, 
   { -2584.22, -1149.02, -316.91, 1, 0x0077, 0x1cbb, 95, 60, 49, 255}, 
   { -2511.39, -1143.48, -217.12, 1, 0xffbe, 0x0dad, 95, 60, 49, 255}, 
   { -2503.42, -1196.42, -189.68, 1, 0x00d2, 0x09ea, 95, 60, 49, 255}, 
   { -2581.81, -1123.23, -470.38, 1, 0x0068, 0x36e7, 95, 60, 49, 255}, 
   { -2540.19, -1036.15, -446.06, 1, 0xfefe, 0x350a, 171, 128, 110, 255}, 
   { -2527.93, -1045.75, -302.42, 1, 0x045b, 0x1988, 200, 166, 147, 255}, 
   { -2434.68, -982.22, -292.15, 1, 0x02db, 0x1b3b, 95, 60, 49, 255}, 
   { -2420.97, -1021.94, -239.48, 1, 0x0301, 0x12e5, 95, 60, 49, 255}, 
   { -2417.51, -1031.96, -226.18, 1, 0x03aa, 0x2614, 95, 60, 49, 255}, 
   { -2480.02, -1118.38, -202.77, 1, 0xfdc2, 0x087f, 95, 60, 49, 255}, 
   { -2532.91, -1049.12, -302.07, 1, 0xfe4d, 0x1b04, 205, 171, 152, 255}, 
   { -2585.45, -1165.77, -332.24, 1, 0xff98, 0x2451, 140, 105, 91, 255}, 
   { -2486.96, -1218.35, -152.17, 1, 0x004e, 0x032e, 126, 97, 88, 255}, 
   { -2485.21, -1273.23, -161.45, 1, 0x0260, 0x042b, 95, 60, 49, 255}, 
   { -2454.95, -1321.31, -169.76, 1, 0x0483, 0x0337, 95, 60, 49, 255}, 
   { -2531.79, -1338.32, -361.73, 1, 0x0461, 0x2437, 95, 60, 49, 255}, 
   { -2525.72, -1308.38, -503.38, 1, 0x0469, 0x40e9, 95, 60, 49, 255}, 
   { -2574.43, -1230.97, -490.01, 1, 0x0221, 0x410d, 171, 128, 110, 255}, 
   { -2582.50, -1257.75, -347.81, 1, 0x021c, 0x251f, 255, 191, 164, 255}, 
   { -2434.41, -975.28, -446.02, 1, 0x02de, 0x2ec3, 95, 60, 49, 255}, 
   { -2306.01, -1127.27, -137.84, 1, 0x0164, 0x0017, 133, 84, 70, 255}, 
   { -2287.46, -1133.31, -138.97, 1, 0x00e6, 0x0017, 133, 84, 70, 255}, 
   { -2301.98, -962.86, -299.61, 1, 0x00e6, 0x0988, 133, 84, 70, 255}, 
   { -2323.94, -963.56, -299.60, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { -2304.95, -947.69, -443.71, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
   { -2398.80, -1111.43, -126.04, 1, 0x00d0, 0x0017, 133, 84, 70, 255}, 
   { -2380.07, -1105.86, -126.18, 1, 0x0052, 0x0017, 255, 255, 255, 255}, 
   { -2422.25, -964.45, -305.72, 1, 0x0052, 0x0988, 133, 84, 70, 255}, 
   { -2443.57, -969.77, -305.96, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -2422.64, -966.24, -450.63, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -2555.28, -1038.10, -317.49, 1, 0x016f, 0x0988, 133, 84, 70, 255}, 
   { -2455.24, -1160.31, -144.15, 1, 0x016f, 0x0017, 133, 84, 70, 255}, 
   { -2442.46, -1145.53, -143.67, 1, 0x00f0, 0x0017, 133, 84, 70, 255}, 
   { -2538.26, -1024.26, -316.14, 1, 0x00f0, 0x0988, 133, 84, 70, 255}, 
   { -2536.45, -1016.22, -460.84, 1, 0x00f0, 0x0f94, 92, 58, 48, 255}, 
   { -2483.96, -1226.32, -149.78, 1, 0x00d0, 0x0017, 133, 84, 70, 255}, 
   { -2478.09, -1207.92, -146.76, 1, 0x0052, 0x0017, 133, 84, 70, 255}, 
   { -2592.00, -1137.33, -335.82, 1, 0x0052, 0x0988, 133, 84, 70, 255}, 
   { -2599.48, -1157.63, -339.64, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -2577.02, -1118.55, -478.74, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -2473.48, -1215.16, -156.01, 1, 0xffe9, 0x0017, 255, 191, 164, 255}, 
   { -2585.84, -1150.99, -346.21, 1, 0xffe9, 0x0988, 255, 191, 164, 255}, 
   { -2538.82, -1327.17, -367.68, 1, 0x00f0, 0x0988, 238, 177, 152, 255}, 
   { -2465.64, -1318.60, -204.02, 1, 0x00f0, 0x0017, 133, 84, 70, 255}, 
   { -2455.77, -1323.57, -212.21, 1, 0x0087, 0x0017, 255, 191, 164, 255}, 
   { -2521.45, -1311.59, -510.71, 1, 0x00f0, 0x0f94, 95, 60, 49, 255}, 
   { -2525.73, -1336.46, -376.33, 1, 0x0087, 0x0988, 255, 191, 164, 255}, 
   { -2216.13, -1017.33, -299.60, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { -2195.07, -1023.62, -299.61, 1, 0x00e6, 0x0988, 133, 84, 70, 255}, 
   { -2193.09, -1008.29, -443.71, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
   { -2241.65, -1114.54, -207.45, 1, 0x00e6, 0x0017, 255, 255, 255, 255}, 
   { -2504.24, -1079.36, -248.78, 1, 0x0509, 0x0feb, 205, 171, 152, 255}, 
   { -2527.93, -1045.75, -302.42, 1, 0x045b, 0x1988, 200, 166, 147, 255}, 
   { -2420.97, -1021.94, -239.48, 1, 0x0301, 0x12e5, 95, 60, 49, 255}, 
   { -2498.07, -1087.62, -235.85, 1, 0x00ac, 0x2614, 205, 171, 152, 255}, 
   { -2486.09, -1245.79, -156.81, 1, 0x0157, 0x03ad, 95, 60, 49, 255}, 
   { -2583.98, -1211.76, -340.02, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -2486.96, -1218.35, -152.17, 1, 0x004e, 0x032e, 126, 97, 88, 255}, 
   { -2485.21, -1273.23, -161.45, 1, 0x0260, 0x042b, 95, 60, 49, 255}, 
   { -2582.50, -1257.75, -347.81, 1, 0x021c, 0x251f, 255, 191, 164, 255}, 
   { -2574.43, -1230.97, -490.01, 1, 0x0221, 0x410d, 171, 128, 110, 255}, 
   { -2583.98, -1211.76, -340.02, 1, 0x00da, 0x24b8, 255, 191, 164, 255}, 
   { -2540.19, -1036.15, -446.06, 1, 0x0452, 0x2d10, 171, 128, 110, 255}, 
   { -2434.41, -975.28, -446.02, 1, 0x02de, 0x2ec3, 95, 60, 49, 255}, 
   { -2527.93, -1045.75, -302.42, 1, 0x00a7, 0x1fe7, 200, 166, 147, 255}, 
   { -2326.05, -948.37, -443.70, 1, 0x0164, 0x0f94, 92, 58, 48, 255}, 
   { -2323.94, -963.56, -299.60, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { -2304.95, -947.69, -443.71, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
   { -2443.12, -971.34, -450.87, 1, 0x00d0, 0x0f94, 92, 58, 48, 255}, 
   { -2443.57, -969.77, -305.96, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -2422.64, -966.24, -450.63, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -2552.79, -1029.51, -462.13, 1, 0x016f, 0x0f94, 92, 58, 48, 255}, 
   { -2555.28, -1038.10, -317.49, 1, 0x016f, 0x0988, 133, 84, 70, 255}, 
   { -2536.45, -1016.22, -460.84, 1, 0x00f0, 0x0f94, 92, 58, 48, 255}, 
   { -2584.20, -1138.05, -482.41, 1, 0x00d0, 0x0f94, 92, 58, 48, 255}, 
   { -2599.48, -1157.63, -339.64, 1, 0x00d0, 0x0988, 133, 84, 70, 255}, 
   { -2577.02, -1118.55, -478.74, 1, 0x0052, 0x0f94, 92, 58, 48, 255}, 
   { -2570.57, -1131.41, -488.98, 1, 0xffe9, 0x0f94, 95, 60, 49, 255}, 
   { -2585.84, -1150.99, -346.21, 1, 0xffe9, 0x0988, 255, 191, 164, 255}, 
   { -2508.51, -1320.04, -519.28, 1, 0x0087, 0x0f94, 95, 60, 49, 255}, 
   { -2521.45, -1311.59, -510.71, 1, 0x00f0, 0x0f94, 95, 60, 49, 255}, 
   { -2525.73, -1336.46, -376.33, 1, 0x0087, 0x0988, 255, 191, 164, 255}, 
   { -2213.31, -1002.25, -443.70, 1, 0x0164, 0x0f94, 92, 58, 48, 255}, 
   { -2216.13, -1017.33, -299.60, 1, 0x0164, 0x0988, 133, 84, 70, 255}, 
   { -2193.09, -1008.29, -443.71, 1, 0x00e6, 0x0f94, 92, 58, 48, 255}, 
};

Gfx beach_transp_LOD1_Static_PolyList_0[] = { 



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

   gsSPVertex( beach_transp_LOD1_VertList_0+0,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 0, 3, 4, 0  ),
     gsSP2Triangles(  5, 2, 6, 5, 3, 0, 7, 3  ),
     gsSP2Triangles(  8, 9, 10, 8, 5, 10, 7, 5  ),
     gsSP2Triangles(  5, 0, 2, 5, 1, 0, 4, 1  ),
     gsSP2Triangles(  8, 5, 6, 8, 11, 3, 7, 11  ),
     gsSP2Triangles(  5, 8, 10, 5, 0, 5, 7, 0  ),
   gsSPModifyVertex( 25,   G_MWO_POINT_ST, 0x03b62367),  /*New Coords: 29.70, 70.80*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x00ac2614),  /*New Coords: 5.39, 76.16*/
     gsSP1Triangle(  25, 26, 13, 25  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+58,30,0  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x009a2367),  /*New Coords: 4.82, 70.80*/   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x03b62367),  /*New Coords: 29.70, 70.80*/
     gsSP1Triangle(  11, 13, 14, 11  ),


//>-- MATERIAL 2: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

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

   gsSPVertex( beach_transp_LOD1_VertList_0+29,30,0  ),
     gsSP2Triangles(  9, 10, 11, 9, 12, 11, 13, 12  ),
     gsSP2Triangles(  14, 15, 16, 14, 17, 16, 18, 17  ),
     gsSP2Triangles(  19, 20, 21, 19, 19, 22, 23, 19  ),
     gsSP2Triangles(  24, 25, 26, 24, 27, 26, 28, 27  ),
     gsSP1Triangle(  26, 25, 29, 26  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+55,30,0  ),
     gsSP1Triangle(  2, 0, 4, 2  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 5, 9, 8  ),
     gsSP2Triangles(  10, 11, 12, 10, 10, 13, 11, 10  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+38,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+67,30,0  ),
     gsSP1Triangle(  16, 17, 18, 16  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+43,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+72,30,0  ),
     gsSP1Triangle(  14, 15, 16, 14  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+48,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+77,30,0  ),
     gsSP1Triangle(  12, 13, 14, 12  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+53,30,0  ),
     gsSP1Triangle(  3, 0, 2, 3  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+82,30,0  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+55,30,0  ),
     gsSP1Triangle(  4, 0, 3, 4  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+84,30,0  ),
     gsSP1Triangle(  11, 10, 12, 11  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+60,30,0  ),
     gsSP1Triangle(  4, 0, 2, 4  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+89,30,0  ),
     gsSP1Triangle(  8, 9, 10, 8  ),
     gsSP1Triangle(  11, 12, 13, 11  ),


//>-- MATERIAL 3: START ------------------------------------ 'Homes-Wall-Cracked'-------------------------------------------------

//Last: Homes_Wall_Cracked   Current: Homes_Wall_Cracked
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Homes_Wall_Cracked,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, G_TX_NOLOD,2 ),
   gsDPLoadTLUT_pal16(   0, Homes_Wall_Cracked_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,255,202,152,255  ),

   gsSPVertex( beach_transp_LOD1_VertList_0+0,30,0  ),
     gsSP2Triangles(  12, 13, 14, 12, 15, 16, 17, 15  ),
     gsSP2Triangles(  18, 19, 20, 18, 18, 21, 22, 18  ),
     gsSP2Triangles(  23, 24, 25, 23, 20, 19, 27, 20  ),
     gsSP2Triangles(  27, 19, 28, 27, 28, 19, 18, 28  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+15,30,0  ),
     gsSP2Triangles(  0, 14, 15, 0, 16, 17, 18, 16  ),
     gsSP1Triangle(  18, 19, 20, 18  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+13,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x030a10ca),  /*New Coords: 24.34, 33.58*/
     gsSP1Triangle(  0, 13, 1, 0  ),
     gsSP2Triangles(  18, 23, 2, 18, 22, 3, 2, 22  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x043a1fe7),  /*New Coords: 33.83, 63.81*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x00a71fe7),  /*New Coords: 5.24, 63.81*/
     gsSP2Triangles(  24, 11, 10, 24, 16, 2, 4, 16  ),
     gsSP1Triangle(  15, 5, 9, 15  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+42,30,0  ),
     gsSP1Triangle(  27, 28, 29, 27  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+71,30,0  ),
     gsSP1Triangle(  2, 3, 4, 2  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+31,30,0  ),
     gsSP1Triangle(  5, 0, 2, 5  ),
     gsSP1Triangle(  5, 2, 4, 5  ),
   gsSPVertex( beach_transp_LOD1_VertList_0+60,30,0  ),
     gsSP1Triangle(  13, 16, 14, 13  ),
     gsSP2Triangles(  17, 18, 19, 17, 20, 21, 22, 20  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- beach_transp_LOD1 -------------------------------------------------

 
 
//>-- Obj00: START ------------------------------------------ beach_LOD1 -------------------------------------------------

Vtx beach_LOD1_VertList_0 [] = {
   { 2476.54, 3417.91, 233.75, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2771.46, 3425.87, 556.95, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2690.73, 3807.34, 625.37, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 3417.47, 1537.61, -79.76, 1, 0x63ac, 0x0400, 49, 56, 48, 255}, 
   { 3543.45, 1590.38, 168.08, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 3099.38, 1988.63, 357.78, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 2671.48, 2170.01, 9.32, 1, 0x2aa7, 0x0400, 100, 138, 109, 255}, 
   { 2953.60, 2314.01, 390.88, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3755.86, 887.58, -321.07, 1, 0x9186, 0x0400, 40, 54, 42, 255}, 
   { 4098.95, 1030.93, 281.25, 1, 0x9186, 0x0000, 103, 142, 112, 255}, 
   { 3758.88, 1276.49, 172.97, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 3574.32, 1110.56, -181.12, 1, 0x7bf1, 0x0400, 49, 56, 48, 255}, 
   { 4625.26, 502.88, -470.36, 1, 0xac4a, 0x0467, 103, 142, 112, 255}, 
   { 1712.03, 4324.99, 444.51, 1, 0xa979, 0x0400, 50, 58, 50, 255}, 
   { 3697.77, 5103.76, 1763.16, 1, 0x9a2d, 0xf472, 101, 140, 110, 255}, 
   { 2094.17, 5212.21, 951.25, 1, 0x9eea, 0xfff0, 101, 140, 110, 255}, 
   { 3684.59, 4424.37, 1608.70, 1, 0xc2ac, 0xf4fb, 101, 140, 110, 255}, 
   { 3433.87, 3443.75, 1282.87, 1, 0xfeda, 0xf710, 50, 58, 50, 255}, 
   { 2747.33, 1997.60, -19.09, 1, 0x3a60, 0x0400, 100, 138, 109, 255}, 
   { 3390.21, 1526.19, -133.41, 1, 0x07cb, 0x03bf, 49, 56, 48, 255}, 
   { 3543.39, 1082.76, -240.45, 1, 0x08bc, 0x03d8, 49, 56, 48, 255}, 
   { 2700.74, 1998.79, -68.96, 1, 0x5248, 0x03da, 40, 54, 42, 255}, 
   { 3722.63, 873.70, -379.40, 1, 0x93b0, 0x0422, 40, 54, 42, 255}, 
   { 2631.33, 2149.52, -44.98, 1, 0x4403, 0x03e4, 40, 54, 42, 255}, 
   { 4392.91, -1075.91, -441.43, 1, 0x62d3, 0xff0c, 49, 56, 48, 255}, 
   { 3925.67, -1126.44, -388.06, 1, 0x51c5, 0xfe82, 49, 56, 48, 255}, 
   { 4229.45, -1325.20, 273.39, 1, 0x566d, 0x06b8, 49, 56, 48, 255}, 
   { 3997.45, -1463.11, 607.63, 1, 0x4b0f, 0x09f6, 68, 86, 71, 255}, 
   { 3490.00, -1444.66, -414.29, 1, 0x3e44, 0xfdfb, 49, 56, 48, 255}, 
   { 3755.07, -1619.02, 339.55, 1, 0x40d0, 0x06f4, 68, 86, 71, 255}, 
   { 3469.93, -1774.21, -452.68, 1, 0x31fc, 0xfea7, 49, 56, 48, 255}, 
   { 3575.93, -2110.81, 58.37, 1, 0x2b73, 0x0598, 49, 56, 48, 255}, 
   { 3343.86, -2489.52, 88.79, 1, 0x1abe, 0x065c, 68, 86, 71, 255}, 
   { 2468.03, -2495.99, -533.62, 1, 0x04ac, 0xfc04, 49, 56, 48, 255}, 
   { 2740.66, -2745.22, 334.75, 1, 0x0249, 0x05f4, 68, 86, 71, 255}, 
   { 1907.62, -4434.64, -607.74, 1, 0xb9d0, 0x00df, 49, 56, 48, 255}, 
   { 2946.94, -3457.91, 656.99, 1, 0xe2a2, 0x0a78, 101, 139, 110, 255}, 
   { 2431.14, -3866.27, 434.98, 1, 0xacb4, 0x063e, 101, 139, 110, 255}, 
   { 3437.91, -2583.33, 212.22, 1, 0x2e93, 0x0177, 101, 139, 110, 255}, 
   { 3669.98, -2204.62, 181.79, 1, 0x51d3, 0x0020, 101, 139, 110, 255}, 
   { 2771.46, 3425.87, 556.95, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2953.60, 2314.01, 390.88, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3613.14, 2650.65, 1282.87, 1, 0x219b, 0xf6ae, 50, 58, 50, 255}, 
   { 2690.73, 3807.34, 625.37, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 3099.38, 1988.63, 357.78, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 3543.45, 1590.38, 168.08, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 3839.55, 1714.40, 750.65, 1, 0x5ca5, 0xf7a0, 49, 56, 48, 255}, 
   { 3759.60, 1971.81, 1064.52, 1, 0x439c, 0xf6ea, 49, 56, 48, 255}, 
   { 3758.88, 1276.49, 172.97, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 4098.95, 1030.93, 281.25, 1, 0x9186, 0x0000, 103, 142, 112, 255}, 
   { 3992.74, 1486.73, 621.63, 1, 0x7723, 0xfb5b, 49, 56, 48, 255}, 
   { -4318.08, -505.24, 253.05, 1, 0xd3ef, 0x0000, 78, 103, 83, 255}, 
   { -4223.53, -204.35, 196.09, 1, 0xeae9, 0x0000, 101, 140, 110, 255}, 
   { -4731.40, -8.60, 622.05, 1, 0xeae9, 0xf142, 255, 255, 255, 255}, 
   { -4731.40, -611.47, 382.15, 1, 0x0523, 0x003b, 255, 255, 255, 255}, 
   { -4332.56, -854.45, 3.67, 1, 0x10af, 0x052b, 84, 112, 90, 255}, 
   { -3713.57, 766.65, 400.02, 1, 0x3e93, 0x0000, 84, 112, 90, 255}, 
   { -3665.30, 1155.23, 429.68, 1, 0x5a0e, 0x0000, 84, 112, 90, 255}, 
   { -4645.06, 884.88, 1163.96, 1, 0x5a0e, 0xf142, 101, 140, 110, 255}, 
   { -3752.59, 2055.29, 647.63, 1, 0x982a, 0x0000, 75, 99, 80, 255}, 
   { -4452.17, 2015.39, 1703.34, 1, 0x96f9, 0xf46f, 101, 140, 110, 255}, 
   { -4708.60, 512.49, 1163.96, 1, 0x3e93, 0xf142, 101, 140, 110, 255}, 
   { -2438.05, 4067.16, 386.19, 1, 0xfe62, 0x0419, 50, 58, 50, 255}, 
   { -2748.96, 3991.14, 723.84, 1, 0xf00a, 0xffe6, 67, 85, 70, 255}, 
   { -3494.85, 2557.09, 615.83, 1, 0xb1f7, 0x0006, 67, 85, 70, 255}, 
   { -4871.03, -1236.10, -380.68, 1, 0xf3ac, 0x093a, 101, 140, 110, 255}, 
   { -4094.53, -236.94, -148.63, 1, 0xeae9, 0x0400, 55, 66, 56, 255}, 
   { -3534.23, 905.41, 70.65, 1, 0x3e93, 0x0400, 68, 84, 70, 255}, 
   { -3490.60, 1298.90, 109.30, 1, 0x5a0e, 0x0400, 68, 84, 70, 255}, 
   { -3662.84, 2129.08, 229.79, 1, 0xa346, 0x0419, 50, 58, 50, 255}, 
   { -4094.53, -576.10, -177.77, 1, 0x21e3, 0x0630, 55, 66, 56, 255}, 
   { -3330.62, 3848.92, 1355.52, 1, 0xdcde, 0xf786, 100, 138, 109, 255}, 
   { -3916.43, 2944.42, 1810.25, 1, 0xb980, 0xf17a, 100, 138, 109, 255}, 
   { -3631.28, 2309.94, 684.32, 1, 0xa347, 0x0004, 64, 81, 67, 255}, 
   { 1269.14, 3048.97, 671.98, 1, 0x12fd, 0x006e, 51, 69, 59, 255}, 
   { 2022.05, 2944.40, 607.95, 1, 0x3e9a, 0x0065, 51, 69, 59, 255}, 
   { 1928.90, 2953.73, 228.90, 1, 0x3c70, 0x04d5, 28, 38, 33, 255}, 
   { 1250.07, 2954.37, 674.61, 1, 0x2d19, 0x029b, 160, 224, 166, 255}, 
   { 1143.07, 2980.39, 563.95, 1, 0x3364, 0x027c, 51, 69, 59, 255}, 
   { 2009.10, 2848.75, 609.13, 1, 0x0130, 0x0259, 139, 195, 144, 255}, 
   { 2835.35, 2939.18, 461.18, 1, 0xd348, 0xff2a, 28, 38, 33, 255}, 
   { 2815.59, 3033.45, 467.63, 1, 0x7bcb, 0x0033, 51, 69, 59, 255}, 
   { 2725.31, 3042.28, 103.67, 1, 0x7cdc, 0x0487, 28, 38, 33, 255}, 
   { 887.25, 3012.32, 668.70, 1, 0x4251, 0x0260, 80, 111, 88, 255}, 
   { 840.06, 2906.38, 683.10, 1, 0x4403, 0x03fb, 160, 224, 166, 255}, 
   { 1124.01, 2885.79, 566.58, 1, 0x3399, 0x03dd, 139, 195, 144, 255}, 
   { 518.96, 2958.65, 676.89, 1, 0x56dc, 0x03ab, 160, 224, 166, 255}, 
   { 538.03, 3053.25, 674.26, 1, 0x56a8, 0x024a, 51, 69, 59, 255}, 
   { 323.40, 3066.19, 495.61, 1, 0x628d, 0x0329, 51, 69, 59, 255}, 
   { 1097.15, 3011.99, 367.08, 1, 0xf29d, 0x045e, 38, 52, 45, 255}, 
   { 312.90, 2540.39, 703.13, 1, 0xff03, 0x0025, 56, 41, 34, 255}, 
   { 308.76, 2502.17, 708.74, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 330.04, 2519.17, 706.65, 1, 0xffb9, 0xffc0, 147, 207, 162, 255}, 
   { 336.17, 2469.61, 366.45, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 314.89, 2452.60, 368.54, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 114.95, 2493.05, 386.33, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 120.41, 2564.97, 683.81, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 116.27, 2527.41, 692.85, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 93.67, 2476.49, 390.73, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 99.13, 2548.41, 688.20, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { 312.90, 3047.35, 692.15, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { 308.76, 3009.24, 698.48, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 330.04, 3026.21, 696.07, 1, 0xff08, 0xffc0, 147, 207, 162, 255}, 
   { 334.45, 2985.95, 452.13, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 313.17, 2968.98, 454.54, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 115.27, 2998.91, 448.06, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 73.11, 3165.64, 627.48, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 76.66, 3137.64, 654.18, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 98.05, 2981.51, 460.19, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 55.89, 3148.24, 639.61, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { -130.00, 2995.49, 708.77, 1, 0x5295, 0xfff1, 160, 224, 166, 255}, 
   { -41.66, 2995.49, 648.20, 1, 0x529b, 0x00cd, 160, 224, 166, 255}, 
   { -42.11, 3092.03, 649.70, 1, 0x6b15, 0x00c5, 51, 69, 59, 255}, 
   { -2220.70, 3409.86, 473.84, 1, 0x846d, 0x00b9, 51, 69, 59, 255}, 
   { -1502.09, 3176.87, 619.22, 1, 0xdfc4, 0xfff7, 51, 69, 59, 255}, 
   { -1502.09, 3176.87, 349.68, 1, 0xe21a, 0x05c5, 28, 38, 33, 255}, 
   { -2259.72, 3321.56, 473.84, 1, 0x8154, 0x027c, 139, 195, 144, 255}, 
   { -2356.49, 3437.38, 261.44, 1, 0x6058, 0x0455, 51, 69, 59, 255}, 
   { -1535.19, 3086.19, 619.22, 1, 0xdd64, 0x010a, 160, 224, 166, 255}, 
   { -696.90, 2995.49, 717.84, 1, 0x3dbc, 0x00e9, 160, 224, 166, 255}, 
   { -696.90, 3092.03, 717.84, 1, 0x3ddc, 0x0004, 51, 69, 59, 255}, 
   { -699.15, 3092.03, 471.92, 1, 0x3e5e, 0x0543, 28, 38, 33, 255}, 
   { 5.44, 2995.49, 509.47, 1, 0x5295, 0x0606, 28, 38, 33, 255}, 
   { 5.25, 3092.03, 510.13, 1, 0x6b0e, 0x0606, 51, 69, 59, 255}, 
   { -130.00, 3092.03, 708.77, 1, 0x87a0, 0x01da, 51, 69, 59, 255}, 
   { -2580.22, 3509.45, 434.54, 1, 0x1a43, 0x0426, 76, 105, 84, 255}, 
   { -2670.72, 3435.51, 434.08, 1, 0x16b7, 0x05ec, 160, 224, 166, 255}, 
   { -2395.50, 3349.08, 261.44, 1, 0x30a6, 0x05ca, 89, 124, 94, 255}, 
   { -3068.41, 3636.00, 120.52, 1, 0xff5c, 0xfb6e, 28, 38, 33, 255}, 
   { -2922.31, 3636.00, 501.66, 1, 0xff91, 0x0428, 51, 69, 59, 255}, 
   { -1401.34, 2078.04, 599.86, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { -1366.85, 2343.88, 671.79, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { -1609.64, 2166.56, 764.46, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -1503.26, 2460.91, 648.34, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { -1665.94, 2448.91, 668.89, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -1845.54, 2223.45, 514.97, 1, 0x0d5a, 0x1fad, 95, 60, 49, 255}, 
   { -1698.67, 2214.51, 653.98, 1, 0x0d55, 0xee29, 31, 21, 17, 255}, 
   { -1732.32, 2283.52, 664.99, 1, 0x09c0, 0xee2f, 31, 21, 17, 255}, 
   { -1830.76, 2344.46, 526.93, 1, 0x09c5, 0x1fb3, 95, 60, 49, 255}, 
   { -1686.57, 2344.27, 669.57, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { -1577.60, 2352.88, 666.42, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { -1644.59, 2490.29, 535.10, 1, 0x029b, 0x1fbf, 36, 22, 18, 255}, 
   { -1499.54, 2304.36, 698.51, 1, 0xff00, 0xee43, 59, 48, 44, 255}, 
   { -1523.08, 2476.04, 529.11, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { -1412.12, 2335.43, 510.46, 1, 0x0093, 0x35f1, 93, 59, 48, 255}, 
   { -1377.28, 2291.28, 504.60, 1, 0xff42, 0x35e8, 117, 110, 105, 255}, 
   { -1391.83, 2304.81, 361.04, 1, 0xff5b, 0x508f, 117, 110, 105, 255}, 
   { -1841.66, 2239.65, 371.01, 1, 0x0d5d, 0x3f4a, 56, 35, 29, 255}, 
   { -1827.46, 2355.89, 382.50, 1, 0x09c8, 0x3f50, 56, 35, 29, 255}, 
   { -1757.21, 2442.13, 534.30, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { -1648.62, 2495.98, 390.34, 1, 0x029e, 0x3f5c, 36, 22, 18, 255}, 
   { -1531.89, 2482.29, 384.59, 1, 0xff09, 0x3f62, 56, 35, 29, 255}, 
   { -1462.19, 2359.25, 577.83, 1, 0x01e4, 0x29ba, 93, 59, 48, 255}, 
   { -1392.06, 2170.28, 492.64, 1, 0x1efa, 0x1f8f, 177, 219, 204, 255}, 
   { -1406.03, 2188.57, 349.56, 1, 0x1efd, 0x3f2c, 177, 219, 204, 255}, 
   { -1486.12, 2429.20, 522.90, 1, 0x0360, 0x35f1, 93, 59, 48, 255}, 
   { -1424.52, 2346.23, 366.54, 1, 0x00be, 0x3fff, 56, 35, 29, 255}, 
   { -1517.83, 2351.64, 386.74, 1, 0x021d, 0x3f14, 212, 187, 163, 255}, 
   { -1510.16, 2335.15, 500.79, 1, 0x01eb, 0x397c, 212, 187, 163, 255}, 
   { -1474.14, 2227.51, 677.79, 1, 0x1ef4, 0xee06, 31, 21, 17, 255}, 
   { -1619.60, 1985.30, 561.16, 1, 0x035c, 0x0c07, 129, 119, 105, 255}, 
   { -1609.64, 2166.56, 764.46, 1, 0x16d9, 0xff74, 31, 21, 17, 255}, 
   { -1841.38, 2118.37, 568.05, 1, 0x7f07, 0x0bc8, 103, 75, 63, 255}, 
   { -1665.94, 2448.91, 668.89, 1, 0x29f3, 0x0bf2, 36, 22, 18, 255}, 
   { -1831.54, 2359.14, 643.03, 1, 0x7f07, 0x0bf2, 57, 36, 30, 255}, 
   { -1609.64, 2166.56, 764.46, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { -1401.34, 2078.04, 599.86, 1, 0xbc4b, 0x0bf2, 177, 219, 204, 255}, 
   { -1366.85, 2343.88, 671.79, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { -1503.26, 2460.91, 648.34, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { -1609.64, 2166.56, 764.46, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { 1399.03, -114.90, -235.12, 1, 0x1079, 0x0e31, 128, 178, 131, 255}, 
   { 2167.95, 21.86, -255.92, 1, 0x14dd, 0x0e99, 138, 193, 142, 255}, 
   { 1530.77, 2392.04, 91.13, 1, 0x1590, 0x0925, 138, 193, 142, 255}, 
   { -1714.04, -358.39, -193.90, 1, 0xf160, 0x0c96, 139, 195, 143, 255}, 
   { -788.02, -201.27, -193.90, 1, 0xfa38, 0x0d62, 139, 195, 143, 255}, 
   { -1517.14, 2318.24, 173.46, 1, 0xf84d, 0x0749, 139, 195, 143, 255}, 
   { -2640.06, -515.51, -193.90, 1, 0xe889, 0x0bcb, 136, 190, 140, 255}, 
   { -3116.82, 1768.36, 120.98, 1, 0xe8e7, 0x07a5, 136, 190, 140, 255}, 
   { -4094.53, -236.94, -148.63, 1, 0xdb2f, 0x0b40, 59, 70, 55, 255}, 
   { -350.61, -184.00, -202.14, 1, 0xfedc, 0x0e92, 139, 195, 143, 255}, 
   { 86.80, -166.72, -210.39, 1, 0x0381, 0x0fc3, 137, 192, 141, 255}, 
   { -403.94, 2434.72, 156.17, 1, 0x03f3, 0x092d, 137, 192, 141, 255}, 
   { 620.79, -145.63, -220.45, 1, 0x09f0, 0x0e48, 138, 193, 142, 255}, 
   { 961.62, -132.17, -226.88, 1, 0x0c15, 0x0dc9, 88, 114, 86, 255}, 
   { 507.16, 2322.82, 119.83, 1, 0x0cc8, 0x0856, 84, 108, 82, 255}, 
   { -2316.98, 2043.30, 147.22, 1, 0xf09a, 0x0777, 145, 189, 138, 255}, 
   { -3916.82, 1593.40, 113.67, 1, 0xe159, 0x0343, 59, 70, 55, 255}, 
   { -960.54, 2376.48, 164.82, 1, 0xfe20, 0x083b, 135, 189, 139, 255}, 
   { 279.95, -159.09, -214.03, 1, 0x07cb, 0x0ec6, 138, 193, 142, 255}, 
   { -202.78, 2410.02, 148.15, 1, 0x085e, 0x08c2, 138, 193, 142, 255}, 
   { 152.19, 2366.42, 133.99, 1, 0x0a93, 0x088c, 138, 193, 142, 255}, 
   { 944.57, 2340.09, 107.28, 1, 0x112c, 0x08bd, 128, 178, 131, 255}, 
   { 3740.76, 539.28, -328.19, 1, 0x2690, 0x09ca, 63, 76, 59, 255}, 
   { 3095.69, 2743.14, -63.30, 1, 0x2559, 0x0630, 62, 76, 59, 255}, 
   { -3149.62, -3683.80, -168.88, 1, 0xe6b5, 0x0281, 30, 53, 64, 255}, 
   { -3610.84, -1572.07, -168.88, 1, 0xe6ca, 0xebfe, 103, 156, 126, 255}, 
   { -5637.81, -2016.77, -168.88, 1, 0xda07, 0xebf5, 72, 112, 100, 255}, 
   { -1517.40, -1107.13, -168.88, 1, 0xfd20, 0xebfe, 103, 156, 126, 255}, 
   { -1872.66, 492.44, -168.88, 1, 0xfd20, 0xdaec, 88, 120, 112, 255}, 
   { -3966.10, 27.50, -168.88, 1, 0xe6ca, 0xdaec, 88, 120, 112, 255}, 
   { 576.04, -642.18, -168.88, 1, 0x1377, 0xebfe, 103, 156, 126, 255}, 
   { 220.79, 957.39, -168.88, 1, 0x1377, 0xdaec, 88, 120, 112, 255}, 
   { 2669.48, -177.24, -168.88, 1, 0x29cd, 0xebfe, 103, 156, 126, 255}, 
   { 2314.23, 1422.33, -168.88, 1, 0x29cd, 0xdaec, 88, 120, 112, 255}, 
   { 3130.70, -2288.97, -168.88, 1, 0x29b9, 0x0281, 40, 70, 85, 255}, 
   { 1169.79, -3350.53, -168.88, 1, 0x1362, 0x0281, 40, 70, 85, 255}, 
   { -923.65, -3815.47, -168.88, 1, 0xfd0c, 0x0281, 40, 70, 85, 255}, 
   { 4561.51, 264.72, -168.88, 1, 0x368d, 0xebda, 72, 112, 99, 255}, 
   { 4407.67, 1887.28, -168.88, 1, 0x4023, 0xdaec, 30, 53, 64, 255}, 
   { 2747.33, 1997.60, -19.09, 1, 0x3a60, 0x0400, 100, 138, 109, 255}, 
   { 3417.47, 1537.61, -79.76, 1, 0x63ac, 0x0400, 49, 56, 48, 255}, 
   { 3099.38, 1988.63, 357.78, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 2771.46, 3425.87, 556.95, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2476.54, 3417.91, 233.75, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2953.60, 2314.01, 390.88, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3574.32, 1110.56, -181.12, 1, 0x7bf1, 0x0400, 49, 56, 48, 255}, 
   { 3755.86, 887.58, -321.07, 1, 0x9186, 0x0400, 40, 54, 42, 255}, 
   { 3758.88, 1276.49, 172.97, 1, 0x7bf1, 0x0000, 49, 56, 48, 255}, 
   { 3543.45, 1590.38, 168.08, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 2094.17, 5212.21, 951.25, 1, 0x9eea, 0xfff0, 101, 140, 110, 255}, 
   { 1712.03, 4324.99, 444.51, 1, 0xa979, 0x0400, 50, 58, 50, 255}, 
   { 2690.73, 3807.34, 625.37, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 2671.48, 2170.01, 9.32, 1, 0x2aa7, 0x0400, 100, 138, 109, 255}, 
   { 2700.74, 1998.79, -68.96, 1, 0x06d2, 0x03c9, 40, 54, 42, 255}, 
   { 3390.21, 1526.19, -133.41, 1, 0x07cb, 0x03bf, 49, 56, 48, 255}, 
   { 2747.33, 1997.60, -19.09, 1, 0x06cb, 0x03a5, 100, 138, 109, 255}, 
   { 2631.33, 2149.52, -44.98, 1, 0x4403, 0x03e4, 40, 54, 42, 255}, 
   { 3433.87, 3443.75, 1282.87, 1, 0xfeda, 0xf710, 50, 58, 50, 255}, 
   { 2771.46, 3425.87, 556.95, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 3613.14, 2650.65, 1282.87, 1, 0x219b, 0xf6ae, 50, 58, 50, 255}, 
   { 3759.60, 1971.81, 1064.52, 1, 0x439c, 0xf6ea, 49, 56, 48, 255}, 
   { 3099.38, 1988.63, 357.78, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 3839.55, 1714.40, 750.65, 1, 0x5ca5, 0xf7a0, 49, 56, 48, 255}, 
   { 3992.74, 1486.73, 621.63, 1, 0x7723, 0xfb5b, 49, 56, 48, 255}, 
   { -4262.28, -912.46, -315.49, 1, 0x12c7, 0x08b6, 68, 84, 70, 255}, 
   { -4332.56, -854.45, 3.67, 1, 0x10af, 0x052b, 84, 112, 90, 255}, 
   { -4871.03, -1236.10, -380.68, 1, 0xf3ac, 0x093a, 101, 140, 110, 255}, 
   { -4223.53, -204.35, 196.09, 1, 0xeae9, 0x0000, 78, 103, 83, 255}, 
   { -4094.53, -236.94, -148.63, 1, 0xeae9, 0x0400, 55, 66, 56, 255}, 
   { -3713.57, 766.65, 400.02, 1, 0x3e93, 0x0000, 84, 112, 90, 255}, 
   { -3713.57, 766.65, 400.02, 1, 0x3e93, 0x0000, 84, 112, 90, 255}, 
   { -3534.23, 905.41, 70.65, 1, 0x3e93, 0x0400, 68, 84, 70, 255}, 
   { -3665.30, 1155.23, 429.68, 1, 0x5a0e, 0x0000, 84, 112, 90, 255}, 
   { -4094.53, -576.10, -177.77, 1, 0x21e3, 0x0630, 55, 66, 56, 255}, 
   { -4318.08, -505.24, 253.05, 1, 0xd3ef, 0x0000, 78, 103, 83, 255}, 
   { 304.33, 2971.59, 498.24, 1, 0x62c1, 0x048b, 139, 195, 144, 255}, 
   { 518.96, 2958.65, 676.89, 1, 0x56dc, 0x03ab, 160, 224, 166, 255}, 
   { 323.40, 3066.19, 495.61, 1, 0x628d, 0x0329, 51, 69, 59, 255}, 
   { 1143.07, 2980.39, 563.95, 1, 0xfc1e, 0x0050, 51, 69, 59, 255}, 
   { 323.40, 3066.19, 495.61, 1, 0x9fe9, 0x03d9, 51, 69, 59, 255}, 
   { 887.25, 3012.32, 668.70, 1, 0xd235, 0x001f, 51, 69, 59, 255}, 
   { 518.96, 2958.65, 676.89, 1, 0x56dc, 0x03ab, 160, 224, 166, 255}, 
   { 840.06, 2906.38, 683.10, 1, 0x4403, 0x03fb, 160, 224, 166, 255}, 
   { 538.03, 3053.25, 674.26, 1, 0x56a8, 0x024a, 51, 69, 59, 255}, 
   { 319.03, 2490.82, 362.93, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 312.90, 2540.39, 703.13, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 336.17, 2469.61, 366.45, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 314.89, 2452.60, 368.54, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 336.17, 2469.61, 366.45, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 308.76, 2502.17, 708.74, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 110.80, 2455.50, 395.37, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { 114.95, 2493.05, 386.33, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 116.27, 2527.41, 692.85, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 114.95, 2493.05, 386.33, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 93.67, 2476.49, 390.73, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 120.41, 2564.97, 683.81, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 317.31, 3007.09, 448.22, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { 312.90, 3047.35, 692.15, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { 334.45, 2985.95, 452.13, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 313.17, 2968.98, 454.54, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 334.45, 2985.95, 452.13, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 308.76, 3009.24, 698.48, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 118.82, 2970.91, 474.76, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 115.27, 2998.91, 448.06, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 76.66, 3137.64, 654.18, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 115.27, 2998.91, 448.06, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 98.05, 2981.51, 460.19, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 73.11, 3165.64, 627.48, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -2961.32, 3547.70, 501.66, 1, 0xff5c, 0x0621, 34, 46, 39, 255}, 
   { -2670.72, 3435.51, 434.08, 1, 0x16b7, 0x05ec, 160, 224, 166, 255}, 
   { -2922.31, 3636.00, 501.66, 1, 0xff91, 0x0428, 51, 69, 59, 255}, 
   { -1756.80, 2449.71, 389.57, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { -1827.46, 2355.89, 382.50, 1, 0x09c8, 0x3f50, 56, 35, 29, 255}, 
   { -1757.21, 2442.13, 534.30, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { -1648.62, 2495.98, 390.34, 1, 0x029e, 0x3f5c, 36, 22, 18, 255}, 
   { -1648.62, 2495.98, 390.34, 1, 0x029e, 0x3f5c, 36, 22, 18, 255}, 
   { -1644.59, 2490.29, 535.10, 1, 0x029b, 0x1fbf, 36, 22, 18, 255}, 
   { -1531.89, 2482.29, 384.59, 1, 0xff09, 0x3f62, 56, 35, 29, 255}, 
   { -1499.92, 2441.78, 379.21, 1, 0x0377, 0x5097, 56, 35, 29, 255}, 
   { -1486.12, 2429.20, 522.90, 1, 0x0360, 0x35f1, 93, 59, 48, 255}, 
   { -1517.83, 2351.64, 386.74, 1, 0x021d, 0x3f14, 56, 35, 29, 255}, 
   { -3964.74, -1094.43, -250.24, 1, 0xdaf5, 0x0dd2, 49, 54, 44, 255}, 
   { -2640.06, -515.51, -193.90, 1, 0xe889, 0x0bcb, 136, 190, 140, 255}, 
   { -4094.53, -236.94, -148.63, 1, 0xdb2f, 0x0b40, 59, 70, 55, 255}, 
   { -2640.06, -515.51, -193.90, 1, 0xe889, 0x0bcb, 136, 190, 140, 255}, 
   { -1714.04, -358.39, -193.90, 1, 0xf160, 0x0c96, 139, 195, 143, 255}, 
   { -3116.82, 1768.36, 120.98, 1, 0xe8e7, 0x07a5, 136, 190, 140, 255}, 
   { -6059.54, -437.44, -168.88, 1, 0xd073, 0xdaec, 30, 53, 64, 255}, 
   { -5637.81, -2016.77, -168.88, 1, 0xda07, 0xebf5, 72, 112, 100, 255}, 
   { -3966.10, 27.50, -168.88, 1, 0xe6ca, 0xdaec, 88, 120, 112, 255}, 
};


void beach_LOD1_PolyList( u8 animFrame ){ 

   Vtx *beach_LOD1_VTXPointer = &beach_LOD1_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'Ocean_Water'-------------------------------------------------

//Last: water_grey1   Current: water_grey1
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

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+174,30,0  );
     gSP2Triangles(glistp++,   20, 21, 22, 20, 23, 24, 25, 23  );
     gSP2Triangles(glistp++,   26, 27, 24, 26, 28, 29, 27, 28  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+200,30,0  );
     gSP1Triangle(glistp++,   4, 2, 0, 4  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+197,30,0  );
     gSP1Triangle(glistp++,   8, 3, 0, 8  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+194,30,0  );
     gSP2Triangles(glistp++,   0, 12, 3, 0, 2, 1, 5, 2  );
     gSP2Triangles(glistp++,   8, 10, 13, 8, 13, 14, 9, 13  );
     gSP2Triangles(glistp++,   1, 3, 5, 1, 3, 6, 4, 3  );
     gSP2Triangles(glistp++,   6, 8, 7, 6, 11, 10, 6, 11  );
     gSP2Triangles(glistp++,   12, 11, 3, 12, 1, 0, 3, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+281,30,0  );
     gSP1Triangle(glistp++,   16, 17, 18, 16  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+202,30,0  );
     gSP1Triangle(glistp++,   0, 5, 1, 0  );


//>-- MATERIAL 1: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

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

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+116,30,0  );
   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x09c0ee31);  /*New Coords: 78.01, -35.61*/
     gSP2Triangles(glistp++,   19, 20, 21, 19, 22, 21, 23, 22  );
     gSP2Triangles(glistp++,   23, 24, 25, 23, 24, 26, 27, 24  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+144,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+135,30,0  );
     gSP1Triangle(glistp++,   12, 0, 3, 12  );
     gSP2Triangles(glistp++,   13, 3, 14, 13, 14, 6, 15, 14  );
     gSP1Triangle(glistp++,   6, 8, 16, 6  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x04c535ea);  /*New Coords: 38.18, 107.83*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x01b9106d);  /*New Coords: 13.78, 32.85*/
     gSP1Triangle(glistp++,   8, 7, 17, 8  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x228f1f89);  /*New Coords: 276.47, 63.08*/   gSPModifyVertex(glistp++,  16,   G_MWO_POINT_ST, 0x04ac5091);  /*New Coords: 37.39, 161.14*/
     gSP2Triangles(glistp++,   10, 18, 19, 10, 16, 8, 20, 16  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x2289ee00);  /*New Coords: 276.31, -36.00*/
     gSP2Triangles(glistp++,   21, 22, 23, 21, 10, 7, 24, 10  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0xff4235e8);  /*New Coords: -5.92, 107.82*/
     gSP1Triangle(glistp++,   10, 9, 17, 10  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x01d533ff);  /*New Coords: 14.66, 103.99*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x00c937ec);  /*New Coords: 6.29, 111.85*/
     gSP1Triangle(glistp++,   17, 9, 23, 17  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x030c379e);  /*New Coords: 24.39, 111.24*/
     gSP2Triangles(glistp++,   20, 23, 22, 20, 20, 17, 23, 20  );
     gSP2Triangles(glistp++,   3, 0, 2, 3, 14, 3, 4, 14  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0xff061fc5);  /*New Coords: -7.81, 63.55*/
     gSP2Triangles(glistp++,   14, 4, 6, 14, 6, 5, 8, 6  );
   gSPModifyVertex(glistp++,  21,   G_MWO_POINT_ST, 0x00975097);  /*New Coords: 4.74, 161.18*/   gSPModifyVertex(glistp++,  9,   G_MWO_POINT_ST, 0x009335f1);  /*New Coords: 4.60, 107.88*/
     gSP2Triangles(glistp++,   21, 9, 11, 21, 13, 12, 3, 13  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+280,30,0  );
     gSP2Triangles(glistp++,   1, 2, 3, 1, 1, 3, 4, 1  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+143,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x04c535ea);  /*New Coords: 38.18, 107.83*/
     gSP1Triangle(glistp++,   12, 0, 9, 12  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x22923f26);  /*New Coords: 276.58, 126.30*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x228f1f89);  /*New Coords: 276.47, 63.08*/
     gSP1Triangle(glistp++,   3, 2, 11, 3  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+287,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x04ac5091);  /*New Coords: 37.39, 161.14*/
     gSP1Triangle(glistp++,   1, 0, 2, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+144,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x00c937ec);  /*New Coords: 6.29, 111.85*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x228f1f89);  /*New Coords: 276.47, 63.08*/
     gSP2Triangles(glistp++,   0, 12, 14, 0, 9, 1, 15, 9  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+142,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x01b9106d);  /*New Coords: 13.78, 32.85*/
     gSP1Triangle(glistp++,   0, 3, 10, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+287,30,0  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x03523f26);  /*New Coords: 26.56, 126.30*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x030c379e);  /*New Coords: 24.39, 111.24*/
     gSP1Triangle(glistp++,   1, 2, 3, 1  );


//>-- MATERIAL 3: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

//Last: Homes_Roof_Straw_Clean   Current: Homes_Roof_Straw_Clean
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

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+116,30,0  );
   gSPModifyVertex(glistp++,  16,   G_MWO_POINT_ST, 0x16d9ff95);  /*New Coords: 45.70, -3.32*/
     gSP2Triangles(glistp++,   14, 15, 16, 14, 17, 18, 16, 17  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+145,30,0  );
     gSP2Triangles(glistp++,   15, 16, 17, 15, 18, 19, 20, 18  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0xc37e0bf2);  /*New Coords: -121.01, 95.58*/   gSPModifyVertex(glistp++,  19,   G_MWO_POINT_ST, 0x35b60bf2);  /*New Coords: 107.42, 95.58*/
     gSP1Triangle(glistp++,   17, 20, 19, 17  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x16d9ff74);  /*New Coords: 45.70, -4.35*/
     gSP1Triangle(glistp++,   15, 21, 20, 15  );
     gSP1Triangle(glistp++,   22, 23, 24, 22  );


//>-- MATERIAL 5: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

//Last: wood_dock_pillars   Current: wood_dock_pillars
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  wood_dock_pillars,	G_IM_FMT_CI,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 14,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, wood_dock_pillars_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,255,202,152,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+87,30,0  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x024f0025);  /*New Coords: 36.98, 0.59*/   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x016b0025);  /*New Coords: 22.72, 0.59*/
     gSP2Triangles(glistp++,   3, 4, 5, 3, 3, 5, 6, 3  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0xff030025);  /*New Coords: -15.78, 0.59*/
     gSP2Triangles(glistp++,   6, 5, 4, 6, 7, 4, 3, 7  );
     gSP2Triangles(glistp++,   8, 9, 10, 8, 11, 12, 9, 11  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0x02ea0025);  /*New Coords: 46.66, 0.59*/
     gSP1Triangle(glistp++,   10, 12, 11, 10  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0xff9e0025);  /*New Coords: -6.09, 0.59*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x0054ffc0);  /*New Coords: 5.28, -1.00*/
     gSP1Triangle(glistp++,   10, 9, 12, 10  );
     gSP1Triangle(glistp++,   13, 14, 15, 13  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0x019e0025);  /*New Coords: 25.91, 0.59*/   gSPModifyVertex(glistp++,  15,   G_MWO_POINT_ST, 0x00ba0025);  /*New Coords: 11.65, 0.59*/
     gSP1Triangle(glistp++,   13, 15, 16, 13  );
   gSPModifyVertex(glistp++,  13,   G_MWO_POINT_ST, 0xfe520025);  /*New Coords: -26.85, 0.59*/
     gSP2Triangles(glistp++,   16, 15, 14, 16, 17, 14, 13, 17  );
     gSP2Triangles(glistp++,   18, 19, 20, 18, 21, 22, 19, 21  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0x024f0025);  /*New Coords: 36.98, 0.59*/
     gSP1Triangle(glistp++,   20, 22, 21, 20  );
   gSPModifyVertex(glistp++,  20,   G_MWO_POINT_ST, 0xff030025);  /*New Coords: -15.78, 0.59*/   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0xffb9ffc0);  /*New Coords: -4.40, -1.00*/
     gSP1Triangle(glistp++,   20, 19, 22, 20  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+232,30,0  );
     gSP2Triangles(glistp++,   22, 23, 24, 22, 25, 26, 27, 25  );
   gSPModifyVertex(glistp++,  22,   G_MWO_POINT_ST, 0xff0313d7);  /*New Coords: -15.77, 79.37*/   gSPModifyVertex(glistp++,  23,   G_MWO_POINT_ST, 0xff030025);  /*New Coords: -15.78, 0.59*/
     gSP1Triangle(glistp++,   22, 25, 23, 22  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+260,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x02ea13d7);  /*New Coords: 46.67, 79.37*/   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x02ea0025);  /*New Coords: 46.66, 0.59*/
     gSP2Triangles(glistp++,   3, 4, 5, 3, 0, 2, 4, 0  );
     gSP2Triangles(glistp++,   6, 7, 8, 6, 9, 10, 11, 9  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0xfe5213d7);  /*New Coords: -26.84, 79.37*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0xfe520025);  /*New Coords: -26.85, 0.59*/
     gSP2Triangles(glistp++,   6, 9, 7, 6, 12, 13, 14, 12  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x024f13d7);  /*New Coords: 36.98, 79.37*/   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x024f0025);  /*New Coords: 36.98, 0.59*/
     gSP2Triangles(glistp++,   15, 16, 17, 15, 12, 14, 16, 12  );


//>-- MATERIAL 6: START ------------------------------------ 'Beach-Sand1'-------------------------------------------------

//Last: Sand_Texture_1   Current: Sand_Texture_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Sand_Texture_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 );
   gDPLoadTLUT_pal16(  glistp++,  0, Sand_Texture_1_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+145,30,0  );
     gSP1Triangle(glistp++,   25, 26, 27, 25  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+173,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
     gSP2Triangles(glistp++,   3, 4, 5, 3, 6, 7, 8, 6  );
     gSP2Triangles(glistp++,   9, 10, 11, 9, 0, 12, 4, 0  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0xdb2f0b00);  /*New Coords: -294.50, 88.03*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0xe8e70765);  /*New Coords: -184.77, 59.16*/
     gSP2Triangles(glistp++,   5, 4, 13, 5, 1, 6, 14, 1  );
     gSP2Triangles(glistp++,   7, 15, 16, 7, 15, 9, 17, 15  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+170,30,0  );
     gSP2Triangles(glistp++,   13, 0, 21, 13, 1, 22, 23, 1  );
     gSP2Triangles(glistp++,   21, 0, 2, 21, 15, 3, 5, 15  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+286,30,0  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+179,30,0  );
     gSP1Triangle(glistp++,   8, 0, 2, 8  );
     gSP1Triangle(glistp++,   11, 3, 5, 11  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+294,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+174,30,0  );
     gSP2Triangles(glistp++,   1, 0, 13, 1, 7, 6, 15, 7  );
     gSP2Triangles(glistp++,   15, 14, 16, 15, 10, 9, 17, 10  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+171,30,0  );
     gSP1Triangle(glistp++,   1, 0, 22, 1  );


//>-- MATERIAL 7: START ------------------------------------ 'Beach-Stone-Transition-1'-------------------------------------------------

//Last: Sand_Texture_3_Stones   Current: Sand_Texture_3_Stones
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Sand_Texture_3_Stones,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 );
   gDPLoadTLUT_pal16(  glistp++,  0, Sand_Texture_3_Stones_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,239,0,255,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+0,30,0  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x07bd039a);  /*New Coords: 61.93, 28.84*/   gSPModifyVertex(glistp++,  18,   G_MWO_POINT_ST, 0x06cb03a5);  /*New Coords: 54.37, 29.19*/   gSPModifyVertex(glistp++,  11,   G_MWO_POINT_ST, 0x08a503b0);  /*New Coords: 69.16, 29.53*/
     gSP2Triangles(glistp++,   19, 3, 18, 19, 19, 20, 11, 19  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+203,30,0  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x07bd039a);  /*New Coords: 61.93, 28.84*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x08a503b0);  /*New Coords: 69.16, 29.53*/
     gSP2Triangles(glistp++,   20, 21, 22, 20, 7, 21, 12, 7  );


//>-- MATERIAL 11: START ------------------------------------ 'Beach-Rocky-Hill'-------------------------------------------------

//Last: Sand_Texture_4_Hill   Current: Sand_Texture_4_Hill
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  Sand_Texture_4_Hill,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, Sand_Texture_4_Hill_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,26,21,21,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   24, 25, 26, 24, 26, 25, 27, 26  );
     gSP2Triangles(glistp++,   25, 28, 27, 25, 27, 28, 29, 27  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+28,30,0  );
     gSP1Triangle(glistp++,   1, 0, 2, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+27,30,0  );
     gSP1Triangle(glistp++,   0, 2, 4, 0  );
     gSP2Triangles(glistp++,   2, 3, 4, 2, 5, 4, 6, 5  );
     gSP2Triangles(glistp++,   6, 4, 3, 6, 7, 6, 8, 7  );
   gSPModifyVertex(glistp++,  10,   G_MWO_POINT_ST, 0xde4f0b12);  /*New Coords: -67.38, 88.59*/
     gSP2Triangles(glistp++,   10, 7, 8, 10, 6, 7, 5, 6  );
   gSPModifyVertex(glistp++,  24,   G_MWO_POINT_ST, 0x1dce001e);  /*New Coords: 59.61, 0.95*/
     gSP1Triangle(glistp++,   24, 27, 28, 24  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+54,30,0  );
     gSP1Triangle(glistp++,   1, 0, 11, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+51,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x1dce001e);  /*New Coords: 59.61, 0.95*/
     gSP1Triangle(glistp++,   19, 0, 4, 19  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+225,30,0  );
     gSP1Triangle(glistp++,   9, 10, 11, 9  );
     gSP1Triangle(glistp++,   9, 18, 10, 9  );


//>-- MATERIAL 13: START ------------------------------------ 'Rock-Sea-Wall'-------------------------------------------------

//Last: rock_sea_wall   Current: rock_sea_wall
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  rock_sea_wall,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, rock_sea_wall_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,26,21,21,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+58,30,0  );
   gSPModifyVertex(glistp++,  16,   G_MWO_POINT_ST, 0x2ce40139);  /*New Coords: 89.79, 9.80*/
     gSP2Triangles(glistp++,   16, 17, 18, 16, 19, 16, 20, 19  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x015600f7);  /*New Coords: 2.68, 7.74*/
     gSP2Triangles(glistp++,   21, 17, 16, 21, 17, 21, 22, 17  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x3e9a0065);  /*New Coords: 125.21, 3.18*/
     gSP2Triangles(glistp++,   17, 23, 24, 17, 25, 26, 27, 25  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+86,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+83,30,0  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x9fe903d9);  /*New Coords: -192.17, 30.80*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0xb25a000a);  /*New Coords: -155.29, 0.34*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0xd235001f);  /*New Coords: -91.58, 0.98*/
     gSP1Triangle(glistp++,   5, 4, 0, 5  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x42510260);  /*New Coords: 132.64, 19.00*/   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x56a8024a);  /*New Coords: 173.31, 18.32*/
     gSP1Triangle(glistp++,   1, 0, 4, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+76,30,0  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0xfc1e0050);  /*New Coords: -7.76, 2.53*/
     gSP1Triangle(glistp++,   2, 0, 13, 2  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0x9fe903d9);  /*New Coords: -192.17, 30.80*/
     gSP1Triangle(glistp++,   12, 2, 13, 12  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+105,30,0  );
     gSP1Triangle(glistp++,   5, 6, 7, 5  );
     gSP1Triangle(glistp++,   8, 9, 10, 8  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x74bf0201);  /*New Coords: -278.51, 16.04*/
     gSP1Triangle(glistp++,   11, 8, 12, 11  );
   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x846d00b9);  /*New Coords: -247.15, 5.80*/
     gSP2Triangles(glistp++,   13, 9, 8, 13, 9, 13, 14, 9  );
     gSP2Triangles(glistp++,   9, 15, 16, 9, 6, 17, 18, 6  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0x892c0327);  /*New Coords: 274.35, 25.23*/   gSPModifyVertex(glistp++,  18,   G_MWO_POINT_ST, 0x95e70447);  /*New Coords: 299.81, 34.24*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x8c0c0280);  /*New Coords: 280.10, 20.01*/
     gSP2Triangles(glistp++,   14, 5, 19, 14, 18, 16, 7, 18  );
     gSP2Triangles(glistp++,   20, 21, 22, 20, 23, 24, 20, 23  );
     gSP2Triangles(glistp++,   16, 15, 19, 16, 21, 20, 24, 21  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+74,30,0  );
   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0xfc1e0050);  /*New Coords: -7.76, 2.53*/
     gSP1Triangle(glistp++,   4, 0, 2, 4  );
   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x3364027c);  /*New Coords: 102.78, 19.88*/
     gSP1Triangle(glistp++,   11, 3, 4, 11  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x2ce40139);  /*New Coords: 89.79, 9.80*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0xd545fde0);  /*New Coords: -85.46, -16.98*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x015600f7);  /*New Coords: 2.68, 7.74*/
     gSP2Triangles(glistp++,   3, 5, 0, 3, 7, 1, 6, 7  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x3e9a0065);  /*New Coords: 125.21, 3.18*/
     gSP2Triangles(glistp++,   2, 1, 8, 2, 4, 9, 11, 4  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+219,30,0  );
     gSP1Triangle(glistp++,   26, 27, 28, 26  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+248,30,0  );
     gSP1Triangle(glistp++,   0, 1, 2, 0  );
     gSP1Triangle(glistp++,   3, 4, 5, 3  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+110,30,0  );
   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x6b0efff0);  /*New Coords: 214.11, -0.49*/
     gSP1Triangle(glistp++,   14, 0, 2, 14  );
   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x73f705d8);  /*New Coords: -280.07, 46.76*/
     gSP1Triangle(glistp++,   7, 3, 5, 7  );
   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x6ced04d0);  /*New Coords: -294.15, 38.52*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x60580455);  /*New Coords: -319.31, 34.67*/
     gSP1Triangle(glistp++,   17, 6, 7, 17  );
   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x815401f8);  /*New Coords: -253.34, 15.78*/
     gSP2Triangles(glistp++,   6, 8, 3, 6, 10, 4, 9, 10  );
     gSP2Triangles(glistp++,   5, 4, 11, 5, 2, 1, 13, 2  );
   gSPModifyVertex(glistp++,  14,   G_MWO_POINT_ST, 0x87a001da);  /*New Coords: 271.25, 14.83*/   gSPModifyVertex(glistp++,  7,   G_MWO_POINT_ST, 0x361a020b);  /*New Coords: 108.21, 16.37*/   gSPModifyVertex(glistp++,  17,   G_MWO_POINT_ST, 0x30a605ca);  /*New Coords: 97.30, 46.32*/
     gSP2Triangles(glistp++,   10, 9, 14, 10, 7, 15, 17, 7  );
   gSPModifyVertex(glistp++,  2,   G_MWO_POINT_ST, 0x8c0c0280);  /*New Coords: 280.10, 20.01*/
     gSP2Triangles(glistp++,   7, 18, 15, 7, 2, 11, 14, 2  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+255,30,0  );
     gSP1Triangle(glistp++,   23, 24, 25, 23  );


//>-- MATERIAL 14: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

//Last:    Current: RocktoFerns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  RocktoFerns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, RocktoFerns_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,26,21,21,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   0, 6, 7, 0, 8, 9, 10, 8  );
     gSP2Triangles(glistp++,   3, 11, 10, 3, 9, 8, 12, 9  );
     gSP2Triangles(glistp++,   13, 0, 2, 13, 18, 5, 7, 18  );
   gSPModifyVertex(glistp++,  18,   G_MWO_POINT_ST, 0x519800bf);  /*New Coords: 163.19, 5.99*/   gSPModifyVertex(glistp++,  6,   G_MWO_POINT_ST, 0x414000c1);  /*New Coords: 130.50, 6.03*/   gSPModifyVertex(glistp++,  8,   G_MWO_POINT_ST, 0x92b203fa);  /*New Coords: 293.39, 31.83*/   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0xa0460438);  /*New Coords: 320.55, 33.75*/
     gSP2Triangles(glistp++,   21, 18, 6, 21, 8, 22, 12, 8  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0xb75b034b);  /*New Coords: -145.28, 26.35*/
     gSP1Triangle(glistp++,   0, 23, 6, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+58,30,0  );
     gSP1Triangle(glistp++,   4, 5, 6, 4  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+56,30,0  );
     gSP2Triangles(glistp++,   10, 11, 0, 10, 12, 13, 3, 12  );
     gSP1Triangle(glistp++,   11, 12, 1, 11  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+51,30,0  );
     gSP1Triangle(glistp++,   15, 1, 0, 15  );
     gSP1Triangle(glistp++,   18, 13, 22, 18  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+196,30,0  );
     gSP1Triangle(glistp++,   13, 14, 15, 13  );
     gSP2Triangles(glistp++,   16, 17, 18, 16, 19, 20, 21, 19  );
     gSP2Triangles(glistp++,   22, 14, 21, 22, 23, 24, 25, 23  );
     gSP1Triangle(glistp++,   26, 13, 18, 26  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+222,30,0  );
   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x524803da);  /*New Coords: 164.56, 30.82*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x414000c1);  /*New Coords: 130.50, 6.03*/
     gSP1Triangle(glistp++,   4, 1, 0, 4  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+62,30,0  );
     gSP1Triangle(glistp++,   7, 0, 2, 7  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+236,30,0  );
     gSP1Triangle(glistp++,   1, 2, 3, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+57,30,0  );
     gSP1Triangle(glistp++,   0, 11, 2, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+231,30,0  );
     gSP1Triangle(glistp++,   9, 10, 11, 9  );
   gSPModifyVertex(glistp++,  12,   G_MWO_POINT_ST, 0xd3ef0400);  /*New Coords: -88.13, 32.00*/
     gSP1Triangle(glistp++,   12, 7, 13, 12  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+59,30,0  );
     gSP1Triangle(glistp++,   0, 10, 14, 0  );


//>-- MATERIAL 15: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

//Last: ground_cover_ferns   Current: ground_cover_ferns
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPClearGeometryMode( glistp++,  0xFFFFFFFF );
   gSPSetGeometryMode( glistp++,   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_RGBA16 );
   gDPSetCombineMode(  glistp++,  G_CC_MODULATERGB, G_CC_PASS2 );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  ground_cover_ferns,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD );
   gDPLoadTLUT_pal16(  glistp++,  0, ground_cover_ferns_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_AVERAGE );
   gDPSetAlphaDither(  glistp++,  G_CD_BAYER );
   gDPSetColorDither(  glistp++,  G_CD_BAYER );
   gDPSetPrimColor(glistp++,  1,255,26,21,21,255  );

   gSPVertex(glistp++,  beach_LOD1_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   2, 14, 15, 2, 2, 16, 14, 2  );
     gSP1Triangle(glistp++,   17, 16, 2, 17  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+29,30,0  );
   gSPModifyVertex(glistp++,  5,   G_MWO_POINT_ST, 0xfa73fd2b);  /*New Coords: -11.10, -22.64*/   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0x2f4cfde3);  /*New Coords: 94.60, -16.90*/
     gSP1Triangle(glistp++,   5, 7, 3, 5  );
     gSP2Triangles(glistp++,   5, 8, 7, 5, 3, 9, 10, 3  );
     gSP1Triangle(glistp++,   7, 9, 3, 7  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+27,30,0  );
   gSPModifyVertex(glistp++,  4,   G_MWO_POINT_ST, 0x5366fc87);  /*New Coords: 166.80, -27.77*/   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x97b50447);  /*New Coords: 303.42, 34.22*/
     gSP1Triangle(glistp++,   4, 12, 0, 4  );
     gSP1Triangle(glistp++,   13, 14, 15, 13  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+17,30,0  );
     gSP1Triangle(glistp++,   23, 0, 26, 23  );
     gSP1Triangle(glistp++,   27, 28, 29, 27  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+41,30,0  );
     gSP1Triangle(glistp++,   0, 3, 6, 0  );
     gSP2Triangles(glistp++,   7, 8, 9, 7, 4, 7, 9, 4  );
     gSP2Triangles(glistp++,   10, 11, 12, 10, 15, 16, 17, 15  );
     gSP2Triangles(glistp++,   18, 19, 17, 18, 15, 20, 12, 15  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+63,30,0  );
     gSP2Triangles(glistp++,   1, 0, 8, 1, 9, 10, 1, 9  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+59,30,0  );
     gSP1Triangle(glistp++,   1, 0, 14, 1  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+31,30,0  );
   gSPModifyVertex(glistp++,  0,   G_MWO_POINT_ST, 0x5366fc87);  /*New Coords: 166.80, -27.77*/   gSPModifyVertex(glistp++,  1,   G_MWO_POINT_ST, 0x2f4cfde3);  /*New Coords: 94.60, -16.90*/
     gSP1Triangle(glistp++,   0, 1, 8, 0  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+205,30,0  );
     gSP2Triangles(glistp++,   22, 23, 24, 22, 25, 26, 27, 25  );
     gSP2Triangles(glistp++,   24, 9, 25, 24, 27, 13, 28, 27  );
   gSPVertex(glistp++,  beach_LOD1_VTXPointer+51,30,0  );
   gSPModifyVertex(glistp++,  3,   G_MWO_POINT_ST, 0xd3eff142);  /*New Coords: -88.13, -117.91*/
     gSP2Triangles(glistp++,   3, 0, 2, 3, 10, 5, 7, 10  );
     gSP2Triangles(glistp++,   6, 8, 7, 6, 1, 5, 2, 1  );
     gSP2Triangles(glistp++,   20, 21, 13, 20, 21, 9, 22, 21  );
   gDPPipeSync(  glistp++  );
} 

//>-- Obj00: END ------------------------------------------- beach_LOD1 -------------------------------------------------

 
 
 
//>-- Obj00: START ------------------------------------------ beach_LOD2 -------------------------------------------------

Vtx beach_LOD2_VertList_0 [] = {
   { 301.35, -1735.14, 916.05, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 318.49, -1756.36, 919.56, 1, 0x016b, 0x0025, 147, 207, 162, 255}, 
   { 324.62, -1805.92, 579.36, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 303.34, -1822.93, 581.45, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 297.21, -1773.36, 921.65, 1, 0x006d, 0x0025, 147, 207, 162, 255}, 
   { 103.40, -1782.48, 599.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 108.86, -1710.56, 896.72, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 104.72, -1748.12, 905.76, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 82.12, -1799.04, 603.64, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 87.58, -1727.12, 901.12, 1, 0x0206, 0x0025, 56, 41, 34, 255}, 
   { 301.35, -1228.18, 905.06, 1, 0xfe52, 0x0025, 56, 41, 34, 255}, 
   { 297.21, -1266.29, 911.39, 1, 0xffbc, 0x0025, 147, 207, 162, 255}, 
   { 318.49, -1249.32, 908.98, 1, 0xff08, 0xffc0, 147, 207, 162, 255}, 
   { 322.90, -1289.58, 665.04, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 301.62, -1306.55, 667.45, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 103.72, -1276.62, 660.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 61.56, -1109.89, 840.40, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { 65.11, -1137.89, 867.09, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 86.50, -1294.02, 673.10, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 44.34, -1127.29, 852.53, 1, 0x016b, 0x0025, 56, 41, 34, 255}, 
   { 112.44, -1779.02, 801.56, 1, 0x000c, 0x3a9b, 47, 54, 47, 255}, 
   { 307.64, -1779.02, 832.87, 1, 0x03ec, 0x3a9b, 103, 140, 112, 255}, 
   { 307.64, -1279.02, 813.18, 1, 0x03ec, 0xe89a, 74, 95, 78, 255}, 
   { 112.44, -1279.02, 772.21, 1, 0x000c, 0xe89a, 47, 54, 47, 255}, 
   { 307.64, -1019.22, 735.24, 1, 0x03ec, 0xbdff, 47, 54, 47, 255}, 
   { 112.44, -1019.22, 694.27, 1, 0x000c, 0xbdff, 47, 54, 47, 255}, 
   { -3764.14, -2220.23, 860.54, 1, 0x982a, 0x0000, 75, 99, 80, 255}, 
   { -4463.72, -2260.14, 1916.25, 1, 0x96f9, 0xf46f, 101, 140, 110, 255}, 
   { -4656.61, -3390.65, 1376.87, 1, 0x5a0e, 0xf142, 101, 140, 110, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0xfe62, 0x0419, 50, 58, 50, 255}, 
   { -2760.51, -284.39, 936.75, 1, 0xf00a, 0xffe6, 67, 85, 70, 255}, 
   { -3506.40, -1718.44, 828.74, 1, 0xb1f7, 0x0006, 67, 85, 70, 255}, 
   { -4106.08, -4512.47, 64.28, 1, 0xeae9, 0x0400, 55, 66, 56, 255}, 
   { -3545.78, -3370.12, 283.56, 1, 0x3e93, 0x0400, 68, 84, 70, 255}, 
   { -3725.12, -3508.88, 612.93, 1, 0x3e93, 0x0000, 84, 112, 90, 255}, 
   { -3502.15, -2976.63, 322.21, 1, 0x5a0e, 0x0400, 68, 84, 70, 255}, 
   { -3674.39, -2146.44, 424.91, 1, 0xa346, 0x0419, 50, 58, 50, 255}, 
   { -3676.85, -3120.30, 642.59, 1, 0x5a0e, 0x0000, 84, 112, 90, 255}, 
   { -4235.08, -4479.88, 409.00, 1, 0xeae9, 0x0000, 78, 103, 83, 255}, 
   { -3342.17, -426.61, 1568.43, 1, 0xdcde, 0xf786, 100, 138, 109, 255}, 
   { -3927.98, -1331.11, 2023.16, 1, 0xb980, 0xf17a, 100, 138, 109, 255}, 
   { -3642.83, -1965.59, 897.24, 1, 0xa347, 0x0004, 64, 81, 67, 255}, 
   { 1702.86, -2173.11, 492.10, 1, 0x39c7, 0x050c, 95, 133, 98, 255}, 
   { 2619.78, -2453.51, 167.94, 1, 0x4683, 0x066c, 39, 52, 41, 255}, 
   { 2464.99, -857.62, 446.66, 1, 0x4515, 0x01d6, 39, 52, 41, 255}, 
   { 1702.03, -1185.27, 549.70, 1, 0x3a28, 0x02c0, 54, 73, 58, 255}, 
   { 1701.69, -1185.09, 549.80, 1, 0x3a27, 0x02bf, 54, 73, 58, 255}, 
   { 1699.03, -1184.99, 550.28, 1, 0x3a1d, 0x02bf, 54, 73, 58, 255}, 
   { -906.05, -1065.33, 739.55, 1, 0x158a, 0x01cc, 57, 76, 59, 255}, 
   { -898.07, 355.44, 798.48, 1, 0x1665, 0xfd79, 90, 109, 76, 255}, 
   { -2449.59, -208.37, 599.10, 1, 0x0056, 0xfeca, 41, 54, 40, 255}, 
   { -2714.26, -627.17, 565.31, 1, 0xfc5d, 0x0035, 41, 54, 40, 255}, 
   { -2504.99, -713.34, 557.16, 1, 0xff42, 0x0089, 61, 79, 61, 255}, 
   { 832.22, -2040.78, 705.44, 1, 0x2d9c, 0x0447, 51, 69, 59, 255}, 
   { 833.35, -1152.99, 707.33, 1, 0x2df5, 0x025f, 57, 76, 59, 255}, 
   { -3674.39, -2146.44, 442.70, 1, 0xedf6, 0x0558, 39, 52, 41, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0x3add, 0xfe74, 38, 50, 40, 255}, 
   { 835.95, 293.91, 711.64, 1, 0x2ec0, 0xfe02, 38, 50, 40, 255}, 
   { -2272.69, -2633.60, 479.97, 1, 0x0195, 0x060e, 152, 139, 103, 255}, 
   { -908.95, -2192.54, 718.15, 1, 0x1507, 0x0489, 100, 141, 104, 255}, 
   { 2464.99, -857.62, 339.51, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { 3686.22, 828.23, 1976.07, 1, 0xe9df, 0xfb55, 101, 140, 110, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0xe513, 0x0926, 101, 140, 110, 255}, 
   { 3586.81, -4602.20, 762.51, 1, 0x40d0, 0x06f4, 68, 86, 71, 255}, 
   { 2996.51, -4727.28, -239.77, 1, 0x31fc, 0xfea7, 49, 56, 48, 255}, 
   { 2992.82, -5080.16, 271.28, 1, 0x2b73, 0x0598, 49, 56, 48, 255}, 
   { 3374.32, -4336.58, -188.27, 1, 0x3e44, 0xfdfb, 49, 56, 48, 255}, 
   { 4090.63, -4349.90, -228.51, 1, 0x62d3, 0xff0c, 49, 56, 48, 255}, 
   { 2654.68, -5368.15, 301.70, 1, 0x1abe, 0x065c, 68, 86, 71, 255}, 
   { 1820.09, -5102.50, -320.71, 1, 0x04ac, 0xfc04, 49, 56, 48, 255}, 
   { 2001.91, -5424.03, 547.66, 1, 0x0249, 0x05f4, 68, 86, 71, 255}, 
   { 685.70, -6771.51, -394.82, 1, 0xb9d0, 0x00df, 49, 56, 48, 255}, 
   { 1359.77, -6393.67, 647.89, 1, 0xde4f, 0x0b12, 101, 139, 110, 255}, 
   { 3422.32, -831.78, 1495.78, 1, 0x2485, 0x004e, 101, 140, 110, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x4c41, 0x0955, 79, 105, 84, 255}, 
   { 3754.36, -2876.68, 689.94, 1, 0x6206, 0x0266, 49, 56, 48, 255}, 
   { 3601.59, -1624.88, 1495.78, 1, 0x40b9, 0xff7e, 49, 56, 48, 255}, 
   { 1257.59, -1226.56, 884.89, 1, 0x12fd, 0x006e, 51, 69, 59, 255}, 
   { 2010.50, -1331.13, 820.86, 1, 0x3e9a, 0x0065, 51, 69, 59, 255}, 
   { 1917.36, -1321.79, 441.81, 1, 0x3c70, 0x04d5, 28, 38, 33, 255}, 
   { 2804.04, -1242.08, 680.54, 1, 0x7bcb, 0x0033, 51, 69, 59, 255}, 
   { 2713.76, -1233.25, 316.58, 1, 0x7cdc, 0x0487, 28, 38, 33, 255}, 
   { 311.85, -1209.34, 708.53, 1, 0x9fe9, 0x03d9, 51, 69, 59, 255}, 
   { 526.48, -1222.28, 887.17, 1, 0xb25a, 0x000a, 51, 69, 59, 255}, 
   { 875.70, -1263.21, 881.61, 1, 0xd235, 0x001f, 51, 69, 59, 255}, 
   { 1131.52, -1295.14, 776.86, 1, 0xfc1e, 0x0050, 51, 69, 59, 255}, 
   { 1085.60, -1263.54, 579.99, 1, 0xf29d, 0x045e, 38, 52, 45, 255}, 
   { -2232.25, -865.67, 686.75, 1, 0x846d, 0x00b9, 51, 69, 59, 255}, 
   { -1513.64, -1098.66, 832.13, 1, 0xdfc4, 0xfff7, 51, 69, 59, 255}, 
   { -1513.64, -1098.66, 562.59, 1, 0xe21a, 0x05c5, 28, 38, 33, 255}, 
   { -708.45, -1183.50, 930.75, 1, 0x3ddc, 0x0004, 51, 69, 59, 255}, 
   { -710.70, -1183.50, 684.84, 1, 0x3e5e, 0x0543, 28, 38, 33, 255}, 
   { -6.30, -1183.50, 723.05, 1, 0x95e7, 0x0447, 51, 69, 59, 255}, 
   { -53.66, -1183.50, 862.62, 1, 0x8c0c, 0x0280, 51, 69, 59, 255}, 
   { -141.55, -1183.50, 921.68, 1, 0x87a0, 0x01da, 51, 69, 59, 255}, 
   { -1758.20, -2021.10, 875.27, 1, 0x09c0, 0xee31, 31, 21, 17, 255}, 
   { -1643.63, -1926.96, 880.91, 1, 0x062b, 0xee37, 31, 21, 17, 255}, 
   { -1712.45, -1809.32, 747.61, 1, 0x0630, 0x1fb9, 36, 22, 18, 255}, 
   { -1856.63, -1960.17, 737.22, 1, 0x09c5, 0x1fb3, 95, 60, 49, 255}, 
   { -1714.26, -1802.68, 602.87, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { -1460.18, -1804.07, 726.58, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { -1476.06, -1939.38, 863.29, 1, 0xff00, 0xee43, 59, 48, 44, 255}, 
   { -1378.40, -1931.65, 884.70, 1, 0x02ac, 0x0bcc, 142, 159, 145, 255}, 
   { -1677.49, -1826.62, 881.80, 1, 0xbdb9, 0x0bf2, 125, 102, 86, 255}, 
   { -1621.19, -2108.97, 977.37, 1, 0x16d9, 0xff95, 31, 21, 17, 255}, 
   { -1864.06, -2047.00, 885.74, 1, 0x7f07, 0x0bf2, 57, 36, 30, 255}, 
   { -1725.59, -4633.92, 19.01, 1, 0x0399, 0x0884, 139, 195, 143, 255}, 
   { -2328.53, -2232.23, 360.13, 1, 0xfdff, 0x084f, 145, 189, 138, 255}, 
   { -3128.37, -2507.17, 333.89, 1, 0xfe18, 0x0a34, 136, 190, 140, 255}, 
   { 1519.22, -1883.49, 304.04, 1, 0xffa8, 0xffce, 255, 255, 255, 255}, 
   { 2156.40, -4253.67, -43.01, 1, 0x0537, 0xffeb, 138, 193, 142, 255}, 
   { 3729.21, -3736.25, -261.59, 1, 0x051c, 0xfc34, 63, 76, 59, 255}, 
   { 3084.14, -1532.39, 149.61, 1, 0xffed, 0xfc34, 62, 76, 59, 255}, 
   { 3405.92, -2737.92, 26.00, 1, 0x63ac, 0x0400, 49, 56, 48, 255}, 
   { 3754.36, -2876.68, 689.94, 1, 0x63ac, 0x0000, 49, 56, 48, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x3a60, 0x0000, 79, 105, 84, 255}, 
   { 2464.99, -857.62, 339.51, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2659.93, -2105.52, 115.08, 1, 0x2aa7, 0x0400, 100, 138, 109, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0x24c2, 0x08e7, 49, 56, 48, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x4c41, 0x0955, 82, 110, 88, 255}, 
   { 3601.59, -1624.88, 1495.78, 1, 0x40b9, 0xff7e, 50, 58, 50, 255}, 
   { 3744.31, -3387.94, -215.31, 1, 0x9186, 0x0000, 103, 142, 112, 255}, 
   { 307.49, -1784.71, 575.84, 1, 0x024f, 0x13d7, 56, 41, 34, 255}, 
   { 301.35, -1735.14, 916.05, 1, 0x024f, 0x0025, 56, 41, 34, 255}, 
   { 324.62, -1805.92, 579.36, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 303.34, -1822.93, 581.45, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 99.26, -1820.03, 608.28, 1, 0xff9e, 0x13d7, 56, 41, 34, 255}, 
   { 103.40, -1782.48, 599.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 104.72, -1748.12, 905.76, 1, 0xff9e, 0x0025, 147, 207, 162, 255}, 
   { 103.40, -1782.48, 599.24, 1, 0x0108, 0x13d7, 56, 41, 34, 255}, 
   { 82.12, -1799.04, 603.64, 1, 0x0206, 0x13d7, 56, 41, 34, 255}, 
   { 108.86, -1710.56, 896.72, 1, 0x0108, 0x0025, 147, 207, 162, 255}, 
   { 305.76, -1268.44, 661.13, 1, 0x019e, 0x13d7, 56, 41, 34, 255}, 
   { 301.35, -1228.18, 905.06, 1, 0x019e, 0x0025, 56, 41, 34, 255}, 
   { 322.90, -1289.58, 665.04, 1, 0x00ba, 0x13d7, 56, 41, 34, 255}, 
   { 301.62, -1306.55, 667.45, 1, 0xffbc, 0x13d7, 56, 41, 34, 255}, 
   { 107.27, -1304.62, 687.67, 1, 0xff03, 0x13d7, 56, 41, 34, 255}, 
   { 103.72, -1276.62, 660.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 65.11, -1137.89, 867.09, 1, 0xff03, 0x0025, 147, 207, 162, 255}, 
   { 103.72, -1276.62, 660.97, 1, 0x006d, 0x13d7, 56, 41, 34, 255}, 
   { 86.50, -1294.02, 673.10, 1, 0x016b, 0x13d7, 56, 41, 34, 255}, 
   { 61.56, -1109.89, 840.40, 1, 0x006d, 0x0025, 56, 41, 34, 255}, 
   { -3674.39, -2146.44, 442.70, 1, 0xedf6, 0x0558, 39, 52, 41, 255}, 
   { -3502.15, -3304.13, 322.21, 1, 0xefe4, 0x084d, 63, 82, 62, 255}, 
   { -2272.69, -2633.60, 479.97, 1, 0xfb53, 0x06e9, 137, 132, 104, 255}, 
   { -2504.99, -713.34, 557.16, 1, 0xff42, 0x0089, 61, 79, 61, 255}, 
   { -906.05, -1065.33, 739.55, 1, 0x158a, 0x01cc, 57, 76, 59, 255}, 
   { 2082.62, 936.68, 1164.16, 1, 0x9eea, 0xfff0, 101, 140, 110, 255}, 
   { 1700.48, 49.47, 657.42, 1, 0xa979, 0x0400, 50, 58, 50, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0xd28d, 0xfff0, 101, 140, 110, 255}, 
   { -2368.03, -838.15, 474.36, 1, 0x73f7, 0x05d8, 51, 69, 59, 255}, 
   { -2232.25, -865.67, 686.75, 1, 0x846d, 0x00b9, 51, 69, 59, 255}, 
   { -1513.64, -1098.66, 562.59, 1, 0xe21a, 0x05c5, 28, 38, 33, 255}, 
   { -1513.64, -1098.66, 562.59, 1, 0xe21a, 0x05c5, 28, 38, 33, 255}, 
   { -1513.64, -1098.66, 832.13, 1, 0xdfc4, 0xfff7, 51, 69, 59, 255}, 
   { -710.70, -1183.50, 684.84, 1, 0x3e5e, 0x0543, 28, 38, 33, 255}, 
   { -53.66, -1183.50, 862.62, 1, 0x8c0c, 0x0280, 51, 69, 59, 255}, 
   { -710.70, -1183.50, 684.84, 1, 0x3e5e, 0x0543, 28, 38, 33, 255}, 
   { -141.55, -1183.50, 921.68, 1, 0x87a0, 0x01da, 51, 69, 59, 255}, 
   { -1853.33, -1948.73, 592.78, 1, 0x09c8, 0x3f50, 56, 35, 29, 255}, 
   { -1856.63, -1960.17, 737.22, 1, 0x09c5, 0x1fb3, 95, 60, 49, 255}, 
   { -1714.26, -1802.68, 602.87, 1, 0x0633, 0x3f56, 36, 22, 18, 255}, 
   { -1469.00, -1797.82, 582.06, 1, 0xff09, 0x3f62, 56, 35, 29, 255}, 
   { -1460.18, -1804.07, 726.58, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { -1712.45, -1809.32, 747.61, 1, 0x029b, 0x1fbf, 36, 22, 18, 255}, 
   { -1643.63, -1926.96, 880.91, 1, 0x0296, 0xee3d, 31, 21, 17, 255}, 
   { -1460.18, -1804.07, 726.58, 1, 0xff06, 0x1fc5, 93, 59, 48, 255}, 
   { -2651.61, -4791.04, 19.01, 1, 0x035c, 0x0a9c, 136, 190, 140, 255}, 
   { -1725.59, -4633.92, 19.01, 1, 0x0399, 0x0884, 139, 195, 143, 255}, 
   { -3128.37, -2507.17, 333.89, 1, 0xfe18, 0x0a34, 136, 190, 140, 255}, 
   { 2156.40, -4253.67, -43.01, 1, 0x0537, 0xffeb, 138, 193, 142, 255}, 
   { 1519.22, -1883.49, 304.04, 1, 0xffa8, 0xffce, 255, 255, 255, 255}, 
   { -1725.59, -4633.92, 19.01, 1, 0x0399, 0x0884, 255, 255, 255, 255}, 
   { 3084.14, -1532.39, 149.61, 1, 0xffed, 0xfc34, 62, 76, 59, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0xe540, 0x0000, 49, 56, 48, 255}, 
   { 2464.99, -857.62, 339.51, 1, 0xe286, 0x0400, 49, 56, 48, 255}, 
   { 2942.05, -1961.52, 603.79, 1, 0x2aa7, 0x0000, 82, 110, 88, 255}, 
   { 3422.32, -831.78, 1495.78, 1, 0x2485, 0x004e, 50, 58, 50, 255}, 
   { 2759.91, -849.66, 769.86, 1, 0x24c2, 0x08e7, 49, 56, 48, 255}, 
   { 3601.59, -1624.88, 1495.78, 1, 0x40b9, 0xff7e, 50, 58, 50, 255}, 
};

Gfx beach_LOD2_Static_PolyList_0[] = { 



//>-- MATERIAL 1: START ------------------------------------ 'Homes-Wall-Clean'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+87,30,0  ),
     gsSP2Triangles(  9, 10, 11, 9, 12, 11, 13, 12  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x029e3f5c),  /*New Coords: 20.96, 126.73*/   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x029b1fbf),  /*New Coords: 20.85, 63.50*/   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x0296ee3d),  /*New Coords: 20.69, -35.52*/
     gsSP2Triangles(  13, 11, 14, 13, 10, 15, 14, 10  ),
   gsSPModifyVertex( 11,   G_MWO_POINT_ST, 0x06301fb9),  /*New Coords: 49.51, 63.45*/
     gsSP1Triangle(  12, 9, 11, 12  ),
   gsSPVertex( beach_LOD2_VertList_0+145,30,0  ),
     gsSP1Triangle(  15, 16, 17, 15  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x029e3f5c),  /*New Coords: 20.96, 126.73*/
     gsSP2Triangles(  18, 17, 19, 18, 20, 21, 22, 20  ),


//>-- MATERIAL 3: START ------------------------------------ 'Homes-Roof-Straw-Clean'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+87,30,0  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0x29f30bf2),  /*New Coords: 83.90, 95.58*/
     gsSP2Triangles(  16, 17, 18, 16, 17, 19, 18, 17  ),


//>-- MATERIAL 5: START ------------------------------------ 'Wood-Dock-Pillars'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+0,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 0, 3  ),
     gsSP2Triangles(  5, 6, 7, 5, 8, 9, 6, 8  ),
     gsSP1Triangle(  10, 11, 12, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0x019e0025),  /*New Coords: 25.91, 0.59*/   gsSPModifyVertex( 12,   G_MWO_POINT_ST, 0x00ba0025),  /*New Coords: 11.65, 0.59*/
     gsSP1Triangle(  10, 12, 13, 10  ),
   gsSPModifyVertex( 10,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP2Triangles(  14, 11, 10, 14, 15, 16, 17, 15  ),
     gsSP1Triangle(  18, 19, 16, 18  ),
   gsSPModifyVertex( 19,   G_MWO_POINT_ST, 0xffb9ffc0),  /*New Coords: -4.40, -1.00*/
     gsSP1Triangle(  17, 16, 19, 17  ),
   gsSPVertex( beach_LOD2_VertList_0+116,30,0  ),
   gsSPModifyVertex( 7,   G_MWO_POINT_ST, 0xff0313d7),  /*New Coords: -15.77, 79.37*/   gsSPModifyVertex( 8,   G_MWO_POINT_ST, 0xff030025),  /*New Coords: -15.78, 0.59*/
     gsSP2Triangles(  7, 8, 9, 7, 7, 10, 8, 7  ),
     gsSP2Triangles(  11, 12, 13, 11, 14, 15, 16, 14  ),
     gsSP1Triangle(  17, 18, 19, 17  ),
   gsSPModifyVertex( 17,   G_MWO_POINT_ST, 0xfe5213d7),  /*New Coords: -26.84, 79.37*/   gsSPModifyVertex( 18,   G_MWO_POINT_ST, 0xfe520025),  /*New Coords: -26.85, 0.59*/
     gsSP1Triangle(  17, 20, 18, 17  ),
     gsSP2Triangles(  21, 22, 23, 21, 24, 25, 26, 24  ),


//>-- MATERIAL 6: START ------------------------------------ 'Beach-Sand1'-------------------------------------------------

//Last: Sand_Texture_1   Current: Sand_Texture_1
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   Sand_Texture_1,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP,G_TX_WRAP, 6,6, 15,15 ),
   gsDPLoadTLUT_pal16(   0, Sand_Texture_1_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,239,0,255,255  ),

   gsSPVertex( beach_LOD2_VertList_0+87,30,0  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 21, 20, 23  ),
     gsSP1Triangle(  24, 25, 26, 24  ),
   gsSPVertex( beach_LOD2_VertList_0+145,30,0  ),
     gsSP1Triangle(  23, 24, 25, 23  ),
     gsSP2Triangles(  26, 27, 28, 26, 27, 26, 29, 27  ),


//>-- MATERIAL 11: START ------------------------------------ 'Beach-Rocky-Hill'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+58,30,0  ),
     gsSP2Triangles(  6, 7, 8, 6, 6, 9, 7, 6  ),
   gsSPModifyVertex( 9,   G_MWO_POINT_ST, 0x51c5fe82),  /*New Coords: 163.54, -11.91*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x566d06b8),  /*New Coords: 172.86, 53.77*/
     gsSP2Triangles(  10, 9, 6, 10, 11, 8, 12, 11  ),
     gsSP2Triangles(  12, 8, 7, 12, 13, 12, 14, 13  ),
     gsSP2Triangles(  15, 13, 14, 15, 12, 13, 11, 12  ),


//>-- MATERIAL 12: START ------------------------------------ 'Grass-Village'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+29,30,0  ),
     gsSP2Triangles(  13, 14, 15, 13, 16, 17, 18, 16  ),
     gsSP2Triangles(  19, 20, 21, 19, 22, 23, 21, 22  ),
     gsSP2Triangles(  24, 25, 19, 24, 23, 22, 26, 23  ),
     gsSP2Triangles(  16, 15, 27, 16, 17, 27, 18, 17  ),
     gsSP1Triangle(  19, 25, 28, 19  ),
   gsSPVertex( beach_LOD2_VertList_0+48,30,0  ),
     gsSP1Triangle(  10, 11, 0, 10  ),
   gsSPVertex( beach_LOD2_VertList_0+42,30,0  ),
     gsSP2Triangles(  3, 0, 2, 3, 12, 11, 5, 12  ),
     gsSP2Triangles(  0, 3, 5, 0, 5, 11, 0, 5  ),
     gsSP2Triangles(  10, 6, 8, 10, 17, 11, 6, 17  ),
   gsSPVertex( beach_LOD2_VertList_0+129,30,0  ),
     gsSP2Triangles(  14, 15, 16, 14, 16, 17, 14, 16  ),
   gsSPVertex( beach_LOD2_VertList_0+47,30,0  ),
     gsSP1Triangle(  7, 0, 9, 7  ),
   gsSPVertex( beach_LOD2_VertList_0+45,30,0  ),
     gsSP1Triangle(  1, 0, 11, 1  ),
     gsSP2Triangles(  11, 12, 9, 11, 4, 3, 12, 4  ),
   gsSPVertex( beach_LOD2_VertList_0+132,30,0  ),
   gsSPModifyVertex( 13,   G_MWO_POINT_ST, 0x0195060e),  /*New Coords: 3.17, 48.44*/     gsSP1Triangle(  14, 13, 15, 14  ),


//>-- MATERIAL 13: START ------------------------------------ 'Rock-Sea-Wall'-------------------------------------------------

//Last: rock_sea_wall   Current: rock_sea_wall
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gsDPPipeSync(  ),
   gsDPSetCycleType(  G_CYC_2CYCLE ),
   gsSPClearGeometryMode(  0xFFFFFFFF ),
   gsSPSetGeometryMode(   G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH | G_CULL_BACK  ),
   gsSPTexture(   0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  ),
   gsDPSetTextureLUT(   G_TT_RGBA16 ),
   gsDPSetCombineMode(   G_CC_MODULATERGB, G_CC_PASS2 ),
   gsDPSetRenderMode(   G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2  ),
   gsDPLoadTextureBlock_4b(   rock_sea_wall,	G_IM_FMT_CI,	128, 32,	0, G_TX_WRAP,G_TX_WRAP, 7,5, 2,G_TX_NOLOD ),
   gsDPLoadTLUT_pal16(   0, rock_sea_wall_tlut ),
   gsDPSetTextureFilter(   G_TF_AVERAGE ),
   gsDPSetAlphaDither(   G_CD_BAYER ),
   gsDPSetColorDither(   G_CD_BAYER ),
   gsDPSetPrimColor( 1,255,26,21,21,255  ),

   gsSPVertex( beach_LOD2_VertList_0+58,30,0  ),
     gsSP2Triangles(  20, 21, 22, 20, 21, 23, 24, 21  ),
     gsSP2Triangles(  25, 26, 27, 25, 28, 22, 29, 28  ),
     gsSP1Triangle(  25, 28, 29, 25  ),
   gsSPVertex( beach_LOD2_VertList_0+87,30,0  ),
     gsSP1Triangle(  1, 2, 3, 1  ),
     gsSP2Triangles(  2, 4, 5, 2, 6, 5, 7, 6  ),
     gsSP1Triangle(  5, 4, 8, 5  ),
   gsSPVertex( beach_LOD2_VertList_0+78,30,0  ),
     gsSP1Triangle(  8, 0, 2, 8  ),
     gsSP2Triangles(  2, 1, 4, 2, 8, 5, 7, 8  ),
   gsSPVertex( beach_LOD2_VertList_0+136,30,0  ),
     gsSP2Triangles(  15, 16, 17, 15, 18, 19, 20, 18  ),
     gsSP1Triangle(  21, 22, 23, 21  ),


//>-- MATERIAL 14: START ------------------------------------ 'Rock_to_Ferns'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+29,30,0  ),
     gsSP2Triangles(  0, 1, 2, 0, 3, 4, 5, 3  ),
   gsSPVertex( beach_LOD2_VertList_0+26,30,0  ),
     gsSP2Triangles(  9, 10, 0, 9, 7, 9, 11, 7  ),
     gsSP1Triangle(  10, 5, 15, 10  ),
   gsSPVertex( beach_LOD2_VertList_0+55,30,0  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0xa9790400),  /*New Coords: -173.05, 32.00*/
     gsSP1Triangle(  1, 5, 6, 1  ),
   gsSPVertex( beach_LOD2_VertList_0+113,30,0  ),
   gsSPModifyVertex( 3,   G_MWO_POINT_ST, 0x2aa70000),  /*New Coords: 85.31, 0.00*/
     gsSP2Triangles(  1, 2, 3, 1, 4, 5, 3, 4  ),
   gsSPModifyVertex( 1,   G_MWO_POINT_ST, 0x7bf10400),  /*New Coords: 247.89, 32.00*/   gsSPModifyVertex( 2,   G_MWO_POINT_ST, 0x7bf10000),  /*New Coords: 247.89, 0.00*/
     gsSP1Triangle(  1, 9, 2, 1  ),
   gsSPVertex( beach_LOD2_VertList_0+29,30,0  ),
     gsSP1Triangle(  7, 0, 2, 7  ),
     gsSP1Triangle(  9, 3, 5, 9  ),
   gsSPVertex( beach_LOD2_VertList_0+26,30,0  ),
     gsSP1Triangle(  11, 9, 0, 11  ),
     gsSP2Triangles(  8, 7, 11, 8, 0, 10, 15, 0  ),
   gsSPVertex( beach_LOD2_VertList_0+142,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
   gsSPVertex( beach_LOD2_VertList_0+114,30,0  ),
   gsSPModifyVertex( 4,   G_MWO_POINT_ST, 0x3a600400),  /*New Coords: 116.75, 32.00*/   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x3a600000),  /*New Coords: 116.75, 0.00*/
     gsSP1Triangle(  4, 0, 6, 4  ),
   gsSPVertex( beach_LOD2_VertList_0+172,30,0  ),
     gsSP1Triangle(  3, 4, 5, 3  ),


//>-- MATERIAL 15: START ------------------------------------ 'Ground_cover_ferns'-------------------------------------------------

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

   gsSPVertex( beach_LOD2_VertList_0+0,30,0  ),
     gsSP1Triangle(  26, 27, 28, 26  ),
   gsSPVertex( beach_LOD2_VertList_0+28,30,0  ),
   gsSPModifyVertex( 0,   G_MWO_POINT_ST, 0x3e93f142),  /*New Coords: 125.15, -117.91*/
     gsSP1Triangle(  10, 6, 0, 10  ),
     gsSP2Triangles(  6, 9, 0, 6, 3, 2, 11, 3  ),
     gsSP1Triangle(  12, 13, 3, 12  ),
   gsSPVertex( beach_LOD2_VertList_0+26,30,0  ),
     gsSP1Triangle(  1, 0, 15, 1  ),
   gsSPVertex( beach_LOD2_VertList_0+55,30,0  ),
   gsSPModifyVertex( 6,   G_MWO_POINT_ST, 0x24c208e7),  /*New Coords: 73.52, 71.25*/
     gsSP2Triangles(  6, 7, 8, 6, 6, 19, 7, 6  ),
     gsSP1Triangle(  20, 21, 22, 20  ),
   gsSPVertex( beach_LOD2_VertList_0+113,30,0  ),
     gsSP1Triangle(  6, 7, 8, 6  ),
   gsSPVertex( beach_LOD2_VertList_0+26,30,0  ),
     gsSP2Triangles(  11, 0, 2, 11, 13, 14, 5, 13  ),
     gsSP1Triangle(  14, 1, 15, 14  ),
   gsSPVertex( beach_LOD2_VertList_0+171,30,0  ),
     gsSP1Triangle(  7, 8, 9, 7  ),


//>-- MATERIAL 16: START ------------------------------------ 'Wood-Dock-Planks'-------------------------------------------------

//Last: wood_dock_planks   Current: wood_dock_planks
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

   gsSPVertex( beach_LOD2_VertList_0+0,30,0  ),
     gsSP2Triangles(  20, 21, 22, 20, 23, 22, 24, 23  ),
     gsSP2Triangles(  23, 20, 22, 23, 25, 23, 24, 25  ),
   gsSPEndDisplayList()
 }; 

//>-- Obj00: END ------------------------------------------- beach_LOD2 -------------------------------------------------

 
 
 
 
 
 
 
 
 
 
 
 