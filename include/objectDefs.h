#ifndef _OBJECTDEFS_H
#define _OBJECTDEFS_H
//#include "transformDefs.h"
//#include "common.h"

/*--------------------------------------------------------------------------*/
/*-------------------------------Base GameObjects---------------------------*/
/*--------------------------------------------------------------------------*/


typedef struct{    
    u8 movement; //idle, walk, run, slide, dodge
    u8 jumping; //none, fall, jump, wallJump, doubleJump
    u8 actions; //none, aim, shoot, interact, push/pull
}PlayerState;

typedef struct {
    CollisionPoint groundPoint;
    CollisionPoint wallPoint;    
}PlayerCollisionPoints;



typedef struct {
    u8 shells;
    u8 lamps;
    u8 fireSpirits;
    u8 lightSpirits;
    u8 windSpirits;
    u8 waterSpirits;
    
}Inventory;

typedef struct
{
    GameObject obj; //Note:Holds game object properties (pos, rot, scl) and matrixes
	Sphere sphereCollider; //Note: Collider for ground checks
    Sphere wallCollider; //Note: Collider for wall checks
    Sphere headCollider; //Note: Collider for wall checks
	RigidBody rigidBody; //Note:Holds mass, collisions, velocity etc.
    PlayerState state; //Note: holds 3 types of states that can be combined
	AnimRig animRig; //Note:pointer to animator 
    Animation animator; //pointer to animator 
	Lights2 playerLighting;
    Vector3 shadowPosition;
	float rotation;
	
	Vector3 playerNormal;
    Vector2 directionNormal;
	
	u8 playerShooting;
	
    PlayerCollisionPoints collision; //previously wall/ground collision check
    
    u8 hp;
    u8 posession;
    
    Inventory inventory;

    Vector3 lastSpawnPoint;
}Player;



typedef struct{
    GameObject obj; //Note:Holds game object properties (pos, rot, scl) and matrixes
    Animation animator; //pointer to animator 
    float rotation;
     
    char textLine1[45];
    char textLine2[45];
}NPC;


typedef struct
{
	GameObject obj; //Note:Holds game object properties (pos, rot, scl) and matrixes
	Sphere sphereCollider; //Note: Collider for physics checks
	RigidBody rigidBody; //Note:Holds mass, collisions, velocity etc.
	Animation animator; //pointer to animator 
	
}PlayerShip;

typedef struct
{
	u8 isActive; //if no enemies are targeted, is deactivated
	GameObject obj; //in game pointer model 
	Animation animator; //pointer to animator 
	
	GameObject* activeTarget;
	GameObject* enemyObjects[4]; //an array of nearby enemy objects
	
}EnemyTargets;


typedef struct
{
    GameObject obj; //Note:pointer to game object (pos, rot, scl)
	GameObject* camLook; //Note: GameObject pointer of object camera is currently looking at (ex player character)
	Vector3 camLookPoint;
	Vector3 cameraOffset; //Note: distance to offset from "camLook"
	Vector3 nextPosition; //Note: distance to offset from "camLook"
	
	float cameraOrbit; //Note:Orbital position around player character (0-360 degrees)
    float audioOrbit; //Note: orbital position of the audio channel 
	float distance; //Note: Current distance 
	float adjDistance;	//Note: adjusted distance when colliding with wall or object
	float nearPosition;	//Note: used for nearClipping 
	u8 againstWall;

}CameraObject;



//TO DO NOTE SUNDAY 2/1/2021  change TriggerBox, wallColMeshSize, wallMeshCol, and wallColTri to hold array of pointers
//Changing this to an array of pointers will let each scene be broken up into smaller chunks 
//this is VERY important to avoid unnecessary collision checks
//Change TriggerBox below to instead create CollisionBoxes[] that holds an array of trigger boxes
//Change MeshCollider and instead create a CollisionMeshes[] that holds an array of wallColMeshSize, wallMeshCol and wallColTri objects









typedef struct
{
	MeshCollider *wallMeshCol; //vertex positions of collision (float, float, float)
	MeshColliderTri *wallColTri; //collision mesh triangles (int,int,int)
	MeshCollider *groundMeshCol; //vertex positions of collision (float, float, float)
	MeshColliderTri *groundColTri; //collision mesh triangles (int,int,int)
}ENVColObject;

