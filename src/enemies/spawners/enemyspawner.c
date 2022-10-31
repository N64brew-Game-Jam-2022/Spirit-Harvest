#include "common.h"
#include "objectDefs.h"
#include "level01.h"
#include "collisionDefs.h"
#include "Scn01_Instanced_defs.h"
//#include "audio.h"

//EnemyObject enemySpikedSmall;
//EnemyObject enemySpikedLarge;

EnemyObject enemySpikedLarge; //single large spikey that spaws smaller ones
EnemyObject enemySpikedSmall[3]; //array of spikey spawns 

u8 spikeySpawnerChildren = 0;
u8 spikeySpawnerHealth = 0;

u8 tempCounter = 0;
int decisionTimer = 0; //making AI decisions 
int enemySpeedFast = 50;
float enemySpeedSlow = 0.45;

//Local functions
void Spikey_Player_Collision(int spawnID);
void UpdateYellowSpirit(EnemyObject *enemy);


//u8 ghostAnim = 0;

// float startingHeight = 675.0f;
// float maxHeight = 825.0f;
// float currentHeight = 675.0f;
// u8 descend = 0;
// u8 chargeLastUpdate;
// float currentSpeed = 0.01f;
// float maxSpeed = 2.0f;

void SpawnLocalEnemies(EnemyObject *enemy){

        //TEXTURE_FOG_VTXCOL(glistp, 200, 160, 50,255,viewSettings.fogNear + 20,viewSettings.fogFar + 30);  
       RenderEnemyObj(enemy);
       
       // SetVector3(&GhostTest2.obj.pos, -14384, 7155, enemy->animFloat);       
       // SetVector3(&GhostTest2.obj.rot, 0, 0,0);
       // SetVector3(&GhostTest2.obj.scl, 2, 2,2);
       // SetAnimator(&GhostTest2.animator, &Ghost_Yellow_Particle_PolyList, 0, enemy->animator.animFrame);
       
       // RenderEnemyObj(&GhostTest2);
        // //EnemyObject()
        
        











}


void UpdateLocalEnemies(EnemyObject *enemy)
{

    if(enemy->enemyType == YELLOW_SPIRIT){
        UpdateYellowSpirit(enemy);
    }

}


void UpdateYellowSpirit(EnemyObject *enemy){

        u8 animUpdateRate = GetFPS_60();
        float tempAngle = 0.0f;
        //static LookAt lookAtPlayer;	
        
        // float startingHeight = enemy->animFloatMin;
        // float currentHeight = enemy->animFloat;
        // float maxHeight = enemy->animFloatMax;
        
        if(enemy->animLastUpdate != animUpdateRate)
        {
            if(enemy->animator.animFrame < 46)
                enemy->animator.animFrame += 1;
                
            else 
                enemy->animator.animFrame = 0;
                
            enemy->animLastUpdate = animUpdateRate;
        }
        
        enemy->currentSpeed = lerp(enemy->currentSpeed, enemy->maxSpeed, GetDeltaTime() *2  ); //increase speed from current speed to max speed if x+y inputs pass a threshold 
        
        
        if(enemy->animTriggerA == 0 && enemy->animFloat < enemy->animFloatMax-1)
        {
            enemy->animFloat = lerp(enemy->animFloat, enemy->animFloatMax, GetDeltaTime() * enemy->currentSpeed  ); //increase speed from current speed to max speed if x+y inputs pass a threshold 

        }
        
            else if(enemy->animTriggerA == 0){
                enemy->animTriggerA = 1;
                enemy->currentSpeed = 0.01f;
            }
        
        if(enemy->animTriggerA == 1 && enemy->animFloat > enemy->animFloatMin+1)
        {
           // currentHeight = lerp(currentHeight, startingHeight, 0.04f ); //increase speed from current speed to max speed if x+y inputs pass a threshold 
            enemy->animFloat = lerp(enemy->animFloat, enemy->animFloatMin, GetDeltaTime() *enemy->currentSpeed ); //increase speed from current speed to max speed if x+y inputs pass a threshold 
        }
        
            else if(enemy->animTriggerA == 1){
                enemy->animTriggerA = 0;
                enemy->currentSpeed = 0.01f;
            }
        
       enemy->obj.pos.z = enemy->animFloat;
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       // enemy->normal = vectorSubtract(enemy->obj.pos, playerAvatar.rigidBody.currentPos);
       // VectorNormalize(&enemy->normal);
       // enemy->obj.rot.z = atan2f(enemy->normal.y, enemy->normal.x);
       
       
        //enemy->obj.rot.z = playerAvatar.rotation;
        enemy->normal = vectorSubtract(enemy->obj.pos, playerAvatar.rigidBody.currentPos);
        //VectorNormalize(&enemy->normal);
        
        //enemy->obj.rot.z = (playerAvatar.rotation * 57.29577); //NOTE: convert angle from radians to degrees 
       
       
       
     //  pathNormal
       //if(enemy sees player)
      // VectorAdd(&enemy->pathNormal, enemy->pathNormal, playerAvatar.obj.pos );
       // VectorNormalize(&enemy->pathNormal);	
        
        //tempAngle = vectorAngle(enemy->obj.pos, playerAvatar.rigidBody.currentPos);
        //tempAngle = (tempAngle * 57.29577); //NOTE: convert angle from radians to degrees

        //enemy->obj.rot.z += .5f;
        // enemy->obj.rot.z = tempAngle;
        
        // if(enemy->obj.rot.z >= 360.0f)
            // enemy->obj.rot.z = enemy->obj.rot.z - 360.0f;
            
        //VectorNormalize(&enemy->pathNormal);	
        //enemy->obj.rot.z = atan2(enemy->pathNormal.y, enemy->pathNormal.x);
                            // playerAvatar.rotation = atan2(userInput_Player.y, userInput_Player.x); //NOTE: get angle with atan2 and x, y inputs
                    // playerAvatar.rotation = (playerAvatar.rotation * 57.29577); //NOTE: convert angle from radians to degrees 
                // playerAvatar.playerNormal = playerAvatar.rigidBody.velocity;
                // VectorNormalize(&playerAvatar.playerNormal);	
        
        
        
        
        
       SetVector3(&enemy->obj.pos, enemy->obj.pos.x, enemy->obj.pos.y, enemy->obj.pos.z);
       SetVector3(&enemy->obj.rot, 0, 0, enemy->obj.rot.z);
       SetVector3(&enemy->obj.scl, 2, 2, 2);
       SetAnimator(&enemy->animator, &Ghost_Yellow_PolyList, 0, enemy->animator.animFrame);

}
