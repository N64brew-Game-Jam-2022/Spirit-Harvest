
#include "collisionDefs.h"

CollisionPoint collisionPoints = {
0, 0, 0.0f, // u8 collision, u8 triNum, float vDot
{5000,5000,5000}, //Vector3 vecSubtract
{0,0,0}, //Vector3 lastCollisionPoint
{0,0,0}, //Vector3 currentCollisionPoint
};
  
CollisionPoint groundCollisionPoints = {
0, 0, 0.0f, // u8 collision, u8 triNum, float vDot
{5000,5000,5000}, //Vector3 vecSubtract
{0,0,0}, //Vector3 lastCollisionPoint
{0,0,0}, //Vector3 currentCollisionPoint
};

/*
void SetCollisionMesh_ENV(EnvObject* object, TriggerBox *cTrigBox, MeshCollider cMesh[], MeshColliderTri cTri[])
{
	object->colTrigger.collider.min = cTrigBox->collider.min;
	object->wallMeshCol = &cMesh;
	object->wallColTri = &cTri;
}*/
/*
void SetCollisionMesh_ENV(EnvObject* object, TriggerBox *cTrigBox, MeshCollider *cMesh, MeshColliderTri *cTri)
{   //NOTE: passing an array pointer that contains the vertex information for collision and assigning that to the envObject
	//because an array is a series of pointers, there is no need to use & when passing MeshCollider or MeshColliderTri variables.
	object->cTrigBox.collider.min = cTrigBox->collider.min;
	object->wallMeshCol = cMesh; 
	object->wallColTri = cTri; 
}*/


u8 triggerBoundBox(Vector3* playerPos, TriggerBox* trigger) //check simple bound box of collider against player's current position
{

	TriggerBox tempTriggerBox = *trigger;

	if((playerPos->x >= trigger->collider.min.x && playerPos->x <= trigger->collider.max.x) && 
		(playerPos->y >= trigger->collider.min.y && playerPos->y <= trigger->collider.max.y) &&
			(playerPos->z >= trigger->collider.min.z && playerPos->z <= trigger->collider.max.z))
			{
				trigger->isActive = 1;
				return 1;
			}
			
	else
	{
		trigger->isActive = 0;
		return 0;
	}
}


//TO DO NOTE: Call this from each level. Send over an array of pointers to TriggerBox for a particular scene
//Initiate the TriggerBox array in level script and get the array length //int arraySize = sizeof(TriggerBox)/sizeof(trigger[0]);	
//This can be done in the SetCollisionMesh_ENV
void EnvTriggersCheck(Vector3* playerPos, u8 arraySize, TriggerBox* trigger)
{
	//int arraySize = sizeof(TriggerBox)/sizeof(trigger[0]);	
	//for each

}


u8 sphereToSphere(Sphere* sphereA, Sphere* sphereB)
{
	float distance = vectorDistance(sphereA->center, sphereB->center);
    float distanceSquared = distance*distance;
	
    float radSumSquared = (sphereB->radius + sphereA->radius)*(sphereB->radius + sphereA->radius);

	 if(distanceSquared <= radSumSquared)  //NOTE: if collision occurs
	 {
		return 1;
	 }
	
	return 0;
	//return (vectorDistance(sphereA->center, sphereB->center) <= radSumSquared) ? 1:0;
}

//seems to cause issues and is always returning true for gunshots...
u8 sphereToSphereSimple(Sphere* sphereA, Sphere* sphereB)
{
	float radSumSquared = (sphereB->radius + sphereA->radius)*(sphereB->radius + sphereA->radius);
	return (vectorSquareDistance(sphereA->center, sphereB->center) <= radSumSquared) ? 1:0;
}


float VDot(Vector3 vectorA, Vector3 vectorB)
{
	float sum;
	
	sum += vectorA.x * vectorB.x;
	sum += vectorA.y * vectorB.y;
	sum += vectorA.z * vectorB.z;
	
	return sum;
}

Vector3 VSubtract(Vector3 vectorA, Vector3 vectorB)
{
	Vector3 newVector = {(vectorA.x - vectorB.x),(vectorA.y - vectorB.y),(vectorA.z - vectorB.z)};	
	return newVector;	
}

u8 newPoint = 0; //functions as boolean - if there is a change in the closest point, return this to drawplayer.c
float distClose = 90000.0f;
float prevDistClose = 90000.0f;
float distTest = 0.0f;
Vector3 currentPoint = {5000.0,5000.0,5000.0};
Vector3 previousPoint = {5000.0,5000.0,5000.0};