typedef struct
{
    GameObject obj; //pointer to game object (pos, rot, scl)
	Animation animator; //pointer to animator 
	TriggerBox cTrigBox;
	//short *wallColMeshSize;
	//MeshCollider *wallMeshCol; //vertex positions of collision (float, float, float)
	//MeshColliderTri *wallColTri; //collision mesh triangles (int,int,int)
	
//	Gfx* DL; //pointer to display list for object	
}EnvObject;

typedef struct
{
    GameObject obj; //pointer to game object (pos, rot, scl)
	StaticModel staticModel; //pointer to display List 
	TriggerBox cTrigBox;
	// short *wallColMeshSize;
	// MeshCollider *wallMeshCol; //vertex positions of collision (float, float, float)
	// MeshColliderTri *wallColTri; //collision mesh triangles (int,int,int)
	
//	Gfx* DL; //pointer to display list for object	
}StaticEnvObject;

typedef struct
{
    GameObject obj; //pointer to game object (pos, rot, scl)
	Animation animator; //pointer to animator 
	TriggerBox trigBox;
    MeshColliderObj collisionMesh;
    //TriggerBox trigger;
	//short *wallColMeshSize;
	//MeshCollider *wallMeshCol; //vertex positions of collision (float, float, float)
	//MeshColliderTri *wallColTri; //collision mesh triangles (int,int,int)
	
//	Gfx* DL; //pointer to display list for object	
}EnvObject2;












typedef struct
{
	u8 isActive; //set active when a shot is fired
	int startTimer; //time that shot is fired updated to int to avoid hang up
	int activeTimer; //after 2 seconds, deactivate fired updated to int to avoid hang up
    GameObject obj; //pointer to game object (pos, rot, scl)
	Sphere sphereCollider; //for colliding with enemies
	RigidBody rigidBody; //Note:Holds mass, collisions, velocity etc.
	Animation animator; //pointer to animator 
}ProjectileObject;


/*
typedef struct
{
	
	
	
}AI;
*/


typedef struct
{	
	//--GENERAL---
	u8 isActive;
    u8 hp; //NOTE: current Enemy health
	u8 enemyType; //denotes what type of enemy will spawn
    GameObject obj; //pointer to game object (pos, rot, scl)

	RigidBody rigidBody; //Note:Holds mass, collisions, velocity etc.
	
	u8 cooldownStart;
	u8 cooldownTimeElapsed;
    
    Animation animator; //primary animator
    Animation animator2; //optional second animator for complex objects
    u8 animLastUpdate; // for adjusting animation to the frame rate
    float animFloatMin; // flexible float for animations
    float animFloatMax; // flexible float for animations
    float animFloat; // flexible float for animations
    u8 animTriggerA; // flexible char for animations
    u8 animTriggerB; // flexible char for animations
    
    float currentSpeed;
    float maxSpeed;
    
	//u8 hitCooldown;
	//---COLLISION CHECKS--- Close enough to damage player
    Sphere sphereCollider; 
    u8 playerCollision; 
    //---VISION CHECKS--- Close enough to see player
	Sphere sphereVision;
    u8 seesPlayer;
    
	
	//----AI-----
    Vector3 currentPosition;
    Vector3 targetPosition;
    
	Vector3 pathNormal; //NOTE: Normal of the path being traveled along
	Vector3 normal; //NOTE: Normal of enemy which should be the reverse of the pathNormal

	Vector3 randomizedVar;
	int decisionTimer; //NOTE: timer is updated every so often in order to make AI decisions
	int decisionVar; //NOTE: used to differenciate the movements of the enemies so they are checking player position at different intervals
//	Gfx* DL; //pointer to display list for object	
}EnemyObject;

/*END----------------------------Base GameObjects---------------------------*/





/*--------------------------------------------------------------------------*/
/*----------------------------Collision GameObjects-------------------------*/
/*--------------------------------------------------------------------------*/


/*END---------------------------Trigger GameObjects--------------------------*/

#endif