//#include "common.h"
//#include "objectDefs.h"
#include "playerDefs.h"
#include "player_player_Defs.h"


//audio test
#include "audio.h"

Player playerAvatar;
Player playerStaff;
u8 animFrame = 1; 

#define PLAYER_MAX_SPEED 450.0f
#define PLAYER_WATER_SPEED 275.0f
#define PLAYER_MID_SPEED 200.5f
#define PLAYER_MIN_SPEED 150.5f

#define PLAYER_MAX_JUMP_SPEED 300.0f

static void updatePlayerAnim();
void PlayerCollision();
void FireShot();
void UpdateShot();



   extern void player_body_PolyList( u8 animFrame );
   extern void player_hair_run_PolyList( u8 animFrame );
   extern void player_body_run_PolyList( u8 animFrame );
    extern void player_hair_combat_walk_PolyList( u8 animFrame );
    extern void player_body_combat_walk_PolyList( u8 animFrame );


float zIncline = 0.0f;
float lastZPosition = 0.0f;
u8 inWater = 0;
TriggerBox lvl00_water_triggers[2] =
{
    {3037, -2756, -373, 5228, -1715, -83, 0}, //cave1 water test
    {5353, -4828, -211, 7346, -2816, -98, 0} //cave2 water test
};

void PlayerDeathPlanes();
void PlayerSpecialCollision();
void VelocityAdjust();

void PlayerJumpCharge();
void PlayerJumpV2();
void ApplyGravity();
void FireShotv2();
void SummonSpirit();
void UpdateShotv2();
void CheckEnemyTargets();


float gravity = 12.0f;
float maxGravity = 23.0f;



//NOTE ----- Definitions for player's current animation (animID)
        //playerAvatar.animRig.animID = 
            #define ANIM_PLAYER_RUN 0
            #define ANIM_PLAYER_RUN_SHOOT 1
            #define ANIM_PLAYER_SHOOT 2
            #define ANIM_PLAYER_SHOOTJUMP 3
            #define ANIM_PLAYER_JUMP 4

//NOTE ----- Definitions for player state
        //playerAvatar.state.movement =
            #define STATE_PLAYERMOVE_IDLE 0
            #define STATE_PLAYERMOVE_WALK 1
            #define STATE_PLAYERMOVE_RUN 2
            #define STATE_PLAYERMOVE_SLIDE 3
            #define STATE_PLAYERMOVE_DODGE 4
            #define STATE_PLAYERMOVE_SIT 5
        //playerAvatar.state.jumping  = STATE_PLAYERJUMP_JUMP
            #define STATE_PLAYERJUMP_GROUND 0
            #define STATE_PLAYERJUMP_FALL 1
            #define STATE_PLAYERJUMP_BEGINJUMP 2
            #define STATE_PLAYERJUMP_JUMP 3
            #define STATE_PLAYERJUMP_DESCENDJUMP 4
            #define STATE_PLAYERJUMP_WALLJUMP 5
            #define STATE_PLAYERJUMP_DOUBLEJUMP 6                
        //playerAvatar.state.actions  =
            #define STATE_PLAYERACT_NONE 0
            //#define STATE_PLAYERACT_AIM 1
            #define STATE_PLAYERACT_BEGINSHOOT 2
            #define STATE_COMBAT 1
            #define STATE_INTERACT 2
            #define STATE_PLAYERACT_SHOOT 3
            #define STATE_PLAYERACT_INTERACT 4
            #define STATE_PLAYERACT_PUSH 5 
            
//NOTE ----- Definitions for player and their interaction options in different gameplay states            
            // #define STATE_EXPLORE 0
            // #define STATE_COMBAT 1
            // #define STATE_INTERACT 2

EnemyTargets enemyTargets;

EnemyObject emptyTargetObject;

extern int GetFPS();

float minHeight = -300.0f;

//NOTE 12022021 ----- 
//          - remove 'animFrame' from each object in blender file
//          - create new texture for waterfall in courtyard
//          - Correct export of basic 4b pre-built texture to include lighting type commands
//          - Re-export all leg parts so that they're not stuck in the ground or off center
//          - FIX GBI COMMANDS so that they always print updated Geometry commands 


//have camera position itself in between the player and the targeted enemy (Maybe...)
//have player strafe around the enemy? (Maybe...)
//Return to work on enemy AI



//NOTE ----- Struct used 
    u8 firstSpawn = 1;
    //playerAvatar.lastSpawnPoint = {}

void initPlayer()
{
	u8 tempCounter;
	SetVector3(&emptyTargetObject.obj.pos, 0,0,0);
	SetVector3(&emptyTargetObject.obj.rot, 0,0,0);
	SetVector3(&emptyTargetObject.obj.scl, 1,1,1);
	
    
    
    playerAvatar.state.movement = STATE_PLAYERMOVE_IDLE;
    playerAvatar.state.jumping = STATE_PLAYERJUMP_GROUND;
    playerAvatar.state.actions = STATE_PLAYERACT_NONE;
    
	for(tempCounter = 0; tempCounter < 4; tempCounter++)
	{
		enemyTargets.enemyObjects[tempCounter] = &emptyTargetObject.obj;
	}
	
	enemyTargets.activeTarget = enemyTargets.enemyObjects[2];

    if(firstSpawn == 1){
       // SetVector3(&playerAvatar.obj.pos, -2168, -2668,361); //SPAWN NEAR Bonfire
       SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
        playerAvatar.state.movement = STATE_PLAYERMOVE_SIT;
        //STATE_PLAYERMOVE_SIT = 
        //SetVector3(&playerAvatar.lastSpawnPoint, -8960, 6597, 1100); //SPAWN NEAR BRIDGE
        //SetVector3(&playerAvatar.lastSpawnPoint, -14296, 6820, 775); //SPAWN NEAR ENEMIES
        //SetVector3(&playerAvatar.lastSpawnPoint, -2168, -2668,361); //SPAWN NEAR Bonfire
        firstSpawn = 0;
    }
    
    SetVector3(&playerAvatar.obj.pos, playerAvatar.lastSpawnPoint.x, playerAvatar.lastSpawnPoint.y, playerAvatar.lastSpawnPoint.z); //SPAWN NEAR Bonfire
        
	SetVector3(&playerAvatar.obj.rot, 0,0,0); 
	SetVector3(&playerAvatar.obj.scl, 1,1,1); 
	SetVector3(&playerAvatar.rigidBody.velocity, 0,0,0); 
	SetVector3(&playerAvatar.playerNormal, 0,-1,0); 
	SetVector3(&playerAvatar.rigidBody.centerMass, 0,0,0); 
	playerAvatar.rigidBody.speed = 3.0f;	
	playerAvatar.rigidBody.gravityStrength = -0.25f;

    
    
    
    playerAvatar.hp = 8;

     
      
    
	SetRigAnimator(&playerAvatar.animRig, &DrawPlayerModel, 0,0);
		
	playerAvatar.sphereCollider.enabled = 1;	
	playerAvatar.sphereCollider.radius = 25.0f;
	SetVector3(&playerAvatar.sphereCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + (playerAvatar.sphereCollider.radius));
	SetVector3(&playerAvatar.rigidBody.nextPos, playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z);

    
	
    
    playerAvatar.wallCollider.enabled = 1;	
	playerAvatar.wallCollider.radius = 20.0f;
	SetVector3(&playerAvatar.wallCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + 10.0f + (playerAvatar.wallCollider.radius));
    
   playerAvatar.headCollider.enabled = 1;	
	playerAvatar.headCollider.radius = 30.0f;
	SetVector3(&playerAvatar.headCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + 150.0f + (playerAvatar.headCollider.radius));
    
	//defaultRig();	

	playerAvatar.collision.groundPoint.collision = groundMesh_CollisionCheck(&playerAvatar.sphereCollider, &scene_Courtyard);
	//playerAvatar.collision.groundPoint.collision = AgainstGround(&playerAvatar.sphereCollider, &playerAvatar.collision.groundPoint.currentCollisionPoint);

	
}

