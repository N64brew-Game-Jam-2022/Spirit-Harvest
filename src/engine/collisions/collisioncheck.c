#include "level01.h"
//Test Object = 1 

u8 maxScenes = 9;


MeshCollider tempTri[] =
{
	{ 0, 0, 0, 0, 0, 0}, 
	{ 0, 0, 0, 0, 0, 0}, 
	{ 0, 0, 0, 0, 0, 0}, 
};
MeshCollider tempGroundTri[] =
{
	{ 0, 0, 0, 0, 0, 0}, 
	{ 0, 0, 0, 0, 0, 0}, 
	{ 0, 0, 0, 0, 0, 0}, 
};

u8 shadowPostitionCheck(Vector3 checkShadowCollision);
void groundedShadow( );


	Vector3 tempCollisionPoint;
	Vector3 tempGroundCollisionPoint;
    
    int lastShadowDistance = 10000;
    u8 newShadowPoint = 0;
    Vector3 tempShadowPosition;
	
	Vector3 triNormalWall = {0.0, 0.0, 0.0}; //calculate the normal of the nearest plane that is being collided with
	u8 newWallPoint = 0; //if the nearest point on a wall has been updated, set to true
	u8 isAgainstWall = 0; //NOTE: if player is colliding with a wall or obstruction, set to true
	u8 closestTriWall = 0;
	
	Vector3 triNormalGround = {0.0, 0.0, 0.0}; // calculate the normal to be sliding across as colliding with a triangle
	u8 newGroundPoint = 0; //if the nearest point on a wall has been updated, set to true
	u8 isGrounded = 0; //NOTE: if player is colliding with the ground, set to true
	u8 closestTriGround = 0;
	u8 closestGroundTri[2] = {0,0}; //[0] = meshID 0, [1] = closest tri on meshID etc
	
