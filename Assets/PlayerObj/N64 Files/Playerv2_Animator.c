//Test Object = 0 
#include "Playerv2.h" 

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
 -0.516611, -0.127920, 49.345753,
    2.483215, 0.000000, -0.414853,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.282868, 48.933941,
    8.978650, 0.000000, -1.500000,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.437816, 48.334712,
    15.474086, 0.000000, -2.585147,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.497052, 47.730708,
    17.957302, 0.000000, -3.000001,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.393579, 47.164696,
    16.991086, 0.000000, -2.640856,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.172157, 46.504748,
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
 -0.516611, -0.068683, 47.459623,
    28.416089, 0.824519, -7.874805,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.690246,
    23.183762, 0.545236, -5.200820,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.985068,
    17.465832, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 48.570785,
    10.623416, 0.156544, -1.487240,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.222383,
    2.984826, 0.037523, -0.355824,
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
 -0.516611, -0.068683, 49.627566,
    0.761851, -0.051537, 0.498979,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.039566,
    2.922973, -0.212976, 1.940909,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.497991,
    5.538247, -0.446266, 3.751766,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.766110,
    7.446579, -0.679188, 5.182079,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.872630,
    8.807280, -0.963459, 6.224587,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.916791,
    9.990089, -1.331065, 7.135872,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.937349,
    10.718750, -1.626819, 7.988036,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.984263,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.074171,
    10.378380, -1.642544, 9.686319,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.189983,
    8.927727, -1.414554, 10.368288,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.282978,
    7.477075, -1.186563, 11.272954,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.315296,
    6.922489, -1.099402, 12.640161,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.634760,
    6.922489, -1.099402, 15.114664,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 48.990333,
    6.922489, -1.099402, 18.185865,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.729748,
    6.922490, -1.099402, 19.435380,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.101685,
    7.954202, -1.302987, 18.585454,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.810770,
    10.569545, -1.795313, 16.236289,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.762758,
    12.857733, -2.173620, 13.751298,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.053316,
    14.638287, -2.375333, 11.385137,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.882801,
    16.437726, -2.505530, 8.709640,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 48.899713,
    17.690975, -2.559775, 6.190660,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 49.663424,
    18.092705, -2.569751, 4.219613,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.248849,
    17.609771, -2.533473, 2.940733,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.799406,
    16.216206, -2.428588, 2.294434,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.162535,
    14.470973, -2.296742, 1.659327,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    13.100270, -2.192404, 0.408702,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    12.168222, -2.101005, -1.505972,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    11.391586, -2.018018, -3.956675,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    10.495196, -1.988640, -6.537984,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    9.381009, -2.091964, -9.373992,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    8.148662, -2.374188, -12.391562,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.274800,
    7.030735, -2.665928, -14.628267,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.470525,
    5.865906, -2.987670, -16.065467,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 48.523846,
    4.784066, -3.334097, -16.750674,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.024044,
    4.396311, -3.467424, -16.871284,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.259198,
    6.437137, -2.799294, -16.195857,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 45.885235,
    11.562036, -1.177716, -14.428995,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 45.815921,
    15.938760, 0.081838, -12.762422,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.166074,
    19.167729, 0.747964, -11.624679,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 46.915361,
    21.836581, 1.099680, -10.560640,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.265515,
    22.729661, 1.174382, -9.092245,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.265515,
    22.123673, 1.156640, -7.258798,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.265515,
    20.331151, 1.054565, -5.146517,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.265515,
    17.978993, 0.802291, -2.737107,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 47.265515,
    15.960224, 0.405382, -0.153572,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 48.226881,
    13.870321, -0.345339, 3.392623,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 50.284088,
    11.735451, -1.324506, 7.340432,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
       1.000000, 1.000000, 1.000000,
 -0.516611, -0.068683, 51.245451,
    10.932968, -1.729705, 8.881299,
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

   TEXTURE_4B_TLUT(glistp, player_dark_joints, player_dark_joints_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, player_chest_plate, player_chest_plate_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, player_glow, player_glow_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, player_torso, player_torso_tlut, 6,1);

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
 -0.562508, -0.699441, 70.507151,
    3.861693, 0.000000, -0.414853,
       1.000000, 1.000000, 1.000000,
 -0.682560, -3.272834, 69.906789,
    13.962860, 0.000000, -1.500000,
       1.000000, 1.000000, 1.000000,
 -0.802613, -5.846227, 69.119072,
    24.064030, 0.000000, -2.585147,
       1.000000, 1.000000, 1.000000,
 -0.848509, -6.830039, 68.443131,
    27.925727, 0.000000, -3.000001,
       1.000000, 1.000000, 1.000000,
 -0.806244, -6.375930, 68.012214,
    27.421300, 0.000000, -2.640856,
       1.000000, 1.000000, 1.000000,
 -0.677363, -5.404195, 67.600203,
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
 0.369469, -8.382900, 68.118739,
    39.348471, -0.824519, 7.874805,
       1.000000, 1.000000, 1.000000,
 -0.017740, -6.882578, 68.613636,
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
 -1.631361, -9.989858, 66.828507,
    46.244393, 0.799019, -7.874805,
       1.000000, 1.000000, 1.000000,
 -1.091234, -8.229480, 67.857379,
    38.839307, 0.533241, -5.200820,
       1.000000, 1.000000, 1.000000,
 -0.723988, -6.230023, 68.750811,
    30.107675, 0.313444, -2.983596,
       1.000000, 1.000000, 1.000000,
 -0.581841, -3.713113, 69.653451,
    18.609696, 0.156544, -1.487240,
       1.000000, 1.000000, 1.000000,
 -0.523401, -0.845450, 70.438820,
    5.284968, 0.037523, -0.355824,
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
 -0.519698, 0.001792, 70.866656,
    0.762714, -0.042476, 0.716601,
       1.000000, 1.000000, 1.000000,
 -0.528627, -0.800283, 71.278083,
    2.925552, -0.185905, 2.591040,
       1.000000, 1.000000, 1.000000,
 -0.539862, -1.772126, 71.694827,
    5.541078, -0.416548, 4.465479,
       1.000000, 1.000000, 1.000000,
 -0.548771, -2.483277, 71.864790,
    7.446579, -0.679188, 5.182079,
       1.000000, 1.000000, 1.000000,
 -0.556462, -2.994137, 71.875399,
    8.799577, -1.044315, 4.741444,
       1.000000, 1.000000, 1.000000,
 -0.564512, -3.442072, 71.877289,
    9.969897, -1.543036, 3.588863,
       1.000000, 1.000000, 1.000000,
 -0.570257, -3.720239, 71.879172,
    10.687531, -1.954545, 2.436280,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 71.889782,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.564463, -3.600865, 71.975142,
    10.348026, -1.961209, 2.327356,
       1.000000, 1.000000, 1.000000,
 -0.536772, -3.070619, 72.170591,
    8.910116, -1.599455, 3.255516,
       1.000000, 1.000000, 1.000000,
 -0.488453, -2.532950, 72.360724,
    7.472204, -1.237701, 4.346901,
       1.000000, 1.000000, 1.000000,
 -0.428716, -2.312549, 72.432661,
    6.922489, -1.099402, 5.090665,
       1.000000, 1.000000, 1.000000,
 -0.332461, -2.294616, 71.766502,
    6.922489, -1.099402, 5.497189,
       1.000000, 1.000000, 1.000000,
 -0.212638, -2.287244, 70.138258,
    6.922489, -1.099402, 5.685410,
       1.000000, 1.000000, 1.000000,
 -0.163836, -2.286387, 68.847114,
    6.922490, -1.099402, 5.716444,
       1.000000, 1.000000, 1.000000,
 -0.166355, -2.676102, 68.103302,
    6.934179, -1.098711, 4.659651,
       1.000000, 1.000000, 1.000000,
 -0.188036, -3.659854, 67.646277,
    7.034774, -1.092765, 2.117485,
       1.000000, 1.000000, 1.000000,
 -0.240770, -4.511361, 67.527449,
    7.279454, -1.078301, 0.195241,
       1.000000, 1.000000, 1.000000,
 -0.357503, -5.157730, 67.750454,
    8.200612, -1.047382, -0.777041,
       1.000000, 1.000000, 1.000000,
 -0.564607, -5.798052, 68.402958,
    10.080138, -0.997834, -1.351686,
       1.000000, 1.000000, 1.000000,
 -0.793007, -6.237632, 69.242096,
    11.858384, -0.954273, -1.550120,
       1.000000, 1.000000, 1.000000,
 -0.963501, -6.377242, 69.936264,
    12.523861, -0.938468, -1.572676,
       1.000000, 1.000000, 1.000000,
 -1.071039, -6.203160, 70.554715,
    12.040105, -0.951489, -1.542102,
       1.000000, 1.000000, 1.000000,
 -1.138930, -5.697821, 71.215165,
    10.644129, -0.988971, -1.354243,
       1.000000, 1.000000, 1.000000,
 -1.196769, -5.057614, 71.741259,
    8.895789, -1.035684, -0.875294,
       1.000000, 1.000000, 1.000000,
 -1.278930, -4.543063, 72.020513,
    7.522508, -1.072011, -0.109879,
       1.000000, 1.000000, 1.000000,
 -1.386952, -4.179961, 72.132599,
    6.590734, -1.102526, 1.350039,
       1.000000, 1.000000, 1.000000,
 -1.511227, -3.860964, 72.168529,
    5.814764, -1.129266, 3.258383,
       1.000000, 1.000000, 1.000000,
 -1.639482, -3.483637, 72.204757,
    4.911568, -1.138542, 4.048666,
       1.000000, 1.000000, 1.000000,
 -1.784020, -3.008310, 72.274625,
    3.783611, -1.116829, 3.315461,
       1.000000, 1.000000, 1.000000,
 -1.935156, -2.474182, 72.343522,
    2.530280, -1.070366, 1.479658,
       1.000000, 1.000000, 1.000000,
 -2.034859, -1.996357, 72.368991,
    1.384851, -1.048652, -0.076074,
       1.000000, 1.000000, 1.000000,
 -2.088920, -1.513338, 71.604085,
    0.177333, -1.076863, -1.198493,
       1.000000, 1.000000, 1.000000,
 -2.111146, -1.073361, 69.717664,
    -0.955168, -1.137230, -2.107060,
       1.000000, 1.000000, 1.000000,
 -2.113729, -0.917322, 68.183321,
    -1.363202, -1.165440, -2.406953,
       1.000000, 1.000000, 1.000000,
 -2.044687, -1.722479, 67.212373,
    -0.253689, -1.116583, -1.361445,
       1.000000, 1.000000, 1.000000,
 -1.865897, -3.734538, 66.531551,
    2.690679, -0.988422, 0.875811,
       1.000000, 1.000000, 1.000000,
 -1.701142, -5.430929, 66.330040,
    5.557689, -0.866776, 1.921320,
       1.000000, 1.000000, 1.000000,
 -1.597902, -6.636401, 66.436702,
    8.413103, -0.758620, 0.898552,
       1.000000, 1.000000, 1.000000,
 -1.506484, -7.597957, 66.716540,
    11.332652, -0.652025, -1.290044,
       1.000000, 1.000000, 1.000000,
 -1.362519, -7.912195, 66.982251,
    12.430568, -0.594158, -2.312812,
       1.000000, 1.000000, 1.000000,
 -1.112774, -7.703177, 67.126149,
    11.488507, -0.568882, -1.765361,
       1.000000, 1.000000, 1.000000,
 -0.769854, -7.084106, 67.203450,
    9.024333, -0.553942, -0.316743,
       1.000000, 1.000000, 1.000000,
 -0.486245, -6.269873, 67.380744,
    6.560156, -0.548784, 1.176751,
       1.000000, 1.000000, 1.000000,
 -0.386224, -5.568177, 67.777085,
    5.618098, -0.548197, 1.837486,
       1.000000, 1.000000, 1.000000,
 -0.431130, -4.836349, 69.098228,
    6.893413, -0.922921, 1.945897,
       1.000000, 1.000000, 1.000000,
 -0.527221, -4.085397, 71.218926,
    9.622427, -1.724784, 1.990468,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
       1.000000, 1.000000, 1.000000,
 -0.572126, -3.802527, 72.150975,
    10.897741, -2.099508, 1.995646,
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

   TEXTURE_4B_TLUT(glistp, playerHead_back, playerHead_back_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, player_dark_joints, player_dark_joints_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, playerHead_front, playerHead_front_tlut, 6,1);

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

   TEXTURE_4B_TLUT(glistp, playerHead_glow, playerHead_glow_tlut, 6,1);

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
 
 
 