//Test Object = 0 
#include "playerShipDefs.h" 


 void player_ship_PolyList(u8 animFrame) 
 { 

   Vtx *player_ship_VTXPointer = &player_ship_VertList_1[0]; 

   gSPVertex(glistp++,player_ship_VTXPointer+0,26,0);

//OBJECT: 0 MATERIAL NO. 0 'shipbodytexture'OK 

   TEXTURE_4B_TLUT(glistp, shipbodytexture, shipbodytexture_tlut, 6,1);

   gSPVertex(glistp++,player_ship_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,2, 3, 0, 2); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,6, 7, 4, 6); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0bfe0180);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x04fe0080);
   gSP1Triangle(glistp++,1, 8, 2, 1); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSP1Triangle(glistp++,11, 12, 9, 11); 
   gSP1Triangle(glistp++,10, 13, 14, 10); 
   gSP1Triangle(glistp++,14, 11, 10, 14); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x08810b7e);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x087f1000);
   gSP1Triangle(glistp++,12, 11, 15, 12); 
   gSP1Triangle(glistp++,11, 16, 17, 11); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x1380007f);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x1380057e);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0c7f057e);
   gSP1Triangle(glistp++,7, 13, 9, 7); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0c7f007f);
   gSP1Triangle(glistp++,9, 0, 7, 9); 
   gSP1Triangle(glistp++,8, 18, 2, 8); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x083f0600);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x04bf0900);
   gSP1Triangle(glistp++,15, 19, 18, 15); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0bfe0580);
   gSP1Triangle(glistp++,1, 12, 8, 1); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0bfd0fff);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0bfe087e);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x08fe0680);
   gSP1Triangle(glistp++,1, 0, 9, 1); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x08fe1000);
   gSP1Triangle(glistp++,9, 12, 1, 9); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0bfe0580);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x07fe0580);
   gSP1Triangle(glistp++,8, 12, 15, 8); 
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x047f0e00);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x057f0c80);
   gSP1Triangle(glistp++,11, 19, 15, 11); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x08810b7e);
   gSP1Triangle(glistp++,11, 14, 16, 11); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x137c0600);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x1000098b);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0c840600);
   gSP1Triangle(glistp++,13, 10, 9, 13); 
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSP1Triangle(glistp++,21, 20, 23, 21); 
   gSP1Triangle(glistp++,23, 24, 21, 23); 
   gSP1Triangle(glistp++,22, 21, 24, 22); 
   gSP1Triangle(glistp++,24, 25, 22, 24); 
   gSPVertex(glistp++,player_ship_VTXPointer+25,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSP1Triangle(glistp++,4, 5, 2, 4); 
   gSP1Triangle(glistp++,2, 6, 7, 2); 
   gSP1Triangle(glistp++,8, 6, 2, 8); 
   gSP1Triangle(glistp++,9, 1, 10, 9); 
   gSP1Triangle(glistp++,10, 11, 9, 10); 
   gSP1Triangle(glistp++,5, 4, 12, 5); 
   gSP1Triangle(glistp++,12, 13, 5, 12); 
   gSP1Triangle(glistp++,6, 8, 14, 6); 
   gSP1Triangle(glistp++,14, 15, 6, 14); 
   gSP1Triangle(glistp++,3, 7, 16, 3); 
   gSP1Triangle(glistp++,16, 17, 3, 16); 
   gSP1Triangle(glistp++,4, 9, 11, 4); 
   gSP1Triangle(glistp++,11, 12, 4, 11); 
   gSP1Triangle(glistp++,7, 6, 15, 7); 
   gSP1Triangle(glistp++,15, 16, 7, 15); 
   gSP1Triangle(glistp++,8, 5, 13, 8); 
   gSP1Triangle(glistp++,13, 14, 8, 13); 
   gSP1Triangle(glistp++,1, 3, 17, 1); 
   gSP1Triangle(glistp++,17, 10, 1, 17); 
   gSP1Triangle(glistp++,7, 3, 2, 7); 
   gSP1Triangle(glistp++,1, 9, 2, 1); 
   gSP1Triangle(glistp++,2, 5, 8, 2); 
   gSP1Triangle(glistp++,2, 9, 4, 2); 
   gSPVertex(glistp++,player_ship_VTXPointer+8,26,0);
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x04bf0900);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x04bf0600);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x083f0600);
   gSP1Triangle(glistp++,10, 0, 7, 10); 
   gSPVertex(glistp++,player_ship_VTXPointer+33,26,0);
   gSP1Triangle(glistp++,10, 11, 12, 10); 
   gSP1Triangle(glistp++,12, 13, 10, 12); 
   gSP1Triangle(glistp++,14, 15, 16, 14); 
   gSP1Triangle(glistp++,14, 10, 13, 14); 
   gSP1Triangle(glistp++,13, 17, 14, 13); 
   gSP1Triangle(glistp++,18, 15, 19, 18); 
   gSP1Triangle(glistp++,19, 20, 18, 19); 
   gSP1Triangle(glistp++,16, 21, 11, 16); 
   gSP1Triangle(glistp++,21, 18, 20, 21); 
   gSP1Triangle(glistp++,20, 22, 21, 20); 
   gSP1Triangle(glistp++,23, 24, 25, 23); 
   gSPVertex(glistp++,player_ship_VTXPointer+56,26,0);
   gSP1Triangle(glistp++,2, 3, 0, 2); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0943188a);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x092f186c);
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,4, 5, 0, 4); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0e7f0d7e);
   gSP1Triangle(glistp++,6, 1, 7, 6); 
   gSP1Triangle(glistp++,7, 8, 6, 7); 
   gSP1Triangle(glistp++,9, 6, 8, 9); 
   gSP1Triangle(glistp++,8, 10, 9, 8); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0fff0d7e);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0ffe0c00);
   gSP1Triangle(glistp++,2, 11, 4, 2); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0fff0d7e);
   gSP1Triangle(glistp++,4, 3, 2, 4); 
   gSPVertex(glistp++,player_ship_VTXPointer+43,26,0);
   gSP1Triangle(glistp++,0, 6, 1, 0); 
   gSP1Triangle(glistp++,7, 9, 5, 7); 
   gSP1Triangle(glistp++,5, 4, 7, 5); 
   gSP1Triangle(glistp++,4, 6, 0, 4); 
   gSP1Triangle(glistp++,8, 6, 5, 8); 
   gSP1Triangle(glistp++,12, 2, 1, 12); 
   gSP1Triangle(glistp++,1, 11, 12, 1); 
   gSP1Triangle(glistp++,11, 6, 8, 11); 
   gSPVertex(glistp++,player_ship_VTXPointer+68,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,1, 0, 3, 1); 
   gSP1Triangle(glistp++,3, 4, 1, 3); 
   gSP1Triangle(glistp++,2, 1, 4, 2); 
   gSP1Triangle(glistp++,4, 5, 2, 4); 
   gSPVertex(glistp++,player_ship_VTXPointer+58,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0ffe0b80);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0e7e0b80);
   gSP1Triangle(glistp++,4, 7, 0, 4); 
   gSPVertex(glistp++,player_ship_VTXPointer+57,26,0);
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0ffe0b80);
   gSP1Triangle(glistp++,1, 0, 5, 1); 
   gSPVertex(glistp++,player_ship_VTXPointer+56,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0e7f0d7e);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0e7f0d7e);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0e7e0bff);
   gSP1Triangle(glistp++,1, 0, 5, 1); 
   gSP1Triangle(glistp++,5, 7, 1, 5); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0fff0d7e);
   gSP1Triangle(glistp++,11, 2, 9, 11); 
   gSPVertex(glistp++,player_ship_VTXPointer+2,26,0);
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x11800000);
   gSP1Triangle(glistp++,2, 1, 0, 2); 
   gSPVertex(glistp++,player_ship_VTXPointer+52,26,0);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSP1Triangle(glistp++,25, 22, 24, 25); 
   gSPVertex(glistp++,player_ship_VTXPointer+77,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSP1Triangle(glistp++,3, 4, 1, 3); 
   gSP1Triangle(glistp++,5, 6, 7, 5); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x02fe0300);
   gSP1Triangle(glistp++,8, 7, 9, 8); 
   gSPVertex(glistp++,player_ship_VTXPointer+75,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x04fe0080);
   gSP1Triangle(glistp++,11, 0, 10, 11); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x047f0e00);
   gSP1Triangle(glistp++,14, 7, 12, 14); 
   gSPVertex(glistp++,player_ship_VTXPointer+68,26,0);
   gSP1Triangle(glistp++,22, 23, 0, 22); 
   gSP1Triangle(glistp++,23, 22, 24, 23); 
   gSP1Triangle(glistp++,24, 25, 23, 24); 
   gSPVertex(glistp++,player_ship_VTXPointer+93,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSP1Triangle(glistp++,9, 10, 7, 9); 
   gSP1Triangle(glistp++,11, 12, 13, 11); 
   gSP1Triangle(glistp++,11, 7, 10, 11); 
   gSP1Triangle(glistp++,10, 14, 11, 10); 
   gSP1Triangle(glistp++,15, 12, 16, 15); 
   gSP1Triangle(glistp++,16, 17, 15, 16); 
   gSP1Triangle(glistp++,13, 18, 8, 13); 
   gSP1Triangle(glistp++,18, 15, 17, 18); 
   gSP1Triangle(glistp++,17, 19, 18, 17); 
   gSP1Triangle(glistp++,7, 13, 8, 7); 
   gSP1Triangle(glistp++,14, 16, 12, 14); 
   gSP1Triangle(glistp++,12, 11, 14, 12); 
   gSP1Triangle(glistp++,11, 13, 7, 11); 
   gSP1Triangle(glistp++,15, 13, 12, 15); 
   gSP1Triangle(glistp++,19, 9, 8, 19); 
   gSP1Triangle(glistp++,8, 18, 19, 8); 
   gSP1Triangle(glistp++,18, 13, 15, 18); 
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSP1Triangle(glistp++,23, 24, 21, 23); 
   gSPVertex(glistp++,player_ship_VTXPointer+114,26,0);
   gSP1Triangle(glistp++,0, 4, 5, 0); 
   gSP1Triangle(glistp++,6, 4, 0, 6); 
   gSPVertex(glistp++,player_ship_VTXPointer+113,26,0);
   gSP1Triangle(glistp++,8, 0, 9, 8); 
   gSP1Triangle(glistp++,9, 10, 8, 9); 
   gSP1Triangle(glistp++,4, 3, 11, 4); 
   gSP1Triangle(glistp++,11, 12, 4, 11); 
   gSP1Triangle(glistp++,5, 7, 13, 5); 
   gSP1Triangle(glistp++,13, 14, 5, 13); 
   gSP1Triangle(glistp++,2, 6, 15, 2); 
   gSP1Triangle(glistp++,15, 16, 2, 15); 
   gSP1Triangle(glistp++,3, 8, 10, 3); 
   gSP1Triangle(glistp++,10, 11, 3, 10); 
   gSP1Triangle(glistp++,6, 5, 14, 6); 
   gSP1Triangle(glistp++,14, 15, 6, 14); 
   gSP1Triangle(glistp++,7, 4, 12, 7); 
   gSP1Triangle(glistp++,12, 13, 7, 12); 
   gSP1Triangle(glistp++,0, 2, 16, 0); 
   gSP1Triangle(glistp++,16, 9, 0, 16); 
   gSP1Triangle(glistp++,6, 2, 1, 6); 
   gSP1Triangle(glistp++,0, 8, 1, 0); 
   gSP1Triangle(glistp++,1, 4, 7, 1); 
   gSP1Triangle(glistp++,1, 8, 3, 1); 
   gSP1Triangle(glistp++,17, 18, 19, 17); 
   gSP1Triangle(glistp++,18, 20, 19, 18); 
   gSP1Triangle(glistp++,20, 21, 19, 20); 
   gSP1Triangle(glistp++,21, 22, 19, 21); 
   gSP1Triangle(glistp++,22, 23, 19, 22); 
   gSP1Triangle(glistp++,23, 17, 19, 23); 
   gSPVertex(glistp++,player_ship_VTXPointer+137,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,1, 3, 2, 1); 
   gSP1Triangle(glistp++,3, 4, 2, 3); 
   gSP1Triangle(glistp++,4, 5, 2, 4); 
   gSP1Triangle(glistp++,5, 6, 2, 5); 
   gSP1Triangle(glistp++,6, 0, 2, 6); 
   gSPVertex(glistp++,player_ship_VTXPointer+82,26,0);
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x04bf0900);
   gSP1Triangle(glistp++,2, 3, 0, 2); 
   gSPVertex(glistp++,player_ship_VTXPointer+132,26,0);
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,14, 13, 15, 14); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x04bf0900);
   gSP1Triangle(glistp++,16, 15, 17, 16); 
   gSP1Triangle(glistp++,12, 14, 18, 12); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0bfd0fff);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x08fe1000);
   gSP1Triangle(glistp++,12, 18, 19, 12); 
   gSP1Triangle(glistp++,19, 20, 12, 19); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x07fe0580);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x0bfe0580);
   gSP1Triangle(glistp++,14, 16, 18, 14); 
   gSP1Triangle(glistp++,21, 22, 23, 21); 
   gSP1Triangle(glistp++,24, 23, 25, 24); 
   gSPVertex(glistp++,player_ship_VTXPointer+155,26,0);
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,5, 0, 4, 5); 
   gSP1Triangle(glistp++,6, 7, 8, 6); 
   gSPVertex(glistp++,player_ship_VTXPointer+153,26,0);
   gSP1Triangle(glistp++,10, 0, 8, 10); 
   gSP1Triangle(glistp++,4, 11, 12, 4); 
   gSP1Triangle(glistp++,12, 3, 4, 12); 
   gSP1Triangle(glistp++,6, 13, 14, 6); 
   gSP1Triangle(glistp++,14, 7, 6, 14); 
   gSP1Triangle(glistp++,1, 15, 16, 1); 
   gSP1Triangle(glistp++,16, 5, 1, 16); 
   gSP1Triangle(glistp++,3, 12, 9, 3); 
   gSP1Triangle(glistp++,9, 8, 3, 9); 
   gSP1Triangle(glistp++,5, 16, 13, 5); 
   gSP1Triangle(glistp++,13, 6, 5, 13); 
   gSP1Triangle(glistp++,7, 14, 11, 7); 
   gSP1Triangle(glistp++,11, 4, 7, 11); 
   gSP1Triangle(glistp++,0, 10, 15, 0); 
   gSP1Triangle(glistp++,15, 1, 0, 15); 
   gSP1Triangle(glistp++,5, 2, 1, 5); 
   gSP1Triangle(glistp++,0, 2, 8, 0); 
   gSP1Triangle(glistp++,2, 7, 4, 2); 
   gSP1Triangle(glistp++,2, 3, 8, 2); 
   gSPVertex(glistp++,player_ship_VTXPointer+146,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x04bf0900);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x04bf0600);
   gSP1Triangle(glistp++,1, 2, 0, 1); 
   gSPVertex(glistp++,player_ship_VTXPointer+170,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x02fe0300);
   gSP1Triangle(glistp++,5, 1, 3, 5); 
   gSP1Triangle(glistp++,6, 7, 8, 6); 
   gSP1Triangle(glistp++,9, 8, 10, 9); 
   gSP1Triangle(glistp++,8, 11, 12, 8); 
   gSP1Triangle(glistp++,13, 8, 12, 13); 
   gSP1Triangle(glistp++,14, 15, 16, 14); 
   gSP1Triangle(glistp++,16, 6, 14, 16); 
   gSP1Triangle(glistp++,10, 17, 18, 10); 
   gSP1Triangle(glistp++,18, 9, 10, 18); 
   gSP1Triangle(glistp++,12, 19, 20, 12); 
   gSP1Triangle(glistp++,20, 13, 12, 20); 
   gSP1Triangle(glistp++,7, 21, 22, 7); 
   gSP1Triangle(glistp++,22, 11, 7, 22); 
   gSP1Triangle(glistp++,9, 18, 15, 9); 
   gSP1Triangle(glistp++,15, 14, 9, 15); 
   gSP1Triangle(glistp++,11, 22, 19, 11); 
   gSP1Triangle(glistp++,19, 12, 11, 19); 
   gSP1Triangle(glistp++,13, 20, 17, 13); 
   gSP1Triangle(glistp++,17, 10, 13, 17); 
   gSP1Triangle(glistp++,6, 16, 21, 6); 
   gSP1Triangle(glistp++,21, 7, 6, 21); 
   gSP1Triangle(glistp++,11, 8, 7, 11); 
   gSP1Triangle(glistp++,6, 8, 14, 6); 
   gSP1Triangle(glistp++,8, 13, 10, 8); 
   gSP1Triangle(glistp++,8, 9, 14, 8); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x04bf0b80);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x04bf0900);
   gSP1Triangle(glistp++,1, 0, 3, 1); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 1 
