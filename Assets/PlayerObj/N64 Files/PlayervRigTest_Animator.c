//Test Object = 0 
#include "PlayervRigTest.h" 

 struct Vector3 tempObjVectorPos;
 struct Vector3 tempObjVectorRot;
 struct Vector3 tempObjVectorScl;

 RigAnimation player_chest_anim[] =
 { 
-0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.476635,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_chest_animation()
 { 
   tempObjVectorPos = player_chest_anim[animFrame].pos;
   tempObjVectorRot = player_chest_anim[animFrame].rot;
   tempObjVectorScl = player_chest_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_chest_PolyList(u8 animFrame) 
 { 

   Vtx *player_chest_VTXPointer = &player_chest_VertList_0[0]; 

   gSPVertex(glistp++,player_chest_VTXPointer+0,26,0);

//OBJECT: 0 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_chest_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0d1f099c);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0ac007fb);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0c780a66);
   gSP1Triangle(glistp++,0, 11, 6, 0); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x03ae09e0);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x06720946);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0618085e);
   gSP1Triangle(glistp++,2, 10, 3, 2); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x08960830);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x088c0722);
   gSP1Triangle(glistp++,3, 9, 4, 3); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0f9c0c09);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0e8a0c49);
   gSP1Triangle(glistp++,1, 6, 8, 1); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0b0806e0);
   gSP1Triangle(glistp++,4, 11, 5, 4); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x026f0c32);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x04830a97);
   gSP1Triangle(glistp++,1, 7, 2, 1); 
   gSP1Triangle(glistp++,0, 5, 11, 0); 
   gSP1Triangle(glistp++,2, 7, 10, 2); 
   gSP1Triangle(glistp++,3, 10, 9, 3); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0f9c0c09);
   gSP1Triangle(glistp++,1, 0, 6, 1); 
   gSP1Triangle(glistp++,4, 9, 11, 4); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x026f0c32);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x03870c49);
   gSP1Triangle(glistp++,1, 8, 7, 1); 
   gSPVertex(glistp++,player_chest_VTXPointer+25,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 0, 3); 
   gSPVertex(glistp++,player_chest_VTXPointer+23,26,0);
   gSP1Triangle(glistp++,8, 3, 6, 8); 
   gSP1Triangle(glistp++,9, 6, 10, 9); 
   gSP1Triangle(glistp++,11, 9, 12, 11); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0f210631);
   gSP1Triangle(glistp++,0, 8, 11, 0); 
   gSP1Triangle(glistp++,12, 10, 5, 12); 
   gSP1Triangle(glistp++,4, 13, 0, 4); 
   gSP1Triangle(glistp++,14, 15, 16, 14); 
   gSP1Triangle(glistp++,17, 18, 19, 17); 
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSP1Triangle(glistp++,20, 16, 23, 20); 
   gSP1Triangle(glistp++,24, 18, 25, 24); 
   gSPVertex(glistp++,player_chest_VTXPointer+38,26,0);
   gSP1Triangle(glistp++,0, 10, 11, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+37,26,0);
   gSP1Triangle(glistp++,0, 8, 13, 0); 
   gSP1Triangle(glistp++,5, 13, 8, 5); 
   gSP1Triangle(glistp++,2, 12, 14, 2); 
   gSP1Triangle(glistp++,14, 12, 3, 14); 
   gSP1Triangle(glistp++,15, 14, 3, 15); 
   gSPVertex(glistp++,player_chest_VTXPointer+21,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x09350156);
   gSP1Triangle(glistp++,21, 0, 19, 21); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0d490854);
   gSP1Triangle(glistp++,9, 13, 14, 9); 
   gSP1Triangle(glistp++,4, 8, 5, 4); 
   gSP1Triangle(glistp++,7, 12, 8, 7); 
   gSPVertex(glistp++,player_chest_VTXPointer+46,26,0);
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0f2a02ec);
   gSP1Triangle(glistp++,10, 11, 9, 10); 
   gSP1Triangle(glistp++,11, 10, 12, 11); 
   gSPVertex(glistp++,player_chest_VTXPointer+30,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0d490854);           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x0f210631);
   gSP1Triangle(glistp++,4, 0, 23, 4); 
   gSPVertex(glistp++,player_chest_VTXPointer+26,26,0);
   gSP1Triangle(glistp++,5, 10, 0, 5); 
   gSP1Triangle(glistp++,6, 5, 3, 6); 
   gSP1Triangle(glistp++,8, 5, 6, 8); 
   gSPVertex(glistp++,player_chest_VTXPointer+31,26,0);
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x0f210631);
   gSP1Triangle(glistp++,22, 5, 0, 22); 
   gSP1Triangle(glistp++,4, 1, 2, 4); 
   gSPVertex(glistp++,player_chest_VTXPointer+36,26,0);
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x0f2a02ec);
   gSP1Triangle(glistp++,19, 23, 0, 19); 
   gSP1Triangle(glistp++,1, 11, 2, 1); 
   gSP1Triangle(glistp++,4, 12, 5, 4); 
   gSP1Triangle(glistp++,1, 7, 9, 1); 
   gSP1Triangle(glistp++,7, 1, 3, 7); 
   gSP1Triangle(glistp++,11, 14, 5, 11); 
   gSP1Triangle(glistp++,2, 11, 12, 2); 
   gSP1Triangle(glistp++,11, 1, 14, 11); 
   gSP1Triangle(glistp++,6, 5, 14, 6); 
   gSP1Triangle(glistp++,3, 2, 13, 3); 
   gSP1Triangle(glistp++,12, 4, 13, 12); 
   gSPVertex(glistp++,player_chest_VTXPointer+110,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00d20149);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x003a03b2);
   gSP1Triangle(glistp++,2, 0, 1, 2); 
   gSPVertex(glistp++,player_chest_VTXPointer+89,26,0);
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x003a03b2);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x020c0606);
   gSP1Triangle(glistp++,23, 22, 0, 23); 
   gSPVertex(glistp++,player_chest_VTXPointer+117,26,0);
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x09bc03b5);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x09350156);
   gSP1Triangle(glistp++,8, 7, 6, 8); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0801061b);
   gSP1Triangle(glistp++,8, 5, 7, 8); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSPVertex(glistp++,player_chest_VTXPointer+110,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00d20149);
   gSP1Triangle(glistp++,0, 18, 19, 0); 
   gSP1Triangle(glistp++,19, 18, 17, 19); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x09350156);
   gSP1Triangle(glistp++,13, 20, 15, 13); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0801061b);
   gSP1Triangle(glistp++,12, 15, 21, 12); 
   gSP1Triangle(glistp++,21, 15, 20, 21); 


//OBJECT: 0 MATERIAL NO. 2 'player_chest_plate'OK 

   TEXTURE_4B_TLUT_CLAMP(player_chest_plate, player_chest_plate_tlut, 6,1);

   gSPVertex(glistp++,player_chest_VTXPointer+58,26,0);
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,11, 15, 9, 11); 
   gSP1Triangle(glistp++,14, 13, 16, 14); 
   gSPVertex(glistp++,player_chest_VTXPointer+72,26,0);
   gSP1Triangle(glistp++,19, 0, 20, 19); 
   gSP1Triangle(glistp++,2, 20, 0, 2); 
   gSPVertex(glistp++,player_chest_VTXPointer+69,26,0);
   gSP1Triangle(glistp++,24, 23, 0, 24); 
   gSP1Triangle(glistp++,4, 0, 23, 4); 
   gSPVertex(glistp++,player_chest_VTXPointer+110,26,0);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSPVertex(glistp++,player_chest_VTXPointer+135,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+134,26,0);
   gSP1Triangle(glistp++,0, 2, 4, 0); 
   gSP1Triangle(glistp++,2, 0, 5, 2); 
   gSP1Triangle(glistp++,6, 7, 8, 6); 
   gSP1Triangle(glistp++,9, 8, 7, 9); 
   gSP1Triangle(glistp++,9, 7, 10, 9); 
   gSPVertex(glistp++,player_chest_VTXPointer+117,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0e720787);
   gSP1Triangle(glistp++,23, 0, 24, 23); 
   gSPVertex(glistp++,player_chest_VTXPointer+134,26,0);
   gSP1Triangle(glistp++,7, 0, 10, 7); 
   gSPVertex(glistp++,player_chest_VTXPointer+133,26,0);
   gSP1Triangle(glistp++,11, 1, 0, 11); 
   gSPVertex(glistp++,player_chest_VTXPointer+117,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0e720787);
   gSP1Triangle(glistp++,24, 0, 19, 24); 
   gSP1Triangle(glistp++,0, 20, 19, 0); 