u8 currentFrame = 0;
u8 frameCounter = 0;
//Vector2 tempVectors = {0,0}; //no longer used

/*--------------------------------------------------------------------------*/
/*---------------------------Player Control Functions-----------------------*/
/*--------------------------------------------------------------------------*/

void PlayerMovement();

Vector2 userInput_Player; 
Vector3 playerTempPos;
Vector3 lastFrameVelocity = {0,0,0};
Vector3 tempVelocity = {0,0,0};

u8 playerState = 0; //TO DO: temporarily used for "in motion" but will flesh this out with a state machine later
//0 = notmoving, 1 = run, 2 = walk, 3 = jump
float shootingCooldownTimer = 0.0f;
int lowerArmTimerStart = 0; //after 3 seconds with no input, lower arm
int lowerArmTimer = 0;  //after 3 seconds with no input, lower arm
int lowerArm = 1; //after 1 second with no input, lower arm

u8 shotCycle = 0;
ProjectileObject projectileSpawns[8]; //maximum of 4 projectiles from player at a time
u8 maxShot = 8;
u8 recentShot = 0; //used for debugging
u8 shotCounter = 0; //used for iterating array



void updatePlayer(Dynamic* dp)
{	
	userInput_Player = Player_Input(); //NOTE: calls Player_Input() function in controller.c which returns the X, Y inputs in a Vector2. The Player_Input function will grab values based on the controller settings set by the player
	
    SetVector3(&tempVelocity, 0,0,0);
    
	//if(playerAvatar.state.jumping != STATE_PLAYERJUMP_FALL || playerAvatar.state.jumping != STATE_PLAYERJUMP_JUMP ) //IF player is not jumping or falling then the player needs to re-set each frame
	if(playerAvatar.state.jumping < STATE_PLAYERJUMP_FALL)	
        SetVector3(&playerAvatar.rigidBody.velocity, 0,0,playerAvatar.rigidBody.velocity.z);  //NOTE: resets the playerAvatar rigidBody velocity to 0,0,0 each frame

	playerAvatar.collision.wallPoint.collision = 0; 

	CheckEnemyTargets();
	//FireShotv2();
    
	//UpdateShotv2();
    
    
    
    if(playerAvatar.state.movement != STATE_PLAYERMOVE_SIT)
    {
        SummonSpirit();
    }
    
    if(playerAvatar.state.movement == STATE_PLAYERMOVE_SIT)
    {
        DrawUI(2);
        
        if(ContTriger[0].button & START_BUTTON)
            playerAvatar.state.movement = STATE_PLAYERMOVE_IDLE;
    }

    else if(playerAvatar.state.actions != STATE_COMBAT ) {   

           // if (playerAvatar.state.actions != STATE_PLAYERMOVE_SIT) 
    
            
    

    
            
                if(playerAvatar.state.jumping >= STATE_PLAYERJUMP_FALL) //If falling or jumping in any way
                {

                }
                
                else
                {        
                    playerAvatar.rigidBody.velocity.z = -0.5f;
                }

           //NOTE: Direction normal is calculated to keep the current direction of the player even after the player stops inputing movement. 
           //This is used for calculations such as projectile velocity when standing still. Only update each time the player's direction changes. 
               if((userInput_Player.y >= 0.1f || userInput_Player.y <= -0.1f || userInput_Player.x >= 0.1f || userInput_Player.x <= -0.1f) && (playerAvatar.state.jumping < STATE_PLAYERJUMP_FALL ))
               {
                 playerAvatar.directionNormal.x = playerAvatar.playerNormal.x;        
                 playerAvatar.directionNormal.y = playerAvatar.playerNormal.y;
               }
               
               
               
        //----- NOTE ----- Adjust lerp to adjust how the rotation is calculated... 
        //---------------- If crossing the 360* divide, compare the distance traveled with a rotation to go the shortest distance and not potentially rotate 300* instead of 50*!
           // playerAvatar.obj.rot.z = lerp( playerAvatar.obj.rot.z, playerAvatar.rotation, 0.33f );
            playerAvatar.obj.rot.z = playerAvatar.rotation;
            
            
            //if(userInput_Player.y >= 0.1f || userInput_Player.y <= -0.1f || userInput_Player.x >= 0.1f || userInput_Player.x <= -0.1f || playerAvatar.isFalling == 1 || playerAvatar.isJumping == 1)
            if(userInput_Player.y >= 0.1f || userInput_Player.y <= -0.1f || userInput_Player.x >= 0.1f || userInput_Player.x <= -0.1f || playerAvatar.state.jumping >= STATE_PLAYERJUMP_FALL )
            {		
                //NOTE: 	userInput_Player.x and .y are determined by player sensitivity settings. 
                //NOTE:  If the inputs do not meet the minimum player sensitivity, the userInput_Player.x and userInput_Player.y will be set to 0.0f in the Player_Input function. 
                            //NOTE: Replace later with smoother motion  
                
                
                //playerAvatar.obj.rot.z
                
                
        // ----- NOTE ----- Rotates player avatar and adjusts the object rotation         
                //TO DO NOTE: Adjust player rotation to make it smoother when movign around and when you begin moving again after a jump

                if(playerAvatar.state.jumping <= STATE_PLAYERJUMP_GROUND )
                {
                    playerAvatar.rotation = atan2(userInput_Player.y, userInput_Player.x); //NOTE: get angle with atan2 and x, y inputs
                    playerAvatar.rotation = (playerAvatar.rotation * 57.29577); //NOTE: convert angle from radians to degrees 
                    //playerAvatar.rotation += 180.0f;
                    playerAvatar.rotation += 90.0f;
                    playerAvatar.rotation = playerAvatar.rotation + mainCamera.cameraOrbit;
                    if(playerAvatar.rotation >360.0f)
                                playerAvatar.rotation = playerAvatar.rotation - 360.0f;				
                }

                PlayerSpecialCollision();
                
                if(inWater == 0)
                {
                    if(abs(userInput_Player.y) + abs(userInput_Player.x) > 60.0f)	
                    {
                        playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, PLAYER_MAX_SPEED, 0.1f ); //increase speed from current speed to max speed if x+y inputs pass a threshold
                        playerAvatar.state.movement = STATE_PLAYERMOVE_RUN;
                        
                        if(zIncline >= 5.0f)
                            playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, PLAYER_MID_SPEED, 0.6f ); //increase speed from current speed to max speed if x+y inputs pass a threshold

                        else if(zIncline >= 3.0f)                
                            playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, PLAYER_WATER_SPEED, 0.15f ); //increase speed from current speed to max speed if x+y inputs pass a threshold

                    }
                    else
                    {
                        playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, PLAYER_MIN_SPEED, 0.1f ); //increase speed from current speed to max speed if x+y inputs remain below a "max speed" threshold
                        playerAvatar.state.movement = STATE_PLAYERMOVE_WALK;

                    }	
                }
                
                else
                {
                        playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, PLAYER_WATER_SPEED, 0.1f ); //increase speed from current speed to max speed if x+y inputs pass a threshold
                        playerAvatar.state.movement = STATE_PLAYERMOVE_RUN;
                }
                
                VelocityAdjust();
                

                
                //playerAvatar.obj.pos = playerAvatar.rigidBody.currentPos; //if no collision is found, apply to player character as currentPosition

            //NOTE: calculate next movement and store it in playerAvatar.rigidBody.nextPos
            
                //if(playerAvatar.isFalling != 1)
                PlayerMovement();
                PlayerJumpV2();
                
                playerAvatar.obj.pos = playerAvatar.rigidBody.currentPos; //if no collision is found, apply to player character as currentPosition
                
                //Add jump and movement velocity:
                VectorAdd(&playerAvatar.rigidBody.nextPos, playerAvatar.rigidBody.nextPos, playerAvatar.rigidBody.velocity );	
                playerAvatar.rigidBody.currentPos = playerAvatar.rigidBody.nextPos;
                
            //NOTE: calculate the updated collider position based off of playerAvatar.rigidBody.nextPos but offset on the Z-axis by the radius of the sphere
                SetVector3(&playerAvatar.sphereCollider.center, 	playerAvatar.rigidBody.nextPos.x,playerAvatar.rigidBody.nextPos.y,playerAvatar.rigidBody.nextPos.z + (playerAvatar.sphereCollider.radius));
                SetVector3(&playerAvatar.wallCollider.center, 	playerAvatar.rigidBody.nextPos.x,playerAvatar.rigidBody.nextPos.y,playerAvatar.rigidBody.nextPos.z + 10.0f +(playerAvatar.wallCollider.radius));
                SetVector3(&playerAvatar.headCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + 50.0f + (playerAvatar.headCollider.radius));

            //NOTE: After calculating the next player position based on velocity, check to see if the player is colliding with the ground plane
                //and check to see what the players current Z axis should be based on the value of the nearest point on the ground plane.

                
                
                PlayerGroundCollision(dp);	
                
            //NOTE: check to see if the next movement causes a collision and update playerAvatar.rigidBody.nextPos if so
                PlayerCollision(dp); 
                        
            //NOTE: set playerAvatar.rigidBody.currentPos as playerAvatar.rigidBody.nextPos for updating player position and collision checks in the next frame
                
            //NOTE: after horizontal movement is done, check for vertical movement (gravity) 
            //and collision, then update playerAvatar.rigidBody.currentPos.z
            // - RAY/LINE COLLISION from center of player to a tri. 
            // - The ray/line will go straight down on the z axis only

                playerAvatar.playerNormal = playerAvatar.rigidBody.velocity;

                VectorNormalize(&playerAvatar.playerNormal);	
                
                PlayerDeathPlanes(); //NOTE: See if player has fallen out of bounds
                
                if(playerAvatar.rigidBody.speed > 0.01f )
                    playerAvatar.rigidBody.currentPos = playerAvatar.rigidBody.nextPos;

            }

            
            else
            {	
            
                playerAvatar.obj.pos = playerAvatar.rigidBody.currentPos; //if no collision is found, apply to player character as currentPosition

                playerAvatar.rigidBody.speed = lerp(playerAvatar.rigidBody.speed, 0.0f, 0.4f ); //slowd own to a stop
                
                VectorAdd(&playerAvatar.rigidBody.nextPos, playerAvatar.rigidBody.nextPos, playerAvatar.rigidBody.velocity );				

                playerAvatar.rigidBody.currentPos = playerAvatar.rigidBody.nextPos;

                SetVector3(&playerAvatar.sphereCollider.center, 	playerAvatar.rigidBody.nextPos.x,playerAvatar.rigidBody.nextPos.y,playerAvatar.rigidBody.nextPos.z + (playerAvatar.sphereCollider.radius));
                SetVector3(&playerAvatar.wallCollider.center, 	playerAvatar.rigidBody.nextPos.x,playerAvatar.rigidBody.nextPos.y,playerAvatar.rigidBody.nextPos.z + 10.0f +(playerAvatar.wallCollider.radius));
                SetVector3(&playerAvatar.headCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + 50.0f + (playerAvatar.headCollider.radius));
         
                if(playerAvatar.rigidBody.speed < PLAYER_MIN_SPEED)
                { 	
                    //if(playerAvatar.collision.groundPoint.collision == 0)
                    PlayerGroundCollision(dp);	
                    PlayerCollision(dp);	
                    
                    if(playerAvatar.collision.groundPoint.collision == 1)
                    {
                        playerAvatar.state.movement = STATE_PLAYERMOVE_IDLE;			
                        playerAvatar.state.jumping = STATE_PLAYERJUMP_GROUND;    
                    }
                }

                
                else
                {
                    PlayerGroundCollision(dp);	
                    PlayerCollision(dp); //check to see if this movement causes a collision
                    
                    if(playerAvatar.collision.groundPoint.collision == 1)
                    {
                        playerAvatar.state.movement = STATE_PLAYERMOVE_RUN;			
                        //playerAvatar.state.jumping = STATE_PLAYERJUMP_GROUND;
                    }			
                }		
                
                PlayerJumpV2();
                
                playerAvatar.playerNormal = playerAvatar.rigidBody.velocity;
                VectorNormalize(&playerAvatar.playerNormal);	
                
                
                PlayerDeathPlanes(); //NOTE: See if player has fallen out of bounds

                
                if(playerAvatar.state.jumping >= STATE_PLAYERJUMP_FALL || playerAvatar.rigidBody.speed > 0.01f )
                    playerAvatar.rigidBody.currentPos = playerAvatar.rigidBody.nextPos;

            }
    }
    
    	
        
    
        updatePlayerAnim(); //NOTE: Update current animation frame based on player inputs from the previous frame and current frame of animation
        lastFrameVelocity = playerAvatar.rigidBody.velocity;
        
        
        
        
}


		
int fireRate = 2; //time that must pass before another shot was fired
int lastShotTime = 0; //last time a shot was fired
u8 shootAnimTrig = 0;
u8 active = 0;

