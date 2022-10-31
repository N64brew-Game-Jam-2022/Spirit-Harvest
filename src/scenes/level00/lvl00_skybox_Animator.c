 #include "common.h"
 
 
 // Vtx lvl00_skybox_VertList_0 [] = {
// //Found a new color! Color Index: 1     Vert 0:  224, 219, 191 
// //Found a new color! Color Index: 2     Vert 1:  214, 209, 176 
   // { 1150.05, -3540.69, 940.64, 1, 0x0896, 0x05df, 224, 219, 191, 255}, 
   // { 1150.05, -1446.26, 1898.44, 1, 0x0deb, 0x05ec, 214, 209, 176, 255}, 
   // { 3031.94, -1446.26, 1121.04, 1, 0x0dd7, 0x013f, 224, 219, 191, 255}, 
// //Found a new color! Color Index: 3     Vert 1:  209, 197, 157 
// //Found a new color! Color Index: 4     Vert 2:  174, 160, 128 
   // { -671.98, -3540.69, 940.65, 1, 0x08cf, 0x0a51, 209, 197, 157, 255}, 
   // { -671.98, -1446.26, 1898.45, 1, 0x0dfa, 0x09d5, 174, 160, 128, 255}, 
// //Found a new color! Color Index: 5     Vert 2:  92, 73, 68 
   // { -2589.92, -3540.69, 423.84, 1, 0x08da, 0x0f09, 92, 73, 68, 255}, 
// //Found a new color! Color Index: 6     Vert 1:  159, 143, 118 
   // { -671.98, 1652.86, 940.65, 1, 0x153e, 0x0a20, 159, 143, 118, 255}, 
   // { 1150.05, 1652.86, 940.65, 1, 0x154b, 0x05b5, 209, 197, 157, 255}, 
   // { -2589.92, -1446.26, 950.55, 1, 0x0df8, 0x0ea9, 92, 73, 68, 255}, 
   // { -2589.92, 1652.86, 423.84, 1, 0x155c, 0x0ecb, 92, 73, 68, 255}, 
   // { 3031.94, 1652.86, 594.33, 1, 0x155c, 0x0121, 209, 197, 157, 255}, 
// //Found a new color! Color Index: 7     Vert 1:  159, 144, 114 
// //Found a new color! Color Index: 8     Vert 2:  115, 96, 83 
   // { 9840.49, -9257.51, 3319.18, 1, 0x1762, 0x1898, 224, 219, 192, 255}, 
   // { 10231.17, -4398.19, 3181.18, 1, 0x1ef7, 0x15c1, 159, 144, 114, 255}, 
   // { 11509.04, -3909.74, -336.72, 1, 0x2059, 0x0e05, 115, 96, 83, 255}, 
// //Found a new color! Color Index: 9     Vert 1:  155, 140, 112 
   // { 7531.51, -10080.66, 3735.03, 1, 0x16fd, 0x1cca, 224, 219, 192, 255}, 
   // { 7220.31, -4398.19, 3461.71, 1, 0x20a5, 0x1b3c, 155, 140, 112, 255}, 
// //Found a new color! Color Index: 10     Vert 0:  130, 114, 90 
   // { 3215.35, -3909.74, 1613.60, 1, 0x2632, 0x23d3, 130, 114, 90, 255}, 
   // { 6053.45, -1746.23, 775.11, 1, 0x29e0, 0x1a82, 115, 96, 83, 255}, 
   // { 10720.51, -1911.68, -1409.99, 1, 0x2672, 0x0d14, 115, 96, 83, 255}, 
   // { 11555.96, -2125.86, -1991.66, 1, 0x2583, 0x0a76, 115, 96, 83, 255}, 
// //Found a new color! Color Index: 11     Vert 2:  209, 196, 155 
   // { 9208.93, -11215.58, -37.92, 1, 0x0e8c, 0x17d3, 209, 196, 155, 255}, 
