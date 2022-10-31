#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <common.h>
#include <level00.h>
#include "view.h"

char FPS[8];
char debugStringA[50];
char debugStringB[50];
char debugStringC[50];
char debugStringD[50];

char pauseStringA[8];
char pauseStringB[8];

u8 instructionsDisplayed = 0;

//extern SceneTrigger lvl00_SceneTrig[6];

Debug_Collision debug_Collision =
{
	0, 0, 0.0f, // u8 collision, u8 triNum
	{0,0,0}, //Vector3 triNormal
	{0,0,0}, //Vector3 lastCollisionPoint
	{0,0,0}, //Vector3 currentCollisionPoint
};

Vector3 Debug_MiscVar[4];

enum TEXT_COLORS
{
    TEXT_BLACK,
    TEXT_BLUE,
    TEXT_GREEN,
    TEXT_CYAN,
    TEXT_RED,
    TEXT_MAGENTA,
    TEXT_YELLOW,
    TEXT_WHITE,
    NUM_OF_COLORS
};


//	This will be used to toggle between different debug modes	

enum DEBUG_MODE
{
	DEBUG_NONE, //displays FPS only
    DEBUG_PLAYER, //positions for ball, camera and car	
    DEBUG_PLAYER_STATE, //positions for ball, camera and car	
    DEBUG_SCENE_SECTOR,
    DEBUG_SHADOW, //position and angle and other information of player shadow
    DEBUG_WALL_COLLISION, //rotations for ball, camera and car
	DEBUG_GROUND_COLLISION,
	DEBUG_CAM //camera debug info 
	//*****Add a new mode here for whatever you are testing
}debugMode;


u8 cc_cycle1 = 0;
u8 cc_cycle2 = 0;

u8 cc_mode1 = 0;
u8 cc_mode2 = 0;

extern void FPSCalc();

void InitDebug()
{
	debugMode = DEBUG_NONE;
	nuDebConScroll(NU_DEB_CON_WINDOW0, NU_DEB_CON_SCROLL_OFF );
	nuDebConScroll(NU_DEB_CON_WINDOW1, NU_DEB_CON_SCROLL_OFF );
    nuDebConScroll(NU_DEB_CON_WINDOW2, NU_DEB_CON_SCROLL_OFF );
	nuDebConTextColor(NU_DEB_CON_WINDOW0, TEXT_WHITE);
	nuDebConTextColor(NU_DEB_CON_WINDOW1, TEXT_WHITE);
    nuDebConTextColor(NU_DEB_CON_WINDOW2, TEXT_WHITE);
    // nuDebConTextColor(NU_DEB_CON_WINDOW0, TEXT_BLACK);
	// nuDebConTextColor(NU_DEB_CON_WINDOW1, TEXT_BLACK);
    // nuDebConTextColor(NU_DEB_CON_WINDOW2, TEXT_BLACK);
	nuDebConClear(NU_DEB_CON_WINDOW0);
	nuDebConClear(NU_DEB_CON_WINDOW1);
    nuDebConClear(NU_DEB_CON_WINDOW2);
}

extern Vector3 camLook;
extern Vector3 cameraPosition;
Vector2 userInput_Player;