void CalcTriNormal(MeshCollider* vertexA, MeshCollider* vertexB, MeshCollider* vertexC, Vector3 *triNormalP)
{
	Vector3 normal = {0,0,0};
	float xN; //for calculating normalized version of x
	float yN; //for calculating normalized version of y
	float zN; //for calculating normalized version of z
	
	Vector3 u = vectorSubtract(vertexA->vertex, vertexB->vertex);
	Vector3 v = vectorSubtract(vertexA->vertex, vertexC->vertex);
	
	//vec	
	xN = (u.y * v.z) - (u.z * v.y);
	yN = (u.z * v.x) - (u.x * v.z);
	zN = (u.x * v.y) - (u.y * v.x);	
	
	normal.x = xN;
	normal.y = yN;
	normal.z = zN;
	
	VectorNormalize(&normal); //normalize vector to between -1 and 1
	
	*triNormalP = normal;	
}

float offsetDistance = 0.0f;
Vector3 playerNormal = {0.0f, 0.0f, 0.0f};
float movement;
float lastMovement = 0.0f;
float distance;
u8 lastObjectID = 0; 
Vector3 origin = {0,0,0};

Vector3 newPosition = {0,0,0};
Vector3 previousPosition = {0,0,0};
Vector3 travelVector = {0,0,0};

Vector3 extendedPos = {0,0,0}; //NOTE: when you reach the end of a mesh, this extend vector is used to continue sliding off of the mesh 
Vector3 tempExtendedPos = {0,0,0}; //NOTE: when you reach the end of a mesh, this extend vector is used to continue sliding off of the mesh 
Vector3 tempExtendVector = {0,0,0}; //NOTE: when you reach the end of a mesh, this extend vector is used to continue sliding off of the mesh 
Vector3 extendVector = {0,0,0}; //NOTE: when you reach the end of a mesh, this extend vector is used to continue sliding off of the mesh 
Vector3 combinedExtendVector = {0,0,0};
Vector3 vectorOffset = {0,0,0};
u8 extendBool = 0;


void CalcSlidingPlane(u8 objectID, Vector3* playerVelocity, CollisionPoint* collisions, Sphere* colliderPosition, Vector3* nearestPoint, Vector3 triangleNormal, Vector3* tempNewPosition)
{	
	movement = 0.0f;
	
	//NOTE: this function must check the values of playerVelocity to avoid dividing by 0 when normalizing values
	if((playerVelocity->x >= 0.0001f || playerVelocity->x <= -0.0001f) || 
		(playerVelocity->y >= 0.0001f || playerVelocity->y <= -0.0001f)) 
			//(playerVelocity->z >= 0.0001f || playerVelocity->z <= -0.0001f))
            {                
                VectorNormalize(playerVelocity);	
                playerNormal = *playerVelocity; //Player Normal = -745, -.666
                playerNormal = vectorAdd(playerNormal,triangleNormal);		
                offsetDistance = colliderPosition->radius + 3;	//NOTE: increasing offset distance so that player is pushed further away from the wall, allowing for a smoother descent	
                
                //NOTE: check distance between current and previous collision point. If the collision point is the same, then player may be stuck in place.
                movement = vectorSquareDistance(collisions->currentCollisionPoint, collisions->lastCollisionPoint); //Check against player movement to avoid getting stuck on verts

                //NOTE: calculate offset vector by comparing the current triangle normal to the player normal 
                
                vectorOffset = vectorScale(triangleNormal,offsetDistance); 
                
                    if((movement > 0.02f || movement < -0.02f) || ((playerNormal.x <= .2f && playerNormal.x >= -.2f) && 
                        (playerNormal.y <= .2f && playerNormal.y >= -.2f)))	
                        {
                                newPosition = vectorAdd(collisions->currentCollisionPoint, vectorOffset); 
                                tempExtendVector = vectorSubtract(newPosition, playerAvatar.rigidBody.currentPos);				
                                lastMovement = movement;
                        }
                                               
                        else
                        {				
                            //NOTE:To avoid getting stuck on corners, this else statement will run if playerMovement drops too low and the closest point on the triangle does not change
                            extendedPos = vectorAdd(colliderPosition->center, vectorScale(playerNormal, .9));
                            newPosition = extendedPos;
                        }		
                        
                    //if(playerAvatar.isJumping == 1 || playerAvatar.isFalling == 1)
                    //{
                        
                    //}    

            }
            
    else if(playerVelocity->z >= 0.0001f || playerVelocity->z <= -0.0001f)
        {
                            VectorNormalize(playerVelocity);	
                playerNormal = *playerVelocity; //Player Normal = -745, -.666
                playerNormal = vectorAdd(playerNormal,triangleNormal);
                
                offsetDistance = colliderPosition->radius;		
                
                //NOTE: check distance between current and previous collision point. If the collision point is the same, then player may be stuck in place.
                movement = vectorSquareDistance(collisions->currentCollisionPoint, collisions->lastCollisionPoint); //Check against player movement to avoid getting stuck on verts

                //NOTE: calculate offset vector by comparing the current triangle normal to the player normal 
                vectorOffset = vectorScale(triangleNormal,offsetDistance);
                                // newPosition = vectorAdd(collisions->currentCollisionPoint, vectorOffset); 
                                // tempExtendVector = vectorSubtract(newPosition, playerAvatar.rigidBody.currentPos);				
                                // lastMovement = movement;
                            extendedPos = vectorAdd(colliderPosition->center, vectorScale(playerNormal, .75));
                            newPosition = extendedPos;
        }
	previousPoint = currentPoint;	
	lastObjectID = objectID;

	tempNewPosition->x = newPosition.x;
	tempNewPosition->y = newPosition.y;
    
    

}

