//Test Object = 0 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 void lvl00_Courtyard_Waterfall_PolyList(u8 animFrame) 
 { 

   Vtx *lvl00_Courtyard_Waterfall_VTXPointer = &lvl00_Courtyard_Waterfall_VertList_0[0]; 

//Face 0 
//Found a new texture! lvl01_waterfall02_32x128
//Index 1 Count 2! 
//Face 8 
//Found a new texture! lvl01_waterfall01_32x128
//Index 2 Count 3! 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+0,26,0);
//TEST 0 
//Texture Name: DebugTexture 
//TEST 1 
//Texture Name: lvl01_waterfall02_32x128 
   TEXTURE_4B_TLUT_TRANSP(glistp, lvl01_waterfall02_32x128, lvl01_waterfall02_32x128_tlut, S_32x128, 6,15);

   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,6, 7, 4, 6); 
   gSP1Triangle(glistp++,8, 9, 2, 8); 
   gSP1Triangle(glistp++,10, 3, 11, 10); 
   gSP1Triangle(glistp++,12, 6, 3, 12); 
   gSP1Triangle(glistp++,11, 5, 0, 11); 
   gSP1Triangle(glistp++,11, 9, 8, 11); 
   gSP1Triangle(glistp++,9, 0, 2, 9); 
   gSP1Triangle(glistp++,11, 3, 5, 11); 
   gSP1Triangle(glistp++,3, 6, 4, 3); 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+2,26,0);
   gSP1Triangle(glistp++,24, 6, 0, 24); 
   gSP1Triangle(glistp++,25, 8, 9, 25); 
   gSP1Triangle(glistp++,8, 10, 1, 8); 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,9, 11, 0, 9); 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+8,26,0);
   gSP1Triangle(glistp++,19, 3, 0, 19); 
//TEST 2 
//Texture Name: lvl01_waterfall01_32x128 
   //TEXTURE_4B_EDGE(glistp, lvl01_waterfall01_32x128, lvl01_waterfall01_32x128_tlut, S_32x128, 6,15);
    TEXTURE_4B_EDGE_V2(glistp, lvl01_waterfall01_32x128, lvl01_waterfall01_32x128_tlut, RES_32x128, SCL_6x6, LSFT_1_1);
    //poops
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,13, 14, 15, 13); 
   gSP1Triangle(glistp++,16, 17, 18, 16); 
   gSP1Triangle(glistp++,19, 20, 17, 19); 
   gSP1Triangle(glistp++,21, 22, 15, 21); 
   gSP1Triangle(glistp++,23, 16, 24, 23); 
   gSP1Triangle(glistp++,25, 19, 16, 25); 
   gSP1Triangle(glistp++,24, 18, 13, 24); 
   gSP1Triangle(glistp++,24, 22, 21, 24); 
   gSP1Triangle(glistp++,22, 13, 15, 22); 
   gSP1Triangle(glistp++,24, 16, 18, 24); 
   gSP1Triangle(glistp++,16, 19, 17, 16); 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+15,26,0);
   gSP1Triangle(glistp++,13, 6, 0, 13); 
   gSP1Triangle(glistp++,14, 8, 9, 14); 
   gSP1Triangle(glistp++,8, 10, 1, 8); 
   gSPVertex(glistp++,lvl00_Courtyard_Waterfall_VTXPointer+13,26,0);
   gSP1Triangle(glistp++,9, 11, 0, 9); 
   gSP1Triangle(glistp++,16, 11, 8, 16); 
   gDPPipeSync(glistp++);

 } 
 
 
 