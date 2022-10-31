//Test Object = 0 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 void lvl01_env00_landing_zone_obelisks_PolyList(u8 animFrame) 
 { 

   Vtx *lvl01_env00_landing_zone_obelisks_VTXPointer = &lvl01_env00_landing_zone_obelisks_VertList_0[0]; 

   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+0,26,0);

//OBJECT: 0 MATERIAL NO. 1 'Obelisk2'OK 

   TEXTURE_4B_TLUT(glistp, Obelisk2, Obelisk2_tlut, 6,1);

   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 2, 3, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,1, 0, 4, 1); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x067c1700);
   gSP1Triangle(glistp++,1, 5, 6, 1); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x05fc1a15);
   gSP1Triangle(glistp++,1, 6, 2, 1); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,5, 1, 4, 5); 
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSP1Triangle(glistp++,7, 9, 10, 7); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,8, 7, 11, 8); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,12, 14, 15, 12); 
   gSP1Triangle(glistp++,16, 17, 18, 16); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSP1Triangle(glistp++,20, 19, 22, 20); 
   gSP1Triangle(glistp++,23, 24, 19, 23); 
   gSP1Triangle(glistp++,23, 19, 21, 23); 
           gSPModifyVertex(glistp++, 24,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,24, 23, 25, 24); 
   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+19,26,0);
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x05fc1aff);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x05fc1a15);
   gSP1Triangle(glistp++,7, 3, 0, 7); 
   gSP1Triangle(glistp++,3, 7, 8, 3); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x067c1700);
   gSP1Triangle(glistp++,5, 9, 7, 5); 
   gSP1Triangle(glistp++,5, 7, 0, 5); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,9, 5, 6, 9); 
   gSP1Triangle(glistp++,10, 11, 12, 10); 
   gSP1Triangle(glistp++,11, 10, 13, 11); 
   gSP1Triangle(glistp++,14, 15, 10, 14); 
   gSP1Triangle(glistp++,14, 10, 12, 14); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,15, 14, 16, 15); 
   gSP1Triangle(glistp++,17, 18, 19, 17); 
   gSP1Triangle(glistp++,18, 17, 20, 18); 
   gSP1Triangle(glistp++,21, 22, 17, 21); 
   gSP1Triangle(glistp++,21, 17, 19, 21); 
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,22, 21, 23, 22); 
   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+43,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,1, 0, 3, 1); 
   gSP1Triangle(glistp++,4, 5, 0, 4); 
   gSP1Triangle(glistp++,4, 0, 2, 4); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,5, 4, 6, 5); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x05fc1aff);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x05fc1a15);
   gSP1Triangle(glistp++,7, 3, 0, 7); 
   gSP1Triangle(glistp++,3, 7, 8, 3); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x067c1700);
   gSP1Triangle(glistp++,5, 9, 7, 5); 
   gSP1Triangle(glistp++,5, 7, 0, 5); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,9, 5, 6, 9); 
   gSP1Triangle(glistp++,10, 11, 12, 10); 
   gSP1Triangle(glistp++,11, 10, 13, 11); 
   gSP1Triangle(glistp++,14, 15, 10, 14); 
   gSP1Triangle(glistp++,14, 10, 12, 14); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,15, 14, 16, 15); 
   gSP1Triangle(glistp++,17, 18, 19, 17); 
   gSP1Triangle(glistp++,18, 17, 20, 18); 
   gSP1Triangle(glistp++,21, 22, 17, 21); 
   gSP1Triangle(glistp++,21, 17, 19, 21); 
   gSP1Triangle(glistp++,23, 24, 25, 23); 
   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+68,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSP1Triangle(glistp++,2, 1, 4, 2); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,1, 3, 5, 1); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x05fc1a15);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x067c1700);
   gSP1Triangle(glistp++,6, 4, 1, 6); 
   gSP1Triangle(glistp++,4, 6, 7, 4); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,6, 1, 5, 6); 
   gSP1Triangle(glistp++,8, 9, 10, 8); 
   gSP1Triangle(glistp++,9, 8, 11, 9); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,8, 10, 12, 8); 
   gSP1Triangle(glistp++,13, 14, 15, 13); 
   gSP1Triangle(glistp++,14, 13, 16, 14); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,13, 15, 17, 13); 
   gSP1Triangle(glistp++,18, 19, 20, 18); 
   gSP1Triangle(glistp++,20, 21, 18, 20); 
   gSP1Triangle(glistp++,22, 18, 23, 22); 
   gSP1Triangle(glistp++,18, 22, 19, 18); 
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSPVertex(glistp++,lvl01_env00_landing_zone_obelisks_VTXPointer+87,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x05fc1a15);
   gSP1Triangle(glistp++,0, 6, 7, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x05fc1aff);
   gSP1Triangle(glistp++,7, 1, 0, 7); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x067c1700);
   gSP1Triangle(glistp++,8, 0, 3, 8); 
   gSP1Triangle(glistp++,0, 8, 6, 0); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,8, 3, 5, 8); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSP1Triangle(glistp++,11, 12, 9, 11); 
   gSP1Triangle(glistp++,13, 9, 14, 13); 
   gSP1Triangle(glistp++,9, 13, 10, 9); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x06281afe);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x09d21afe);
   gSP1Triangle(glistp++,13, 14, 15, 13); 
   gSP1Triangle(glistp++,16, 17, 18, 16); 
   gSP1Triangle(glistp++,18, 19, 16, 18); 
   gSP1Triangle(glistp++,20, 16, 21, 20); 
   gSP1Triangle(glistp++,16, 20, 17, 16); 
   gSP1Triangle(glistp++,22, 23, 24, 22); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 1 