void Ship_Drife_Flame2_PolyList(u8 animFrame) 
 { 

   Vtx *Ship_Drife_Flame2_VTXPointer = &Ship_Drife_Flame2_VertList_1[0]; 

   gSPVertex(glistp++,Ship_Drife_Flame2_VTXPointer+0,26,0);

//OBJECT: 1 MATERIAL NO. 0 'shipbodytexture'OK 

   TEXTURE_4B_TLUT(glistp, shipbodytexture, shipbodytexture_tlut, 6,1);

   gSPVertex(glistp++,Ship_Drife_Flame2_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00001000);
   gSP1Triangle(glistp++,3, 0, 4, 3); 
   gSP1Triangle(glistp++,5, 3, 6, 5); 
   gSP1Triangle(glistp++,7, 5, 8, 7); 
   gSP1Triangle(glistp++,9, 7, 10, 9); 
   gSP1Triangle(glistp++,1, 9, 11, 1); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x10000000);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x10001000);
   gSP1Triangle(glistp++,4, 0, 2, 4); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x00000000);
   gSP1Triangle(glistp++,6, 3, 4, 6); 
   gSP1Triangle(glistp++,8, 5, 6, 8); 
   gSP1Triangle(glistp++,10, 7, 8, 10); 
   gSP1Triangle(glistp++,11, 9, 10, 11); 
   gSP1Triangle(glistp++,2, 1, 11, 2); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 2 