// //Found a new color! Color Index: 12     Vert 1:  165, 151, 119 
   // { 11118.37, -9257.51, -7.88, 1, 0x1360, 0x1194, 165, 151, 119, 255}, 
   // { 10329.84, -10827.43, -1818.62, 1, 0x0c1e, 0x1226, 165, 151, 119, 255}, 
   // { 7531.51, -11504.50, 624.58, 1, 0x0eed, 0x1ceb, 209, 196, 155, 255}, 
   // { 4582.56, -11909.53, -285.32, 1, 0x0dfb, 0x264a, 209, 196, 155, 255}, 
   // { 6053.45, -3306.50, -2740.19, 1, 0x3208, 0x1427, 115, 96, 83, 255}, 
   // { 10720.51, -3471.95, -4925.30, 1, 0x2e9a, 0x06b9, 115, 96, 83, 255}, 
   // { 3031.94, -2689.95, 808.27, 1, 0x0aa8, 0x011c, 224, 219, 191, 255}, 
   // { 1150.05, -3540.69, 940.64, 1, 0x0896, 0x05df, 224, 219, 191, 255}, 
   // { 3031.94, -1446.26, 1121.04, 1, 0x0dd7, 0x013f, 224, 219, 191, 255}, 
   // { 1150.05, -1446.26, 1898.44, 1, 0x0deb, 0x05ec, 214, 209, 176, 255}, 
   // { 1150.05, -3540.69, 940.64, 1, 0x0896, 0x05df, 224, 219, 191, 255}, 
   // { -671.98, -1446.26, 1898.45, 1, 0x0dfa, 0x09d5, 174, 160, 128, 255}, 
   // { -2589.92, -1446.26, 950.55, 1, 0x0df8, 0x0ea9, 92, 73, 68, 255}, 
   // { -671.98, -1446.26, 1898.45, 1, 0x0dfa, 0x09d5, 174, 160, 128, 255}, 
   // { -2589.92, -3540.69, 423.84, 1, 0x08da, 0x0f09, 92, 73, 68, 255}, 
   // { 1150.05, 1652.86, 940.65, 1, 0x154b, 0x05b5, 209, 197, 157, 255}, 
   // { -671.98, 1652.86, 940.65, 1, 0x153e, 0x0a20, 159, 143, 118, 255}, 
   // { -671.98, -1446.26, 1898.45, 1, 0x0dfa, 0x09d5, 174, 160, 128, 255}, 
   // { -2589.92, 1652.86, 423.84, 1, 0x155c, 0x0ecb, 92, 73, 68, 255}, 
// //Found a new color! Color Index: 13     Vert 0:  200, 191, 158 
   // { 4043.45, -10267.78, 1611.89, 1, 0x15bf, 0x264a, 200, 191, 158, 255}, 
   // { 3215.35, -3909.74, 1613.60, 1, 0x2632, 0x23d3, 130, 114, 90, 255}, 
   // { 7531.51, -10080.66, 3735.03, 1, 0x16fd, 0x1cca, 224, 219, 192, 255}, 
   // { 11850.97, -3618.86, -1162.88, 1, 0x2143, 0x0bc9, 115, 96, 83, 255}, 
   // { 11509.04, -3909.74, -336.72, 1, 0x2059, 0x0e05, 115, 96, 83, 255}, 
   // { 11555.96, -2125.86, -1991.66, 1, 0x2583, 0x0a76, 115, 96, 83, 255}, 
// };
 
 // void lvl00_skybox_PolyList(u8 animFrame) 
 // { 

   // Vtx *lvl00_skybox_VTXPointer = &lvl00_skybox_VertList_0[0]; 