//OBJECT: 0 MATERIAL NO. 9 'player_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(player_glow, player_glow_tlut, 6,1);

   gSPVertex(glistp++,player_chest_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,0, 2, 3, 0); 
   gSP1Triangle(glistp++,0, 4, 5, 0); 
   gSP1Triangle(glistp++,6, 7, 8, 6); 
   gSP1Triangle(glistp++,6, 9, 10, 6); 
   gSP1Triangle(glistp++,6, 10, 7, 6); 
   gSP1Triangle(glistp++,6, 11, 9, 6); 


//OBJECT: 0 MATERIAL NO. 11 'player_torso'OK 

   TEXTURE_4B_TLUT_CLAMP(player_torso, player_torso_tlut, 6,1);

   gSPVertex(glistp++,player_chest_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,15, 16, 17, 15); 
   gSP1Triangle(glistp++,14, 18, 12, 14); 
   gSP1Triangle(glistp++,19, 12, 18, 19); 
   gSP1Triangle(glistp++,16, 15, 20, 16); 
   gSP1Triangle(glistp++,21, 14, 13, 21); 
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSPVertex(glistp++,player_chest_VTXPointer+23,26,0);
   gSP1Triangle(glistp++,1, 0, 7, 1); 
   gSPVertex(glistp++,player_chest_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x06950109);
   gSP1Triangle(glistp++,5, 0, 20, 5); 
   gSP1Triangle(glistp++,0, 15, 20, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+46,26,0);
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSPVertex(glistp++,player_chest_VTXPointer+36,26,0);
   gSP1Triangle(glistp++,24, 18, 17, 24); 
   gSPVertex(glistp++,player_chest_VTXPointer+61,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+58,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x007c0149);
   gSP1Triangle(glistp++,0, 6, 7, 0); 
   gSP1Triangle(glistp++,3, 8, 4, 3); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0bae0275);
   gSP1Triangle(glistp++,17, 18, 2, 17); 
   gSP1Triangle(glistp++,19, 18, 17, 19); 
   gSP1Triangle(glistp++,20, 19, 17, 20); 
   gSP1Triangle(glistp++,21, 22, 23, 21); 
   gSP1Triangle(glistp++,19, 21, 23, 19); 
   gSPVertex(glistp++,player_chest_VTXPointer+82,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+76,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0bc30768);
   gSP1Triangle(glistp++,0, 9, 10, 0); 
   gSP1Triangle(glistp++,1, 5, 11, 1); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSPVertex(glistp++,player_chest_VTXPointer+69,26,0);
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0b2106e5);
   gSP1Triangle(glistp++,7, 8, 21, 7); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x03f20533);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x04e406e5);
   gSP1Triangle(glistp++,12, 15, 14, 12); 
   gSP1Triangle(glistp++,14, 18, 12, 14); 
   gSP1Triangle(glistp++,21, 8, 18, 21); 
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x08020810);           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0aa00941);
   gSP1Triangle(glistp++,18, 19, 21, 18); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x055c0921);
   gSP1Triangle(glistp++,18, 14, 19, 18); 
   gSP1Triangle(glistp++,17, 21, 20, 17); 
   gSP1Triangle(glistp++,19, 14, 25, 19); 
   gSP1Triangle(glistp++,25, 14, 13, 25); 
   gSPVertex(glistp++,player_chest_VTXPointer+94,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSPVertex(glistp++,player_chest_VTXPointer+54,26,0);
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x029604d1);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x002303f3);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x02580566);
   gSP1Triangle(glistp++,19, 0, 13, 19); 
   gSPVertex(glistp++,player_chest_VTXPointer+74,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0d3d04be);           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x0fd7041f);
   gSP1Triangle(glistp++,0, 24, 23, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+99,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0f040341);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0f480516);
   gSP1Triangle(glistp++,0, 3, 1, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+95,26,0);
   gSP1Triangle(glistp++,2, 8, 0, 2); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0fd7041f);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0f9f05ba);
   gSP1Triangle(glistp++,2, 3, 8, 2); 
   gSP1Triangle(glistp++,6, 5, 9, 6); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0f480516);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0f3c06d1);
   gSP1Triangle(glistp++,5, 7, 9, 5); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x00980744);
   gSP1Triangle(glistp++,6, 9, 10, 6); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0f3c06d1);
   gSP1Triangle(glistp++,11, 9, 7, 11); 
   gSP1Triangle(glistp++,9, 11, 12, 9); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x00980744);           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x015b09a0);
   gSP1Triangle(glistp++,9, 12, 10, 9); 
   gSPVertex(glistp++,player_chest_VTXPointer+86,26,0);
   gSP1Triangle(glistp++,20, 0, 21, 20); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x015b09a0);
   gSP1Triangle(glistp++,19, 21, 22, 19); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0e930966);
   gSP1Triangle(glistp++,21, 0, 23, 21); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x015b09a0);           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x021c0b01);
   gSP1Triangle(glistp++,21, 23, 22, 21); 
           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x0e380b21);
   gSP1Triangle(glistp++,0, 3, 23, 0); 
           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x021c0b01);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSP1Triangle(glistp++,23, 25, 24, 23); 
           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x0e380b21);           gSPModifyVertex(glistp++, 25,   G_MWO_POINT_ST, 0x0d1f0e7b);
   gSP1Triangle(glistp++,23, 3, 25, 23); 
   gSPVertex(glistp++,player_chest_VTXPointer+89,26,0);
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0f9f05ba);
   gSP1Triangle(glistp++,9, 24, 14, 9); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x00cb04f2);           gSPModifyVertex(glistp++, 24,   G_MWO_POINT_ST, 0x00cf06bb);
   gSP1Triangle(glistp++,6, 14, 24, 6); 
           gSPModifyVertex(glistp++, 24,   G_MWO_POINT_ST, 0x0f57075c);
   gSP1Triangle(glistp++,25, 24, 9, 25); 
   gSPVertex(glistp++,player_chest_VTXPointer+95,26,0);
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x00cf06bb);
   gSP1Triangle(glistp++,20, 0, 18, 20); 
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x0f57075c);
   gSP1Triangle(glistp++,18, 19, 21, 18); 
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x00cf06bb);           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x01710951);
   gSP1Triangle(glistp++,18, 21, 20, 18); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0e9d09b7);
   gSP1Triangle(glistp++,19, 22, 21, 19); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x01710951);
   gSP1Triangle(glistp++,20, 21, 23, 20); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0e9d09b7);
   gSP1Triangle(glistp++,21, 22, 24, 21); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x01710951);           gSPModifyVertex(glistp++, 24,   G_MWO_POINT_ST, 0x01c60b0d);
   gSP1Triangle(glistp++,21, 24, 23, 21); 
   gSPVertex(glistp++,player_chest_VTXPointer+120,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_chest_VTXPointer+117,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0de10b17);
   gSP1Triangle(glistp++,0, 6, 4, 0); 
   gSP1Triangle(glistp++,4, 6, 7, 4); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x01c60b0d);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x02d20e73);
   gSP1Triangle(glistp++,4, 7, 5, 4); 
   gSPVertex(glistp++,player_chest_VTXPointer+142,26,0);
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,5, 4, 6, 5); 
   gSP1Triangle(glistp++,7, 8, 9, 7); 
   gSP1Triangle(glistp++,8, 10, 9, 8); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 1 