void player_ship_drive_PolyList(u8 animFrame) 
 { 

   Vtx *player_ship_drive_VTXPointer = &player_ship_drive_VertList_1[0]; 

   gSPVertex(glistp++,player_ship_drive_VTXPointer+0,26,0);

//OBJECT: 2 MATERIAL NO. 0 'shipthruster'OK 

   TEXTURE_4B_TLUT(glistp, shipthruster, shipthruster_tlut, 6,1);

   gSPVertex(glistp++,player_ship_drive_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,2, 3, 0, 2); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,6, 7, 4, 6); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x08530007);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x08530579);
   gSP1Triangle(glistp++,7, 1, 8, 7); 
   gSP1Triangle(glistp++,8, 9, 7, 8); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x023f0007);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x05f60007);
   gSP1Triangle(glistp++,9, 8, 10, 9); 
   gSP1Triangle(glistp++,10, 11, 9, 10); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x02490649);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x05b2062f);
   gSP1Triangle(glistp++,0, 8, 1, 0); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x05b2063d);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x02490647);
   gSP1Triangle(glistp++,7, 9, 4, 7); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x08550007);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0e920007);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0e920579);
   gSP1Triangle(glistp++,7, 6, 2, 7); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x08550579);
   gSP1Triangle(glistp++,2, 1, 7, 2); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x023d0c14);
   gSP1Triangle(glistp++,0, 12, 13, 0); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x02390007);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x02360007);
   gSP1Triangle(glistp++,3, 5, 12, 3); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x02380c14);
   gSP1Triangle(glistp++,5, 4, 12, 5); 
   gSP1Triangle(glistp++,4, 14, 13, 4); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x02360fff);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x02420fff);
   gSP1Triangle(glistp++,11, 10, 14, 11); 
   gSP1Triangle(glistp++,10, 0, 14, 10); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x024c0bd4);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x05b20fe1);
   gSP1Triangle(glistp++,9, 11, 4, 9); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x05b10fe4);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x02490bcd);
   gSP1Triangle(glistp++,0, 10, 8, 0); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x023d0c14);
   gSP1Triangle(glistp++,0, 3, 12, 0); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x02380c14);
   gSP1Triangle(glistp++,4, 13, 12, 4); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0d03050f);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0d080971);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0ff50971);
   gSP1Triangle(glistp++,6, 5, 3, 6); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0ff4050f);
   gSP1Triangle(glistp++,3, 2, 6, 3); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x02360fff);
   gSP1Triangle(glistp++,4, 11, 14, 4); 
   gSP1Triangle(glistp++,0, 13, 14, 0); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 3 
