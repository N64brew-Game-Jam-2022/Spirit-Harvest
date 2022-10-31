#include "common.h"
#include "view.h"
CameraObject mainCamera;
/*
    GameObject obj; //Note:pointer to game object (pos, rot, scl)
	GameObject* camLook; //Note: GameObject pointer of object camera is currently looking at (ex player character)
	Vector3 cameraOffset; //Note: distance to offset from "camLook"
	
	float cameraOrbit; //Note:Orbital position around player character (0-360 degrees)
	float distance; //Note: Current distance 
	float adjDistance;	//Note: adjusted distance when colliding with wall or object
	float nearPosition;	//Note: used for nearClipping 
	u8 againstWall;
*/


ViewSettings viewSettings = 
{
    {15,55,60},
    {20,57,62},
    935,
    1010,
    50,
    12000
};


	// Color backgroundColor; 
    // Color fogColor; 
    // Color fogDistance;
    // u16 farPlane;
    // u16 nearPlane;


    
    
Vector3 cameraPosition = { 0.0f, -50.0f,  50.0f};
Vector3 camUpdatedPosition = { 0.0f, -50.0f,  50.0f};
Vector3 camLook = {0.0f, 0.0f, 0.0f};
Vector3 cameraOffset = { 0.0f, -50.0f,  50.0f};
float cameraOrbit = 0.0f; //Rotation around player from a set distance
//float audioOrbit = 0.0f; //Rirection of right audio channel
Vector3 playerPos = {0.0f, 0.0f, 0.0f};

u8 camCollidedWithObject = 0;
u8 camIsAgainstWall;
	
float distance = -750.0f;
float adjDistance = -750.0f;
//float nearPosition = 200;
float nearPosition = 50;

float lookZMin = 100; //for looking down
float lookZMax = 150; //for looking up
float lookZ = 85; //for looking up

/*--------------------------------------------------------------------------*/
/*-------------------------------Camera Setup-------------------------------*/
/*--------------------------------------------------------------------------*/

u8 wideScreen = 0; //set to widescreen by default

void SetGameViewMtx( Dynamic* dp )
{
//ADJUSTABLE CAMERA ANGLE FIXED----------------------------------------------------------------------------------------------------

	u16   perspNorm;
    static LookAt lookat;	

	/*WORKING VERSION:
    guPerspective(&dp->projection, &perspNorm,
		  22, (float)SCREEN_WD/(float)SCREEN_HT, nearPosition, 2750, 1.0);*/
		  
	//guPerspective(&dp->projection, &perspNorm,
		//  45, (float)SCREEN_WD/(float)SCREEN_HT, nearPosition, 4000, 1.0);
		// 45, (float)SCREEN_WD/(float)SCREEN_HT, nearPosition, 3500, 1.0);
		
	//-TO DO NOTE: Set up menu option to swap between 16:9 and 4:3 screen modes...
	//guPerspective(&dp->projection, &perspNorm, 40, ((float)ANAMORPHIC_WD/(float)ANAMORPHIC_HT), nearPosition, 3750, 1.0f);
    
    if(wideScreen == 1)
        guPerspective(&dp->projection, &perspNorm, 40, ((float)ANAMORPHIC_WD/(float)ANAMORPHIC_HT), nearPosition, 12000, 1.0f);        
    else
        guPerspective(&dp->projection, &perspNorm, 40, ((float)SCREEN_WD/(float)SCREEN_HT), nearPosition, 12000, 1.0f);

    guLookAtReflect(&dp->viewing, &lookat,
			mainCamera.obj.pos.x,
			mainCamera.obj.pos.y,
			mainCamera.obj.pos.z,
			mainCamera.camLookPoint.x,mainCamera.camLookPoint.y, mainCamera.camLookPoint.z + lookZ, 
		    //returnPlayerPosition(0), returnPlayerPosition(1), returnPlayerPosition(2)-50, //What object we are looking at
		    0, 0, 1); //Up direction
 
    gSPPerspNormalize(glistp++, perspNorm);
    gSPLookAt(glistp++, &lookat);

    gSPMatrix(glistp++, &(dp->projection), 
	      G_MTX_PROJECTION | G_MTX_LOAD | G_MTX_NOPUSH);
    gSPMatrix(glistp++, &(dp->viewing), 
	      G_MTX_PROJECTION | G_MTX_MUL | G_MTX_NOPUSH);
		  
 
//ADJUSTABLE CAMERA ANGLE FIXED----------------------------------------------------------------------------------------------------		 
	
}