u8 groundMesh_CollisionCheck(Sphere* sphereCollider, SceneManager* currentScene)
{	
	u8 meshID = 0;
	u8 tempSectorCount = 0;
	u8 maxSectorCount = 0;
	u8 currentTri = 0;
	u8 triMeshLength = 0; //NOTE: the number of tris in the collision mesh.
	u8 isInSector = 0; //if player is in this sector of a scene
	u8 scene = 0;
	isGrounded = 0;
    
	playerAvatar.collision.groundPoint.lastCollisionPoint = playerAvatar.collision.groundPoint.currentCollisionPoint;	
		
	newGroundPoint = 0;	
	
//--------------------------------------------------------------------------
//-------------Find The Nearest Point and Nearest Triangle on Mesh-------------
//--------------------------------------------------------------------------	
	lastShadowDistance = 1000; // reset shadow distance each frame
	if(currentScene && currentScene->sceneTriggers)
	{		
		//NOTE: check for each sector in a scene:
		for(scene = 0; scene < maxScenes; scene++)
		{	
			if(currentScene->sceneTriggers[scene].isActive > 0)
			{
				maxSectorCount = scenes[scene]->sceneTriggers[scene].sectorCount; 
				triMeshLength = scenes[scene]->groundColObj->meshLength;
			
				for(tempSectorCount = 0; tempSectorCount < maxSectorCount; tempSectorCount++)
				{
					//NOTE: reset isInSector
					isInSector = 0;
					//NOTE: if the player is currently located in this sector of the scene:
                    
                    // if (scene != 4)                    
                        // isInSector = scenes[scene]->sceneTriggers[scene].sectorTrig[tempSectorCount].isActive;
                        
                    // else if (scene == 4)                    
                    isInSector = scenes[scene]->sceneTriggers[scene].sectorTrig[tempSectorCount].isActive;
					
					if(isInSector == 1)		
					{		
						for(currentTri = 0; currentTri < triMeshLength; currentTri++)
						{
							newGroundPoint = 0;
					
								tempGroundTri[0].vertex = scenes[scene]->groundColObj->meshVtx[scenes[scene]->groundColObj->meshTri[currentTri].tri[0]].vertex;
								tempGroundTri[1].vertex = scenes[scene]->groundColObj->meshVtx[scenes[scene]->groundColObj->meshTri[currentTri].tri[1]].vertex;
								tempGroundTri[2].vertex = scenes[scene]->groundColObj->meshVtx[scenes[scene]->groundColObj->meshTri[currentTri].tri[2]].vertex;
								                                
								newGroundPoint = SphereToMeshNearPoint(&playerAvatar.sphereCollider, &tempGroundTri[0],&tempGroundTri[1],&tempGroundTri[2], &tempGroundCollisionPoint);
                               // newWallPoint = SphereToMeshNearPoint(&playerAvatar.wallCollider, &tempTri[0],&tempTri[1],&tempTri[2], &tempCollisionPoint);	
                                
                                
                                
                                
                                
                    //NOTE ----- Temp checking for shadow cast collision. If the player was not grounded in the previous frame, project a ray downwards and look for a ground collision                                    
                              // if(playerAvatar.collision.groundPoint.collision == 0)                                    
                                   // shadowPostitionCheck(playerAvatar.collision.groundPoint.currentCollisionPoint);
                                
                                
                                //if(playerAvatar.collision.groundPoint.collision == 0)                                    
                                shadowPostitionCheck(playerAvatar.collision.groundPoint.currentCollisionPoint);
                                
                                
								if(newGroundPoint == 1)
								{
									playerAvatar.collision.groundPoint.currentCollisionPoint = tempGroundCollisionPoint;			
									closestGroundTri[0] = tempSectorCount;
									closestGroundTri[1] = currentTri;
									playerAvatar.collision.groundPoint.triNum = closestGroundTri[1];
                                    
                                    //NOTE ----- Temp checking for shadow cast collision. If the player was not grounded in the previous frame, project a ray downwards and look for a ground collision                                    
                                    //if(playerAvatar.collision.groundPoint.collision == 1)                                    
                                        //shadowPostitionCheck(playerAvatar.collision.groundPoint.currentCollisionPoint);
								}		
                                
						}
						
						if(newGroundPoint == 1)
						{
                           playerAvatar.collision.groundPoint.currentCollisionPoint = tempGroundCollisionPoint;			
                           playerAvatar.collision.groundPoint.nearestCollisionPoint = tempGroundCollisionPoint;	
                           playerAvatar.collision.groundPoint.triNum = closestGroundTri[1];
						}
                        
                        else
                        {
                            playerAvatar.collision.groundPoint.nearestCollisionPoint = tempGroundCollisionPoint;		                            
                        }
						
					}
				
				}
			}
		}
	}
	
    
    
   // tempGroundCollisionPoint = DistanceComparison(&playerAvatar.sphereCollider, playerAvatar.collision.groundPoint.lastCollisionPoint, &tempGroundCollisionPoint);
    
	//isGrounded = AgainstGround(&playerAvatar.sphereCollider, &playerAvatar.collision.groundPoint.currentCollisionPoint);
    isGrounded = AgainstGround(&playerAvatar.sphereCollider, &tempGroundCollisionPoint);
    
    
        // //TO DO NOTE ----- ADD A BACKUP CHECK TO SEE IF STILL COLLIDING WITH PREVIOUS COLLISION POINT
    // if(isGrounded == 0)
        // isGrounded = AgainstGround(&playerAvatar.sphereCollider, &playerAvatar.collision.groundPoint.lastCollisionPoint);
        
        
    

	
	if(isGrounded == 1)
	{
		playerAvatar.rigidBody.nextPos.z = tempGroundCollisionPoint.z;
        groundedShadow( );
        //shadowPostitionCheck(playerAvatar.collision.groundPoint.currentCollisionPoint);
        // if(tempGroundCollisionPoint.z - playerAvatar.rigidBody.currentPos.z <= 15.0f)   // NOTE ----- auto jump height? 
            // playerAvatar.rigidBody.nextPos.z = tempGroundCollisionPoint.z;
            
        // else
            // playerAvatar.rigidBody.nextPos.z = playerAvatar.rigidBody.currentPos.z;
        
        
	}
    
    //else        
        //playerAvatar.collision.groundPoint.currentCollisionPoint = playerAvatar.collision.groundPoint.lastCollisionPoint;	
		
			
	/*END-------Find The Nearest Point and Nearest Triangle on Mesh-------------*/

return isGrounded;

}


void groundedShadow( )
{

                playerAvatar.shadowPosition.x = playerAvatar.rigidBody.nextPos.x;
                playerAvatar.shadowPosition.y = playerAvatar.rigidBody.nextPos.y;
                playerAvatar.shadowPosition.z = playerAvatar.rigidBody.nextPos.z - 0.5f;


}