void CheckEnemyTargets()
{
	return;
		if(ContTriger[0].trigger & R_TRIG)
		{ //NOTE: when the player taps the R button it cycles between current active nearby enemies			
		
		
				if(enemyTargets.isActive == 0)
				{					 
					//GetActiveSpikey(&enemyTargets);
					//compare distance of enemies and target the closest one. For a test I'll just be targeting a specific one
					enemyTargets.activeTarget = enemyTargets.enemyObjects[active];
					ui_target_init(&enemyTargets);
					enemyTargets.isActive = 1;
				}
				
				else if(enemyTargets.isActive == 1)
				{				
					if(active < 3)					
						active++;					
					else
					{
						active = 0;
						enemyTargets.isActive = 0;
					}
						
					enemyTargets.activeTarget = enemyTargets.enemyObjects[active];
					ui_target_init(&enemyTargets);
					
				}
			
		}	
		

}


void SummonSpirit(){
    
    if(ContTriger[0].button & Z_TRIG && playerAvatar.collision.groundPoint.collision == 1)
    {
        playerAvatar.state.actions =  STATE_COMBAT;
        playerAvatar.state.movement = STATE_PLAYERMOVE_IDLE;
    }
    
    else
        playerAvatar.state.actions = STATE_PLAYERACT_NONE;
    

}



