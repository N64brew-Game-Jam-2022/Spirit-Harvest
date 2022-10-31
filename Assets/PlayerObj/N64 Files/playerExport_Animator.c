//Test Object = 0 
#include "playerExport.h" 

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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.282868, 48.832709,
    8.978648, 0.000000, -1.500000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.497052, 47.730708,
    17.957302, 0.000000, -3.000001,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.393579, 47.051233,
    16.991086, 0.000000, -2.640856,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.172157, 46.451375,
    14.923513, 0.000000, -1.501682,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 45.656356,
    13.957299, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 44.207826,
    17.428749, -0.152971, 1.892777,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 43.305877,
    22.218370, -0.417778, 3.978157,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.138434, 44.231802,
    24.025453, -0.642469, 6.127498,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.287693, 46.306774,
    24.768392, -0.858235, 8.196123,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.357444, 47.521240,
    24.854710, -0.936934, 8.951498,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.287693, 47.824255,
    23.037499, -0.824519, 7.874805,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.138434, 47.948831,
    19.148893, -0.545236, 5.200820,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.963306,
    17.331678, -0.313444, 2.983596,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.650078,
    18.566853, -0.194864, 1.852086,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.727026,
    21.727744, -0.118985, 1.131424,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 45.634592,
    24.558956, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 44.073850,
    26.571458, 0.198850, -1.891976,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 43.110004,
    28.091793, 0.417778, -3.978157,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 43.820766,
    29.267986, 0.642469, -6.127498,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 45.543215,
    30.053771, 0.858235, -8.196123,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.875122,
    30.276429, 0.936934, -8.951498,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.565663,
    27.181988, 0.786328, -7.509933,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.915670,
    20.560273, 0.464050, -4.425162,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.985068,
    17.465832, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.985068,
    17.465832, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.985068,
    17.465832, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.985068,
    17.465832, 0.313444, -2.983596,
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

