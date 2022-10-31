#include "common.h"
#include "transformDefs.h"
//#include "player_player_Defs.h"

   // Lights2 player_lighting = gdSPDefLights2(
     // 0, 74, 7,
     // 0, 3, 101,     90, 90, 90,
     // 252, 3, 0,     190, 90, 90
   // );

   // Lights0 glowLight = gdSPDefLights0(
     // 0, 74, 7,

   // );

   //NOTE ----- One or more objects is animated with a rig, so include Pos, Rot, Scl variables: 
   Vector3 player_TempVectorPos = {0,0,0}; 
   Vector3 player_TempVectorRot = {0,0,0}; 
   Vector3 player_TempVectorScl = {0,0,0}; 


	//This is a solid teal light that is for the glowing elements of the player model
	Lights1 glowLight = gdSPDefLights1( 
		0,200,200,
		0,0,0,
		0,0,0);
        
    Lights1 fullBright = gdSPDefLights1( 
		255,255,255,
		0,0,0,
		0,0,0);

	//This is the lighting 
	Lights2 player_lighting = gdSPDefLights2(  	100, 100, 60, // amb col 
	//side reflect light
	0, 150, 175, // col 1  
	0,   0,  90, // dir 1
	//ground reflect light
	75, 10, 50, // col 2   
	45,   0,  -90 // dir 2
	);
	
	//For testing setting player light to playerAvatar struct
	Lights2 default_lighting = gdSPDefLights2( 255, 255, 255, // amb col 
	//side reflect light
	255, 255, 255, // col 1  
	0,   0,  90, // dir 1
	//ground reflect light
	255, 0, 0, // col 2   
	45,   0,  -90 // dir 2
	);


    
    


// //OBJECT 7----------------------------Player_Shadow------------------------------------------------------


Vtx Player_Shadow_VertList_0 [] = {
   { 45.85, 0.00, 0.00, 1, 0x03ff, 0x0200, 255, 255, 255, 255}, 
   { 45.85, 45.85, 0.00, 1, 0x03ff, 0x0000, 255, 255, 255, 255}, 
   { 0.00, 45.85, 0.00, 1, 0x01ff, 0x0000, 255, 255, 255, 255}, 
   { 0.00, 0.00, 0.00, 1, 0x01ff, 0x0200, 255, 255, 255, 255}, 
   { -45.85, 45.85, 0.00, 1, 0x0000, 0x0000, 255, 255, 255, 255}, 
   { 45.85, -45.85, 0.00, 1, 0x03ff, 0x03ff, 255, 255, 255, 255}, 
   { 0.00, -45.85, 0.00, 1, 0x01ff, 0x03ff, 255, 255, 255, 255}, 
   { -45.85, 0.00, 0.00, 1, 0x0000, 0x0200, 255, 255, 255, 255}, 
   { -45.85, -45.85, 0.00, 1, 0x0000, 0x03ff, 255, 255, 255, 255}, 
};


  void Player_Shadow_UpdateFrame()
 { 
	float tempShadowPosition = 0.0f;
 
 
   // if(playerAvatar.sphereCollider.center)
    //if( playerAvatar.collision.groundPoint.collision == 1)
   // {
 
        player_TempVectorPos = playerAvatar.obj.pos;
        player_TempVectorRot = playerAvatar.obj.rot;
        
       // tempShadowPosition = (playerAvatar.obj.pos.z - playerAvatar.collision.groundPoint.nearestCollisionPoint.z)-0.5f;
        
        SetVector3(&playerAvatar.animRig.joint.shadow.pos, playerAvatar.shadowPosition.x,playerAvatar.shadowPosition.y, playerAvatar.shadowPosition.z + 0.5f); 
        //SetVector3(&playerAvatar.animRig.joint.shadow.rot, 0, (playerAvatar.animRig.joint.shadow.rot.y += 5.0f ), 0); 
        //SetVector3(&playerAvatar.animRig.joint.shadow.pos, 0,0, tempShadowPosition); 
        SetVector3(&playerAvatar.animRig.joint.shadow.rot, player_TempVectorRot.x,player_TempVectorRot.y,player_TempVectorRot.z);
        SetVector3(&playerAvatar.animRig.joint.shadow.scl, .75f,.75f,1);
    
   // }
 
 }
 
 
  void Player_Shadow_PolyList() 
 { 

   Vtx *Player_Shadow_VTXPointer = &Player_Shadow_VertList_0[0]; 


//Face 0 
//Found a new texture! lvl01_shadow
//Index 1 Count 2! 
 //  gSPVertex(glistp++,Player_Shadow_VTXPointer+0,26,0);
//TEST 0 
//Texture Name: DebugTexture 
//TEST 1 
//Texture Name: lvl01_shadow 
	gDPSetPrimColor(glistp++, 125, 150, 0, 0, 0, 255);  //water primative color is used for alpha and color in the color combiner
   TEX_4B_I_EFFECT(glistp, lvl01_player_shadow, lvl01_player_shadow_tlut, RES_64x64, SCL_6x6, LSFT_1_1);
   //gDPSetRenderMode(dl++,G_RM_ZB_XLU_SURF, G_RM_ZB_XLU_SURF2);
   //gDPSetTextureFilter(  glistp++, G_TF_AVERAGE );
   gSPVertex(glistp++,Player_Shadow_VTXPointer+0,26,0);
   gSP1Triangle(glistp++,0, 1, 2, 0); 

   gSP1Triangle(glistp++,3, 2, 4, 3); 
   gSP1Triangle(glistp++,5, 0, 3, 5); 
   gSP1Triangle(glistp++,6, 3, 7, 6); 
   gSP1Triangle(glistp++,3, 0, 2, 3); 
   gSP1Triangle(glistp++,7, 3, 4, 7); 
   gSP1Triangle(glistp++,6, 5, 3, 6); 
   gSP1Triangle(glistp++,8, 6, 7, 8); 
   
  gDPPipeSync(glistp++);
   

 }
 
 