void lvl01_env00_landing_zone_pad_stairs_PolyList(u8 animFrame) 
 { 

   Vtx *lvl01_env00_landing_zone_pad_stairs_VTXPointer = &lvl01_env00_landing_zone_pad_stairs_VertList_0[0]; 

   gSPVertex(glistp++,lvl01_env00_landing_zone_pad_stairs_VTXPointer+0,26,0);

//OBJECT: 1 MATERIAL NO. 2 'Stairs2'OK 

   TEXTURE_4B_TLUT(glistp, Stairs2, Stairs2_tlut, 6,1);

   gSPVertex(glistp++,lvl01_env00_landing_zone_pad_stairs_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,2, 3, 0, 2); 
   gSP1Triangle(glistp++,4, 0, 3, 4); 
   gSP1Triangle(glistp++,3, 5, 4, 3); 
   gSP1Triangle(glistp++,6, 4, 5, 6); 
   gSP1Triangle(glistp++,5, 7, 6, 5); 
   gSP1Triangle(glistp++,8, 9, 10, 8); 
   gSP1Triangle(glistp++,11, 6, 7, 11); 
   gSP1Triangle(glistp++,7, 12, 11, 7); 
   gSP1Triangle(glistp++,13, 11, 12, 13); 
   gSP1Triangle(glistp++,12, 14, 13, 12); 
   gSP1Triangle(glistp++,15, 13, 14, 15); 
   gSP1Triangle(glistp++,16, 9, 8, 16); 
   gSP1Triangle(glistp++,8, 17, 16, 8); 
   gSP1Triangle(glistp++,18, 16, 17, 18); 
   gSP1Triangle(glistp++,17, 19, 18, 17); 
   gSP1Triangle(glistp++,20, 18, 19, 20); 
   gSP1Triangle(glistp++,19, 21, 20, 19); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x00050001);           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x00050400);
   gSP1Triangle(glistp++,1, 20, 21, 1); 
   gSP1Triangle(glistp++,21, 2, 1, 21); 

   gDPPipeSync(glistp++);

 } 
 
 
 