//Test Object = 0 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 void lvl01_env00_loadzone01_walls_PolyList(u8 animFrame) 
 { 

   Vtx *lvl01_env00_loadzone01_walls_VTXPointer = &lvl01_env00_loadzone01_walls_VertList_0[0]; 

//Face 0 
//Found a new texture! RockDirtEdge
//Index 1 Count 2! 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+0,26,0);
//TEST 0 
//Texture Name: DebugTexture 
//TEST 1 
//Texture Name: RockDirtEdge 
   TEXTURE_4B_TLUT_VTXCOL(glistp, RockDirtEdge, RockDirtEdge_tlut, RES_64x64, 6,15);

   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 2, 3); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x027901c4);
   gSP1Triangle(glistp++,5, 0, 6, 5); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x29c80436);
   gSP1Triangle(glistp++,7, 5, 8, 7); 
   gSP1Triangle(glistp++,7, 9, 10, 7); 
   gSP1Triangle(glistp++,4, 11, 12, 4); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x11010fdf);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x078b1037);
   gSP1Triangle(glistp++,8, 6, 13, 8); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x208702ef);
   gSP1Triangle(glistp++,9, 8, 14, 9); 
   gSP1Triangle(glistp++,10, 9, 15, 10); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0d28027f);
   gSP1Triangle(glistp++,2, 12, 13, 2); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x060c12fa);
   gSP1Triangle(glistp++,13, 16, 17, 13); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x1b3d02a3);
   gSP1Triangle(glistp++,14, 17, 18, 14); 
   gSP1Triangle(glistp++,19, 15, 18, 19); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0d28027f);
   gSP1Triangle(glistp++,13, 12, 20, 13); 
   gSP1Triangle(glistp++,11, 21, 20, 11); 
   gSP1Triangle(glistp++,17, 22, 23, 17); 
   gSP1Triangle(glistp++,24, 18, 23, 24); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0ef1028b);
   gSP1Triangle(glistp++,16, 20, 25, 16); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+21,26,0);
   gSP1Triangle(glistp++,0, 5, 4, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x1a6715ed);
   gSP1Triangle(glistp++,6, 7, 1, 6); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+16,26,0);
   gSP1Triangle(glistp++,13, 1, 0, 13); 
   gSP1Triangle(glistp++,14, 9, 15, 14); 
   gSP1Triangle(glistp++,10, 16, 15, 10); 
   gSP1Triangle(glistp++,17, 18, 19, 17); 
   gSP1Triangle(glistp++,20, 21, 0, 20); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x2e280187);
   gSP1Triangle(glistp++,11, 17, 22, 11); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x1d3401b6);
   gSP1Triangle(glistp++,15, 23, 21, 15); 
   gSP1Triangle(glistp++,15, 16, 24, 15); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x251a01b8);
   gSP1Triangle(glistp++,17, 11, 13, 17); 
   gSP1Triangle(glistp++,23, 18, 13, 23); 
   gSP1Triangle(glistp++,23, 24, 19, 23); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x15361c09);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0cd01bb9);
   gSP1Triangle(glistp++,11, 1, 13, 11); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x05821bfd);
   gSP1Triangle(glistp++,0, 21, 13, 0); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+23,26,0);
   gSP1Triangle(glistp++,18, 0, 19, 18); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+22,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x1a6715ed);
   gSP1Triangle(glistp++,0, 6, 21, 0); 
   gSP1Triangle(glistp++,5, 21, 6, 5); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x33fe018e);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x2e280187);
   gSP1Triangle(glistp++,21, 5, 16, 21); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x15200363);
   gSP1Triangle(glistp++,0, 22, 20, 0); 
   gSP1Triangle(glistp++,20, 22, 23, 20); 
   gSP1Triangle(glistp++,24, 20, 25, 24); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+33,26,0);
   gSP1Triangle(glistp++,5, 0, 15, 5); 
   gSP1Triangle(glistp++,16, 15, 0, 16); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+17,26,0);
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x1a6715ed);
   gSP1Triangle(glistp++,0, 10, 5, 0); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+22,26,0);
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x1fb41c30);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x1a6715ed);
   gSP1Triangle(glistp++,22, 0, 21, 22); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0a670277);
   gSP1Triangle(glistp++,6, 0, 2, 6); 
   gSP1Triangle(glistp++,1, 3, 2, 1); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0b080a5a);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x02ca0aa7);
   gSP1Triangle(glistp++,8, 5, 6, 8); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x208702ef);
   gSP1Triangle(glistp++,9, 7, 8, 9); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+50,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+2,26,0);
   gSP1Triangle(glistp++,0, 2, 10, 0); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x11eb128c);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x11010fdf);
   gSP1Triangle(glistp++,12, 6, 11, 12); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x1e0c0269);
   gSP1Triangle(glistp++,13, 7, 12, 13); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+52,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+2,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0a670277);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0d28027f);
   gSP1Triangle(glistp++,4, 0, 11, 4); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x11eb128c);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x060c12fa);
   gSP1Triangle(glistp++,12, 11, 15, 12); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+52,26,0);
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,7, 1, 6, 7); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+13,26,0);
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0ef1028b);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0d28027f);
   gSP1Triangle(glistp++,3, 0, 7, 3); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+11,26,0);
   gSP1Triangle(glistp++,1, 0, 9, 1); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+60,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+41,26,0);
   gSP1Triangle(glistp++,0, 18, 21, 0); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+16,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0ef1028b);
   gSP1Triangle(glistp++,14, 0, 9, 14); 
   gSP1Triangle(glistp++,4, 5, 9, 4); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x18d5024a);
   gSP1Triangle(glistp++,20, 14, 15, 20); 
   gSP1Triangle(glistp++,9, 10, 15, 9); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+33,26,0);
   gSP1Triangle(glistp++,16, 0, 2, 16); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+16,26,0);
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x014b1574);
   gSP1Triangle(glistp++,14, 20, 0, 14); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x18d5024a);           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x1d3401b6);
   gSP1Triangle(glistp++,20, 15, 21, 20); 
   gSP1Triangle(glistp++,23, 15, 24, 23); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x251a01b8);
   gSP1Triangle(glistp++,18, 17, 13, 18); 
   gSP1Triangle(glistp++,21, 23, 13, 21); 
   gSP1Triangle(glistp++,18, 23, 19, 18); 
   gSPVertex(glistp++,lvl01_env00_loadzone01_walls_VTXPointer+41,26,0);
   gSP1Triangle(glistp++,5, 0, 1, 5); 
   gSP1Triangle(glistp++,21, 22, 1, 21); 
   gSP1Triangle(glistp++,6, 1, 4, 6); 
   gSP1Triangle(glistp++,23, 5, 6, 23); 
   gDPPipeSync(glistp++);

 } 
 
 
 