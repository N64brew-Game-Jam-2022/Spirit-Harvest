//Test Object = 0 
#include "Playerv4_projectiles.h" 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 void player_shot001_PolyList(u8 animFrame) 
 { 

   Vtx *player_shot001_VTXPointer = &player_shot001_VertList_0[0]; 

   gSPVertex(glistp++,player_shot001_VTXPointer+0,26,0);

//OBJECT: 0 MATERIAL NO. 0 'Player_shot'OK 

   TEXTURE_4B_TLUT(glistp, Player_shot, Player_shot_tlut, 6,1);

   gSPVertex(glistp++,player_shot001_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 2, 3); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x00001000);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x10000000);
   gSP1Triangle(glistp++,2, 1, 3, 2); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x10000000);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x00000000);
   gSP1Triangle(glistp++,1, 0, 4, 1); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00001000);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x10001000);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x10000000);
   gSP1Triangle(glistp++,0, 2, 4, 0); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x00001000);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x00000000);
   gSP1Triangle(glistp++,3, 1, 4, 3); 

   gDPPipeSync(glistp++);

 } 
 
 
 