void FireShotv2()
{	//update to include a fire rate based on time

	if(ContTriger[0].button & Z_TRIG)
	{		
		
        
        if (playerAvatar.state.actions != STATE_PLAYERACT_BEGINSHOOT && playerAvatar.state.actions != STATE_PLAYERACT_SHOOT)
            playerAvatar.state.actions = STATE_PLAYERACT_BEGINSHOOT;
            //playerAvatar.playerShooting = 1;
		
        
        lowerArmTimerStart = GetSeconds();
		
		if(abs(lastShotTime - GetFPS_6()) > fireRate)
		{		
			projectileSpawns[shotCycle].isActive = 1;
		
			lastShotTime = GetFPS_6();			
			spawn_player_shot(&projectileSpawns[shotCycle], enemyTargets.activeTarget);	
			//play blaster sound
			//PlaySfxVolume(0, 96);
			
			recentShot = shotCycle; 
			
			if(shotCycle >= maxShot-1)	
				shotCycle = 0;				
			else
				shotCycle++;			
            
            shootAnimTrig = 1;
		}
			//projectileSpawns[shotCycle]
	}
	
		
}	


void UpdateShotv2()	
{
	//if(playerAvatar.playerShooting == 1)
    if (playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT || playerAvatar.state.actions == STATE_PLAYERACT_SHOOT)
	{		
		lowerArmTimer = GetSeconds();

		if(abs(lowerArmTimer - lowerArmTimerStart) > lowerArm)
		{	//reset arm position        
            playerAvatar.state.actions = STATE_PLAYERACT_NONE;
            lowerArmTimerStart = 0; 
		}			
	}
	
	for(shotCounter = 0; shotCounter < maxShot; shotCounter ++)
	{
		update_player_shot(&projectileSpawns[shotCounter]);
		
	}
	
	Debug_MiscVar[0] = projectileSpawns[recentShot].obj.pos;
	Debug_MiscVar[1] = projectileSpawns[recentShot].obj.rot;
	Debug_MiscVar[2] = projectileSpawns[recentShot].obj.scl;
	Debug_MiscVar[3] = projectileSpawns[recentShot].obj.scl;
}
		
void PlayerMovement()
{
	Vector3 tempVelocity = {0,0,0};
	

   // if(playerAvatar.isFalling != 1)
    if(playerAvatar.state.jumping <= STATE_PLAYERJUMP_GROUND)
    {
        SetVector3(&playerAvatar.rigidBody.velocity, userInput_Player.x, userInput_Player.y, playerAvatar.rigidBody.velocity.z);	//begins velocity calculation based on userInput_player set in updatePlayer function
        playerAvatar.rigidBody.velocity = RotateAround(playerAvatar.rigidBody.velocity, playerAvatar.rigidBody.centerMass, mainCamera.cameraOrbit);
    	VectorNormalize(&playerAvatar.rigidBody.velocity);    
        VectorScale(&playerAvatar.rigidBody.velocity, (playerAvatar.rigidBody.speed * (float)GetDeltaTime()));
    }
	
}

void PlayerCollision(Dynamic* dp)
{
	u8 tempCollisionBool = 0;			
    u8 tempHeadCollisionBool = 0;			
	//TO DO NOTE: Add a script to cycle through all nearby collision objects

	//TO DO NOTE: test collision against different objects
	tempCollisionBool = wallMesh_CollisionCheck(&playerAvatar.wallCollider, &scene_Courtyard);	
    //tempHeadCollisionBool = wallMesh_CollisionCheck(&playerAvatar.headCollider, &scene_Courtyard);	
	//	SetVector3(&playerAvatar.wallCollider.center, 	playerAvatar.rigidBody.nextPos.x,playerAvatar.rigidBody.nextPos.y,playerAvatar.rigidBody.nextPos.z + 10.0f +(playerAvatar.wallCollider.radius));
	//NOTE: If tempCollisionBool is triggered, set the variable playerAvatar.collision.wallPoint.collision as true
    
    
	if(tempCollisionBool == 1)
		//playerAvatar.collision.wallPoint.collision = tempCollisionBool; 
        playerAvatar.collision.wallPoint.collision = 1;
            
    // if(tempHeadCollisionBool == 1)
    // {
        // playerAvatar.collision.wallPoint.collision = 1;
        // playerAvatar.rigidBody.velocity.z = -1; 
        // Debug_MiscVar[1].z = 1;
    // }
}


void PlayerGroundCollision(Dynamic* dp)
{
    
    //if(playerAvatar.state.jumping == STATE_PLAYERJUMP_FALL && gravity >= 20.0f){
    if(playerAvatar.state.jumping == STATE_PLAYERJUMP_FALL && playerAvatar.rigidBody.velocity.z <= -20.0f){
       // playerAvatar.sphereCollider.radius = (gravity + 1.0f);
        playerAvatar.sphereCollider.radius = lerp(playerAvatar.sphereCollider.radius, maxGravity, 0.1f ); 
    }
    
    else if (playerAvatar.rigidBody.velocity.x >= 2.0f || playerAvatar.rigidBody.velocity.y >= 2.0f || playerAvatar.rigidBody.velocity.x <= -2.0f || playerAvatar.rigidBody.velocity.y <= -2.0f){
        playerAvatar.sphereCollider.radius = 16.0f;
        //SetVector3(&playerAvatar.sphereCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + (playerAvatar.sphereCollider.radius));
    }
    
    else{
        playerAvatar.sphereCollider.radius = 11.0f;
        // SetVector3(&playerAvatar.sphereCollider.center, 		playerAvatar.obj.pos.x,playerAvatar.obj.pos.y,playerAvatar.obj.pos.z + (playerAvatar.sphereCollider.radius));
    }
    
	playerAvatar.collision.groundPoint.collision = groundMesh_CollisionCheck(&playerAvatar.sphereCollider, &scene_Courtyard);
}


