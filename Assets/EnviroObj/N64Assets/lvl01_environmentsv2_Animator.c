//Test Object = 0 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 void lvl00_Courtyard_River02_PolyList(u8 animFrame) 
 { 

   Vtx *lvl00_Courtyard_River02_VTXPointer = &lvl00_Courtyard_River02_VertList_0[0]; 

//Face 0 
//Found a new texture! waterfall
//Index 1 Count 2! 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+0,26,0);
//TEST 0 
//Texture Name: DebugTexture 
//TEST 1 
//Texture Name: waterfall 
   TEX_4B_CI_LIQUID(glistp, waterfall, waterfall_tlut, RES_64x64, 6,15);

   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x06ab08ef);
   gSP1Triangle(glistp++,2, 1, 3, 2); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSP1Triangle(glistp++,10, 9, 11, 10); 
   gSP1Triangle(glistp++,12, 13, 3, 12); 
   gSP1Triangle(glistp++,0, 14, 15, 0); 
   gSP1Triangle(glistp++,16, 15, 17, 16); 
   gSP1Triangle(glistp++,7, 4, 18, 7); 
   gSP1Triangle(glistp++,5, 12, 19, 5); 
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSP1Triangle(glistp++,23, 24, 25, 23); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+25,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSP1Triangle(glistp++,5, 4, 10, 5); 
   gSP1Triangle(glistp++,11, 12, 13, 11); 
   gSP1Triangle(glistp++,14, 9, 15, 14); 
   gSP1Triangle(glistp++,16, 17, 6, 16); 
   gSP1Triangle(glistp++,18, 0, 8, 18); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+21,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x07f52470);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0b8d2470);
   gSP1Triangle(glistp++,23, 0, 16, 23); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x07eb2488);
   gSP1Triangle(glistp++,16, 15, 24, 16); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+38,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x023f0996);
   gSP1Triangle(glistp++,8, 0, 9, 8); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+36,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00a12488);
   gSP1Triangle(glistp++,12, 4, 0, 12); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x04392488);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x046428de);
   gSP1Triangle(glistp++,10, 0, 2, 10); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+21,26,0);
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0b8d2470);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x07f52470);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x09932949);
   gSP1Triangle(glistp++,16, 0, 17, 16); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+46,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x15c42721);
   gSP1Triangle(glistp++,3, 4, 1, 3); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+38,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x023f0996);
   gSP1Triangle(glistp++,0, 13, 9, 0); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x13592a91);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x15c42721);
   gSP1Triangle(glistp++,12, 8, 9, 12); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,14, 0, 2, 14); 
   gSP1Triangle(glistp++,13, 2, 3, 13); 
   gSP1Triangle(glistp++,18, 4, 6, 18); 
   gSP1Triangle(glistp++,10, 7, 9, 10); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+50,26,0);
   gSP1Triangle(glistp++,2, 3, 4, 2); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+3,26,0);
   gSP1Triangle(glistp++,16, 9, 0, 16); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,16, 0, 15, 16); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+50,26,0);
   gSP1Triangle(glistp++,5, 6, 7, 5); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+7,26,0);
   gSP1Triangle(glistp++,1, 0, 11, 1); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+5,26,0);
   gSP1Triangle(glistp++,1, 0, 14, 1); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+23,26,0);
   gSP1Triangle(glistp++,20, 0, 2, 20); 
   gSP1Triangle(glistp++,12, 3, 5, 12); 
   gSP1Triangle(glistp++,19, 6, 8, 19); 
   gSP1Triangle(glistp++,16, 9, 11, 16); 
   gSP1Triangle(glistp++,5, 7, 12, 5); 
   gSP1Triangle(glistp++,25, 16, 17, 25); 
   gSP1Triangle(glistp++,21, 18, 8, 21); 
   gSP1Triangle(glistp++,9, 20, 10, 9); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0b8d2470);
   gSP1Triangle(glistp++,18, 21, 14, 18); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+37,26,0);
   gSP1Triangle(glistp++,17, 0, 15, 17); 
   gSPVertex(glistp++,lvl00_Courtyard_River02_VTXPointer+36,26,0);
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x04392488);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00a12488);
   gSP1Triangle(glistp++,10, 12, 0, 10); 
   gDPPipeSync(glistp++);

 } 
 
 
 