Vector3 MenuCamera = {0,0,0 };
Vector3 MenuCameraLookPoint = {0,10,0};

void SetMenuViewMtx( Dynamic* dp )
{

//ADJUSTABLE CAMERA ANGLE FIXED----------------------------------------------------------------------------------------------------

	u16   perspNorm;
    static LookAt lookat;	

	//WORKING VERSION:
    // guPerspective(&dp->projection, &perspNorm,
		  // 22, (float)SCREEN_WD/(float)SCREEN_HT, nearPosition, 10000, 1.0);
          
    if(wideScreen == 1)
        guPerspective(&dp->projection, &perspNorm, 22, ((float)ANAMORPHIC_WD/(float)ANAMORPHIC_HT), nearPosition, 10000, 1.0f);        
    else
        guPerspective(&dp->projection, &perspNorm, 22, ((float)SCREEN_WD/(float)SCREEN_HT), nearPosition, 10000, 1.0f);

    guLookAtReflect(&dp->viewing, &lookat,
			MenuCamera.x,
			MenuCamera.y,
			MenuCamera.z,
			MenuCameraLookPoint.x,MenuCameraLookPoint.y, MenuCameraLookPoint.z,
		    //returnPlayerPosition(0), returnPlayerPosition(1), returnPlayerPosition(2)-50, //What object we are looking at
		    0, 0, 1); //Up direction
 
    gSPPerspNormalize(glistp++, perspNorm);
    gSPLookAt(glistp++, &lookat);

    gSPMatrix(glistp++, &(dp->projection), 
	      G_MTX_PROJECTION | G_MTX_LOAD | G_MTX_NOPUSH);
    gSPMatrix(glistp++, &(dp->viewing), 
	      G_MTX_PROJECTION | G_MTX_MUL | G_MTX_NOPUSH);
		  
 
//ADJUSTABLE CAMERA ANGLE FIXED----------------------------------------------------------------------------------------------------		 
	
}

float tempCameraOrbit;
float tempAudioOrbit = 270.0f;
Vector3 tempCameraOffset;
float userInput_X = 0.1f;
float userInput_Y = 0.1f;
float cameraSensitivity = 3.0f;
void initMainCamera()
{
	//mainCamera
    
                // mainCamera.obj.pos.x = -2146;
         // mainCamera.obj.pos.y = -2907;
          // mainCamera.obj.pos.z = 350;
    
    
	//SetVector3(&mainCamera.obj.pos, 0.0f, -300.0f, 125.0f); 
    SetVector3(&mainCamera.obj.pos, -2185.0f, -2907.0f, 315.0f); 
	SetVector3(&mainCamera.obj.rot, 0.0f, 0.0f, 0.0f);
	SetVector3(&mainCamera.obj.scl, 1.0f, 1.0f, 1.0f);
	SetVector3(&mainCamera.camLookPoint, playerAvatar.obj.pos.x, playerAvatar.obj.pos.y, 5.0f); //Note: distance to offset from "camLook"
	mainCamera.camLook = &playerAvatar.obj; //Note: GameObject pointer of object camera is currently looking at (ex player character)
	SetVector3(&mainCamera.cameraOffset, 0.0f, -300.0f, 125.0f);
	
	mainCamera.cameraOrbit = 0.0f; //Note:Orbital position around player character (0-360 degrees)
	mainCamera.distance = -750; //Note: Current distance 
	mainCamera.adjDistance = -750;	//Note: adjusted distance when colliding with wall or object
	mainCamera.nearPosition = 50;	//Note: used for nearClipping 
	mainCamera.againstWall = 0; 
}
/*END----------------------------Camera Setup-------------------------------*/