RigAnimation player_head_anim[] =
 { 
-0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, 0.284372, 70.710123,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_head_animation()
 { 
   tempObjVectorPos = player_head_anim[animFrame].pos;
   tempObjVectorRot = player_head_anim[animFrame].rot;
   tempObjVectorScl = player_head_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_head_PolyList(u8 animFrame) 
 { 

   Vtx *player_head_VTXPointer = &player_head_VertList_0[0]; 

   gSPVertex(glistp++,player_head_VTXPointer+0,26,0);

//OBJECT: 1 MATERIAL NO. 0 'playerHead_back'OK 

   TEXTURE_4B_TLUT_CLAMP(playerHead_back, playerHead_back_tlut, 6,1);

   gSPVertex(glistp++,player_head_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSPVertex(glistp++,player_head_VTXPointer+24,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+10,26,0);
   gSP1Triangle(glistp++,17, 18, 0, 17); 
   gSP1Triangle(glistp++,0, 10, 17, 0); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSP1Triangle(glistp++,21, 18, 22, 21); 
   gSPVertex(glistp++,player_head_VTXPointer+9,26,0);
   gSP1Triangle(glistp++,22, 0, 2, 22); 
   gSPVertex(glistp++,player_head_VTXPointer+10,26,0);
   gSP1Triangle(glistp++,18, 1, 0, 18); 
   gSPVertex(glistp++,player_head_VTXPointer+57,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 0, 2, 3); 
   gSP1Triangle(glistp++,4, 5, 6, 4); 
   gSP1Triangle(glistp++,7, 2, 1, 7); 
   gSPVertex(glistp++,player_head_VTXPointer+59,26,0);
   gSP1Triangle(glistp++,5, 1, 0, 5); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
   gSP1Triangle(glistp++,8, 9, 10, 8); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0dfc0212);
   gSP1Triangle(glistp++,14, 12, 15, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+86,26,0);
   gSP1Triangle(glistp++,21, 22, 23, 21); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x081b00cc);
   gSP1Triangle(glistp++,15, 20, 24, 15); 
   gSPVertex(glistp++,player_head_VTXPointer+11,26,0);
   gSP1Triangle(glistp++,20, 0, 17, 20); 
   gSPVertex(glistp++,player_head_VTXPointer+111,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+100,26,0);
           gSPModifyVertex(glistp++, 23,   G_MWO_POINT_ST, 0x083f103a);
   gSP1Triangle(glistp++,25, 23, 8, 25); 
   gSPVertex(glistp++,player_head_VTXPointer+125,26,0);
   gSP1Triangle(glistp++,1, 2, 3, 1); 
   gSPVertex(glistp++,player_head_VTXPointer+112,26,0);
   gSP1Triangle(glistp++,1, 0, 14, 1); 
   gSP1Triangle(glistp++,17, 14, 0, 17); 
   gSPVertex(glistp++,player_head_VTXPointer+107,26,0);
   gSP1Triangle(glistp++,0, 2, 6, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+137,26,0);
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x05ae0158);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x02f2003b);
   gSP1Triangle(glistp++,9, 16, 17, 9); 
   gSPVertex(glistp++,player_head_VTXPointer+98,26,0);
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0dfc0212);
   gSP1Triangle(glistp++,3, 13, 17, 3); 
   gSPVertex(glistp++,player_head_VTXPointer+137,26,0);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSPVertex(glistp++,player_head_VTXPointer+161,26,0);
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0c33090c);
   gSP1Triangle(glistp++,17, 16, 0, 17); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0b060fc6);
   gSP1Triangle(glistp++,14, 17, 0, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+160,26,0);
   gSP1Triangle(glistp++,0, 19, 1, 0); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x05360fca);
   gSP1Triangle(glistp++,13, 1, 19, 13); 


//OBJECT: 1 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_head_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0c6b03cc);
   gSP1Triangle(glistp++,6, 5, 7, 6); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0ddf07e4);
   gSP1Triangle(glistp++,1, 8, 3, 1); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x02ac08fe);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x03c708a4);
   gSP1Triangle(glistp++,12, 22, 13, 12); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x025b02ca);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x016301ea);
   gSP1Triangle(glistp++,15, 16, 23, 15); 
   gSPVertex(glistp++,player_head_VTXPointer+32,26,0);
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0ddf07e4);
   gSP1Triangle(glistp++,15, 14, 7, 15); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x097d05d7);           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x080d061a);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x09fd07fa);
   gSP1Triangle(glistp++,10, 19, 6, 10); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0d5d09fb);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0d090aa6);
   gSP1Triangle(glistp++,11, 6, 8, 11); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x08dd04ff);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x07bb058c);
   gSP1Triangle(glistp++,19, 13, 18, 19); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0c7f0111);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0dd9009f);
   gSP1Triangle(glistp++,16, 13, 12, 16); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0f48074b);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0f5e078f);
   gSP1Triangle(glistp++,14, 11, 8, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+16,26,0);
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x09ce013d);
   gSP1Triangle(glistp++,2, 7, 0, 2); 
   gSPVertex(glistp++,player_head_VTXPointer+66,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x025f093e);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x015b0583);
   gSP1Triangle(glistp++,4, 2, 9, 4); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x059f07ec);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x03ab0610);
   gSP1Triangle(glistp++,5, 7, 10, 5); 
   gSP1Triangle(glistp++,11, 5, 10, 11); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x025b02ca);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x039f0231);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x016301ea);
   gSP1Triangle(glistp++,1, 7, 8, 1); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x02ac08fe);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x03de08e8);
   gSP1Triangle(glistp++,3, 4, 6, 3); 
   gSPVertex(glistp++,player_head_VTXPointer+38,26,0);
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0c6b03cc);
   gSP1Triangle(glistp++,11, 6, 8, 11); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0d5d09fb);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x097d05d7);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x09fd07fa);
   gSP1Triangle(glistp++,5, 4, 0, 5); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x080d061a);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x08dd04ff);
   gSP1Triangle(glistp++,13, 4, 7, 13); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0c7f0111);           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0db40046);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0dd9009f);
   gSP1Triangle(glistp++,10, 12, 7, 10); 
   gSPVertex(glistp++,player_head_VTXPointer+120,26,0);
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x015b0583);           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x014d029f);
   gSP1Triangle(glistp++,14, 13, 12, 14); 
   gSP1Triangle(glistp++,15, 16, 17, 15); 
   gSPVertex(glistp++,player_head_VTXPointer+71,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x08ae0a94);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x059f07ec);
   gSP1Triangle(glistp++,6, 1, 0, 6); 
   gSPVertex(glistp++,player_head_VTXPointer+121,26,0);
   gSP1Triangle(glistp++,17, 18, 19, 17); 