void SetDebugString()
{	

    userInput_Player = Player_Input();

    sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
        
    switch(debugMode)
	{    
        case DEBUG_PLAYER: //display rotations for ball, camera and car
            sprintf(debugStringA, "Player");
            
            // sprintf(debugStringB, "  PlPos: X%.1f Y%.1f Z%.1f",  playerAvatar.sphereCollider.center.x,  playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
           // // sprintf(debugStringC, "  Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);
           // sprintf(debugStringC, "   Collider Radius: %.2f ",  playerAvatar.sphereCollider.radius);
            // sprintf(debugStringD, "  Vel: X %.2f Y %.2f Z %.2f F: %.1f", playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z, Debug_MiscVar[1].z);
            
            
            
                    // Debug_MiscVar[0].x = tempCam;         
        // Debug_MiscVar[0].y = posPan;
        // Debug_MiscVar[0].z = testPan;
            
            
           // sprintf(debugStringB, "  Input: %.2f %.2f",  userInput_Player.x, userInput_Player.y);
            sprintf(debugStringB, "  EnemyNormal: %.2f %.2f %.2f ",  Debug_MiscVar[0].x, Debug_MiscVar[0].y, Debug_MiscVar[0].z);
            sprintf(debugStringC, "  Rotation:%.2f",  Debug_MiscVar[1].x);
            
            
            //sprintf(debugStringB, "  Cam:%.2f TempCam:%.2f Comb:%.2f",  Debug_MiscVar[0].x, Debug_MiscVar[0].y, Debug_MiscVar[0].z);
            //sprintf(debugStringB, "  Cam:%.2f %.2f %.2f",  mainCamera.obj.pos.x, mainCamera.obj.pos.y, mainCamera.obj.pos.z);
             //sprintf(debugStringC, "  Look:%.2f %.2f %.2f",  mainCamera.camLookPoint.x, mainCamera.camLookPoint.y, mainCamera.camLookPoint.z);
           // sprintf(debugStringC, "  Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);
            //sprintf(debugStringC, "  RelPos X:%.2f Y:%.2f Z:%.2f",  Debug_MiscVar[1].x, Debug_MiscVar[1].y, Debug_MiscVar[1].z);
            //sprintf(debugStringC, "  Music: %.3f  %.3f",  Debug_MiscVar[2].x, Debug_MiscVar[2].y);
            //sprintf(debugStringC, "   Collider Radius: %.2f ",  playerAvatar.sphereCollider.radius);
            sprintf(debugStringD, "  Vel: X %.2f Y %.2f Z %.2f F: %.1f", playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z, Debug_MiscVar[1].z);
            
            break;
            
        case DEBUG_PLAYER_STATE: //display rotations for ball, camera and car
            sprintf(debugStringA, "Player State");
            sprintf(debugStringB, "  Motion %i | Jump %i | Action %i ",  playerAvatar.state.movement,  playerAvatar.state.jumping, playerAvatar.state.actions);
            sprintf(debugStringC, "  animID %i | animFrame %i",  playerAvatar.animRig.animID, playerAvatar.animRig.animFrame);
           // sprintf(debugStringD, "Jump %i Fall %i Grounded %i",  playerAvatar.isJumping, playerAvatar.isFalling,  playerAvatar.collision.groundPoint.collision);
            break;
            
        case DEBUG_SCENE_SECTOR:
            sprintf(debugStringA, "Scene / Sector State");
            // sprintf(debugStringB, "  Scene 1: %i | Sector1: %i",  lvl00_SceneTrig[7].isActive,  lvl00_SceneTrig[7].sectorTrig[1].isActive);
            // sprintf(debugStringC, "  Collision: %s", "Test"  );
            // sprintf(debugStringD, "  ");
            sprintf(debugStringA, "  Scene - Forest: %i",  scenes[3]->isActive);
            sprintf(debugStringB, "  Fog Color: %i %i %i",  viewSettings.fogColor.r ,  viewSettings.fogColor.g, viewSettings.fogColor.b);
            sprintf(debugStringC, "  Fog Distance: %i %i",  viewSettings.fogNear ,  viewSettings.fogFar);
            //lvl00_SceneTrig[scene].sectorTrigBox[sector].isActive = triggerBoundBox(&playerAvatar.obj.pos, &lvl00_SceneTrig[scene].sectorTrigBox[sector]);
            break;
        
        case DEBUG_SHADOW: // Display information for player shadow
            sprintf(debugStringA, "Player Shadow");
            sprintf(debugStringB, "  Shadow: X%.1f Y%.1f Z%.1f",  playerAvatar.shadowPosition.x,  playerAvatar.shadowPosition.y, playerAvatar.shadowPosition.z);
            sprintf(debugStringC, "  ShadowRig: X%.1f Y%.1f Z%.1f",  playerAvatar.animRig.joint.shadow.pos.x,  playerAvatar.animRig.joint.shadow.pos.y, playerAvatar.animRig.joint.shadow.pos.z);
            
            break;
            
        default: //in the event of an error, the instructions should display again
            sprintf(debugStringA, "<DEBUG INSTRUCTIONS>");
            sprintf(debugStringB, "** WARNING ** this mode will impact performance.");
            sprintf(debugStringC, "    - Hold 'L' to display debug data. ");
            sprintf(debugStringD, "    - Tap 'R' to cycle modes. ");       
    }
    
	//debugMode = DEBUG_NONE;
	
	
	// sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
// //	sprintf(debugStringA, "PlPos: X%.1f Y%.1f Z%.1f",  playerAvatar.sphereCollider.center.x,  playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
	// //sprintf(debugStringB, "PlVel: X%.1f Y%.1f Z%.1f",  playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z);
    
    // sprintf(debugStringA, "Jump %i Fall %i Grnd %i Wall %i",  playerAvatar.playerShooting, playerAvatar.isFalling,  playerAvatar.collision.groundPoint.collision,  playerAvatar.collision.wallPoint.collision );
    
    
    
    // //sprintf(debugStringA, "Jump %i Fall %i Grnd %i Wall %i",  playerAvatar.isJumping, playerAvatar.isFalling,  playerAvatar.collision.groundPoint.collision,  playerAvatar.collision.wallPoint.collision );
  // //  sprintf(debugStringB, "PressJump:%.1f  Charge: %.1f  Diff: %.1f",  Debug_MiscVar[1].x, Debug_MiscVar[1].y, Debug_MiscVar[1].z);
    // sprintf(debugStringB, "Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);	
    // sprintf(debugStringC, "Vel: X %.2f Y %.2f Z %.2f Speed: %.2f",  playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z, playerAvatar.rigidBody.speed);
    // //sprintf(debugStringD, "Jump %i Fall %i Grounded %i",  (int)Debug_MiscVar[1].x,  (int)Debug_MiscVar[1].y, (int)Debug_MiscVar[1].z);
    // sprintf(debugStringD, "x %.2f y %.2f z %.2f",  Debug_MiscVar[1].x,  Debug_MiscVar[1].y, Debug_MiscVar[1].z);
// //	sprintf(debugStringC, "PlCol: X%.1f Y%.1f Z%.1f",  groundCollisionPoints.currentCollisionPoint.x, groundCollisionPoints.currentCollisionPoint.y, groundCollisionPoints.currentCollisionPoint.z);
// //	sprintf(debugStringD, "Jump %i Fall %i Grounded %i",  playerAvatar.isJumping, playerAvatar.isFalling,  playerAvatar.isGrounded);
	
	// //sprintf(debugStringC, "PlCol: X%.1f Y%.1f Z%.1f",  collisionPoints.currentCollisionPoint.x, collisionPoints.currentCollisionPoint.y, collisionPoints.currentCollisionPoint.z);

	/*
	switch(debugMode)
	{		
		case DEBUG_NONE: //when flag _DEBUG is set and debugMode is set to DEBUG_NONE, then NU_DEB_CON_WINDOW1 (game FPS) is displayed but not but not NU_DEB_CON_WINDOWO
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			break;
			
		case DEBUG_MISC: //Use to debug specific things - for testing game logic, etc
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			//sprintf(debugStringA, "MISC[0]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[0].x,  Debug_MiscVar[0].y, Debug_MiscVar[0].z);
			//sprintf(debugStringA, "MISC[0]: X %i Y %i Z %.2f ",  	cc_cycle1,  			cc_cycle2, 			Debug_MiscVar[0].z);
			//sprintf(debugStringB, "MISC[1]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[1].x,  Debug_MiscVar[1].y, Debug_MiscVar[1].z);
			//sprintf(debugStringC, "MISC[2]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[2].x,  Debug_MiscVar[2].y, Debug_MiscVar[2].z);
			//sprintf(debugStringD, "MISC[3]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[3].x,  Debug_MiscVar[3].y, Debug_MiscVar[3].z);
			break;
			
		case DEBUG_PLAYER: //display rotations for ball, camera and car
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			sprintf(debugStringA, "Player Pos: X %.2f Y %.2f Z %.2f ",  playerAvatar.obj.pos.x,  playerAvatar.obj.pos.y, playerAvatar.obj.pos.z);
			//sprintf(debugStringB, "Player Rot: X %.2f Y %.2f Z %.2f ",  playerAvatar.obj.rot.x,  playerAvatar.obj.rot.y, playerAvatar.obj.rot.z);
			sprintf(debugStringB, "Player Jump: X %i Y %.2f Z %.2f ",  playerAvatar.isJumping,  playerAvatar.jumpTimerElapsed, playerAvatar.finalJumpTime);
			sprintf(debugStringC, "Player Fall: X %i Y %i Z %.2f ",  playerAvatar.isFalling,  playerAvatar.isGrounded, 0.0f);
			//sprintf(debugStringC, "Player Vel: X %.2f Y %.2f Z %.2f ",  playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z);
			//sprintf(debugStringD, "Player Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);	

			break;
			
		case DEBUG_WALL_COLLISION: 
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			sprintf(debugStringA, "Collide %i | Near Tri %i | vDot %.2f ", collisionPoints.collision, collisionPoints.triNum, collisionPoints.vDot); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringB, "Player Collid %.2f | %.2f | %.2f ",  playerAvatar.sphereCollider.center.x, playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
			sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", collisionPoints.currentCollisionPoint.x, collisionPoints.currentCollisionPoint.y, collisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
			//sprintf(debugStringD, "Time Check: %llu ",  getLapTime);
			break;

		case DEBUG_GROUND_COLLISION: 
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			sprintf(debugStringA, "Collide %i | Near Tri %i | vDot %.2f ", groundCollisionPoints.collision, groundCollisionPoints.triNum, groundCollisionPoints.vDot); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringB, "Player Collid %.2f | %.2f | %.2f ",  playerAvatar.sphereCollider.center.x, playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
			sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", groundCollisionPoints.currentCollisionPoint.x, groundCollisionPoints.currentCollisionPoint.y, groundCollisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
		//	sprintf(debugStringD, "Time 6 per second: %i ",  GetFPS_6());
			break;
		
	//	mainCamera.cameraOrbit = tempCameraOrbit;
	//	mainCamera.cameraOffset = tempCameraOffset;		
		
		
		case DEBUG_CAM: 
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			sprintf(debugStringA, "Camera Pos: X %.2f Y %.2f Z %.2f ", mainCamera.obj.pos.x,  mainCamera.obj.pos.y, mainCamera.obj.pos.z); //camera position
			sprintf(debugStringB, "Camera Rot: X %.2f Y %.2f Z %.2f ",  mainCamera.obj.rot.x,  mainCamera.obj.rot.y, mainCamera.obj.rot.z);
		//	sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", groundCollisionPoints.currentCollisionPoint.x, groundCollisionPoints.currentCollisionPoint.y, groundCollisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
			//sprintf(debugStringD, "Time Check: %i ",  GetFPS_12());
			break;
	
	}
	
	*/
	/*
	switch(debugMode)
	{		
		case DEBUG_NONE: //when flag _DEBUG is set and debugMode is set to DEBUG_NONE, then NU_DEB_CON_WINDOW1 (game FPS) is displayed but not but not NU_DEB_CON_WINDOWO
			break;
			
		case DEBUG_MISC: //Use to debug specific things - for testing game logic, etc
			sprintf(FPS, "FPS %02i",  GetFPS()); //if debug is flagged, displays FPS by default in any mode
			//sprintf(debugStringA, "MISC[0]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[0].x,  Debug_MiscVar[0].y, Debug_MiscVar[0].z);
			//sprintf(debugStringA, "MISC[0]: X %i Y %i Z %.2f ",  	cc_cycle1,  			cc_cycle2, 			Debug_MiscVar[0].z);
			//sprintf(debugStringB, "MISC[1]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[1].x,  Debug_MiscVar[1].y, Debug_MiscVar[1].z);
			//sprintf(debugStringC, "MISC[2]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[2].x,  Debug_MiscVar[2].y, Debug_MiscVar[2].z);
			//sprintf(debugStringD, "MISC[3]: X %.2f Y %.2f Z %.2f ",  Debug_MiscVar[3].x,  Debug_MiscVar[3].y, Debug_MiscVar[3].z);
			break;
			
		case DEBUG_PLAYER: //display rotations for ball, camera and car
			sprintf(debugStringA, "Player Pos: X %.2f Y %.2f Z %.2f ",  playerAvatar.obj.pos.x,  playerAvatar.obj.pos.y, playerAvatar.obj.pos.z);
			//sprintf(debugStringB, "Player Rot: X %.2f Y %.2f Z %.2f ",  playerAvatar.obj.rot.x,  playerAvatar.obj.rot.y, playerAvatar.obj.rot.z);
			sprintf(debugStringB, "Player Jump: X %i Y %.2f Z %.2f ",  playerAvatar.isJumping,  playerAvatar.jumpTimerElapsed, playerAvatar.finalJumpTime);
			sprintf(debugStringC, "Player Fall: X %i Y %i Z %.2f ",  playerAvatar.isFalling,  playerAvatar.isGrounded, 0.0f);
			//sprintf(debugStringC, "Player Vel: X %.2f Y %.2f Z %.2f ",  playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z);
			sprintf(debugStringD, "Player Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);	

			break;
			
		case DEBUG_WALL_COLLISION: 
			sprintf(debugStringA, "Collide %i | Near Tri %i | vDot %.2f ", collisionPoints.collision, collisionPoints.triNum, collisionPoints.vDot); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringB, "Player Collid %.2f | %.2f | %.2f ",  playerAvatar.sphereCollider.center.x, playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
			sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", collisionPoints.currentCollisionPoint.x, collisionPoints.currentCollisionPoint.y, collisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringD, "Time Check: %llu ",  getLapTime);
			break;

		case DEBUG_GROUND_COLLISION: 
			sprintf(debugStringA, "Collide %i | Near Tri %i | vDot %.2f ", groundCollisionPoints.collision, groundCollisionPoints.triNum, groundCollisionPoints.vDot); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringB, "Player Collid %.2f | %.2f | %.2f ",  playerAvatar.sphereCollider.center.x, playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
			sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", groundCollisionPoints.currentCollisionPoint.x, groundCollisionPoints.currentCollisionPoint.y, groundCollisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringD, "Time 6 per second: %i ",  GetFPS_6());
			break;
		
	//	mainCamera.cameraOrbit = tempCameraOrbit;
	//	mainCamera.cameraOffset = tempCameraOffset;		
		
		
		case DEBUG_CAM: 
			sprintf(debugStringA, "Camera Pos: X %.2f Y %.2f Z %.2f ", mainCamera.obj.pos.x,  mainCamera.obj.pos.y, mainCamera.obj.pos.z); //camera position
			sprintf(debugStringB, "Camera Rot: X %.2f Y %.2f Z %.2f ",  mainCamera.obj.rot.x,  mainCamera.obj.rot.y, mainCamera.obj.rot.z);
			sprintf(debugStringC, "Nearest Point %.2f | %.2f | %.2f ", groundCollisionPoints.currentCollisionPoint.x, groundCollisionPoints.currentCollisionPoint.y, groundCollisionPoints.currentCollisionPoint.z); //eventually do collision checks for what the player's car is colliding with
			sprintf(debugStringD, "Time Check: %i ",  GetFPS_12());
			break;
			
		}*/
		
}

