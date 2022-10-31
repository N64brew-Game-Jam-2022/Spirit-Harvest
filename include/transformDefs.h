#ifndef _TRANSFORMDEFS_H
#define _TRANSFORMDEFS_H

#define PI 3.14159
#define RAD2DEG 57.29577

/*--------------------------------------------------------------------------*/
/*-------------------------------Base Transforms----------------------------*/
/*--------------------------------------------------------------------------*/

typedef struct {
    float x;
	float y;
	float z;		
}Vector3;

typedef struct {
    float x;
	float y;		
}Vector2;

typedef struct
{	

    Vector3 pos;
    Vector3 rot;
    Vector3 scl;  
	
	Mtx matrix[3];	
    
}GameObject; //NOTE: GameObjects are defined in objectDefs.h

typedef struct {
	//For use with collision tests
	
	Vector3 currentPos; 
	Vector3 nextPos;
	
	Vector3 velocity;
	Vector3 centerMass;
	//Vector3 rotation;
	float speed;
	float gravityStrength;
	float rotation;
	//Vector3 max;	
}RigidBody;
/*END----------------------------Base Transforms----------------------------*/



/*--------------------------------------------------------------------------*/
/*----------------------------Rigging and Animation-------------------------*/
/*--------------------------------------------------------------------------*/


typedef struct
{
    u8 animID; //NOTE: current animation 
    u8 animFrame; //NOTE: current frame of current animation
    void (*animate)(u8);
}Animation;

typedef struct
{
    u8 animID; //NOTE: current animation 
    u8 animFrame; //NOTE: current frame of current animation
    //GFX (*staticModel);
    Gfx* displayList;
}StaticModel;


typedef struct
{	
    Vector3 pos;
    Vector3 rot;
	Vector3 scl;	
	Mtx matrix[3];
	
}RigObject; 

typedef struct
{
	RigObject head;
	RigObject chest;
	RigObject armR[2]; //[0] = upper [1] = lower
	RigObject armL[2]; //[0] = upper [1] = lower
	RigObject legR[3]; //[0] = upper [1] = lower
	RigObject legL[3]; //[0] = upper [1] = lower
    RigObject glowFX;
	RigObject shadow;
}Joint;

typedef struct
{
    u8 animID; //NOTE: current animation 
    u8 animFrame; //NOTE: current frame of current animation
    void (*controller)();
	Joint joint;
}AnimRig;

typedef struct
{
	Vector3 pos;
	Vector3 rot;
	Vector3 scl;
	
}RigAnimation;

typedef struct
{
    int poop;
    RigAnimation *anim; //Holds pointer to all rig animations
}RigAnimList;

typedef struct
{
	Vector3 pos;
	int value;
	short sHex;
	short tHex;
	u8 normalx;
	u8 normaly;
	u8 normalz;
	u8 alpha;	
}TempVTX;



/*END-------------------------Rigging and Animation-------------------------*/






/*--------------------------------------------------------------------------*/
/*------------------------------Collision Objects---------------------------*/
/*--------------------------------------------------------------------------*/




typedef struct {
	//For use with simple collision tests that are axis aligned like hit boxes, triggers, etc
	Vector3 min;
	Vector3 max;	
}BoundBox;

typedef struct 
{	//For use with collision tests on complex objects that are not axis aligned.
	Vector3 minA;
	Vector3 maxA;	
	Vector3 minB;
	Vector3 maxB;
}PolyBox;

typedef struct {
	//best for use for moving object collision tests 
	u8 enabled;
	Vector3 center;
	float radius;
}Sphere;


/*--------------------------------------------------------------------------*/
/*------------------------------Collision Mesh---------------------------*/
/*--------------------------------------------------------------------------*/

typedef struct {
	//Use the mesh collider to build a simple collision mesh to represent level geometry
	Vector3 vertex;
	u8 normal[3];	
}MeshCollider;

typedef struct {
	//Use the mesh collider to build a simple collision mesh to represent level geometry
	short tri[3];
}MeshColliderTri;

		typedef struct {
			MeshCollider *meshVtx; //the vtx points that make up each collision tri
			MeshColliderTri *meshTri; //the tris to check collision on
			u8	meshLength; //number of tris to check collision on
		}MeshColliderObj;

typedef struct {
	u8 collision;
	u8 triNum;
	float vDot;
	Vector3 vecSubtract;
	Vector3 lastCollisionPoint;
	Vector3 currentCollisionPoint;
    Vector3 nearestCollisionPoint;
}CollisionPoint;

// typedef struct {
    // CollisionPoint ground;
    // CollisionPoint wall;    
// }PlayerCollisionPoints;

typedef struct {
	u8 collision;
	u8 triNum;
	float vDot;
	Vector3 triNormal;
	Vector3 lastCollisionPoint;
	Vector3 currentCollisionPoint;
}Debug_Collision;



/*--------------------------------------------------------------------------*/
/*-----------------------------Trigger GameObjects--------------------------*/
/*--------------------------------------------------------------------------*/