void PlayerDeathPlanes()
{
    if(playerAvatar.rigidBody.nextPos.z <= minHeight)
        initPlayer();
        //SetVector3(&playerAvatar.rigidBody.nextPos, 3355,-3000,5); //SPAWN NEAR DOOR
}


// u8 inWater = 0;
// TriggerBox lvl00_water_triggers[2] =
// {
    // {3037, -2756, -1906, 5228, -1715, -421, 0}, //cave1 water test
    // {5353, -4828, -1078, 7346, -2816, -505, 0} //cave2 water test
// }

//NOTE ----- interacting with some objects such as water will slow the player down. Check for collisions and then apply a velocity adjustment when needed
void PlayerSpecialCollision()
{
    //lvl00_SceneTrig[2].isActive += triggerBoundBox(&playerAvatar.obj.pos, &lvl00_SceneTrig[2].trigBox[0]); //NOTE: increase trigger count if player position is within the boundary box 0 of this scene...
    inWater = 0;
    inWater +=  triggerBoundBox(&playerAvatar.obj.pos, &lvl00_water_triggers[0]);
    inWater +=  triggerBoundBox(&playerAvatar.obj.pos, &lvl00_water_triggers[1]);
    
   // Debug_MiscVar[1].z = inWater;
}



void VelocityAdjust()
{

    //Vector3 currentPos; 
	//Vector3 nextPos;
    zIncline = 0.0f;
    zIncline = playerAvatar.rigidBody.nextPos.z - lastZPosition;
    //Debug_MiscVar[1].z = zIncline;
    
    lastZPosition = playerAvatar.rigidBody.nextPos.z;
    
    
}


float maxJump = 8;
float jumpingForce = 60.0f;
float resetJumpingForce = 60.0f;
float jumpingForceMultiplyer = 10.0f;
float resetJumpingMultiplyer = 10.0f;
u8 canJump = 1;
u8 jumpTrigger = 0;
float startingJumpZ;
u8 counter;
u8 fallCounter;

u8 groundCheckCounter = 0; //if player is not grounded for more than a few frames, have them begin to fall.

u8 chargeLastUpdate;

u8 finalChargedJump; 
u8 chargeJump; //The current charge of the jump force
u8 chargeJumpMIN = 3; //The MINIMUM charge of the jump force
u8 chargeJumpMAX = 9; //The MAXIMUM charge of the jump force
u8 jumpTimer = 0;
u8 chargeTimer = 0;
u8 canBeginJump = 1;
u8 pressB = 0;
u8 grounded = 0;

u8 gravityLastUpdate = 0;
u8 gravityDifference = 0;

float initialJumpVelocity = 14.0f;

float maxJumpHeight = 8.0f;
float maxJumpTime = 1.0f;
float groundedGravity = 0.5f;




/*
        //playerAvatar.state.jumping  = STATE_PLAYERJUMP_JUMP
            #define STATE_PLAYERJUMP_GROUND 0
            #define STATE_PLAYERJUMP_FALL 1
            #define STATE_PLAYERJUMP_BEGINJUMP 2
            #define STATE_PLAYERJUMP_JUMP 3
            #define STATE_PLAYERJUMP_WALLJUMP 4
            #define STATE_PLAYERJUMP_DOUBLEJUMP 5  


*/


void PlayerJumpCharge()
{
    //Get player input. How long the jump button is held determines the initial force.
    u8 chargeUpdateRate = GetFPS_30();
    pressB = 0;
    
    //NOTE: See if player can currently jump while on the ground    
    if(ContTriger[0].trigger & A_BUTTON && playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND)
	{
        //playerAvatar.state.jumping = STATE_PLAYERJUMP_BEGINJUMP;
        playerAvatar.sphereCollider.enabled = 0;
        jumpTimer = 0;
        chargeJump = chargeJumpMIN;
        finalChargedJump = 0;         
        gravity = 15.0f;
        //gravity = 9.8f;
        
        if( playerAvatar.state.jumping != STATE_PLAYERJUMP_BEGINJUMP )
        {
                playerAvatar.state.jumping = STATE_PLAYERJUMP_BEGINJUMP;
                playerAvatar.animRig.animFrame = 0;
                
        }
                
       // Debug_MiscVar[1].z = 1;


    }

    
    if(chargeLastUpdate != chargeUpdateRate)
    {
        if (ContTriger[0].button & A_BUTTON && finalChargedJump == 0)
        {          
            if(chargeJump < chargeJumpMAX)
                chargeJump += 1.5;
                
            if(chargeJump > 1 && chargeJump < chargeJumpMAX)
                jumpTimer ++; //Temporary test to compare number of frames on console and emulator. This number should be appx the same on console and emulator  

            else
                finalChargedJump = chargeJump;   
                
            if( playerAvatar.state.jumping != STATE_PLAYERJUMP_BEGINJUMP )
                playerAvatar.state.jumping = STATE_PLAYERJUMP_BEGINJUMP;    
        }
        
        else if( finalChargedJump == 0)
            {
                finalChargedJump = chargeJump;
                //if( playerAvatar.state.jumping != STATE_PLAYERJUMP_BEGINJUMP )
                //    playerAvatar.state.jumping = STATE_PLAYERJUMP_BEGINJUMP;  
            }

        chargeLastUpdate = chargeUpdateRate;           
    }
    
}


float zVelocityErrorCheck = 0.0f;
u8 zVelocityErrorCounter = 0;
float FPSAdjust = 1;
u8 canWallJump = 1;



void PlayerWallJump()
{
    if(playerAvatar.collision.wallPoint.collision == 1 && canWallJump == 1)
    {
        //NOTE reverse player direction and give a secondary jump boost
    }
}