//OBJECT: 0 MATERIAL NO. 1 'player_darkJoints'OK 

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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -0.682560, -3.272833, 69.824678,
    13.962861, 0.000000, -1.500000,
       1.000000, 1.000000, 1.000000,
 -0.848509, -6.830039, 68.443131,
    27.925727, 0.000000, -3.000001,
       1.000000, 1.000000, 1.000000,
 -0.806244, -6.375930, 67.864889,
    27.421300, 0.000000, -2.640856,
       1.000000, 1.000000, 1.000000,
 -0.677363, -5.404195, 67.530894,
    26.341895, 0.000000, -1.501682,
       1.000000, 1.000000, 1.000000,
 -0.516611, -4.950087, 66.760695,
    25.837470, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.332696, -6.162286, 64.803427,
    28.974472, -0.152971, 1.892777,
       1.000000, 1.000000, 1.000000,
 -0.117917, -7.923054, 63.489312,
    34.098538, -0.417778, 3.978157,
       1.000000, 1.000000, 1.000000,
 0.146618, -8.690507, 64.200348,
    37.787086, -0.642469, 6.127498,
       1.000000, 1.000000, 1.000000,
 0.424439, -9.032685, 65.939039,
    40.970914, -0.858235, 8.196123,
       1.000000, 1.000000, 1.000000,
 0.530198, -9.084026, 67.319512,
    42.065523, -0.936934, 8.951498,
       1.000000, 1.000000, 1.000000,
 0.369469, -8.382900, 68.118733,
    39.348471, -0.824519, 7.874805,
       1.000000, 1.000000, 1.000000,
 -0.017740, -6.882578, 68.613631,
    33.534323, -0.545236, 5.200820,
       1.000000, 1.000000, 1.000000,
 -0.311845, -6.181452, 68.743420,
    30.817281, -0.313444, 2.983596,
       1.000000, 1.000000, 1.000000,
 -0.410300, -6.624199, 68.277669,
    30.849926, -0.221994, 1.845756,
       1.000000, 1.000000, 1.000000,
 -0.421141, -7.751699, 66.954100,
    31.130930, -0.176660, 1.117968,
       1.000000, 1.000000, 1.000000,
 -0.516611, -8.749532, 65.480596,
    31.814427, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 -0.760393, -9.438808, 63.545740,
    34.350244, 0.575550, -1.835157,
       1.000000, 1.000000, 1.000000,
 -1.062359, -9.941884, 62.382865,
    38.361204, 0.994379, -3.874624,
       1.000000, 1.000000, 1.000000,
 -1.396150, -10.313590, 62.937862,
    42.626056, 0.992498, -6.044488,
       1.000000, 1.000000, 1.000000,
 -1.735806, -10.542538, 64.388704,
    47.074692, 0.976310, -8.169004,
       1.000000, 1.000000, 1.000000,
 -1.863251, -10.602228, 65.755057,
    48.763012, 0.936934, -8.951498,
       1.000000, 1.000000, 1.000000,
 -1.588059, -9.546108, 67.030483,
    44.256754, 0.760828, -7.509933,
       1.000000, 1.000000, 1.000000,
 -0.999180, -7.286143, 68.286741,
    34.613934, 0.452055, -4.425162,
       1.000000, 1.000000, 1.000000,
 -0.723988, -6.230023, 68.750811,
    30.107675, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.723988, -6.230023, 68.750811,
    30.107675, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.723988, -6.230023, 68.750811,
    30.107675, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.723988, -6.230023, 68.750811,
    30.107675, 0.313444, -2.983596,
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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -16.217771, 2.617743, 49.418840,
    16.118277, 0.018728, -0.425685,
       1.000000, 1.000000, 1.000000,
 -16.305563, 5.304170, 50.221139,
    32.236563, 0.149821, -0.851370,
       1.000000, 1.000000, 1.000000,
 -16.540854, 2.879598, 49.541783,
    21.434325, 1.064184, -0.811358,
       1.000000, 1.000000, 1.000000,
 -16.866009, -3.184027, 47.754923,
    -5.972399, 2.754507, -0.466978,
       1.000000, 1.000000, 1.000000,
 -17.003067, -8.306860, 46.048695,
    -30.002624, 3.522186, 0.370667,
       1.000000, 1.000000, 1.000000,
 -16.317588, -11.862466, 44.359720,
    -46.356313, 1.552204, 1.967873,
       1.000000, 1.000000, 1.000000,
 -15.320939, -13.351098, 43.457368,
    -57.723322, -0.417778, 3.978157,
       1.000000, 1.000000, 1.000000,
 -14.884070, -13.310613, 43.909922,
    -64.985056, -0.416476, 6.114734,
       1.000000, 1.000000, 1.000000,
 -14.686677, -12.962168, 45.045471,
    -68.327437, -0.405272, 8.259695,
       1.000000, 1.000000, 1.000000,
 -14.656013, -12.114633, 46.013233,
    -68.870887, -0.378019, 9.059400,
       1.000000, 1.000000, 1.000000,
 -15.222256, -9.960888, 46.525863,
    -63.409550, 0.346727, 8.016398,
       1.000000, 1.000000, 1.000000,
 -16.433942, -6.067513, 46.887377,
    -47.720452, 2.028179, 5.446254,
       1.000000, 1.000000, 1.000000,
 -17.000185, -2.409520, 47.500968,
    -29.921232, 3.274738, 3.360584,
       1.000000, 1.000000, 1.000000,
 -16.998585, 0.700098, 48.543072,
    -11.366809, 3.849981, 2.529465,
       1.000000, 1.000000, 1.000000,
 -16.984816, 3.665034, 49.842748,
    9.810553, 4.086480, 2.159040,
       1.000000, 1.000000, 1.000000,
 -16.951324, 6.025665, 50.849247,
    27.963355, 4.113957, 0.875989,
       1.000000, 1.000000, 1.000000,
 -16.031726, 7.660715, 51.172304,
    41.895339, -0.566453, -2.113314,
       1.000000, 1.000000, 1.000000,
 -14.890765, 8.576780, 51.654780,
    51.828350, -5.246865, -5.287883,
       1.000000, 1.000000, 1.000000,
 -14.553805, 9.259132, 53.608370,
    60.481059, -4.971681, -7.527478,
       1.000000, 1.000000, 1.000000,
 -14.415272, 9.586907, 56.357014,
    66.804243, -4.152994, -9.167473,
       1.000000, 1.000000, 1.000000,
 -14.399175, 9.645522, 57.521939,
    68.741025, -3.169359, -9.670621,
       1.000000, 1.000000, 1.000000,
 -14.758143, 8.813022, 55.871940,
    59.000499, -1.846270, -8.055349,
       1.000000, 1.000000, 1.000000,
 -15.526287, 7.031576, 52.341151,
    38.156985, -0.301194, -4.598868,
       1.000000, 1.000000, 1.000000,
 -15.885255, 6.199076, 50.691152,
    28.416466, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -15.885255, 6.199076, 50.691152,
    28.416466, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -15.885255, 6.199076, 50.691152,
    28.416466, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -15.885255, 6.199076, 50.691152,
    28.416466, 0.313444, -2.983596,
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
    -0.000000, 0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 15.053549, -2.360693, 47.465160,
    -10.761327, 0.034444, -0.823516,
       1.000000, 1.000000, 1.000000,
 14.961036, -4.652705, 46.484041,
    -21.522659, 0.068888, -1.647032,
       1.000000, 1.000000, 1.000000,
 15.139864, -1.394034, 47.742462,
    -15.161702, -1.009249, -1.608258,
       1.000000, 1.000000, 1.000000,
 15.522538, 5.786463, 50.890207,
    2.790773, -3.316328, -1.274529,
       1.000000, 1.000000, 1.000000,
 15.701367, 9.684277, 53.550786,
    22.532442, -4.394464, -0.462790,
       1.000000, 1.000000, 1.000000,
 14.976482, 10.255486, 55.236638,
    47.978783, 0.512394, 2.047446,
       1.000000, 1.000000, 1.000000,
 14.098495, 10.337088, 56.176209,
    63.174981, 5.419252, 5.114406,
       1.000000, 1.000000, 1.000000,
 13.888609, 10.329369, 56.625628,
    63.020953, 3.788989, 6.956786,
       1.000000, 1.000000, 1.000000,
 13.802318, 10.262943, 56.810397,
    61.695248, -0.151102, 8.176556,
       1.000000, 1.000000, 1.000000,
 13.792293, 10.101371, 56.831867,
    58.470702, -3.173219, 8.519216,
       1.000000, 1.000000, 1.000000,
 14.200953, 9.510415, 55.809611,
    52.575924, -4.622203, 7.447665,
       1.000000, 1.000000, 1.000000,
 15.191220, 7.896169, 53.113151,
    42.716471, -5.257622, 4.751449,
       1.000000, 1.000000, 1.000000,
 15.956792, 5.520183, 50.522006,
    31.200137, -5.504740, 2.436930,
       1.000000, 1.000000, 1.000000,
 16.353332, 2.498336, 48.458678,
    19.036977, -5.704257, 0.961848,
       1.000000, 1.000000, 1.000000,
 16.553913, -1.326190, 46.431461,
    5.098725, -5.786283, -0.199204,
       1.000000, 1.000000, 1.000000,
 16.593540, -5.116009, 44.518363,
    -9.749262, -5.795813, -1.236254,
       1.000000, 1.000000, 1.000000,
 15.159063, -9.247265, 42.264730,
    -26.539906, -0.571540, -2.023307,
       1.000000, 1.000000, 1.000000,
 13.371448, -12.188436, 41.097844,
    -41.977584, 4.652732, -2.999172,
       1.000000, 1.000000, 1.000000,
 12.887330, -13.399589, 41.738525,
    -55.056751, 4.407236, -5.068771,
       1.000000, 1.000000, 1.000000,
 12.688296, -13.897528, 43.340424,
    -65.596611, 3.702547, -7.588650,
       1.000000, 1.000000, 1.000000,
 12.665170, -13.955382, 44.692913,
    -69.065063, 2.904172, -8.606837,
       1.000000, 1.000000, 1.000000,
 13.217169, -11.574512, 45.658073,
    -58.055700, 1.902369, -7.248525,
       1.000000, 1.000000, 1.000000,
 14.398378, -6.479748, 46.431136,
    -34.497035, 0.762368, -4.341908,
       1.000000, 1.000000, 1.000000,
 14.950377, -4.098878, 46.684489,
    -23.487673, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 14.950377, -4.098878, 46.684489,
    -23.487673, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 14.950377, -4.098878, 46.684489,
    -23.487673, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 14.950377, -4.098878, 46.684489,
    -23.487673, 0.313444, -2.983596,
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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -6.145895, 1.942827, 22.279570,
    1.908070, 0.000000, -2.036386,
       1.000000, 1.000000, 1.000000,
 -5.863707, 5.058999, 21.841677,
    9.129400, 0.000000, -5.000000,
       1.000000, 1.000000, 1.000000,
 -5.603836, 6.701582, 21.624911,
    19.957726, 0.000000, -6.306294,
       1.000000, 1.000000, 1.000000,
 -5.343185, 7.815632, 21.447171,
    34.319751, 0.000000, -6.904125,
       1.000000, 1.000000, 1.000000,
 -5.246049, 8.685432, 21.023178,
    49.872815, 0.000000, -7.000000,
       1.000000, 1.000000, 1.000000,
 -5.277289, 9.483873, 19.963768,
    70.971656, 0.000000, -6.292809,
       1.000000, 1.000000, 1.000000,
 -5.451580, 9.769633, 19.244634,
    83.723714, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -5.775724, 6.231782, 19.960769,
    84.526801, 0.000000, -3.755432,
       1.000000, 1.000000, 1.000000,
 -6.213903, -2.294015, 21.797898,
    84.856979, 0.000000, -2.480092,
       1.000000, 1.000000, 1.000000,
 -6.608921, -8.776417, 23.453249,
    84.895338, 0.000000, -2.000000,
       1.000000, 1.000000, 1.000000,
 -6.935416, -11.762350, 24.855988,
    72.158927, 0.000000, -2.520854,
       1.000000, 1.000000, 1.000000,
 -7.224733, -12.926956, 26.152563,
    40.063322, 0.000000, -3.842083,
       1.000000, 1.000000, 1.000000,
 -7.473477, -13.340749, 26.616088,
    12.403563, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -7.727954, -13.731840, 26.561543,
    -8.527186, -0.000000, -5.916362,
       1.000000, 1.000000, 1.000000,
 -7.945966, -13.892628, 26.092076,
    -26.223553, -0.000000, -6.720700,
       1.000000, 1.000000, 1.000000,
 -8.020580, -13.911310, 24.950179,
    -32.230959, -0.000000, -7.000000,
       1.000000, 1.000000, 1.000000,
 -7.716409, -12.786298, 21.833499,
    -28.461101, -0.000000, -6.292809,
       1.000000, 1.000000, 1.000000,
 -7.213478, -10.368949, 19.549774,
    -20.382429, -0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -6.890953, -7.917150, 19.827086,
    -10.765533, -0.000000, -3.755432,
       1.000000, 1.000000, 1.000000,
 -6.617690, -5.114419, 20.534123,
    0.188994, 0.000000, -2.480092,
       1.000000, 1.000000, 1.000000,
 -6.387710, -2.441739, 21.161681,
    5.991179, 0.000000, -2.000000,
       1.000000, 1.000000, 1.000000,
 -6.157201, 0.558063, 21.674524,
    7.892068, 0.000000, -2.724660,
       1.000000, 1.000000, 1.000000,
 -5.966980, 3.513507, 22.136085,
    8.673576, 0.000000, -4.275341,
       1.000000, 1.000000, 1.000000,
 -5.903392, 4.605392, 22.298682,
    8.764376, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -5.903392, 4.605392, 22.298682,
    8.764376, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -5.903392, 4.605392, 22.298682,
    8.764376, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -5.903392, 4.605392, 22.298682,
    8.764376, 0.000000, -4.999999,
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
    0.000000, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 6.042960, -5.501610, 23.920512,
    -0.067427, 0.273023, 2.022198,
       1.000000, 1.000000, 1.000000,
 6.579128, -12.306201, 25.583345,
    -0.539417, 0.546046, 4.970169,
       1.000000, 1.000000, 1.000000,
 7.020713, -14.186609, 26.087502,
    -8.724908, 0.414147, 6.282375,
       1.000000, 1.000000, 1.000000,
 7.437500, -14.959697, 26.294774,
    -25.282061, 0.131899, 6.896311,
       1.000000, 1.000000, 1.000000,
 7.588169, -15.049519, 26.318857,
    -32.939434, -0.000000, 7.000000,
       1.000000, 1.000000, 1.000000,
 7.243044, -13.741495, 23.188145,
    -28.855060, -0.000000, 6.292809,
       1.000000, 1.000000, 1.000000,
 6.669998, -10.705870, 20.057434,
    -21.125466, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 6.296453, -7.158376, 20.318288,
    -14.486818, -0.000000, 3.755432,
       1.000000, 1.000000, 1.000000,
 5.976234, -2.963836, 20.975713,
    -7.562683, -0.000000, 2.480092,
       1.000000, 1.000000, 1.000000,
 5.712072, 0.478968, 21.542452,
    -1.498878, -0.000000, 2.000000,
       1.000000, 1.000000, 1.000000,
 5.500588, 2.986734, 21.971677,
    2.255997, 0.000000, 2.520854,
       1.000000, 1.000000, 1.000000,
 5.347248, 4.783574, 22.334842,
    5.008777, 0.000000, 3.842083,
       1.000000, 1.000000, 1.000000,
 5.193308, 6.172767, 22.458182,
    11.710399, 0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 4.982190, 7.309771, 22.300714,
    22.799134, 0.000000, 5.916362,
       1.000000, 1.000000, 1.000000,
 4.767532, 8.017280, 21.773440,
    37.727981, 0.000000, 6.720700,
       1.000000, 1.000000, 1.000000,
 4.687018, 8.578450, 21.029328,
    54.464598, 0.000000, 7.000000,
       1.000000, 1.000000, 1.000000,
 4.727956, 9.144611, 19.746152,
    78.537886, 0.000000, 6.292809,
       1.000000, 1.000000, 1.000000,
 4.914343, 9.361351, 18.912368,
    92.822476, 0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 5.245104, 5.276092, 19.740751,
    92.390589, 0.000000, 3.755432,
       1.000000, 1.000000, 1.000000,
 5.685221, -3.964495, 21.803042,
    88.673389, 0.000000, 2.480092,
       1.000000, 1.000000, 1.000000,
 6.063578, -9.586833, 23.524287,
    79.631912, 0.000000, 2.000000,
       1.000000, 1.000000, 1.000000,
 6.397677, -11.201016, 24.710201,
    53.784031, 0.000000, 2.724660,
       1.000000, 1.000000, 1.000000,
 6.681493, -11.864652, 25.626951,
    14.103187, 0.000000, 4.275341,
       1.000000, 1.000000, 1.000000,
 6.778124, -11.941757, 25.920004,
    -3.135119, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 6.778124, -11.941757, 25.920004,
    -3.135119, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 6.778124, -11.941757, 25.920004,
    -3.135119, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 6.778124, -11.941757, 25.920004,
    -3.135119, -0.000000, 4.999999,
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