//OBJECT: 1 MATERIAL NO. 5 'playerHead_front'OK 

   TEXTURE_4B_TLUT_CLAMP(playerHead_front, playerHead_front_tlut, 6,1);

   gSPVertex(glistp++,player_head_VTXPointer+33,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+32,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x01d506d6);
   gSP1Triangle(glistp++,0, 4, 5, 0); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x05550c06);
   gSP1Triangle(glistp++,23, 24, 21, 23); 
   gSPVertex(glistp++,player_head_VTXPointer+57,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0f6c0a9c);
   gSP1Triangle(glistp++,8, 9, 1, 8); 
   gSPVertex(glistp++,player_head_VTXPointer+66,26,0);
   gSP1Triangle(glistp++,17, 18, 15, 17); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
   gSP1Triangle(glistp++,11, 12, 13, 11); 
   gSPVertex(glistp++,player_head_VTXPointer+96,26,0);
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0acb06a0);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0dc00673);
   gSP1Triangle(glistp++,9, 18, 0, 9); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSPVertex(glistp++,player_head_VTXPointer+100,26,0);
   gSP1Triangle(glistp++,22, 23, 24, 22); 
   gSPVertex(glistp++,player_head_VTXPointer+112,26,0);
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0dc00673);
   gSP1Triangle(glistp++,15, 2, 18, 15); 
   gSPVertex(glistp++,player_head_VTXPointer+121,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0a5a0e67);
   gSP1Triangle(glistp++,3, 2, 4, 3); 
   gSPVertex(glistp++,player_head_VTXPointer+98,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x032b05a3);
   gSP1Triangle(glistp++,0, 4, 17, 0); 
   gSP1Triangle(glistp++,2, 20, 0, 2); 
   gSPVertex(glistp++,player_head_VTXPointer+162,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,1, 3, 2, 1); 
   gSPVertex(glistp++,player_head_VTXPointer+143,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0a280962);
   gSP1Triangle(glistp++,0, 21, 22, 0); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0acb06a0);
   gSP1Triangle(glistp++,21, 0, 9, 21); 
   gSPVertex(glistp++,player_head_VTXPointer+142,26,0);
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0acb06a0);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0a280962);
   gSP1Triangle(glistp++,0, 10, 1, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+166,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,6, 2, 1, 6); 
   gSP1Triangle(glistp++,1, 7, 6, 1); 
   gSP1Triangle(glistp++,8, 4, 3, 8); 
   gSP1Triangle(glistp++,4, 8, 9, 4); 
   gSP1Triangle(glistp++,10, 3, 5, 10); 
   gSP1Triangle(glistp++,11, 8, 10, 11); 
   gSP1Triangle(glistp++,3, 10, 8, 3); 
   gSPVertex(glistp++,player_head_VTXPointer+161,26,0);
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x02d70e53);
   gSP1Triangle(glistp++,17, 13, 16, 17); 
   gSP1Triangle(glistp++,13, 17, 14, 13); 
   gSPVertex(glistp++,player_head_VTXPointer+160,26,0);
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x0d3d0e05);
   gSP1Triangle(glistp++,12, 13, 19, 12); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0fa60cbb);
   gSP1Triangle(glistp++,19, 0, 12, 19); 
   gSP1Triangle(glistp++,20, 12, 0, 20); 
   gSP1Triangle(glistp++,20, 6, 8, 20); 
   gSP1Triangle(glistp++,8, 12, 20, 8); 


//OBJECT: 1 MATERIAL NO. 7 'playerHead_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(playerHead_glow, playerHead_glow_tlut, 6,1);

   gSPVertex(glistp++,player_head_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,12, 14, 15, 12); 
   gSP1Triangle(glistp++,16, 17, 18, 16); 
   gSPVertex(glistp++,player_head_VTXPointer+32,26,0);
   gSP1Triangle(glistp++,6, 7, 8, 6); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
   gSP1Triangle(glistp++,12, 13, 14, 12); 
   gSP1Triangle(glistp++,16, 17, 18, 16); 
   gSP1Triangle(glistp++,18, 6, 19, 18); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x03460a03);
   gSP1Triangle(glistp++,20, 4, 21, 20); 
   gSP1Triangle(glistp++,21, 22, 20, 21); 
   gSPVertex(glistp++,player_head_VTXPointer+57,26,0);
   gSP1Triangle(glistp++,10, 11, 12, 10); 
   gSP1Triangle(glistp++,13, 14, 15, 13); 
   gSPVertex(glistp++,player_head_VTXPointer+66,26,0);
   gSP1Triangle(glistp++,7, 5, 8, 7); 
   gSP1Triangle(glistp++,0, 12, 13, 0); 
   gSP1Triangle(glistp++,14, 15, 16, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+63,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x053e0109);
   gSP1Triangle(glistp++,22, 0, 23, 22); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,6, 4, 7, 6); 
   gSP1Triangle(glistp++,0, 16, 17, 0); 
   gSP1Triangle(glistp++,6, 16, 2, 6); 
   gSPVertex(glistp++,player_head_VTXPointer+86,26,0);
   gSP1Triangle(glistp++,0, 18, 17, 0); 
   gSP1Triangle(glistp++,17, 4, 0, 17); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x00f2046b);
   gSP1Triangle(glistp++,0, 16, 18, 0); 
   gSP1Triangle(glistp++,7, 2, 19, 7); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0111075e);
   gSP1Triangle(glistp++,1, 16, 12, 1); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x024700eb);
   gSP1Triangle(glistp++,20, 15, 0, 20); 
   gSP1Triangle(glistp++,4, 17, 8, 4); 
   gSPVertex(glistp++,player_head_VTXPointer+38,26,0);
   gSP1Triangle(glistp++,0, 12, 1, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+100,26,0);
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x03460a03);
   gSP1Triangle(glistp++,18, 0, 17, 18); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSPVertex(glistp++,player_head_VTXPointer+112,26,0);
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSPVertex(glistp++,player_head_VTXPointer+70,26,0);
   gSP1Triangle(glistp++,0, 4, 1, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+121,26,0);
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSP1Triangle(glistp++,0, 3, 23, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+132,26,0);
   gSP1Triangle(glistp++,13, 14, 15, 13); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0111075e);
   gSP1Triangle(glistp++,0, 11, 1, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+137,26,0);
   gSP1Triangle(glistp++,11, 12, 13, 11); 
   gSP1Triangle(glistp++,14, 15, 16, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
   gSP1Triangle(glistp++,0, 2, 16, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+137,26,0);
   gSP1Triangle(glistp++,14, 12, 18, 14); 
   gSPVertex(glistp++,player_head_VTXPointer+86,26,0);
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x024700eb);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x00f2046b);
   gSP1Triangle(glistp++,0, 15, 16, 0); 
   gSPVertex(glistp++,player_head_VTXPointer+136,26,0);
   gSP1Triangle(glistp++,20, 21, 22, 20); 
   gSPVertex(glistp++,player_head_VTXPointer+87,26,0);
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x00f2046b);
   gSP1Triangle(glistp++,0, 17, 15, 0); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 2 
RigAnimation player_right_arm_lower_anim[] =
 { 
-16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -16.205229, -0.068682, 48.616540,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_right_arm_lower_animation()
 { 
   tempObjVectorPos = player_right_arm_lower_anim[animFrame].pos;
   tempObjVectorRot = player_right_arm_lower_anim[animFrame].rot;
   tempObjVectorScl = player_right_arm_lower_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_right_arm_lower_PolyList(u8 animFrame) 
 { 

   Vtx *player_right_arm_lower_VTXPointer = &player_right_arm_lower_VertList_0[0]; 

   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+0,26,0);

//OBJECT: 2 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,0, 6, 7, 0); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0c1b016f);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0bd2032e);
   gSP1Triangle(glistp++,2, 8, 3, 2); 
   gSP1Triangle(glistp++,5, 6, 9, 5); 
   gSP1Triangle(glistp++,4, 10, 6, 4); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0d4b00ca);
   gSP1Triangle(glistp++,1, 11, 8, 1); 
   gSP1Triangle(glistp++,7, 10, 12, 7); 
   gSP1Triangle(glistp++,13, 12, 10, 13); 
   gSP1Triangle(glistp++,13, 14, 12, 13); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x102f035c);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0edc00ea);
   gSP1Triangle(glistp++,13, 11, 14, 13); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0b860895);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0b1d0981);
   gSP1Triangle(glistp++,7, 14, 1, 7); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x089505ee);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0a7106dd);
   gSP1Triangle(glistp++,8, 13, 4, 8); 
   gSP1Triangle(glistp++,0, 7, 1, 0); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x07eb06cd);
   gSP1Triangle(glistp++,3, 8, 4, 3); 
   gSP1Triangle(glistp++,0, 9, 6, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0d4b00ca);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0d640363);
   gSP1Triangle(glistp++,2, 1, 8, 2); 
   gSP1Triangle(glistp++,5, 4, 6, 5); 
   gSP1Triangle(glistp++,4, 13, 10, 4); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0edc00ea);
   gSP1Triangle(glistp++,1, 14, 11, 1); 
   gSP1Triangle(glistp++,7, 6, 10, 7); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0b860895);
   gSP1Triangle(glistp++,7, 12, 14, 7); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x102f035c);
   gSP1Triangle(glistp++,8, 11, 13, 8); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0e630680);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0bb205cb);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0d2c0769);
   gSP1Triangle(glistp++,21, 17, 16, 21); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x0d720221);
   gSP1Triangle(glistp++,20, 17, 21, 20); 
   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0d720221);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0c26025a);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0bb205cb);
   gSP1Triangle(glistp++,5, 3, 2, 5); 
   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x09980185);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x08ad03e9);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0c250185);
   gSP1Triangle(glistp++,2, 3, 0, 2); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0b2c0530);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0cdf03c0);
   gSP1Triangle(glistp++,5, 9, 0, 5); 
   gSP1Triangle(glistp++,3, 5, 0, 3); 