typedef struct
{
	BoundBox collider;
	//u8 boolean;
	u8 isActive;
}TriggerBox;

typedef struct
{
	TriggerBox trigger;	
	//void (*function)();
}EnvLighting;

typedef struct
{
	TriggerBox trigger;	
	//void (*function)();
}TriggerGeometry;

typedef struct
{
	TriggerBox trigger;	
	void (*function)();
}EventTrigger;



	//-----------------------------Collision Hierarchy--------------------------
	//NOTE ON USE: This is a series of structs for the specific use of a collision hierarchy 
	//LevelCol

	
	
	
	typedef struct
	{
		u8 isActive;
		TriggerBox* trigBox; //holds pointers to trigger boxes
	}SectorTrigger; 
	
	typedef struct
	{
		u8 isActive;		
		TriggerBox* trigBox; //check this trigger box to see if player is located in this area		
        u8 LOD;
		//--------Sector Setup--------
		u8 sectorCount; //number of scenes in this level
        // SectorTrigger* sectorTrig; //points to sector trig box that holds 
        // TriggerBox* sectorTrigBox; //holds pointers to trigger boxes
        TriggerBox* sectorTrig; //holds pointers to trigger boxes
	}SceneTrigger; 
	
	typedef struct
	{
		u8 isActive; //set active "isActive = 1;" when player is in this area
		TriggerBox* trigBox; //check this trigger box to see if player is located in this area				
		//--------Scene Setup--------
		u8 sceneCount; //number of scenes in this level
		SceneTrigger* scenetrig; //holds pointers to trigger boxes
	}LevelTrigger; 
	
	typedef struct
	{		
		u8 levelCount; //number of levels/regions in the game. Each level will have an instance of the LevelTrigger class
		LevelTrigger* levelTrig; //holds pointers to trigger boxes
	}WorldTrigger; 








/*END---------------------------Trigger GameObjects--------------------------*/


/*END---------------------------Collision Objects---------------------------*/



/*
typedef struct boundBox testBoundBox; //Very basic collision good for death planes, triggers, item pickups etc. 
struct boundBox
{
	//For use with collision tests
	Vector3 min;
	Vector3 max;	
};
*/
/*
//Page 127 (88)
typedef struct Sphere testSphere; 
struct Sphere{
	Vector3 center;
	float radius;
};


typedef struct polygon testSlopedBox;
struct polyBox
{
	//For use with collision tests
	Vector3 minA;
	Vector3 maxA;	
	Vector3 minB;
	Vector3 maxB;
};*/

/*END----------------------Base Transforms and Objects----------------------*/

/*--------------------------------------------------------------------------*/
/*--------------------Definitions for transformFunctions.c------------------*/
/*--------------------------------------------------------------------------*/

extern void SetVector3(Vector3 *setVector, float x, float y, float z);
extern void SetVector2(Vector2 *setVector, float x, float y);
extern void SetAnimator(Animation *setAnim, void (*setAnimFunc)(u8), u8 defaultAnimID, u8 defaultAnimFrame);
extern void SetRigAnimator(AnimRig *setAnimRig, void (*setAnimFunc)(), u8 defaultAnimID, u8 defaultAnimFrame);
extern void VectorNormalize(Vector3 *vector);
extern float vectorDot(Vector3 vectorA, Vector3 vectorB);
extern Vector3 vectorCross(Vector3 vectorA, Vector3 vectorB);
extern float vectorScalarTriple(Vector3 vectorA, Vector3 vectorB, Vector3 vectorC);
extern u8 vectorCompare(Vector3 vectorA, Vector3 vectorB);
extern Vector3 vectorAdd(Vector3 vectorA, Vector3 vectorB);
extern Vector3 vectorSubtract(Vector3 vectorA, Vector3 vectorB);
extern Vector3 vectorScale(Vector3 vectorA, float scaler); // return a vector3

extern void VectorAdd(Vector3 *vectorSum, Vector3 vectorA, Vector3 vectorB);
extern void VectorScale(Vector3 *vectorToScale,float scaler); // pass a pointer to a vector 3 to scale it 

extern Vector3 RotateAround(Vector3 basePosition, Vector3 centerPoint, double angleInDegrees);
extern Vector3 RotatePlayerMovement(Vector3 basePosition, Vector3 centerPoint, double angleInDegrees);
extern Vector3 RotateCameraAround(Vector3 basePosition, Vector3 centerPoint, double angleInDegrees);
extern Vector3 Normalize(Vector3 *vectorToNormalize); //normalize vector to between -1 and 1
extern float vectorDistance(Vector3 pointA, Vector3 pointB);
extern int absDistance(Vector3 pointA, Vector3 pointB); //simplified distance calculation when precision is not needed
extern float vectorAngleTriangle(Vector3 pointA, Vector3 pointB,Vector3 pointC);
extern float angleFromVectors(Vector3 pointA, Vector3 pointB, Vector3 pointC);
extern float vectorAngle(Vector3 pointA, Vector3 pointB);
extern Vector3 Falling();

/*END-----------------Definitions for transformFunctions.c------------------*/

#endif