void CalcSlidingPlane_OLD(u8 objectID, Vector3* playerVelocity, CollisionPoint* collisions, Sphere* colliderPosition, Vector3* nearestPoint, Vector3 triangleNormal, Vector3* tempNewPosition)
{	
	movement = 0.0f;
	
	//NOTE: this function must check the values of playerVelocity to avoid dividing by 0 when normalizing values
	if((playerVelocity->x >= 0.0001f || playerVelocity->x <= -0.0001f) || 
		(playerVelocity->y >= 0.0001f || playerVelocity->y <= -0.0001f) ||
			(playerVelocity->z >= 0.0001f || playerVelocity->z <= -0.0001f))
            {                
                VectorNormalize(playerVelocity);	
                playerNormal = *playerVelocity; //Player Normal = -745, -.666
                playerNormal = vectorAdd(playerNormal,triangleNormal);		
                offsetDistance = colliderPosition->radius;		
                
                //NOTE: check distance between current and previous collision point. If the collision point is the same, then player may be stuck in place.
                movement = vectorSquareDistance(collisions->currentCollisionPoint, collisions->lastCollisionPoint); //Check against player movement to avoid getting stuck on verts

                //NOTE: calculate offset vector by comparing the current triangle normal to the player normal 
                vectorOffset = vectorScale(triangleNormal,offsetDistance);
                
                    if((movement > 0.02f || movement < -0.02f) || ((playerNormal.x <= .2f && playerNormal.x >= -.2f) && 
                        (playerNormal.y <= .2f && playerNormal.y >= -.2f)))	
                        {
                                newPosition = vectorAdd(collisions->currentCollisionPoint, vectorOffset); 
                                tempExtendVector = vectorSubtract(newPosition, playerAvatar.rigidBody.currentPos);				
                                lastMovement = movement;
                        }
                                               
                        else
                        {				
                            //NOTE:To avoid getting stuck on corners, this else statement will run if playerMovement drops too low and the closest point on the triangle does not change
                            extendedPos = vectorAdd(colliderPosition->center, vectorScale(playerNormal, lastMovement));
                            newPosition = extendedPos;
                        }		
                        
                    //if(playerAvatar.isJumping == 1 || playerAvatar.isFalling == 1)
                    //{
                        
                    //}    

            }
	previousPoint = currentPoint;	
	lastObjectID = objectID;

	tempNewPosition->x = newPosition.x;
	tempNewPosition->y = newPosition.y;
    
    

}

Vector3 CLEARVECTOR = {0,0,0};
Vector3 CLEARLARGEVECTOR = {5000.0,5000.0,5000.0};
void clearVariables(u8 objectID)
{
	if(objectID != lastObjectID)
	{
		currentPoint = CLEARVECTOR;
		previousPoint = CLEARVECTOR;
		offsetDistance = 0.0f;
		lastObjectID = 0;
		movement = 0.0f;
	}	
}

	float vDot;
	Vector3 v = {10,20,30}; 
u8 AgainstWall(Sphere* colliderPosition, Vector3 *wallPoint)
{
	SetVector3(&v, 0,0,0); 
	v = vectorSubtract(*wallPoint, colliderPosition->center); //-43, 21, -17

	vDot = 0.0f;
	vDot = VDot(v,v);
	
	if( vDot <= ((colliderPosition->radius+.25) * (colliderPosition->radius+.25)))
	{		
		return 1;				
	}
			
	return 0;	
}
	float groundVDot;	
	Vector3 groundV = {10,20,30};   