//void DebugPrint(player_t* player, cam_t* camera, ball_t* ball, NUContData* contdata)
void DebugPrint()
{

//-------nuDebConClear clears the buffer for each console window before printing updated string:---------
		nuDebConClear(NU_DEB_CON_WINDOW0);
		nuDebConClear(NU_DEB_CON_WINDOW1);		
        nuDebConClear(NU_DEB_CON_WINDOW2);
	//	sprintf(FPS, "Sec: %02i",  40); //if debug is flagged, displays FPS by default in any mode

		
	
		//SetDebugString(player, camera, ball, contdata );		
		
//-------nuDebConTextPos sets the position on screen of the console text window ---- nuDebConTextPos(window number, column, row); ---------
		nuDebConTextPos(1, 1,2);
//-------nuDebConCPuts sends a string to a console window ---- nuDebConCPuts(window#, string); ---------

		nuDebConCPuts(NU_DEB_CON_WINDOW1, FPS);		//when _DEBUG flag is made, always at least display FPS. 
			nuDebConTextPos(0, 1,3);
			nuDebConCPuts(NU_DEB_CON_WINDOW0, debugStringA);
			nuDebConTextPos(0, 1,4);
			nuDebConCPuts(NU_DEB_CON_WINDOW0, debugStringB);				
            nuDebConTextPos(0, 1,5);			
			nuDebConCPuts(NU_DEB_CON_WINDOW0, debugStringC);		
            nuDebConTextPos(0, 1,6);			
			nuDebConCPuts(NU_DEB_CON_WINDOW0, debugStringD);
            
	//	nuDebTaskPerfBar1EX2(3,200,NU_SC_NOSWAPBUFFER);
	//		nuDebConDisp(NU_SC_NOSWAPBUFFER);	

		
		//nuDebConDisp(NU_SC_NOSWAPBUFFER);		
		nuDebConDisp(NU_SC_SWAPBUFFER);

}