void Tuster_FLame_PolyList(u8 animFrame) 
 { 

   Vtx *Tuster_FLame_VTXPointer = &Tuster_FLame_VertList_1[0]; 

   gSPVertex(glistp++,Tuster_FLame_VTXPointer+0,26,0);

//OBJECT: 3 MATERIAL NO. 0 'shipthruster'OK 

   TEXTURE_4B_TLUT(glistp, shipthruster, shipthruster_tlut, 6,1);

   gSPVertex(glistp++,Tuster_FLame_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0f5a0ce4);
   gSP1Triangle(glistp++,3, 6, 7, 3); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x00b00ce4);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0f990ce4);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0ff30fd4);
   gSP1Triangle(glistp++,4, 0, 2, 4); 
   gSP1Triangle(glistp++,8, 9, 1, 8); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x006f0ce4);
   gSP1Triangle(glistp++,7, 9, 3, 7); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x00030fd4);
   gSP1Triangle(glistp++,2, 5, 4, 2); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0135060d);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x00120920);
   gSP1Triangle(glistp++,9, 7, 1, 9); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0ed00617);
   gSP1Triangle(glistp++,0, 8, 1, 0); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0b930ce3);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0a79097a);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x04880ce3);
   gSP1Triangle(glistp++,6, 3, 5, 6); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 4 
void Shadow2_PolyList(u8 animFrame) 
 { 

   Vtx *Shadow2_VTXPointer = &Shadow2_VertList_1[0]; 

   gSPVertex(glistp++,Shadow2_VTXPointer+0,26,0);

//OBJECT: 4 MATERIAL NO. 0 '13 - Default'OK 

   TEXTURE_4B_TLUT(glistp, 13 - Default, 13 - Default_tlut, 6,1);

   gSPVertex(glistp++,Shadow2_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 0, 2, 3); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 5 
void Billboard_ShipDrive_PolyList(u8 animFrame) 
 { 

   Vtx *Billboard_ShipDrive_VTXPointer = &Billboard_ShipDrive_VertList_1[0]; 

   gSPVertex(glistp++,Billboard_ShipDrive_VTXPointer+0,26,0);
   gDPPipeSync(glistp++);

 } 
 
 
 