u8 AgainstGround(Sphere* colliderPosition, Vector3 *groundPoint)
{
	SetVector3(&groundV, 0.01,0.01,0.01); 
	groundVDot = 0.0f;
	
	groundV = vectorSubtract(*groundPoint, colliderPosition->center); //-43, 21, -17
	groundVDot = VDot(groundV,groundV);
	playerAvatar.collision.groundPoint.vecSubtract = groundV;
	playerAvatar.collision.groundPoint.vDot = groundVDot;
	
	if(colliderPosition->enabled == 1)
	{
		if( groundVDot <= ((colliderPosition->radius+16.0f) * (colliderPosition->radius+16.0f)))
       // if( groundVDot <= ((colliderPosition->radius+40.0f) * (colliderPosition->radius+40.0f)))
			return 1;				
	}
		
	return 0;	
}
//used for walls
Vector3 DistanceComparison(Sphere* colliderPosition, Vector3 compPoint, Vector3* closePoint)
{	
	prevDistClose = distClose;
	distTest = vectorDistance(colliderPosition->center, compPoint); //Get Distance of current comparison point
	distClose = vectorDistance(colliderPosition->center, currentPoint); //Recalculate distance of previously closest point

	if(distTest < distClose)
	{
		distClose = distTest;
		currentPoint = compPoint;
		newPoint = 1;
		return compPoint;
	}
		
	newPoint = 0;	
	return *closePoint;	
}

u8 SphereToMeshNearPoint(Sphere* colliderPosition, MeshCollider* vertexA, MeshCollider* vertexB, MeshCollider* vertexC, Vector3* point)
{
	Vector3 tempPoint; 
	
	tempPoint = ClosestPointTriangle(colliderPosition->center, vertexA->vertex,vertexB->vertex,vertexC->vertex);
	*point = DistanceComparison(colliderPosition, tempPoint, point); //compare test point against current closest point
	
	return newPoint;
}

u8 newGroundPoint;
float prevGroundDistClose = 30000.0f;
float groundDistClose = 30000.0f;
float groundDistTest = 0.0f;
Vector3 GroundDistanceComparison(Sphere* colliderPosition, Vector3 compPoint, Vector3 currentGroundPoint)
{	
	prevGroundDistClose = groundDistClose;
	groundDistTest = vectorSquareDistance(colliderPosition->center, compPoint); //Get Distance of current comparison point
	groundDistClose = vectorSquareDistance(colliderPosition->center, currentGroundPoint); //Recalculate distance of previously closest point

	if(groundDistTest < groundDistClose)
	{
		//groundDistClose = groundDistTest;
        return compPoint;
		//*currentGroundPoint = compPoint;
		//newGroundPoint = 1;
		//*currentGroundPoint = compPoint;
	}
		
	else
	{
		newGroundPoint = 0;	
        return currentGroundPoint;
	}
}
	

    
    
u8 LineToGroundPoint(Sphere* colliderPosition, MeshCollider vertexA, MeshCollider vertexB, MeshCollider vertexC, Vector3* point)
{

	//NOTE: get current newPosition
	//project a ray downward on the z axis
	//if a ray crosses a point on a ground plane, set it as the new temp point
	//compare new ground plane temp point with current temp point 
	//return new temp point (or current temp point )
    Vector3 groundIntersectPoint = {0.0f,0.0f,0.0f};
	Vector3 startPoint = colliderPosition->center; 
	Vector3 endPoint; 
	
	Vector3 playerToA = vectorSubtract(vertexA.vertex, startPoint);
	Vector3 playerToB = vectorSubtract(vertexB.vertex, startPoint);
	Vector3 playerToC = vectorSubtract(vertexC.vertex, startPoint);
	
	Vector3 zLine = {0.0f,0.0f,-1.0f}; //line is projected downwards on the z axis
	float zLineLength = 30.0f; //have this possible to set in a struct or passed as a variable
	
	float u = 0;
	float v = 0;
	float w = 0;
	float denominator = 0;
	
	zLine = vectorScale(zLine, zLineLength);
	endPoint = vectorAdd(startPoint, zLine);
	
	u = vectorScalarTriple(zLine, playerToC, playerToB);
		if( u < 0.0f ) return 0;
	v = vectorScalarTriple(zLine, playerToA, playerToC);
		if( v < 0.0f ) return 0;	
	w = vectorScalarTriple(zLine, playerToB, playerToA);
		if( w < 0.0f ) return 0;		
	
	//NOTE: find the length of line (player position - zLine)
	//find scalar triple values and check the return values of the intersection point
	//intersectionPoint.x = vectorScalarTriple()
    
    //NOTE: updated to avoid divide by 0
        //denominator = 1.0 / (u + v + w);         
        if((u + v + w) > 0.001f || (u + v + w) < -0.001f)
            denominator = 1.0 / (u + v + w);
        else
            denominator = 1.0 / .001f;
    
    
    
	u *= denominator;
	v *= denominator;
	w *= denominator;
	
	SetVector3(&groundIntersectPoint, u,v,w); 
	
	groundIntersectPoint = vectorAdd(vectorAdd(vectorScale(vertexA.vertex, groundIntersectPoint.x),vectorScale(vertexB.vertex, groundIntersectPoint.y)), vectorScale(vertexC.vertex, groundIntersectPoint.z));

	debug_Collision.triNormal = groundIntersectPoint;
	*point = groundIntersectPoint; //NOTE: Update tempPoint
	
	return 1;
}

	Vector3 ab;
	Vector3 ac;
	Vector3 ap;
	Vector3 bp;
	Vector3 cp;
	float d1;
	float d2;
	float d3;
	float d4;	
	float d5;
	float d6;
	float tempVec;
	float vc;
	float vb;
	float w;
	float va;
	float denom;