void PausePrint()
{
            sprintf(pauseStringA, "[Pause]");
            
            if(wideScreen == 1)
            {
                sprintf(pauseStringB, "> [Ratio] 16:9");
            }
            
            else if(wideScreen == 0)
            {
                sprintf(pauseStringB, "> [Ratio] 4:3");
            }
            
            nuDebConScroll(NU_DEB_CON_WINDOW2, NU_DEB_CON_SCROLL_OFF );
            nuDebConTextColor(NU_DEB_CON_WINDOW2, TEXT_BLACK);
            
            nuDebConClear(NU_DEB_CON_WINDOW0);
            nuDebConClear(NU_DEB_CON_WINDOW1);
            nuDebConClear(NU_DEB_CON_WINDOW2);
            
            nuDebConTextPos(2, 17,7);
            nuDebConCPuts(NU_DEB_CON_WINDOW2, pauseStringA);		//when _DEBUG flag is made, always at least display FPS. 
            nuDebConTextPos(2, 9,10);
            nuDebConCPuts(NU_DEB_CON_WINDOW2, pauseStringB);		//when _DEBUG flag is made, always at least display FPS. 
			// nuDebConTextPos(6, 4,16);
            
            // nuDebConCPuts(NU_DEB_CON_WINDOW0, pauseStringB);		//when _DEBUG flag is made, always at least display FPS. 

            nuDebConDisp(NU_SC_SWAPBUFFER);
            
        //    sprintf(debugStringB, "  PlPos: X%.1f Y%.1f Z%.1f",  playerAvatar.sphereCollider.center.x,  playerAvatar.sphereCollider.center.y, playerAvatar.sphereCollider.center.z);
        //    sprintf(debugStringC, "  Norm: X %.2f Y %.2f Z %.2f ",  playerAvatar.playerNormal.x,  playerAvatar.playerNormal.y, playerAvatar.playerNormal.z);
         //   sprintf(debugStringD, "  Vel: X %.2f Y %.2f Z %.2f F: %.1f", playerAvatar.rigidBody.velocity.x,  playerAvatar.rigidBody.velocity.y, playerAvatar.rigidBody.velocity.z, Debug_MiscVar[1].z);
}