#define cameraSmoothSpeed 4 //value to lerp camera position
void CameraControl_C()
{
		
       // float adjustCamRate = 1.0f;
        
     //   adjustCamRate = adjustAnimRate;
        
        
        //NOTE: Get L and R C button input for horizontal/orbital movement around player character			
			if(ContTriger[0].button & R_CBUTTONS)
				//userInput_X = lerp(userInput_X, 3.0f, 0.01f);		
				userInput_X = lerp(userInput_X, 5.0f * adjustCamRate, (cameraSensitivity) * (float)GetDeltaTime());		
		//NOTE: Only allow user to press one of the L or R buttons	
			else if(ContTriger[0].button & L_CBUTTONS)		
				//userInput_X = lerp(userInput_X, -3.0f, 0.01f);
				userInput_X = lerp(userInput_X, -5.0f * adjustCamRate, (cameraSensitivity) * (float)GetDeltaTime());
		//NOTE: When user depresses the C button, quickly lerp down camera movement
			else if(userInput_X >= 0.2f || userInput_X <= -0.2f )
				//userInput_X = lerp(userInput_X, 0.0f, 0.2f);	
				userInput_X = lerp(userInput_X, 0.0f, (cameraSensitivity*4) * (float)GetDeltaTime());		
		//NOTE: Once userInput_Y movement speed is below |.2f|, set it to 0.0f to avoid drift
			else
				userInput_X = 0.0f;
		
		//NOTE: Apply userInput_X to tempCamera Orbit and keep it in the 0-360 degree range			
			tempCameraOrbit += userInput_X;					
			if(tempCameraOrbit >= 360.0f)
				tempCameraOrbit -= 360.0f;
			else if(tempCameraOrbit < 0.0f)
				tempCameraOrbit += 360.0f;		
                
        //NOTE: Testing quick process for         
            tempAudioOrbit += userInput_X;
            if(tempAudioOrbit >= 360.0f)
				tempAudioOrbit -= 360.0f;
			else if(tempAudioOrbit < 0.0f)
				tempAudioOrbit += 360.0f;
                
		
		
		//NOTE: Get U and D C button input for vertical/distance from player character		
			userInput_Y = 0.0f;
			
			if(ContTriger[0].button & U_CBUTTONS)
				userInput_Y += ((cameraSensitivity*150)* adjustCamRate)  * (float)GetDeltaTime();
				
			else if(ContTriger[0].button & D_CBUTTONS)
				userInput_Y -= ((cameraSensitivity*150)* adjustCamRate) * (float)GetDeltaTime();				
		
		//NOTE: Adjust distance of camera from player
			if(userInput_Y > 0.1f && tempCameraOffset.y <= -250.0f)						
				tempCameraOffset.y = lerp(tempCameraOffset.y, -250.0f, userInput_Y * 0.01f);

			else if(userInput_Y > 0.1f && tempCameraOffset.y > -250.0f)						
				tempCameraOffset.y = -250.0f;
			
			if(userInput_Y < 0.0f && tempCameraOffset.y >= -900.0f)						
				tempCameraOffset.y = lerp(tempCameraOffset.y, -900.0f, userInput_Y * -0.01f);

			else if(userInput_Y < 0.0f && tempCameraOffset.y < -900.0f)						
				tempCameraOffset.y = -900.0f;


		//NOTE: Adjust camera vertical position
			if(userInput_Y < 0.1f && tempCameraOffset.z <= 300.0f)						
				tempCameraOffset.z = lerp(tempCameraOffset.z, 300, userInput_Y * -0.01f);			
			
			else if(userInput_Y < 0.1f && tempCameraOffset.z > 300.0f)			
				tempCameraOffset.z = 300.0f;			
			
			if(userInput_Y > 0.0f && tempCameraOffset.z >= 100.0f)						
				tempCameraOffset.z = lerp(tempCameraOffset.z, 100, userInput_Y * 0.01f);			
						
			else if(userInput_Y > 0.0f && tempCameraOffset.z <= 100.0f)			
				tempCameraOffset.z = 100.0f;
				
}