// //Face 0 
// //Found a new texture! lvl01_waterfall01int_32x128
// //Index 1 Count 2! 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+0,26,0);
// //TEST 0 
// //Texture Name: DebugTexture 
// //TEST 1 
// //Texture Name: lvl01_waterfall01int_32x128 
   // TEXTURE_4B_TLUT_VTXCOL(glistp, lvl01_waterfall01int_32x128, lvl01_waterfall01int_32x128_tlut, RES_32x128, 6,15);

   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+0,26,0);
   // gSP1Triangle(glistp++,0, 1, 2, 0); 
   // gSP1Triangle(glistp++,0, 3, 4, 0); 
   // gSP1Triangle(glistp++,4, 3, 5, 4); 
   // gSP1Triangle(glistp++,4, 6, 7, 4); 
   // gSP1Triangle(glistp++,4, 8, 9, 4); 
   // gSP1Triangle(glistp++,1, 7, 10, 1); 
   // gSP1Triangle(glistp++,11, 12, 13, 11); 
   // gSP1Triangle(glistp++,14, 15, 12, 14); 
   // gSP1Triangle(glistp++,16, 15, 14, 16); 
   // gSP1Triangle(glistp++,15, 17, 18, 15); 
   // gSP1Triangle(glistp++,15, 16, 17, 15); 
           // gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x266d0cf9);
   // gSP1Triangle(glistp++,12, 18, 18, 12); 
   // gSP1Triangle(glistp++,13, 18, 19, 13); 
   // gSP1Triangle(glistp++,14, 11, 20, 14); 
   // gSP1Triangle(glistp++,11, 21, 22, 11); 
   // gSP1Triangle(glistp++,14, 23, 24, 14); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+17,26,0);
   // gSP1Triangle(glistp++,0, 8, 9, 0); 
   // gSP1Triangle(glistp++,10, 11, 12, 10); 
   // gSP1Triangle(glistp++,13, 14, 15, 13); 
   // gSP1Triangle(glistp++,16, 17, 18, 16); 
   // gSP1Triangle(glistp++,13, 17, 19, 13); 
   // gSP1Triangle(glistp++,20, 21, 22, 20); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+10,26,0);
   // gSP1Triangle(glistp++,19, 20, 0, 19); 
   // gSP1Triangle(glistp++,11, 1, 3, 11); 
   // gSP1Triangle(glistp++,1, 4, 2, 1); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+35,26,0);
   // gSP1Triangle(glistp++,5, 6, 7, 5); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+12,26,0);
   // gSP1Triangle(glistp++,0, 3, 6, 0); 
           // gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x266d0cf9);
   // gSP1Triangle(glistp++,1, 0, 6, 1); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+37,26,0);
   // gSP1Triangle(glistp++,6, 7, 8, 6); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+20,26,0);
   // gSP1Triangle(glistp++,3, 22, 0, 3); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+11,26,0);
   // gSP1Triangle(glistp++,9, 0, 11, 9); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+24,26,0);
   // gSP1Triangle(glistp++,16, 18, 0, 16); 
   // gSPVertex(glistp++,lvl00_skybox_VTXPointer+17,26,0);
   // gSP1Triangle(glistp++,1, 0, 9, 1); 
   // gDPPipeSync(glistp++);

 // } 
 
 
//>-- OBJECT 0: START ------------------------------------------ lvl00_skybox -------------------------------------------------

Vtx lvl00_skybox_VertList_0 [] = {
   { 6252.68, -13876.90, 34.90, 1, 0x0181, 0x5b06, 255, 255, 255, 255}, 
   { 5118.10, -9994.82, 3001.00, 1, 0x0330, 0x5308, 255, 255, 255, 255}, 
   { 10353.55, -9994.84, 612.16, 1, 0x02fa, 0x72d4, 255, 255, 255, 255}, 
   { -3705.64, -10279.67, 34.89, 1, 0x02d0, 0x1f1c, 255, 255, 255, 255}, 
   { -735.21, -7880.44, 3001.00, 1, 0x03df, 0x347d, 255, 255, 255, 255}, 
   { 882.56, -13415.93, 612.17, 1, 0x01c3, 0x3b64, 255, 255, 255, 255}, 
   { -3705.64, 1360.91, 34.89, 1, 0x0729, 0x1f1c, 255, 255, 255, 255}, 
   { -735.21, -1038.33, 3001.00, 1, 0x061a, 0x347d, 255, 255, 255, 255}, 
   { -4970.76, -4459.38, 612.16, 1, 0x04fd, 0x189e, 255, 255, 255, 255}, 
   { 6252.68, 4958.13, 34.90, 1, 0x0879, 0x5b06, 255, 255, 255, 255}, 
   { 5118.10, 1076.05, 3001.00, 1, 0x06c9, 0x5308, 255, 255, 255, 255}, 
   { 882.56, 4497.16, 612.17, 1, 0x0837, 0x3b64, 255, 255, 255, 255}, 
   { 12407.34, -4459.38, 34.86, 1, 0x04fd, 0x80c2, 255, 255, 255, 255}, 
   { 8735.72, -4459.38, 3000.98, 1, 0x04fd, 0x6603, 255, 255, 255, 255}, 
   { 10353.55, 1076.07, 612.16, 1, 0x0700, 0x72d4, 255, 255, 255, 255}, 
   { 3500.31, -4459.38, 3645.66, 1, 0x04fd, 0x4a9d, 255, 255, 255, 255}, 
   { 12971.29, -1038.31, -3253.12, 1, 0x069d, 0x95c8, 255, 255, 255, 255}, 
   { 9353.69, 4497.22, -3253.12, 1, 0x0940, 0x787c, 255, 255, 255, 255}, 
   { 3500.31, 6611.59, -3253.12, 1, 0x0a39, 0x4abd, 255, 255, 255, 255}, 
   { -2353.08, 4497.22, -3253.12, 1, 0x093d, 0x1c6e, 255, 255, 255, 255}, 
   { -5970.68, -1038.31, -3253.12, 1, 0x06a3, 0xff9c, 255, 255, 255, 255}, 
   { -5970.68, -7880.45, -3253.12, 1, 0x0357, 0xff9c, 255, 255, 255, 255}, 
   { -2353.08, -13415.99, -3253.12, 1, 0x00bd, 0x1c6e, 255, 255, 255, 255}, 
   { 3500.31, -15530.36, -3253.12, 1, 0xffc0, 0x4abd, 255, 255, 255, 255}, 
   { 9353.69, -13415.99, -3253.12, 1, 0x00b9, 0x787c, 255, 255, 255, 255}, 
   { 12971.29, -7880.45, -3253.12, 1, 0x035d, 0x95c8, 255, 255, 255, 255}, 
};