//OBJECT: 5 MATERIAL NO. 1 'player_dark_joints'OK 

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


//OBJECT: 5 MATERIAL NO. 11 'player_glow'OK 

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


//OBJECT: 5 MATERIAL NO. 12 'player_limb2'OK 

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


//OBJECT: 5 MATERIAL NO. 13 'player_limb1'OK 

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
 
 
 //Test Object = 6 
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
    -0.000000, 0.000000, 0.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.455202,
    -16.133795, 0.388100, 2.007629,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.604742,
    -37.983922, 0.776200, 4.939534,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 40.978169,
    -45.820450, 0.588707, 6.257814,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 40.341657,
    -49.042271, 0.187494, 6.888287,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 39.515433,
    -49.416596, -0.000000, 7.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 38.066173,
    -43.847919, -0.000000, 6.292809,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 37.164953,
    -32.504102, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 38.289970,
    -21.243543, -0.000000, 3.755432,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 40.697366,
    -8.774231, -0.000000, 2.480092,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.822383,
    1.296946, 0.000000, 2.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.822383,
    8.544019, 0.000000, 2.520854,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.822383,
    13.481864, 0.000000, 3.842083,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.822383,
    17.330792, 0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.509154,
    20.607949, 0.000000, 5.916362,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 40.586102,
    22.721271, 0.000000, 6.720700,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 39.493668,
    24.461419, 0.000000, 7.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 37.932926,
    26.326701, 0.000000, 6.292809,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 36.969081,
    27.108474, 0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 37.872666,
    15.497709, 0.000000, 3.755432,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 39.972129,
    -11.142864, -0.000000, 2.480092,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.387108,
    -28.286721, -0.000000, 2.000000,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 41.924152,
    -34.097377, -0.000000, 2.724660,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.144945,
    -36.486300, -0.000000, 4.275341,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.170599,
    -36.763859, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.170599,
    -36.763859, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.170599,
    -36.763859, -0.000000, 4.999999,
       1.000000, 1.000000, 1.000000,
 3.185385, -0.068679, 42.170599,
    -36.763859, -0.000000, 4.999999,
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