/*--------------------------------------------------------------------------*/
/*-------------------Calculate Camera Position and Orbit--------------------*/
/*--------------------------------------------------------------------------*/
u8 cameraInitalPosed = 0;
void UpdateCameraPosition( Dynamic* dp )
{
/*------------------------Calculate Rotating Camera-------------------------*/
		GameObject* lookObject = mainCamera.camLook;
		float smoothLookX;
        float smoothLookY;
        float smoothLookZ;
        
        float jumpingLookZ;


    if(playerAvatar.state.movement != 5)
    {

		//Note: update camLookPoint based on the object being looked at

        

       if(playerAvatar.state.jumping >= 1) //jumping or falling
        {
            jumpingLookZ = lerp(playerAvatar.shadowPosition.z,playerAvatar.obj.pos.z+5.0f, 0.35f );
            smoothLookX = lerp(mainCamera.camLookPoint.x, playerAvatar.obj.pos.x+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
            smoothLookY = lerp(mainCamera.camLookPoint.y, playerAvatar.obj.pos.y+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
            smoothLookZ = lerp(mainCamera.camLookPoint.z, jumpingLookZ,(float)GetDeltaTime()*(cameraSmoothSpeed*0.45f));     
        }       
        
       else //grounded
       {
           smoothLookX = lerp(mainCamera.camLookPoint.x, playerAvatar.obj.pos.x+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
           smoothLookY = lerp(mainCamera.camLookPoint.y, playerAvatar.obj.pos.y+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
           smoothLookZ = lerp(mainCamera.camLookPoint.z, playerAvatar.obj.pos.z+5.0f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.75f));
       } 

		SetVector3(&mainCamera.camLookPoint, smoothLookX, smoothLookY, smoothLookZ); //Note: distance to offset from "camLook"
		
		
		tempCameraOffset = mainCamera.cameraOffset;
		
		
		CameraControl_C();

/*-------------------------Depth/Horizontal Distance------------------------*/
		if(userInput_Y >= 1.0f || userInput_Y <= -1.0f )
		{
			if(camIsAgainstWall == 0)
			{					
				if(distance >= 600)					
						nearPosition = 450;						
	
					
				else if(distance <= 600 && distance >= 500)
					nearPosition = 400;
				
				else if(distance < 500)
					
						nearPosition = 50;	
						
			}			
				else
				{
					if(adjDistance >= 600)					
						nearPosition = 450;											
					else if(adjDistance <= 600 && adjDistance >= 500)
						nearPosition = 400;
					else if(adjDistance < 500)
					
						nearPosition = 50;	
						
						
				}
		}	
		
/*END-------------------------Depth/Horizontal Distance------------------------*/		
		
		camUpdatedPosition = RotateCameraAround( vectorAdd(mainCamera.camLookPoint, tempCameraOffset), mainCamera.camLookPoint, tempCameraOrbit);
		
		mainCamera.cameraOrbit = tempCameraOrbit;
        mainCamera.audioOrbit = tempAudioOrbit;
		mainCamera.cameraOffset = tempCameraOffset;	
				
		//lerp the canera quickly into position to soften sudden changes and jitters
		if(cameraInitalPosed == 1)
		{
			mainCamera.obj.pos.x = lerp(mainCamera.obj.pos.x,camUpdatedPosition.x,(float)GetDeltaTime()*cameraSmoothSpeed);	
			mainCamera.obj.pos.y = lerp(mainCamera.obj.pos.y,camUpdatedPosition.y,(float)GetDeltaTime()*cameraSmoothSpeed);	
			mainCamera.obj.pos.z = lerp(mainCamera.obj.pos.z,camUpdatedPosition.z,(float)GetDeltaTime()*(cameraSmoothSpeed*0.5f));
		}
		else
		{
			mainCamera.obj.pos = mainCamera.obj.pos;
			cameraInitalPosed = 1;
		}
	}

    else if(playerAvatar.state.movement == 5)
    {
    
       smoothLookX = lerp(mainCamera.camLookPoint.x, playerAvatar.obj.pos.x+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
       smoothLookY = lerp(mainCamera.camLookPoint.y, playerAvatar.obj.pos.y+0.5f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.9f)); 
       smoothLookZ = lerp(mainCamera.camLookPoint.z, playerAvatar.obj.pos.z+5.0f,(float)GetDeltaTime()*(cameraSmoothSpeed*0.75f));
       
       SetVector3(&mainCamera.camLookPoint, smoothLookX, smoothLookY, smoothLookZ); //Note: distance to offset from "camLook"
    
        mainCamera.obj.pos.x = -2185;
         mainCamera.obj.pos.y = -2907;
          mainCamera.obj.pos.z = 315;
    }


}

Vector3 GetCameraPosition()
{
    return mainCamera.obj.pos;
}

/*END----------------Calculate Camera Position and Orbit--------------------*/