void PlayerJumpV2()
{   


    if(playerAvatar.collision.groundPoint.collision == 1 )
	{
        counter = 0;
        //canWallJump = 0;
    }

   PlayerJumpCharge();  

    if(playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND)
        gravity = 12.0f;
   
    if(playerAvatar.state.jumping == STATE_PLAYERJUMP_JUMP || playerAvatar.state.jumping == STATE_PLAYERJUMP_FALL)
    {
    
         PlayerWallJump();
         //canWallJump = 1;
         
         
         
         gravity = lerp(gravity, maxGravity, 0.3f ); //increase speed from current speed to max speed if x+y inputs pass a threshold 
    }
    
    if(playerAvatar.collision.wallPoint.collision == 1 && (playerAvatar.state.jumping == STATE_PLAYERJUMP_JUMP || playerAvatar.state.jumping == STATE_PLAYERJUMP_BEGINJUMP ))
    {
        playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
    }
    
    else
    {
        if(playerAvatar.state.jumping == STATE_PLAYERJUMP_BEGINJUMP)
        {
            
            
            if(playerAvatar.sphereCollider.enabled == 1 && counter == 0) //should only trigger on first frame of jump button press
            {
                playerAvatar.sphereCollider.enabled = 0;
                playerAvatar.animRig.animFrame = 0;
            }
            
            //counter = playerAvatar.animRig.animFrame;
            
            
            
            
            
            
            
            
            
            if(counter >= 8)
            {
                playerAvatar.state.jumping = STATE_PLAYERJUMP_JUMP;
            }    

            else if(playerAvatar.state.jumping == STATE_PLAYERJUMP_BEGINJUMP)
            {
                playerAvatar.sphereCollider.enabled = 0;
                playerAvatar.rigidBody.velocity.z = lerp(playerAvatar.rigidBody.velocity.z, chargeJump, (5*adjustAnimRate) * GetDeltaTime() ); //increase speed from current speed to max speed if x+y inputs pass a threshold   
            }            
            
            else if(playerAvatar.state.jumping >= STATE_PLAYERJUMP_BEGINJUMP && playerAvatar.collision.groundPoint.collision == 0 && playerAvatar.rigidBody.nextPos.z >= minHeight)
            {
                 playerAvatar.rigidBody.velocity.z -= (gravity * adjustAnimRate) * GetDeltaTime();
                 
                 if( playerAvatar.rigidBody.velocity.z <= 0)
                    playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
            }
            
            else if(playerAvatar.collision.groundPoint.collision == 1 && playerAvatar.rigidBody.velocity.z <= 0.0f )
            {
                playerAvatar.sphereCollider.enabled = 1;
                playerAvatar.rigidBody.velocity.z -= (gravity * adjustAnimRate) * GetDeltaTime();
                playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
            }

        }
        
        
        
        
        
        
        
        
        
        
        
        
        //NOTE -----: NEW VERSION BEGIN HERE 
        
        counter = playerAvatar.animRig.animFrame;
        
        if(playerAvatar.state.jumping == STATE_PLAYERJUMP_JUMP)
        {
            playerAvatar.sphereCollider.enabled = 1;
            
            if(playerAvatar.collision.groundPoint.collision == 0 && playerAvatar.rigidBody.nextPos.z >= minHeight )
            {
                //playerAvatar.rigidBody.velocity.z -= (9.8f *FPSAdjust) * GetDeltaTime();
                playerAvatar.rigidBody.velocity.z -= (gravity * adjustAnimRate) * GetDeltaTime();
                //playerAvatar.rigidBody.velocity.z -= 9.8f * GetDeltaTime();
                //playerAvatar.isFalling = 1;
                playerAvatar.state.jumping = STATE_PLAYERJUMP_JUMP;
                //counter++;
            }
            
            else if (playerAvatar.collision.groundPoint.collision == 1 || playerAvatar.rigidBody.velocity.z <= 0)
            {			
                canJump = 1;
                //playerState = 1;
                playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
                playerAvatar.sphereCollider.enabled = 1;
                //playerAvatar.rigidBody.velocity.z = -0.5f;
                counter = 0;
                canBeginJump = 1;
                
    //NOTE ----- Switch animation back to running...
                //if( playerAvatar.animRig.animID != ANIM_PLAYER_RUN)
                    //playerAvatar.animRig.animID = ANIM_PLAYER_RUN;
            }
            
            if(playerAvatar.rigidBody.velocity.z <= 0.0f)
                playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
            
            
        }
        
        
        else if (playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND || playerAvatar.state.jumping == STATE_PLAYERJUMP_FALL)
        {
        
            if(playerAvatar.collision.groundPoint.collision == 0 && playerAvatar.rigidBody.nextPos.z >= minHeight)
            {
                // fallCounter++;
                // if( fallCounter >= 2 )
                    // {                
                     // playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
                     // playerAvatar.rigidBody.velocity.z -= (gravity * adjustAnimRate) * GetDeltaTime();
                    // }
                    
                    playerAvatar.state.jumping = STATE_PLAYERJUMP_FALL;
                    playerAvatar.rigidBody.velocity.z -= (gravity * adjustAnimRate) * GetDeltaTime();

            }
            
            else if(playerAvatar.collision.groundPoint.collision == 1 && playerAvatar.rigidBody.nextPos.z >= minHeight)
            {   
                fallCounter = 0;
                playerAvatar.state.jumping = STATE_PLAYERJUMP_GROUND;
            }
            
            if( playerAvatar.rigidBody.nextPos.z < minHeight)
            {
                fallCounter = 0;
                playerAvatar.state.jumping = STATE_PLAYERJUMP_GROUND;
                playerAvatar.rigidBody.nextPos.z = minHeight;
                playerAvatar.rigidBody.velocity.z = 0.0f;
                canBeginJump = 1;
            }
        }
    }
}


void ApplyGravity()
{

}

void defaultRig()
{
    // playerAvatar.animRig.animID = ANIM_PLAYER_RUN;

	// //playerAvatar.animRig.animFrame = 12;
	// player_head_UpdateFrame();
	// player_chest_UpdateFrame();
	// player_right_arm_UpdateFrame();
	// player_right_arm_lower_UpdateFrame();
	// player_left_arm_UpdateFrame();
	// player_left_arm_lower_UpdateFrame();	
	// player_right_leg_UpdateFrame();
	// player_right_leg_lower_UpdateFrame();
	// player_left_leg_UpdateFrame();
	// player_left_leg_lower_UpdateFrame();	    
    // player_chest_glow_UpdateFrame();
    
    // player_foot_L_UpdateFrame();
    // player_foot_R_UpdateFrame();
}

void nextPlayerAnimFrame()
{	

// //NOTE ----- 
    // if(playerAvatar.animRig.animFrame > 32)
        // playerAvatar.animRig.animFrame = 0;

	// player_head_UpdateFrame();
	// player_chest_UpdateFrame();
	// player_right_arm_UpdateFrame();
	// player_right_arm_lower_UpdateFrame();
	// player_left_arm_UpdateFrame();
	// player_left_arm_lower_UpdateFrame();	
	// player_right_leg_UpdateFrame();
	// player_right_leg_lower_UpdateFrame();
	// player_left_leg_UpdateFrame();
	// player_left_leg_lower_UpdateFrame();		
	// Player_Shadow_UpdateFrame();
        // player_chest_glow_UpdateFrame();
        
    // player_foot_L_UpdateFrame();
    // player_foot_R_UpdateFrame();
}

void nextPlayerLightingState()
{
	//pass new lighting state from playerAvatar to player_lighting
	player_lighting = playerAvatar.playerLighting;
}

/*END------------------------Player Control Functions-----------------------*/



/*--------------------------------------------------------------------------*/
/*------------------------Player Rendering and Animating--------------------*/
/*--------------------------------------------------------------------------*/

extern void PlayerSkinnedObjectMTX(Player* pla);