//OBJECT: 6 MATERIAL NO. 0 'player_limb1'OK 

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


//OBJECT: 6 MATERIAL NO. 1 'player_dark_joints'OK 

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
 
 
 //Test Object = 7 
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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 8.641338, -2.666242, 62.192237,
    0.425809, -0.011505, -1.119720,
       1.000000, 1.000000, 1.000000,
 8.522795, -5.263803, 60.958678,
    3.406478, -0.092038, -2.239440,
       1.000000, 1.000000, 1.000000,
 8.555203, -4.819063, 60.357028,
    16.412497, -1.192586, -2.181269,
       1.000000, 1.000000, 1.000000,
 8.649761, -3.867375, 59.926146,
    42.413754, -3.384028, -1.680595,
       1.000000, 1.000000, 1.000000,
 8.759880, -3.422635, 59.151161,
    65.107836, -4.394464, -0.462790,
       1.000000, 1.000000, 1.000000,
 8.878996, -4.039196, 57.397735,
    83.599897, 0.512394, 2.195548,
       1.000000, 1.000000, 1.000000,
 9.008436, -4.677114, 56.246054,
    92.115667, 5.419252, 5.114406,
       1.000000, 1.000000, 1.000000,
 9.153268, -4.706392, 57.017040,
    90.126491, 3.788989, 6.956786,
       1.000000, 1.000000, 1.000000,
 9.297644, -4.718430, 58.875257,
    83.633986, -0.151102, 8.176556,
       1.000000, 1.000000, 1.000000,
 9.351289, -4.719828, 60.288632,
    74.752500, -3.173219, 8.519216,
       1.000000, 1.000000, 1.000000,
 9.264033, -4.479876, 60.966873,
    64.094468, -4.622203, 7.447665,
       1.000000, 1.000000, 1.000000,
 9.052871, -3.966407, 61.251998,
    50.857705, -5.257622, 4.751449,
       1.000000, 1.000000, 1.000000,
 8.890262, -3.726455, 61.287856,
    38.021163, -5.504740, 2.436930,
       1.000000, 1.000000, 1.000000,
 8.834746, -4.066734, 60.866058,
    26.298129, -5.704257, 0.961848,
       1.000000, 1.000000, 1.000000,
 8.825144, -4.969533, 59.654915,
    14.871040, -5.786283, -0.199204,
       1.000000, 1.000000, 1.000000,
 8.759880, -5.848157, 58.281994,
    3.559935, -5.795813, -1.236254,
       1.000000, 1.000000, 1.000000,
 8.592271, -6.593463, 56.431335,
    -10.901343, -0.571540, -2.023307,
       1.000000, 1.000000, 1.000000,
 8.372251, -7.250494, 55.309272,
    -18.772249, 4.652732, -2.999172,
       1.000000, 1.000000, 1.000000,
 8.117247, -7.832278, 55.895644,
    -18.830744, 4.407236, -5.068771,
       1.000000, 1.000000, 1.000000,
 7.850277, -8.309084, 57.393825,
    -18.854795, 3.702547, -7.588650,
       1.000000, 1.000000, 1.000000,
 7.748792, -8.467760, 58.730543,
    -18.857587, 2.904172, -8.606837,
       1.000000, 1.000000, 1.000000,
 7.954984, -7.563237, 59.836960,
    -13.392059, 1.902369, -7.248525,
       1.000000, 1.000000, 1.000000,
 8.396208, -5.627672, 60.842323,
    -1.696511, 0.762368, -4.341908,
       1.000000, 1.000000, 1.000000,
 8.602400, -4.723149, 61.198390,
    3.769018, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 8.602400, -4.723149, 61.198390,
    3.769018, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 8.602400, -4.723149, 61.198390,
    3.769018, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 8.602400, -4.723149, 61.198390,
    3.769018, 0.313444, -2.983596,
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