//OBJECT: 2 MATERIAL NO. 12 'player_limb2'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb2, player_limb2_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,15, 16, 17, 15); 
   gSP1Triangle(glistp++,15, 17, 18, 15); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSP1Triangle(glistp++,15, 23, 16, 15); 
   gSP1Triangle(glistp++,16, 24, 21, 16); 
   gSP1Triangle(glistp++,24, 19, 21, 24); 
   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0b5f0ccc);
   gSP1Triangle(glistp++,0, 11, 8, 0); 
   gSP1Triangle(glistp++,1, 8, 9, 1); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x04010d45);
   gSP1Triangle(glistp++,9, 10, 4, 9); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x07360f39);
   gSP1Triangle(glistp++,10, 9, 8, 10); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x05460ffd);
   gSP1Triangle(glistp++,11, 10, 8, 11); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x03960f64);
   gSP1Triangle(glistp++,10, 11, 7, 10); 


//OBJECT: 2 MATERIAL NO. 13 'player_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(player_glow, player_glow_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x0f620ec8);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x0f660c53);
   gSP1Triangle(glistp++,20, 22, 18, 20); 
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x08a70f65);
   gSP1Triangle(glistp++,19, 22, 20, 19); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x07a009fa);
   gSP1Triangle(glistp++,15, 18, 22, 15); 
   gSP1Triangle(glistp++,22, 19, 25, 22); 
   gSPVertex(glistp++,player_right_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x07a009fa);
   gSP1Triangle(glistp++,0, 7, 11, 0); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 3 
RigAnimation player_left_arm_lower_anim[] =
 { 
15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 15.146063, -0.068682, 48.446280,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_left_arm_lower_animation()
 { 
   tempObjVectorPos = player_left_arm_lower_anim[animFrame].pos;
   tempObjVectorRot = player_left_arm_lower_anim[animFrame].rot;
   tempObjVectorScl = player_left_arm_lower_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_left_arm_lower_PolyList(u8 animFrame) 
 { 

   Vtx *player_left_arm_lower_VTXPointer = &player_left_arm_lower_VertList_0[0]; 

   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+0,26,0);

//OBJECT: 3 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,0, 6, 7, 0); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0b62016c);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0b110323);
   gSP1Triangle(glistp++,1, 3, 8, 1); 
   gSP1Triangle(glistp++,4, 9, 7, 4); 
   gSP1Triangle(glistp++,5, 7, 10, 5); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0c9000cf);
   gSP1Triangle(glistp++,2, 8, 11, 2); 
   gSP1Triangle(glistp++,6, 12, 10, 6); 
   gSP1Triangle(glistp++,13, 10, 12, 13); 
   gSP1Triangle(glistp++,13, 12, 14, 13); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0f5d0365);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0e1b00f6);
   gSP1Triangle(glistp++,13, 14, 11, 13); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0b1e0a71);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0bca0976);
   gSP1Triangle(glistp++,6, 2, 14, 6); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x08f005c7);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0ae5073f);
   gSP1Triangle(glistp++,8, 5, 13, 8); 
   gSP1Triangle(glistp++,0, 2, 6, 0); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x07fd06a6);
   gSP1Triangle(glistp++,3, 5, 8, 3); 
   gSP1Triangle(glistp++,0, 7, 9, 0); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0c9c035e);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0c9000cf);
   gSP1Triangle(glistp++,1, 8, 2, 1); 
   gSP1Triangle(glistp++,4, 7, 5, 4); 
   gSP1Triangle(glistp++,5, 10, 13, 5); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0e1b00f6);
   gSP1Triangle(glistp++,2, 11, 14, 2); 
   gSP1Triangle(glistp++,6, 10, 7, 6); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0bca0976);
   gSP1Triangle(glistp++,6, 14, 12, 6); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0f5d0365);
   gSP1Triangle(glistp++,8, 13, 11, 8); 
           gSPModifyVertex(glistp++, 20,   G_MWO_POINT_ST, 0x0e670221);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0d480101);           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0b850275);
   gSP1Triangle(glistp++,20, 17, 16, 20); 
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0cc70681);
   gSP1Triangle(glistp++,21, 20, 16, 21); 
   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0cc70681);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0b850275);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0b790614);
   gSP1Triangle(glistp++,6, 1, 3, 6); 
   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x09b00578);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0c440578);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x08c3030e);
   gSP1Triangle(glistp++,1, 0, 3, 1); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x0b4901c3);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0d000337);
   gSP1Triangle(glistp++,4, 0, 9, 4); 
   gSP1Triangle(glistp++,3, 0, 4, 3); 


//OBJECT: 3 MATERIAL NO. 9 'player_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(player_glow, player_glow_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 21,   G_MWO_POINT_ST, 0x0ff20e81);           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x0ff20c17);
   gSP1Triangle(glistp++,21, 18, 22, 21); 
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x09020f89);
   gSP1Triangle(glistp++,19, 21, 22, 19); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x07f10979);
   gSP1Triangle(glistp++,15, 22, 18, 15); 
   gSP1Triangle(glistp++,22, 25, 19, 22); 
   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x07f10979);
   gSP1Triangle(glistp++,0, 11, 7, 0); 


//OBJECT: 3 MATERIAL NO. 12 'player_limb2'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb2, player_limb2_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,15, 16, 17, 15); 
   gSP1Triangle(glistp++,15, 18, 16, 15); 
   gSP1Triangle(glistp++,19, 20, 21, 19); 
   gSP1Triangle(glistp++,15, 17, 23, 15); 
   gSP1Triangle(glistp++,17, 20, 24, 17); 
   gSP1Triangle(glistp++,24, 20, 19, 24); 
   gSPVertex(glistp++,player_left_arm_lower_VTXPointer+15,26,0);
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0b3a0c9e);
   gSP1Triangle(glistp++,0, 8, 11, 0); 
   gSP1Triangle(glistp++,2, 9, 8, 2); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x03d80cf4);
   gSP1Triangle(glistp++,9, 4, 10, 9); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x09d70fff);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x07af0e7d);
   gSP1Triangle(glistp++,10, 8, 9, 10); 
   gSP1Triangle(glistp++,11, 8, 10, 11); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0b9c0ec1);
   gSP1Triangle(glistp++,10, 7, 11, 10); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 4 