u8 shadowPostitionCheck(Vector3 checkShadowCollision)
{
    int newShadowDistance = 0;
    //newShadowPosition = SphereToMeshNearPoint(&playerAvatar.sphereCollider, &tempGroundTri[0],&tempGroundTri[1],&tempGroundTri[2], &tempGroundCollisionPoint);
    

    newShadowPoint = LineToGroundPoint(&playerAvatar.sphereCollider, tempGroundTri[0],  tempGroundTri[1], tempGroundTri[2], &tempShadowPosition);
    
    if( newShadowPoint == 1 )
    {
        
        //NOTE ----- Check to see if tempShadowPosition is closer than current shadow point by comparing it against the current player position with vector distance
        newShadowDistance = absDistance( playerAvatar.sphereCollider.center, tempShadowPosition );
        
        if(newShadowDistance < lastShadowDistance)
        {
                lastShadowDistance = newShadowDistance; 
                playerAvatar.shadowPosition.x = tempShadowPosition.x;
                playerAvatar.shadowPosition.y = tempShadowPosition.y;
                playerAvatar.shadowPosition.z = tempShadowPosition.z;
        }
        
    

    }
    

}

    
    
u8 getGroundCheck(Sphere* sphereCollider)
{
	u8 tempBool;

		tempBool = 0;

		if(absDistance(playerAvatar.collision.groundPoint.currentCollisionPoint, playerAvatar.sphereCollider.center) <= 15)
			tempBool = 1;
			
		return tempBool;
}	

u8 closestWallTri[2] = {0,0}; //[0] = meshID 0, [1] = closest tri on meshID etc
u8 thisScene = 0;