//OBJECT: 7 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_left_arm_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 2,   G_MWO_POINT_ST, 0x034506ee);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x063a07bc);           gSPModifyVertex(glistp++, 3,   G_MWO_POINT_ST, 0x04a6050c);
   gSP1Triangle(glistp++,2, 6, 3, 2); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x075b0408);
   gSP1Triangle(glistp++,3, 6, 8, 3); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x092e04d8);
   gSP1Triangle(glistp++,8, 6, 12, 8); 


//OBJECT: 7 MATERIAL NO. 12 'player_limb1'OK 

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
 
 
 //Test Object = 8 
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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.365700,
    5.494154, 0.000000, -2.036386,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.515240,
    14.104830, 0.000000, -5.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 40.888667,
    18.814837, 0.000000, -6.306294,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 40.252155,
    22.176122, 0.000000, -6.904125,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 39.425930,
    24.878214, 0.000000, -7.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 37.976670,
    27.466762, 0.000000, -6.292809,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 37.075451,
    28.476928, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 38.200468,
    18.257637, 0.000000, -3.755432,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 40.607864,
    -6.516107, -0.000000, -2.480092,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.732880,
    -25.692407, -0.000000, -2.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.732880,
    -35.108965, -0.000000, -2.520854,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.732880,
    -39.577316, -0.000000, -3.842083,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.732880,
    -41.822399, -0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.419652,
    -43.697498, -0.000000, -5.916362,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 40.496600,
    -44.468401, -0.000000, -6.720700,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 39.404166,
    -44.557972, -0.000000, -7.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 37.843424,
    -40.095406, -0.000000, -6.292809,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 36.879578,
    -31.316349, -0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 37.783164,
    -23.396839, -0.000000, -3.755432,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 39.882627,
    -14.857140, -0.000000, -2.480092,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.297606,
    -6.953718, -0.000000, -2.000000,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 41.834649,
    1.634829, 0.000000, -2.724660,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.055443,
    9.812626, 0.000000, -4.275341,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.081097,
    12.782440, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.081097,
    12.782440, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.081097,
    12.782440, 0.000000, -4.999999,
       1.000000, 1.000000, 1.000000,
 -3.973472, -0.068679, 42.081097,
    12.782440, 0.000000, -4.999999,
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