RigAnimation player_right_leg_lower_anim[] =
 { 
-6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -6.303421, -0.068679, 22.535932,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_right_leg_lower_animation()
 { 
   tempObjVectorPos = player_right_leg_lower_anim[animFrame].pos;
   tempObjVectorRot = player_right_leg_lower_anim[animFrame].rot;
   tempObjVectorScl = player_right_leg_lower_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_right_leg_lower_PolyList(u8 animFrame) 
 { 

   Vtx *player_right_leg_lower_VTXPointer = &player_right_leg_lower_VertList_0[0]; 

   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+0,26,0);

//OBJECT: 4 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x097b0136);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0515007d);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x051903f6);
   gSP1Triangle(glistp++,8, 1, 5, 8); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00a70107);
   gSP1Triangle(glistp++,0, 11, 5, 0); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x097d038b);
   gSP1Triangle(glistp++,8, 5, 9, 8); 
   gSP1Triangle(glistp++,0, 5, 1, 0); 
   gSP1Triangle(glistp++,15, 16, 17, 15); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0823072e);
   gSP1Triangle(glistp++,12, 18, 19, 12); 
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x06cf07bd);           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x07480755);
   gSP1Triangle(glistp++,22, 18, 14, 22); 
   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+12,26,0);
   gSP1Triangle(glistp++,5, 17, 3, 5); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0c4801e7);
   gSP1Triangle(glistp++,3, 14, 4, 3); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0823072e);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x07480755);
   gSP1Triangle(glistp++,0, 2, 6, 0); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x06cf07bd);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x06bb0856);
   gSP1Triangle(glistp++,10, 11, 6, 10); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0d420770);
   gSP1Triangle(glistp++,5, 16, 17, 5); 


//OBJECT: 4 MATERIAL NO. 11 'player_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(player_glow, player_glow_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+12,26,0);
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x00850b82);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x07940fe6);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00850e36);
   gSP1Triangle(glistp++,7, 8, 0, 7); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x07ad09ef);
   gSP1Triangle(glistp++,13, 16, 8, 13); 
   gSP1Triangle(glistp++,7, 13, 8, 7); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0f100b2d);
   gSP1Triangle(glistp++,13, 17, 16, 13); 


//OBJECT: 4 MATERIAL NO. 12 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,5, 6, 7, 5); 
   gSP1Triangle(glistp++,8, 9, 7, 8); 
   gSP1Triangle(glistp++,6, 2, 10, 6); 
   gSP1Triangle(glistp++,6, 4, 3, 6); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0f0d0db7);
   gSP1Triangle(glistp++,11, 4, 6, 11); 
   gSP1Triangle(glistp++,1, 8, 10, 1); 
   gSP1Triangle(glistp++,0, 2, 3, 0); 
   gSP1Triangle(glistp++,0, 4, 11, 0); 
   gSP1Triangle(glistp++,5, 7, 9, 5); 
   gSP1Triangle(glistp++,8, 7, 10, 8); 
   gSP1Triangle(glistp++,6, 10, 7, 6); 
   gSP1Triangle(glistp++,11, 6, 5, 11); 
   gSP1Triangle(glistp++,1, 10, 2, 1); 
   gSP1Triangle(glistp++,6, 3, 2, 6); 


//OBJECT: 4 MATERIAL NO. 13 'player_limb2'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb2, player_limb2_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,12, 13, 14, 12); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0b250388);
   gSP1Triangle(glistp++,20, 17, 13, 20); 
   gSP1Triangle(glistp++,14, 21, 22, 14); 
   gSP1Triangle(glistp++,21, 23, 22, 21); 
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x05fa0daf);
   gSP1Triangle(glistp++,23, 24, 18, 23); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x038c0392);
   gSP1Triangle(glistp++,15, 25, 24, 15); 
           gSPModifyVertex(glistp++, 19,   G_MWO_POINT_ST, 0x05220dfd);
   gSP1Triangle(glistp++,24, 19, 18, 24); 
   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+24,26,0);
   gSP1Triangle(glistp++,2, 0, 3, 2); 
   gSPVertex(glistp++,player_right_leg_lower_VTXPointer+12,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x092003ef);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0b250388);
   gSP1Triangle(glistp++,4, 1, 5, 4); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x085a03ef);
   gSP1Triangle(glistp++,4, 15, 9, 4); 
   gSP1Triangle(glistp++,0, 8, 1, 0); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0f50014d);
   gSP1Triangle(glistp++,8, 16, 5, 8); 
   gSP1Triangle(glistp++,2, 1, 9, 2); 
   gSP1Triangle(glistp++,9, 15, 11, 9); 
   gSP1Triangle(glistp++,11, 15, 12, 11); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x038c0392);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x00fd01d8);
   gSP1Triangle(glistp++,3, 17, 13, 3); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x05220dfd);
   gSP1Triangle(glistp++,12, 13, 7, 12); 
   gSP1Triangle(glistp++,14, 3, 12, 14); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x092003ef);
   gSP1Triangle(glistp++,4, 9, 1, 4); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x085a03ef);
   gSP1Triangle(glistp++,4, 14, 15, 4); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 5 
RigAnimation player_left_leg_anim[] =
 { 
3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.910564,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_left_leg_animation()
 { 
   tempObjVectorPos = player_left_leg_anim[animFrame].pos;
   tempObjVectorRot = player_left_leg_anim[animFrame].rot;
   tempObjVectorScl = player_left_leg_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_left_leg_PolyList(u8 animFrame) 
 { 

   Vtx *player_left_leg_VTXPointer = &player_left_leg_VertList_0[0]; 

   gSPVertex(glistp++,player_left_leg_VTXPointer+0,26,0);

//OBJECT: 5 MATERIAL NO. 0 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x04920ae1);
   gSP1Triangle(glistp++,9, 10, 4, 9); 
   gSP1Triangle(glistp++,11, 12, 13, 11); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0c790e4b);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0b9d0e60);
   gSP1Triangle(glistp++,14, 3, 5, 14); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x09c201b4);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x078f024e);
   gSP1Triangle(glistp++,7, 15, 8, 7); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x069c0ada);
   gSP1Triangle(glistp++,10, 13, 4, 10); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x08400116);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x078b0553);
   gSP1Triangle(glistp++,10, 6, 11, 10); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0e6202a3);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x0bd901b6);
   gSP1Triangle(glistp++,2, 16, 0, 2); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0ab00ea3);
   gSP1Triangle(glistp++,14, 12, 15, 14); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0e190184);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0b6a069a);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0ea507bc);
   gSP1Triangle(glistp++,6, 15, 11, 6); 
   gSP1Triangle(glistp++,17, 3, 16, 17); 
   gSP1Triangle(glistp++,7, 16, 14, 7); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x023a04f5);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x04cf00de);
   gSP1Triangle(glistp++,17, 1, 10, 17); 
   gSP1Triangle(glistp++,9, 17, 10, 9); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0cf40f99);
   gSP1Triangle(glistp++,11, 15, 12, 11); 
   gSP1Triangle(glistp++,14, 16, 3, 14); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0853075a);
   gSP1Triangle(glistp++,7, 14, 15, 7); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x078b0553);
   gSP1Triangle(glistp++,10, 11, 13, 10); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x08400116);
   gSP1Triangle(glistp++,10, 1, 6, 10); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0f150762);
   gSP1Triangle(glistp++,2, 17, 16, 2); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0ab00ea3);
   gSP1Triangle(glistp++,14, 5, 12, 14); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0e190184);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x0b760012);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0b6a069a);
   gSP1Triangle(glistp++,6, 8, 15, 6); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0df60e54);
   gSP1Triangle(glistp++,17, 9, 3, 17); 
   gSP1Triangle(glistp++,7, 0, 16, 7); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x023a04f5);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x023a00e2);
   gSP1Triangle(glistp++,17, 2, 1, 17); 