Vector3 ClosestPointTriangle(Vector3 p, Vector3 a, Vector3 b, Vector3 c) 
{

	ab = vectorSubtract(b, a);
	ac = vectorSubtract(c, a);
	ap = vectorSubtract(p, a);	
	d1 = VDot(ab, ap);
	d2 = VDot(ac, ap);		
	if(d1 <= 0.0f && d2 <= 0.0f) return a; //If vertex region is outside of A (1,0,0)
	
//-----------
	bp = vectorSubtract(p,b);
	d3 = VDot(ab, bp);
	d4 = VDot(ac, bp);
	if(d3 >= 0.0f && d4 <= d3) return b; // if P in vertex region is outside B (0,1,0)
//-----------
	vc = d1*d4 - d3*d2;
	if(vc <= 0.0f && d1 >= 0.0f && d3 <= 0.0f)
	{
    
    //NOTE: updated to avoid divide by 0
		//tempVec = d1 / (d1-d3);
        if((d1-d3) > 0.001f || (d1-d3) < -0.001f)
            tempVec = d1 / (d1-d3);
        else
            tempVec = d2 / .001f;
        
        
		return vectorAdd(a, (vectorScale (ab, tempVec))); //Check if P in edge region of AB, if so return projection of P onto AB
	}
//-----------
	cp = vectorSubtract(p,c);
	d5 = VDot(ab, cp);
	d6 = VDot(ac, cp);
	if(d6 >= 0.0f && d5 <= d6) return c; //check if P in vertex region outside C
//-----------
	vb = d5*d2 - d1*d6;
	if(vb <= 0.0f && d2 >= 0.0f && d6 <= 0.0f)
	{
    
    //NOTE: updated to avoid divide by 0
		//w = d2 / (d2-d6);
        if((d2-d6) > 0.001f || (d2-d6) < -0.001f)
            w = d2 / (d2-d6);
        else
            w = d2 / .001f;

            
            
            
		return vectorAdd(a, (vectorScale (ac, w)));  //check if P in edge region of AC, return projection of P onto AC
	}
	
	va = d3*d6 - d5*d4;
	if(va <= 0.0f && (d4-d3) >= 0.0f && (d5-d6) >= 0.0f)
	{
    
//NOTE: updated to avoid divide by 0
		//w = (d4-d3) / ((d4-d3) + (d5-d6)); 
        if(((d4-d3) + (d5-d6)) > 0.001f || ((d4-d3) + (d5-d6)) < -0.001f)
            w = (d4-d3) / ((d4-d3) + (d5-d6));
        else
            w = (d4-d3) / .001f;
            
            
		return vectorAdd(b, (vectorScale (vectorSubtract(c,b), w)));  //check if P in edge region of AC, return projection of P onto AC
	}
	
    
//NOTE: updated to avoid divide by 0
	//denom = 1.0f / (va+vb+vc); 
    if((va+vb+vc) > 0.001f || (va+vb+vc) < -0.001f)
        denom = 1.0f / (va+vb+vc);
    else
        denom = 1.0f / .001f;
        
        
        
	tempVec = vb * denom;
	w = vc * denom;
	return vectorAdd(vectorAdd(a, vectorScale(ab, tempVec)), vectorScale(ac, w));

}