void lvl00_skybox_PolyList( u8 animFrame ){ 

   Vtx *lvl00_skybox_VTXPointer = &lvl00_skybox_VertList_0[0]; 



//>-- MATERIAL 0: START ------------------------------------ 'lvl01_waterfall01int_32x128'-------------------------------------------------
//NOTE ---- IN LINE commands is a WIP and more commands will be added. 
   gDPPipeSync( glistp++ );
   gDPSetCycleType( glistp++,  G_CYC_2CYCLE );
   gSPTexture(  glistp++,  0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON  );
   gDPSetTextureLUT(  glistp++,  G_TT_IA16 );
   gDPSetCombineLERP(  glistp++, 	TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0, 1, 0, 0, COMBINED, TEXEL0, 0, 0, COMBINED );
   gDPSetRenderMode(  glistp++,  G_RM_FOG_SHADE_A,G_RM_AA_ZB_XLU_SURF2  );
   gDPLoadTextureBlock_4b(  glistp++,  lvl01_waterfall01int_32x128,	G_IM_FMT_I,	32, 128,	0, G_TX_WRAP,G_TX_WRAP, 5,7, 15,1 );
   gDPLoadTLUT_pal16(  glistp++,  0, lvl01_waterfall01int_32x128_tlut );
   gDPSetTextureFilter(  glistp++,  G_TF_BILERP );
   gDPSetPrimColor(glistp++,  1,255,255,244,255,175  );

  // gSPSetLights1( glistp++,  debugLightStruct );
   gSPVertex(glistp++,  lvl00_skybox_VTXPointer+0,30,0  );
     gSP2Triangles(glistp++,   0, 1, 2, 0, 3, 4, 5, 3  );
     gSP2Triangles(glistp++,   6, 7, 8, 6, 9, 10, 11, 9  );
     gSP2Triangles(glistp++,   12, 13, 14, 12, 13, 15, 10, 13  );
     gSP2Triangles(glistp++,   13, 10, 14, 13, 14, 10, 9, 14  );
     gSP2Triangles(glistp++,   10, 15, 7, 10, 10, 7, 11, 10  );
     gSP2Triangles(glistp++,   11, 7, 6, 11, 7, 15, 4, 7  );
     gSP2Triangles(glistp++,   7, 4, 8, 7, 8, 4, 3, 8  );
     gSP2Triangles(glistp++,   4, 15, 1, 4, 4, 1, 5, 4  );
     gSP2Triangles(glistp++,   5, 1, 0, 5, 1, 15, 13, 1  );
     gSP2Triangles(glistp++,   1, 13, 2, 1, 2, 13, 12, 2  );
     gSP2Triangles(glistp++,   16, 12, 14, 16, 16, 14, 17, 16  );
     gSP2Triangles(glistp++,   17, 14, 9, 17, 18, 9, 11, 18  );
     gSP2Triangles(glistp++,   18, 11, 19, 18, 19, 11, 6, 19  );
     gSP2Triangles(glistp++,   20, 6, 8, 20, 20, 8, 21, 20  );
     gSP2Triangles(glistp++,   21, 8, 3, 21, 22, 3, 5, 22  );
     gSP2Triangles(glistp++,   22, 5, 23, 22, 23, 5, 0, 23  );
     gSP2Triangles(glistp++,   24, 0, 2, 24, 24, 2, 25, 24  );
     gSP2Triangles(glistp++,   25, 2, 12, 25, 17, 9, 18, 17  );
     gSP2Triangles(glistp++,   19, 6, 20, 19, 21, 3, 22, 21  );
     gSP2Triangles(glistp++,   23, 0, 24, 23, 25, 12, 16, 25  );
   gDPPipeSync(  glistp++  );
} 

//>-- OBJECT 0: END ------------------------------------------- lvl00_skybox -------------------------------------------------

 
 
 