//OBJECT: 5 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,6, 7, 8, 6); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x0ff00aea);           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0fff0f62);
   gSP1Triangle(glistp++,12, 4, 13, 12); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0aa10f85);
   gSP1Triangle(glistp++,3, 9, 4, 3); 
   gSP1Triangle(glistp++,12, 5, 4, 12); 
   gSP1Triangle(glistp++,0, 7, 1, 0); 
   gSP1Triangle(glistp++,6, 1, 7, 6); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 6 
RigAnimation player_left_arm_anim[] =
 { 
8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 8.759880, -0.068682, 62.956840,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_left_arm_animation()
 { 
   tempObjVectorPos = player_left_arm_anim[animFrame].pos;
   tempObjVectorRot = player_left_arm_anim[animFrame].rot;
   tempObjVectorScl = player_left_arm_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_left_arm_PolyList(u8 animFrame) 
 { 

   Vtx *player_left_arm_VTXPointer = &player_left_arm_VertList_0[0]; 

   gSPVertex(glistp++,player_left_arm_VTXPointer+0,26,0);

//OBJECT: 6 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x034506ee);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x063a07bc);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x04a6050c);
   gSP1Triangle(glistp++,2, 6, 3, 2); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x075b0408);
   gSP1Triangle(glistp++,3, 6, 8, 3); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x092e04d8);
   gSP1Triangle(glistp++,8, 6, 12, 8); 


//OBJECT: 6 MATERIAL NO. 12 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,2, 3, 0, 2); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0eba0950);
   gSP1Triangle(glistp++,5, 6, 2, 5); 
   gSP1Triangle(glistp++,7, 6, 5, 7); 
   gSP1Triangle(glistp++,4, 3, 8, 4); 
   gSP1Triangle(glistp++,9, 7, 5, 9); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x048a0df0);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x062f0d5e);
   gSP1Triangle(glistp++,1, 10, 9, 1); 
   gSP1Triangle(glistp++,9, 11, 1, 9); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0bc00654);
   gSP1Triangle(glistp++,12, 7, 4, 12); 
   gSP1Triangle(glistp++,4, 8, 12, 4); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0624085c);           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x07070c3a);
   gSP1Triangle(glistp++,6, 7, 12, 6); 
   gSP1Triangle(glistp++,0, 4, 10, 0); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0bc00654);
   gSP1Triangle(glistp++,4, 7, 9, 4); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0c4e01e8);
   gSP1Triangle(glistp++,11, 5, 2, 11); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0bd70000);
   gSP1Triangle(glistp++,9, 5, 11, 9); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x03160c62);
   gSP1Triangle(glistp++,0, 10, 1, 0); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x062f0d5e);
   gSP1Triangle(glistp++,4, 9, 10, 4); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0eb60114);
   gSP1Triangle(glistp++,11, 2, 1, 11); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 7 
RigAnimation player_right_leg_anim[] =
 { 
-3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.821062,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_right_leg_animation()
 { 
   tempObjVectorPos = player_right_leg_anim[animFrame].pos;
   tempObjVectorRot = player_right_leg_anim[animFrame].rot;
   tempObjVectorScl = player_right_leg_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_right_leg_PolyList(u8 animFrame) 
 { 

   Vtx *player_right_leg_VTXPointer = &player_right_leg_VertList_0[0]; 

   gSPVertex(glistp++,player_right_leg_VTXPointer+0,26,0);

//OBJECT: 7 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,3, 4, 5, 3); 
   gSP1Triangle(glistp++,6, 7, 0, 6); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0fff0f6d);           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0d2e0fff);
   gSP1Triangle(glistp++,10, 4, 15, 10); 
   gSP1Triangle(glistp++,0, 7, 1, 0); 
   gSP1Triangle(glistp++,3, 15, 4, 3); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x0952014c);
   gSP1Triangle(glistp++,6, 16, 7, 6); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0fff0aee);
   gSP1Triangle(glistp++,10, 14, 4, 10); 


//OBJECT: 7 MATERIAL NO. 11 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_right_leg_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x03b30aef);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x04b80ae5);
   gSP1Triangle(glistp++,8, 5, 4, 8); 
   gSP1Triangle(glistp++,9, 10, 11, 9); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x0ca20f43);
   gSP1Triangle(glistp++,12, 3, 13, 12); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x09ba023d);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0883087f);
   gSP1Triangle(glistp++,7, 11, 12, 7); 
   gSP1Triangle(glistp++,14, 8, 4, 14); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x084600fe);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x04b600cc);
   gSP1Triangle(glistp++,8, 6, 0, 8); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0e260281);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0bb701eb);
   gSP1Triangle(glistp++,13, 2, 1, 13); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0af20fea);
   gSP1Triangle(glistp++,12, 10, 15, 12); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0ec50227);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0a9205f4);
   gSP1Triangle(glistp++,6, 11, 16, 6); 
   gSP1Triangle(glistp++,3, 17, 13, 3); 
   gSP1Triangle(glistp++,7, 13, 1, 7); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x023604fc);
   gSP1Triangle(glistp++,0, 17, 8, 0); 
   gSP1Triangle(glistp++,8, 17, 5, 8); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0eac0f02);           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0caa0f32);
   gSP1Triangle(glistp++,9, 14, 10, 9); 
   gSP1Triangle(glistp++,12, 15, 3, 12); 
           gSPModifyVertex(glistp++, 16,   G_MWO_POINT_ST, 0x07a7033a);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0883087f);
   gSP1Triangle(glistp++,7, 16, 11, 7); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x06de0ae0);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x07ab0548);
   gSP1Triangle(glistp++,14, 9, 8, 14); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x084600fe);
   gSP1Triangle(glistp++,8, 9, 6, 8); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0ef00777);
   gSP1Triangle(glistp++,13, 17, 2, 13); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x0af20fea);
   gSP1Triangle(glistp++,12, 11, 10, 12); 
           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x0ec50227);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0f0f07f1);           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0a9205f4);
   gSP1Triangle(glistp++,6, 9, 11, 6); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0e0c0f10);
   gSP1Triangle(glistp++,3, 5, 17, 3); 
   gSP1Triangle(glistp++,7, 12, 13, 7); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x021c00e1);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x023604fc);
   gSP1Triangle(glistp++,0, 2, 17, 0); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 8 
RigAnimation player_right_arm_anim[] =
 { 
-9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -9.667793, -0.068682, 63.127100,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_right_arm_animation()
 { 
   tempObjVectorPos = player_right_arm_anim[animFrame].pos;
   tempObjVectorRot = player_right_arm_anim[animFrame].rot;
   tempObjVectorScl = player_right_arm_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_right_arm_PolyList(u8 animFrame) 
 { 

   Vtx *player_right_arm_VTXPointer = &player_right_arm_VertList_0[0]; 

   gSPVertex(glistp++,player_right_arm_VTXPointer+0,26,0);

//OBJECT: 8 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x000b02d1);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x02ab03af);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x02cd00ad);
   gSP1Triangle(glistp++,1, 4, 6, 1); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x05fa02cc);
   gSP1Triangle(glistp++,4, 8, 6, 4); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x072d00c3);
   gSP1Triangle(glistp++,8, 12, 6, 8); 


//OBJECT: 8 MATERIAL NO. 12 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,1, 0, 4, 1); 
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0f2508cf);
   gSP1Triangle(glistp++,5, 1, 6, 5); 
   gSP1Triangle(glistp++,7, 5, 6, 7); 
   gSP1Triangle(glistp++,3, 8, 4, 3); 
   gSP1Triangle(glistp++,9, 5, 7, 9); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x050e0d21);           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x06690c70);
   gSP1Triangle(glistp++,2, 9, 10, 2); 
   gSP1Triangle(glistp++,9, 2, 11, 9); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0a6105ab);
   gSP1Triangle(glistp++,12, 3, 7, 12); 
   gSP1Triangle(glistp++,3, 12, 8, 3); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x05440f74);           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x07a009da);
   gSP1Triangle(glistp++,6, 12, 7, 6); 
   gSP1Triangle(glistp++,0, 10, 3, 0); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x0a6105ab);
   gSP1Triangle(glistp++,3, 9, 7, 3); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0b7c0306);
   gSP1Triangle(glistp++,11, 1, 5, 11); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x0aad0180);
   gSP1Triangle(glistp++,9, 11, 5, 9); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x039b0bf5);
   gSP1Triangle(glistp++,0, 2, 10, 0); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x06690c70);
   gSP1Triangle(glistp++,3, 10, 9, 3); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0d5b01cd);
   gSP1Triangle(glistp++,11, 2, 1, 11); 

   gDPPipeSync(glistp++);

 } 
 
 
 //Test Object = 9 