void DrawPlayerModel()
{	

	//return;

	//NOTE: update position, rotation, and scale of player model and store in a matrix:
	//TEXTURE_FOG_LIGHT(glistp, 42,26,40,255,800,980);		
		
	
	//NOTE: RenderPlayerRig(pointer to RigObject, pointer to RigObject function) 
	//This function combine the relative pos/rot etc of each RigObject with that of the player object in a matrix 
	//and then call the function to render the RigObject
	//RigObject head;	RigObject chest;
	//RigObject armR[2];		RigObject armL[2];
	//RigObject legR[2];	RigObject legL[2];		
    
    //player_hair_PolyList
    
    //PlayerRigObjectMTX(&playerAvatar.animRig.joint.head, &player_head_PolyList);

        //playerAvatar.animator.animate = &player_body_PolyList(u8 animFrame); 
        //PlayerObjMTX(&playerAvatar); 		
        
        
        
        SetAnimator(&playerAvatar.animator, &player_body_PolyList, 0, 1);
        
		PlayerObjMTX(&playerAvatar); 		
        
        if(playerAvatar.state.movement == STATE_PLAYERMOVE_WALK)
        {
           player_hair_PolyList(playerAvatar.animRig.animFrame);
          player_body_PolyList(playerAvatar.animRig.animFrame);
        //  player_hair_combat_walk_PolyList(playerAvatar.animRig.animFrame);
         // player_body_combat_walk_PolyList(playerAvatar.animRig.animFrame);
           
        }
        else if(playerAvatar.state.movement == STATE_PLAYERMOVE_RUN)
        {
            player_hair_run_PolyList(playerAvatar.animRig.animFrame);
            player_body_run_PolyList(playerAvatar.animRig.animFrame);
            
        }
        
        else if(playerAvatar.state.movement == STATE_PLAYERMOVE_SIT)
        {   
            player_hair_sit_PolyList(playerAvatar.animRig.animFrame);
            player_body_sit_PolyList(playerAvatar.animRig.animFrame);
        }
        
        else if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE && playerAvatar.state.actions == STATE_COMBAT)
        {
            player_hair_combat_walk_PolyList(playerAvatar.animRig.animFrame);
            player_body_combat_walk_PolyList(playerAvatar.animRig.animFrame);
        }
        
        else if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE)
        {
            player_hair_idle_PolyList(playerAvatar.animRig.animFrame);
            player_body_idle_PolyList(playerAvatar.animRig.animFrame);
            
        }
        

        // else
        // {
            // player_body_idle_PolyList(playerAvatar.animRig.animFrame);
            // player_hair_idle_PolyList(playerAvatar.animRig.animFrame);
        // }
        
        //playerAvatar.obj.pos.x += 9;
        //playerAvatar.obj.pos.y += -19;
        //playerAvatar.obj.pos.y += 46;
        // guTranslate(&pla->obj.matrix[0], pla->obj.pos.x, pla->obj.pos.y, pla->obj.pos.z);
		// guRotateRPY(&pla->obj.matrix[1], pla->obj.rot.x, pla->obj.rot.y, pla->obj.rot.z);
        // playerStaff = playerAvatar;
        // playerStaff.obj.pos.x += 9;
        // playerStaff.obj.pos.y += -19;
        // playerStaff.obj.pos.z += 46;
        // PlayerObjMTX(&playerStaff);
        //player_staff_PolyList(playerAvatar.animRig.animFrame);
        
    //    PlayerSkinnedObjectMTX(&playerAvatar);
        //player_body_PolyList(2);
        //PlayerRigObjectMTX(&playerAvatar.animRig.joint.chest, &player_body_PolyList);
       // RenderEnvObj(&playerAvatar.animRig.joint.chest);
        
        
        return;
        
        PlayerObjMTX(&playerAvatar); 		
        
		TEXTURE_FOG_LIGHT(glistp, 42,26,40,255,800,980);	
        
        PlayerRigObjectMTX(&playerAvatar.animRig.joint.head, &player_head_PolyList); 		
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.chest, &player_chest_PolyList); 
        
        TEXTURE_FOG_LIGHT(glistp, 42,26,40,255,800,980);	
        
		
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.armR[0], &player_right_arm_PolyList); 
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.armR[1], &player_right_arm_lower_PolyList); 
		
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.armL[0], &player_left_arm_PolyList); 
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.armL[1], &player_left_arm_lower_PolyList);
		
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.legR[0], &player_right_leg_PolyList); 
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.legR[1], &player_right_leg_lower_PolyList); 
        PlayerRigObjectMTX(&playerAvatar.animRig.joint.legR[2], &player_foot_R_PolyList); 
		
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.legL[0], &player_left_leg_PolyList); 
		PlayerRigObjectMTX(&playerAvatar.animRig.joint.legL[1], &player_left_leg_lower_PolyList);
        PlayerRigObjectMTX(&playerAvatar.animRig.joint.legL[2], &player_foot_L_PolyList);
                            
        TEXTURE_FOG_VTXCOL(glistp, 75, 75, 55, 50,980,1000);					 

		
       // if( playerAvatar.collision.groundPoint.collision == 1) //NOTE ----- If player is grounded, draw shadow
       // {
        
        PlayerEffectMTX(&playerAvatar.animRig.joint.shadow, &Player_Shadow_PolyList);
            //RenderEnvObj(&Player_Shadow_PolyList)

      // }
        
        TEXTURE_FOG_VTXCOL(glistp, 50, 75, 75, 0,980,1000);					 
        
 		PlayerRigObjectMTX(&playerAvatar.animRig.joint.glowFX, &player_chest_glow_PolyList);       

        
		TEXTURE_FOG_LIGHT(glistp, 42,26,40,255,800,980);	//Fog and texture settings	

		for(shotCounter = 0; shotCounter < maxShot; shotCounter++)
		{
			if(projectileSpawns[shotCounter].isActive == 1)
			{
				draw_player_shot(&projectileSpawns[shotCounter]);
			}
		}
}

	int playerAnimationTimer = 0;
	u8 beginFalling = 0;

void AnimationSwitch()
{
// //NOTE ----- Definitions for player's current animation (animID)
        // //playerAvatar.animRig.animID = 
            // #define ANIM_PLAYER_RUN 0
            // #define ANIM_PLAYER_RUN_SHOOT 1
            // #define ANIM_PLAYER_SHOOT 2
            // #define ANIM_PLAYER_JUMP 3
          //  #define STATE_PLAYERACT_BEGINSHOOT 2
         //   #define STATE_PLAYERACT_SHOOT 3
    
    if(playerAvatar.state.jumping == STATE_PLAYERJUMP_BEGINJUMP || playerAvatar.state.jumping == STATE_PLAYERJUMP_JUMP)
    {
    
       if(playerAvatar.animRig.animID != ANIM_PLAYER_JUMP)
        {
            playerAvatar.animRig.animID = ANIM_PLAYER_JUMP;
           // playerAvatar.animRig.animFrame = 0;
        }
    
        
        if(playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT || playerAvatar.state.actions == STATE_PLAYERACT_SHOOT)
        {
        
           if(playerAvatar.animRig.animID != ANIM_PLAYER_SHOOTJUMP)
           {
           
                if(playerAvatar.animRig.animID == ANIM_PLAYER_SHOOT)
                {
                     //playerAvatar.animRig.animFrame = 6; 
                }
           
                playerAvatar.animRig.animID = ANIM_PLAYER_SHOOTJUMP;
           }
        }
    }
    
    else if(playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND || playerAvatar.state.jumping == STATE_PLAYERJUMP_FALL)
    {    
        if(playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND)
        {    
            if(playerAvatar.state.movement == STATE_PLAYERMOVE_WALK || playerAvatar.state.movement == STATE_PLAYERMOVE_RUN)
            {      
                    playerAvatar.animRig.animID = ANIM_PLAYER_RUN;
                     
                if(playerAvatar.state.actions == STATE_PLAYERACT_SHOOT || playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT)
                     playerAvatar.animRig.animID = ANIM_PLAYER_RUN_SHOOT;
            }
            
            else if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE)
            {     
                    playerAvatar.animRig.animID = ANIM_PLAYER_RUN;
                     
                if(playerAvatar.state.actions == STATE_PLAYERACT_SHOOT || playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT)
                     playerAvatar.animRig.animID = ANIM_PLAYER_SHOOT;
            }
        }
            
    }


}    
    
    
u8 lastAnimID = 0; // used  to test if the player has swiched animations since the last frame.     
    