//OBJECT: 8 MATERIAL NO. 1 'player_dark_joints'OK 

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


//OBJECT: 8 MATERIAL NO. 11 'player_limb1'OK 

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
 
 
 //Test Object = 9 
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
    0.000000, -0.000000, -0.000000,
       1.000000, 1.000000, 1.000000,
 -9.775081, -2.210237, 62.358803,
    20.603952, 0.018728, -0.425685,
       1.000000, 1.000000, 1.000000,
 -9.882370, -4.351794, 61.120647,
    41.207914, 0.149821, -0.851370,
       1.000000, 1.000000, 1.000000,
 -9.857429, -4.137272, 60.527539,
    29.442056, 1.064184, -0.811358,
       1.000000, 1.000000, 1.000000,
 -9.776790, -3.678223, 60.108387,
    1.374889, 2.754507, -0.466978,
       1.000000, 1.000000, 1.000000,
 -9.667793, -3.463702, 59.316397,
    -19.298553, 3.522186, 0.370667,
       1.000000, 1.000000, 1.000000,
 -9.534812, -4.474713, 57.481742,
    -27.259369, 1.552204, 1.967873,
       1.000000, 1.000000, 1.000000,
 -9.371029, -6.019828, 56.269300,
    -28.396631, -0.417778, 3.978157,
       1.000000, 1.000000, 1.000000,
 -9.158456, -6.889670, 56.997633,
    -26.499356, -0.416476, 6.114734,
       1.000000, 1.000000, 1.000000,
 -8.929177, -7.485230, 58.766150,
    -20.812158, -0.405272, 8.259695,
       1.000000, 1.000000, 1.000000,
 -8.840869, -7.657845, 60.141772,
    -13.898807, -0.378019, 9.059400,
       1.000000, 1.000000, 1.000000,
 -8.969732, -6.952137, 60.873729,
    -7.336084, 0.346727, 8.016398,
       1.000000, 1.000000, 1.000000,
 -9.278810, -5.442008, 61.264902,
    0.497228, 2.028179, 5.446254,
       1.000000, 1.000000, 1.000000,
 -9.510403, -4.736300, 61.349571,
    10.972163, 3.274738, 3.360584,
       1.000000, 1.000000, 1.000000,
 -9.590641, -4.980239, 60.938543,
    24.869859, 3.849981, 2.529465,
       1.000000, 1.000000, 1.000000,
 -9.603872, -5.544551, 59.762341,
    41.536843, 4.086480, 2.159040,
       1.000000, 1.000000, 1.000000,
 -9.667793, -5.918920, 58.436841,
    56.175075, 4.113957, 0.875989,
       1.000000, 1.000000, 1.000000,
 -9.827217, -6.035486, 56.665075,
    68.206638, -0.566453, -2.113314,
       1.000000, 1.000000, 1.000000,
 -10.015003, -6.052139, 55.593824,
    76.630460, -5.246865, -5.287883,
       1.000000, 1.000000, 1.000000,
 -10.207162, -6.040150, 56.220627,
    81.993416, -4.971681, -7.527478,
       1.000000, 1.000000, 1.000000,
 -10.394265, -5.936968, 57.804447,
    84.466190, -4.152994, -9.167473,
       1.000000, 1.000000, 1.000000,
 -10.462987, -5.685994, 59.178877,
    84.869929, -3.169359, -9.670621,
       1.000000, 1.000000, 1.000000,
 -10.303273, -5.071539, 60.238725,
    74.481826, -1.846270, -8.055349,
       1.000000, 1.000000, 1.000000,
 -9.961504, -4.190550, 61.149371,
    52.252586, -0.301194, -4.598868,
       1.000000, 1.000000, 1.000000,
 -9.801790, -3.815080, 61.461592,
    41.864487, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -9.801790, -3.815080, 61.461592,
    41.864487, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -9.801790, -3.815080, 61.461592,
    41.864487, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -9.801790, -3.815080, 61.461592,
    41.864487, 0.313444, -2.983596,
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

//OBJECT: 9 MATERIAL NO. 1 'player_dark_joints'OK 

   TEXTURE_4B_TLUT_CLAMP(player_dark_joints, player_dark_joints_tlut, 6,1);

   gSPVertex(glistp++,player_right_arm_VTXPointer+0,26,0);
           gSPModifyVertex(glistp++, 1,   G_MWO_POINT_ST, 0x000b02d1);           gSPModifyVertex(glistp++, 4,   G_MWO_POINT_ST, 0x02ab03af);           gSPModifyVertex(glistp++, 6,   G_MWO_POINT_ST, 0x02cd00ad);
   gSP1Triangle(glistp++,1, 4, 6, 1); 
           gSPModifyVertex(glistp++, 8,   G_MWO_POINT_ST, 0x05fa02cc);
   gSP1Triangle(glistp++,4, 8, 6, 4); 
           gSPModifyVertex(glistp++, 12,   G_MWO_POINT_ST, 0x072d00c3);
   gSP1Triangle(glistp++,8, 12, 6, 8); 


//OBJECT: 9 MATERIAL NO. 12 'player_limb1'OK 

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
 
 
 