u8 wallMesh_CollisionCheck(Sphere* sphereCollider, SceneManager* currentScene)
{

	u8 meshID = 0;
	u8 tempSectorCount = 0;
	u8 maxSectorCount = 0;
	u8 currentTri = 0;
	u8 triMeshLength = 0; //NOTE: the number of tris in the collision mesh.
	u8 isInSector = 0; //if player is in this sector of a scene
	u8 scene = 0;
    
	
	isAgainstWall = 0;
	playerAvatar.collision.wallPoint.lastCollisionPoint = playerAvatar.collision.wallPoint.currentCollisionPoint;	
		
	newWallPoint = 0;	
	
//--------------------------------------------------------------------------
//-------------Find The Nearest Point and Nearest Triangle on Mesh-------------
//--------------------------------------------------------------------------	
		
	 //Previous Working Version 9/19/2021
	if(currentScene && currentScene->sceneTriggers)
	{
		for(scene = 0; scene < maxScenes; scene++)
		{
			if(currentScene->sceneTriggers[scene].isActive > 0)
			{

				maxSectorCount = scenes[scene]->sceneTriggers[scene].sectorCount; 
				triMeshLength = scenes[scene]->wallColObj->meshLength;
				
				//NOTE: check for each sector in a scene:
				for(tempSectorCount = 0; tempSectorCount < maxSectorCount; tempSectorCount++)
				{
					//NOTE: reset isInSector
					isInSector = 0;
					//NOTE: if the player is currently located in this sector of the scene:
					//isInSector = scenes[scene]->sceneTriggers[scene].sectorTrig[tempSectorCount].isActive;
                    isInSector = scenes[scene]->sceneTriggers[scene].sectorTrig[tempSectorCount].isActive;
					
					if(isInSector == 1)		
					{		
						for(currentTri = 0; currentTri < triMeshLength; currentTri++)
						{
							newWallPoint = 0;

								tempTri[0].vertex = scenes[scene]->wallColObj->meshVtx[scenes[scene]->wallColObj->meshTri[currentTri].tri[0]].vertex;
								tempTri[1].vertex = scenes[scene]->wallColObj->meshVtx[scenes[scene]->wallColObj->meshTri[currentTri].tri[1]].vertex;
								tempTri[2].vertex = scenes[scene]->wallColObj->meshVtx[scenes[scene]->wallColObj->meshTri[currentTri].tri[2]].vertex;
								
								newWallPoint = SphereToMeshNearPoint(&playerAvatar.wallCollider, &tempTri[0],&tempTri[1],&tempTri[2], &tempCollisionPoint);	
								
								if(newWallPoint == 1)
								{
									thisScene = scene;
									closestWallTri[0] = tempSectorCount;
									closestWallTri[1] = currentTri;
								}		
								
						}
						
					}
				
				}
				
			}
		}
	}
	
	
	//Previous Working Version
	//END-------Find The Nearest Point and Nearest Triangle on Mesh-------------

//--------------------------------------------------------------------------
//-------------Once the Nearest Point is Found, Check Collision-------------
//--------------------------------------------------------------------------
	
	//NOTE: check to see if any part of the player sphere collider is penetrating the mesh (aka isAgainstWall)
		isAgainstWall = AgainstWall(&playerAvatar.wallCollider, &tempCollisionPoint);
		playerAvatar.collision.wallPoint.triNum = closestWallTri[1];
		playerAvatar.collision.wallPoint.currentCollisionPoint = tempCollisionPoint;
	
	//END----------Once the Nearest Point is Found, Check Collision-------------
	
//--------------------------------------------------------------------------
//------------------Calculate New Position When Colliding-------------------
//--------------------------------------------------------------------------
		
	//NOTE: if player will be penetrating the wall in the next position, calculate a new adjusted position 
		if(isAgainstWall == 1)
		{
			clearVariables(1);
		
			//tempTri[0].vertex = currentScene->wallColObj->meshVtx[currentScene->wallColObj->meshTri[closestWallTri[1]].tri[0]].vertex;
			//tempTri[1].vertex = currentScene->wallColObj->meshVtx[currentScene->wallColObj->meshTri[closestWallTri[1]].tri[1]].vertex;
			//tempTri[2].vertex = currentScene->wallColObj->meshVtx[currentScene->wallColObj->meshTri[closestWallTri[1]].tri[2]].vertex;
			
		//	for(scene = 0; scene < 5; scene++)
		//	{
			//	if(currentScene->sceneTriggers[scene].isActive > 0)
			//	{
					//tempTri[0].vertex = scenes[0]->wallColObj->meshVtx[scenes[0]->wallColObj->meshTri[closestWallTri[1]].tri[0]].vertex;
					//tempTri[1].vertex = scenes[0]->wallColObj->meshVtx[scenes[0]->wallColObj->meshTri[closestWallTri[1]].tri[1]].vertex;
					//tempTri[2].vertex = scenes[0]->wallColObj->meshVtx[scenes[0]->wallColObj->meshTri[closestWallTri[1]].tri[2]].vertex;
					
					tempTri[0].vertex = scenes[thisScene]->wallColObj->meshVtx[scenes[thisScene]->wallColObj->meshTri[closestWallTri[1]].tri[0]].vertex;
					tempTri[1].vertex = scenes[thisScene]->wallColObj->meshVtx[scenes[thisScene]->wallColObj->meshTri[closestWallTri[1]].tri[1]].vertex;
					tempTri[2].vertex = scenes[thisScene]->wallColObj->meshVtx[scenes[thisScene]->wallColObj->meshTri[closestWallTri[1]].tri[2]].vertex;
		//		}
		//	}
			
			
			CalcTriNormal(&tempTri[0], &tempTri[1], &tempTri[2], &triNormalWall);
			CalcSlidingPlane(closestTriWall, &playerAvatar.rigidBody.velocity, &playerAvatar.collision.wallPoint, &playerAvatar.wallCollider, &tempCollisionPoint, triNormalWall, &playerAvatar.rigidBody.nextPos);

		}	
		
		else
		{
			//collidedWithObject = 0;
		}
		
		
	
	//END---------------Calculate New Position When Colliding-------------------

return isAgainstWall;
}	


	/*--------------------------------------------------------------------------*/
	/*----------Find The Nearest Point and Nearest Triangle on Mesh-------------*/
	/*--------------------------------------------------------------------------*/
		
		//TO DO NOTES------------------------------------: 
		//Use pre-calculated normals exported from Blender to avoid making calculation at run time.
			//Calculate the trinormal using the existing function
			//Calculate it again combining the normals of the vertices into a single face
			//Try to export the face normal directly from blender
			
		//Break up collision into multiple segments 
			//Have a simple box collider for each segment that is slightly larger than the collision for that section. 
			//Check box collider to see if player is in general vicinity
			//if so, check the collision for this region
			//on export, keep track of the lowest x and lowest y values as well as the highest x and highest y values among the exported triangles
			//use this to create a bounding box for collision checks
		/*
		
			waterfall
			    |
	exit1 - [][][][] - exit2
			  [][]
		       []
			    |
			  exit 3
		*/
		//END TO DO NOTES------------------------------------: 

 
 
 