void ToggleDebugMode()
{


if(instructionsDisplayed == 1)
    {
        if(debugMode < DEBUG_CAM)
            debugMode++;
            
        else
            debugMode = DEBUG_NONE;
    }
    
else
    instructionsDisplayed = 1;

		
	//SetDebugString();
		
	
}



		#define cc_cycle1A G_RM_AA_ZB_OPA_TERR
		#define cc_cycle1B G_RM_AA_ZB_TEX_TERR
		#define cc_cycle1C G_RM_AA_ZB_SUB_TERR
		#define cc_cycle1D G_RM_AA_OPA_SURF
		#define cc_cycle1E G_RM_AA_ZB_XLU_SURF //closest to working 4-1

		//gDPSetRenderMode(glistp++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF);
		
void RendererTest(u8 cyc1, u8 cyc2)
{
	//TO DO NOTE: fleshed out combiner tests and debug functions and test various render modes above
	
		
		cc_cycle1 = cyc1;
		cc_cycle2 = cyc2;
		
		SetDebugString();
				
		if(cc_cycle1 == 0 )
		{
			switch(cc_cycle2)
			 {
				case 0:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_XLU_SURF); 
				break;

				case 1:
					gDPSetRenderMode(glistp++, cc_cycle1A, cc_cycle1A); 
				break;
				
				case 2:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_OPA_INTER); 
				break;
				
				case 3:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_XLU_INTER); 
				break;
				
				case 4:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_TEX_EDGE); 
				break;
				
				case 5:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_SUB_SURF); 
				break;
				
				case 6:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_PCL_SURF); 
				break;
				
				case 7:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_OPA_TERR); 
				break;
				
				case 8:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_TEX_TERR); 
				break;
				
				case 9:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_AA_ZB_SUB_TERR); 
				break;
				
				case 10:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_ZB_CLD_SURF); 
				break;
				
				case 11:
					gDPSetRenderMode(glistp++, cc_cycle1A, G_RM_ZB_OVL_SURF); 
				break;
			
			}
			
		}

		else if(cc_cycle1 == 1 )
		{
			switch(cc_cycle2)
			 {
				case 0:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_XLU_SURF2); 
				break;

				case 1:
					gDPSetRenderMode(glistp++, cc_cycle1B, cc_cycle1B); 
				break;
				
				case 2:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_OPA_INTER); 
				break;
				
				case 3:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_XLU_INTER); 
				break;
				
				case 4:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_TEX_EDGE); 
				break;
				
				case 5:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_SUB_SURF); 
				break;
				
				case 6:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_PCL_SURF); 
				break;
				
				case 7:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_OPA_TERR); 
				break;
				
				case 8:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_TEX_TERR); 
				break;
				
				case 9:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_AA_ZB_SUB_TERR); 
				break;
				
				case 10:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_ZB_CLD_SURF); 
				break;
				
				case 11:
					gDPSetRenderMode(glistp++, cc_cycle1B, G_RM_ZB_OVL_SURF); 
				break;
			
			}
		}	
		
		else if(cc_cycle1 == 2 )
		{		
			switch(cc_cycle2)
			 {
				case 0:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_XLU_SURF); 
				break;

				case 1:
					gDPSetRenderMode(glistp++, cc_cycle1C, cc_cycle1C); 
				break;
				
				case 2:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_OPA_INTER); 
				break;
				
				case 3:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_XLU_INTER); 
				break;
				
				case 4:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_TEX_EDGE); 
				break;
				
				case 5:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_SUB_SURF); 
				break;
				
				case 6:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_PCL_SURF); 
				break;
				
				case 7:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_OPA_TERR); 
				break;
				
				case 8:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_TEX_TERR); 
				break;
				
				case 9:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_AA_ZB_SUB_TERR); 
				break;
				
				case 10:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_ZB_CLD_SURF); 
				break;
				
				case 11:
					gDPSetRenderMode(glistp++, cc_cycle1C, G_RM_ZB_OVL_SURF); 
				break;
				
			
			}
		}	
		
		else if(cc_cycle1 == 3 )
		{
			switch(cc_cycle2)
			 {
				case 0:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_XLU_SURF); 
				break;

				case 1:
					gDPSetRenderMode(glistp++, cc_cycle1D, cc_cycle1D); 
				break;
				
				case 2:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_OPA_INTER); 
				break;
				
				case 3:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_XLU_INTER); 
				break;
				
				case 4:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_TEX_EDGE); 
				break;
				
				case 5:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_SUB_SURF); 
				break;
				
				case 6:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_PCL_SURF); 
				break;
				
				case 7:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_OPA_TERR); 
				break;
				
				case 8:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_TEX_TERR); 
				break;
				
				case 9:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_AA_ZB_SUB_TERR); 
				break;
				
				case 10:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_ZB_CLD_SURF); 
				break;
				
				case 11:
					gDPSetRenderMode(glistp++, cc_cycle1D, G_RM_ZB_OVL_SURF); 
				break;
			
			}
		}	
		
		else if(cc_cycle1 == 4 )
		{
			switch(cc_cycle2)
			 {
				case 0:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_XLU_SURF); 
				break;

				case 1:
					gDPSetRenderMode(glistp++, cc_cycle1E, cc_cycle1E); 
				break;
				
				case 2:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_OPA_INTER); 
				break;
				
				case 3:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_XLU_INTER); 
				break;
				
				case 4:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_TEX_EDGE); 
				break;
				
				case 5:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_SUB_SURF); 
				break;
				
				case 6:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_PCL_SURF); 
				break;
				
				case 7:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_OPA_TERR); 
				break;
				
				case 8:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_TEX_TERR); 
				break;
				
				case 9:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_AA_ZB_SUB_TERR); 
				break;
				
				case 10:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_ZB_CLD_SURF); 
				break;
				
				case 11:
					gDPSetRenderMode(glistp++, cc_cycle1E, G_RM_ZB_OVL_SURF); 
				break;
				
			
			}

		}	

}


	#define	G_CC_CUSTOMTEST		TEXEL0, 0, 0, 0, TEXEL0, 0, SHADE, 0
	#define	G_CC_CUSTOMTEST2	ENVIRONMENT, SHADE, COMBINED, SHADE, COMBINED, 0, SHADE, 0
		#define cc_mode1A G_CC_MODULATEIA
		#define cc_mode1B G_CC_MODULATEIA
		#define cc_mode1C G_CC_MODULATEIDECALA
		#define cc_mode1D G_CC_MODULATEI_PRIM
		#define cc_mode1E G_CC_MODULATEIA_PRIM
		
		//color is (a-b)*c+d   
		//alpha is (A-B)*C+D
void CombinerTest(u8 mode1, u8 mode2)
{

	u8 cc_mode1 = mode1;
	u8 cc_mode2 = mode2;

		if(cc_mode1 == 0 )
		{
			switch(cc_mode2)
			 {
				case 0:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_PASS2); 
				break;

				case 1:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_MODULATEI2); 
				break;
				
				case 2:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_MODULATEIA2); 
				break;
				
				case 3:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_MODULATEI_PRIM2); 
				break;
				
				case 4:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_MODULATEIA_PRIM2); 
				break;
				
				case 5:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_DECALRGB2); 
				break;
				
				case 6:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_BLENDI2); 
				break;
				
				case 7:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_MODULATEIA_PRIM2); 
				break;
				
				case 8:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_CHROMA_KEY2); 
				break;
				
				case 9:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_HILITERGB2); 
				break;
				
				case 10:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_HILITERGBA2); 
				break;
				
				case 11:
					gDPSetCombineMode(glistp++, cc_mode1A, G_CC_HILITERGBDECALA2); 
				break;
			
			}
			
		}
		

		
		
}