RigAnimation player_left_leg_lower_anim[] =
 { 
5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 5.729645, -0.068679, 22.625434,
    0.000000, -0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 
};
void player_left_leg_lower_animation()
 { 
   tempObjVectorPos = player_left_leg_lower_anim[animFrame].pos;
   tempObjVectorRot = player_left_leg_lower_anim[animFrame].rot;
   tempObjVectorScl = player_left_leg_lower_anim[animFrame].scl;

   tempObjVectorPos = RotateAround(tempObjVectorPos, playerAvatar.rigidBody.centerMass, playerAvatar.obj.rot.z );
       //NOTE: Assign values to your rig here. For instance: 
       //SetVector3(&playerAvatar.animRig.joint.armR[0].pos, tempObjVectorPos.x,tempObjVectorPos.y,tempObjVectorPos.z);

 } 
void player_left_leg_lower_PolyList(u8 animFrame) 
 { 

   Vtx *player_left_leg_lower_VTXPointer = &player_left_leg_lower_VertList_0[0]; 

   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+0,26,0);

//OBJECT: 9 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x08e7010f);           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x049a03ef);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x047d0077);
   gSP1Triangle(glistp++,8, 5, 2, 8); 
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x00130121);
   gSP1Triangle(glistp++,0, 5, 11, 0); 
           gSPModifyVertex(glistp++, 9,   G_MWO_POINT_ST, 0x08fa0364);
   gSP1Triangle(glistp++,8, 9, 5, 8); 
   gSP1Triangle(glistp++,0, 2, 5, 0); 
   gSP1Triangle(glistp++,15, 16, 17, 15); 
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x0ddc0baa);
   gSP1Triangle(glistp++,18, 13, 19, 18); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0d960ae2);
   gSP1Triangle(glistp++,18, 22, 14, 18); 
   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+12,26,0);
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0e870665);
   gSP1Triangle(glistp++,14, 5, 4, 14); 
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x0d960ae2);           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x0ddc0baa);
   gSP1Triangle(glistp++,6, 2, 1, 6); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0f3209ea);
   gSP1Triangle(glistp++,6, 11, 10, 6); 
           gSPModifyVertex(glistp++, 15,   G_MWO_POINT_ST, 0x0c3e0214);
   gSP1Triangle(glistp++,3, 15, 4, 3); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0d540750);
   gSP1Triangle(glistp++,14, 17, 5, 14); 


//OBJECT: 9 MATERIAL NO. 11 'player_glow'OK 

   TEXTURE_4B_TLUT_CLAMP(player_glow, player_glow_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+13,26,0);
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x07590fe2);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x005f0bbc);           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x005f0e4b);
   gSP1Triangle(glistp++,7, 6, 0, 7); 
   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+12,26,0);
           gSPModifyVertex(glistp++, 13,   G_MWO_POINT_ST, 0x07720a3d);           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x07590fe2);
   gSP1Triangle(glistp++,17, 13, 8, 17); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x005f0bbc);
   gSP1Triangle(glistp++,8, 13, 7, 8); 
           gSPModifyVertex(glistp++, 14,   G_MWO_POINT_ST, 0x0ebf0b67);
   gSP1Triangle(glistp++,17, 14, 13, 17); 


//OBJECT: 9 MATERIAL NO. 12 'player_limb2'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb2, player_limb2_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,12, 13, 14, 12); 
           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0b130392);
   gSP1Triangle(glistp++,17, 20, 12, 17); 
   gSP1Triangle(glistp++,14, 21, 12, 14); 
           gSPModifyVertex(glistp++, 22,   G_MWO_POINT_ST, 0x085d0d00);
   gSP1Triangle(glistp++,23, 21, 22, 23); 
           gSPModifyVertex(glistp++, 18,   G_MWO_POINT_ST, 0x06390d52);
   gSP1Triangle(glistp++,24, 23, 18, 24); 
   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+16,26,0);
           gSPModifyVertex(glistp++, 0,   G_MWO_POINT_ST, 0x03d303b2);
   gSP1Triangle(glistp++,0, 9, 10, 0); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x056b0d9f);           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x06390d52);
   gSP1Triangle(glistp++,3, 8, 2, 3); 
   gSP1Triangle(glistp++,8, 11, 12, 8); 
   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+12,26,0);
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x092703fa);
   gSP1Triangle(glistp++,3, 0, 9, 3); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x085903fa);
   gSP1Triangle(glistp++,16, 3, 9, 16); 
   gSP1Triangle(glistp++,0, 8, 1, 0); 
           gSPModifyVertex(glistp++, 5,   G_MWO_POINT_ST, 0x0b130392);           gSPModifyVertex(glistp++, 17,   G_MWO_POINT_ST, 0x0f0a0164);
   gSP1Triangle(glistp++,5, 17, 8, 5); 
           gSPModifyVertex(glistp++, 10,   G_MWO_POINT_ST, 0x085d0d00);
   gSP1Triangle(glistp++,2, 10, 9, 2); 
   gSP1Triangle(glistp++,11, 16, 9, 11); 
   gSP1Triangle(glistp++,12, 16, 11, 12); 
           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x03d303b2);
   gSP1Triangle(glistp++,4, 12, 13, 4); 
           gSPModifyVertex(glistp++, 7,   G_MWO_POINT_ST, 0x056b0d9f);
   gSP1Triangle(glistp++,7, 13, 12, 7); 
   gSP1Triangle(glistp++,12, 4, 15, 12); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x092703fa);
   gSP1Triangle(glistp++,3, 5, 0, 3); 
           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x085903fa);
   gSP1Triangle(glistp++,16, 15, 3, 16); 


//OBJECT: 9 MATERIAL NO. 13 'player_limb1'OK 

   TEXTURE_4B_TLUT_CLAMP(player_limb1, player_limb1_tlut, 6,1);

   gSPVertex(glistp++,player_left_leg_lower_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 
   gSP1Triangle(glistp++,0, 3, 4, 0); 
   gSP1Triangle(glistp++,5, 6, 7, 5); 
   gSP1Triangle(glistp++,8, 6, 9, 8); 
   gSP1Triangle(glistp++,7, 10, 1, 7); 
   gSP1Triangle(glistp++,7, 4, 3, 7); 
           gSPModifyVertex(glistp++, 11,   G_MWO_POINT_ST, 0x0f910a40);
   gSP1Triangle(glistp++,11, 7, 3, 11); 
   gSP1Triangle(glistp++,2, 10, 8, 2); 
   gSP1Triangle(glistp++,0, 4, 1, 0); 
   gSP1Triangle(glistp++,0, 11, 3, 0); 
   gSP1Triangle(glistp++,5, 9, 6, 5); 
   gSP1Triangle(glistp++,8, 10, 6, 8); 
   gSP1Triangle(glistp++,7, 6, 10, 7); 
   gSP1Triangle(glistp++,11, 5, 7, 11); 
   gSP1Triangle(glistp++,2, 1, 10, 2); 
   gSP1Triangle(glistp++,7, 1, 4, 7); 

   gDPPipeSync(glistp++);

 } 
 
 
 