static void updatePlayerAnim()
{
	
	int tempAnimationTimer = 0;
	int frameDifference = 0; //in the event of extreme slowdown, check how much time has elapsed

	nextPlayerLightingState(); 
	
	tempAnimationTimer = GetFPS_30(); //animation playback at 30 fps gives the best, most consistent performance
    
    AnimationSwitch();
    
	if (tempAnimationTimer != playerAnimationTimer)
	{
		frameDifference = tempAnimationTimer-playerAnimationTimer;
	
		playerAnimationTimer = tempAnimationTimer;


        if (playerAvatar.state.jumping <= STATE_PLAYERJUMP_GROUND) //If falling or jumping
        {	
            
            if(playerAvatar.state.movement == STATE_PLAYERMOVE_WALK)	//walking or runningrunning
            {        
                beginFalling = 0;
                //Call Animation transition function to get next frame : (u8 transitionIn, u8 loopStart, u8 loopEnd, u8 transitionOut, u8 frameRate);
                playerAvatar.animRig.animFrame = NextCharAnimFrame(0, 0, 32, 32, frameDifference); 

            }
            
            else  if (playerAvatar.state.movement == STATE_PLAYERMOVE_RUN)
            {
                beginFalling = 0;
                //Call Animation transition function to get next frame : (u8 transitionIn, u8 loopStart, u8 loopEnd, u8 transitionOut, u8 frameRate);
                playerAvatar.animRig.animFrame = NextCharAnimFrame(0, 0, 21, 21, frameDifference); 
            }

            else if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE && playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND)                 
            {  
                beginFalling = 0; 
                if( playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT)
                {            
                    //Call Animation transition function to get next frame : (u8 transitionIn, u8 loopStart, u8 loopEnd, u8 transitionOut, u8 frameRate);
                    playerAvatar.animRig.animFrame = NextCharAnimFrame(11, 11, 11, 11, frameDifference); 
                    
                    if(playerAvatar.animRig.animFrame < 11)
                        shootAnimTrig = 0;
                        
                    else if(playerAvatar.animRig.animFrame >= 11)                    
                        playerAvatar.state.actions = STATE_PLAYERACT_SHOOT;                    
                }
                
                else if(playerAvatar.state.actions == STATE_PLAYERACT_SHOOT)
                {                     
                
                    if(shootAnimTrig == 1)
                    {
                        if(playerAvatar.animRig.animFrame < 21)
                            playerAvatar.animRig.animFrame += 1;
                            
                        else if(playerAvatar.animRig.animFrame >= 21)
                        {
                            shootAnimTrig = 0;
                            playerAvatar.animRig.animFrame = 11;
                        }
                    }
                        
                        
                    
                }
                
                else //idle
                {
                    beginFalling = 0;            
                    //playerAvatar.animRig.animFrame = 1;  
                    playerAvatar.animRig.animFrame = NextCharAnimFrame(0, 0, 1, 1, frameDifference);
                }

            }
            
            // else if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE && playerAvatar.state.jumping == STATE_PLAYERJUMP_GROUND && playerAvatar.state.actions == STATE_PLAYERACT_SHOOT)
            // {
                // if(shootAnimTrig == 1)
                // {
                    // if(playerAvatar.animRig.animFrame < 21)
                        // playerAvatar.animRig.animFrame += 1;
                        
                    // else if(playerAvatar.animRig.animFrame >= 21)
                    // {
                        // shootAnimTrig = 0;
                        // playerAvatar.animRig.animFrame = 11;
                    // }
                // }
                    
                    
                // beginFalling = 0;  
            // }
            

        
        }
            
            
        
		
		//else if(playerAvatar.isFalling == 1 || playerAvatar.isJumping == 1)
        else if (playerAvatar.state.jumping >= STATE_PLAYERJUMP_FALL)
        //else if (playerAvatar.animRig.animID == ANIM_PLAYER_JUMP || playerAvatar.animRig.animID == ANIM_PLAYER_SHOOTJUMP || playerAvatar.state.jumping == STATE_PLAYERJUMP_JUMP || playerAvatar.state.jumping == STATE_PLAYERJUMP_BEGINJUMP)
		{

            if(beginFalling == 0)
            {
                if(playerAvatar.state.actions == STATE_PLAYERACT_SHOOT || playerAvatar.state.actions == STATE_PLAYERACT_BEGINSHOOT)              
                    playerAvatar.animRig.animFrame = 2;
                     
                else    
                    playerAvatar.animRig.animFrame = 0;
                    
                beginFalling = 1;
            }
            
            else if( playerAvatar.animRig.animFrame < 8)
            {
                playerAvatar.animRig.animFrame += 1; 
            }
            
            else
            {
                playerAvatar.animRig.animFrame = 8;
            }

		}
		
		nextPlayerAnimFrame();
	}
	
	
    
    
	//play step sound if not falling or jumping
    
    if(playerAvatar.state.movement == STATE_PLAYERMOVE_IDLE)
    {
        StopSfx_Footstep(1);
    }
    
	if(playerAvatar.state.jumping <= STATE_PLAYERJUMP_GROUND)
	{
        if(playerAvatar.state.movement == STATE_PLAYERMOVE_WALK) 
        {
    
            if(playerAvatar.animRig.animFrame == 9 || playerAvatar.animRig.animFrame == 24)
                    //PlaySfx_Footstep(6);
                   // PlaySfxVolume(0, 96);
                    PlaySfx_Footstep(22);
            else if( playerAvatar.animRig.animFrame == 16 )
                    PlaySfx_Footstep(23);                    
        }
        else if(playerAvatar.state.movement == STATE_PLAYERMOVE_RUN) 
        {
            if(playerAvatar.animRig.animFrame == 6 || playerAvatar.animRig.animFrame == 18)
                    //PlaySfx_Footstep(6);
                    PlaySfx_Footstep(22);
            else if( playerAvatar.animRig.animFrame == 12 || playerAvatar.animRig.animFrame == 22 )
                    PlaySfx_Footstep(23);      
        }

                
        //beginFalling = 0;
	}
    
    
    //playerAvatar.animRig.animFrame = 40;

}



/*END---------------------Player Rendering and Animating--------------------*/



