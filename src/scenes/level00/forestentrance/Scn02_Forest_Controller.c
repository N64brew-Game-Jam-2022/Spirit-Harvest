#include "common.h" 
#include "objectDefs.h" 
#include "level00.h" 
#include "collisionDefs.h" 
#include "Scn02_Forest_defs.h" 
#include "Scn01_Instanced_defs.h"
#include "debug.h" 
/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 2 | Forest-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Forest LOD0----------------------------*/ 

   StaticEnvObject Forest_forest_straight_1;
   StaticEnvObject Forest_forest_straight_2;
   StaticEnvObject Forest_forest_straight_3;
   StaticEnvObject Forest_forest_straight_4;
   StaticEnvObject Forest_forest_straight_5;
   StaticEnvObject Forest_forest_fork_1;
   StaticEnvObject Forest_forest_fork_2;
   StaticEnvObject Forest_forest_fork_3;
   StaticEnvObject Forest_forest_turn_2;
   StaticEnvObject Forest_forest_turn_1;
   
   
   extern int GetFPS();
   
   extern int GetFPS_20();
   extern int GetFPS_40();
   
 /*--------------------------Enemies LOD0----------------------------*/ 

void RenderEnemies(u8 LOD);


extern void SpawnLocalEnemies(EnemyObject *enemy);
extern void UpdateLocalEnemies(EnemyObject *enemy);
void SpawnYellowSpirit(EnemyObject *enemy, float x, float y, float z);

EnemyObject GhostTest1;
EnemyObject GhostTest2;   
EnemyObject GhostTest3;


u8 enemiesSpawned = 0;
   
/*--------------------------Forest Collision Objects ----------------------------*/ 

   TriggerBox Forest_SceneTrig[2] = {
   {-15950, 4400, -565, -12924, 11381, 2989, 0}, //AABB Scene Object: SceneTrig_Forest_Maze
    {-22672, 11349, -565, -12177, 16240, 2989, 0}, //AABB Sector Object: SceneTrig_Forest_Maze_2
   };
   TriggerBox Forest_SectorTrig[2] = {
   {-15950, 4400, -565, -12924, 11381, 2989, 0}, //AABB Sector Object: SceneTrig_Forest_Maze
   {-22672, 11349, -565, -12177, 16240, 2989, 0}, //AABB Sector Object: SceneTrig_Forest_Maze_2
   };
 
/*--------------------------Forest Manager----------------------------*/ 

   SceneManager scene_Forests; 

/*--------------------------------------------------------------------------*/

void init_Scene_Forests(){ 

   scene_Forests.isActive   = 0; //Set scene Forest to inactive by default
   scene_Forests.sceneInit   = init_Scene_Forests;
   scene_Forests.envObjInit   = init_EnvObjects_Forests;
   scene_Forests.renderEnvObj   = render_EnvObjects_Forests;
   scene_Forests.renderTranspEnvObj   = renderTransp_EnvObjects_Forests;
   scene_Forests.sceneTriggers   = lvl00_SceneTrig;
   //scene_Forest.sectorTriggers   = SectorTriggers_Forest;
   scene_Forests.wallColObj   = MColObj_forest_straight_1_col_walls;
   scene_Forests.groundColObj   = MColObj_forest_straight_1_col_ground;
   
        // ghostPosition.x = -12763; ghostPosition.y = -6237; ghostPosition.z = 968;
    // PlayAmbientLoopLocal(FX_SPIRIT1, 5, 45, 3000, ghostPosition);
    SpawnYellowSpirit(&GhostTest1, -13384, 6514, 875 );   
    SpawnYellowSpirit(&GhostTest2, -15105, 8013, 650 );
    SpawnYellowSpirit(&GhostTest3, -14750, 7450, 775 );
    
    
    

} 
/*--------------------------Forest Manager----------------------------*/ 



void init_EnvObjects_Forests(){ 


// /*--------------------------Forest LOD0----------------------------*/ 

   // SetVector3(&Forest_forest_straight_1.obj.pos, -14523, 7275,728);
   // SetVector3(&Forest_forest_straight_1.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_straight_1.obj.scl, 1, 1,1);
   // Forest_forest_straight_1.staticModel.displayList = forest_straight_1_Static_PolyList_0;

   // SetVector3(&Forest_forest_straight_2.obj.pos, -14541, 9481,728);
   // SetVector3(&Forest_forest_straight_2.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_straight_2.obj.scl, 1, 1,1);
   // Forest_forest_straight_2.staticModel.displayList = forest_straight_2_Static_PolyList_0;

   // SetVector3(&Forest_forest_straight_3.obj.pos, -19090, 13461,728);
   // SetVector3(&Forest_forest_straight_3.obj.rot, 0, 0,90);
   // SetVector3(&Forest_forest_straight_3.obj.scl, 1, 1,1);
   // Forest_forest_straight_3.staticModel.displayList = forest_straight_3_Static_PolyList_0;

   // SetVector3(&Forest_forest_straight_4.obj.pos, -19090, 17349,728);
   // SetVector3(&Forest_forest_straight_4.obj.rot, 0, 0,90);
   // SetVector3(&Forest_forest_straight_4.obj.scl, 1, 1,1);
   // Forest_forest_straight_4.staticModel.displayList = forest_straight_4_Static_PolyList_0;

   // SetVector3(&Forest_forest_straight_5.obj.pos, -21315, 17349,728);
   // SetVector3(&Forest_forest_straight_5.obj.rot, 0, 0,90);
   // SetVector3(&Forest_forest_straight_5.obj.scl, 1, 1,1);
   // Forest_forest_straight_5.staticModel.displayList = forest_straight_5_Static_PolyList_0;

   // SetVector3(&Forest_forest_fork_1.obj.pos, -6933, 11706,728);
   // SetVector3(&Forest_forest_fork_1.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_fork_1.obj.scl, 1, 1,1);
   // Forest_forest_fork_1.staticModel.displayList = forest_fork_1_Static_PolyList_0;

   // SetVector3(&Forest_forest_fork_2.obj.pos, -16287, 14891,728);
   // SetVector3(&Forest_forest_fork_2.obj.rot, 0, 0,90);
   // SetVector3(&Forest_forest_fork_2.obj.scl, 1, 1,1);
   // Forest_forest_fork_2.staticModel.displayList = forest_fork_2_Static_PolyList_0;

   // SetVector3(&Forest_forest_fork_3.obj.pos, -14541, 11706,728);
   // SetVector3(&Forest_forest_fork_3.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_fork_3.obj.scl, 1, 1,1);
   // Forest_forest_fork_3.staticModel.displayList = forest_fork_3_Static_PolyList_0;

   // SetVector3(&Forest_forest_turn_2.obj.pos, -10471, 11800,728);
   // SetVector3(&Forest_forest_turn_2.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_turn_2.obj.scl, 1, 1,1);
   // Forest_forest_turn_2.staticModel.displayList = forest_turn_2_Static_PolyList_0;

   // SetVector3(&Forest_forest_turn_1.obj.pos, -14541, 11706,728);
   // SetVector3(&Forest_forest_turn_1.obj.rot, 0, 0,0);
   // SetVector3(&Forest_forest_turn_1.obj.scl, 1, 1,1);
   // Forest_forest_turn_1.staticModel.displayList = forest_turn_1_Static_PolyList_0;


} 
/*--------------------------Forest Manager----------------------------*/ 


void render_EnvObjects_Forests(u8 LOD){

  // TEXTURE_FOG_VTXCOL(glistp,35,25,20,255,990,1000); 
  TEXTURE_FOG_VTXCOL(glistp,viewSettings.fogColor.r,viewSettings.fogColor.g+5,viewSettings.fogColor.b+10,255,viewSettings.fogNear,viewSettings.fogFar);  


   if(LOD == 0){
  //  RenderStaticEnvObj(&Forest_forest_turn_1);
   // RenderStaticEnvObj(&Forest_forest_fork_3);
  //  RenderStaticEnvObj(&Forest_forest_straight_2);
  //  RenderStaticEnvObj(&Forest_forest_straight_1);
    
    
   //  RenderStaticEnvObj(&Forest_forest_straight_3);
    // RenderStaticEnvObj(&Forest_forest_straight_4);
     // RenderStaticEnvObj(&Forest_forest_straight_5);
     // RenderStaticEnvObj(&Forest_forest_fork_1);
     // RenderStaticEnvObj(&Forest_forest_fork_2);
     // RenderStaticEnvObj(&Forest_forest_fork_3);
     

/*Render Layer: 1*/   

/*Render Layer: 2*/   

    //RenderEnemies(LOD);
   }
   
   if(LOD == 1)
   {
    RenderStaticEnvObj(&Forest_forest_straight_2);
    RenderStaticEnvObj(&Forest_forest_fork_3);
   }
}

void renderTransp_EnvObjects_Forests(u8 LOD){
    if(LOD == 0){
        RenderEnemies(LOD); // rendering in transparent because the ghosts are transparent
    }
  // TEXTURE_FOG_VTXCOL(glistp,35,25,20,255,990,1000); 
}


/*--------------------------------------------------------------------------*/

void SceneTrig_Check_Forests(SceneTrigger *thisScene){ 

   thisScene->LOD = 0;
   thisScene->isActive = 0;
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[0]);
   thisScene->isActive += triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]);
        if(triggerBoundBox(&playerAvatar.obj.pos, &thisScene->trigBox[1]))
                thisScene->LOD = 1;

}
void SectorTrig_Update_Forests(SceneTrigger *thisScene){ 
    float tempRotation;

      if(thisScene->sectorTrig[1].isActive > 0){
        scene_Forests.groundColObj = MColObj_forest_fork_3_col_ground;
        scene_Forests.wallColObj = MColObj_forest_fork_3_col_walls;
        
        SetVector3(&playerAvatar.lastSpawnPoint, -8960, 6597, 1100); //SPAWN NEAR BRIDGE
      }
      
      else if(thisScene->sectorTrig[0].isActive > 0){
        scene_Forests.groundColObj = MColObj_forest_straight_1_col_ground;   
        scene_Forests.wallColObj = MColObj_forest_straight_1_col_walls;
        
        SetVector3(&playerAvatar.lastSpawnPoint, -8960, 6597, 1100); //SPAWN NEAR BRIDGE
      }
      
        if(GhostTest1.hp > 0 && GhostTest1.isActive == 1)
            UpdateLocalEnemies(&GhostTest1);
            
        if(GhostTest2.hp > 0 && GhostTest2.isActive == 1)
            UpdateLocalEnemies(&GhostTest2);
            
        if(GhostTest3.hp > 0 && GhostTest3.isActive == 1)
            UpdateLocalEnemies(&GhostTest3);
            
        // GhostTest1.normal = vectorSubtract(GhostTest1.obj.pos, playerAvatar.rigidBody.currentPos);
        // VectorNormalize(&GhostTest1.normal);	
        
        // tempRotation = atan2(GhostTest1.normal.y, GhostTest1.normal.x );
        // tempRotation = (tempRotation * 57.29577); //NOTE: convert angle from radians to degrees 
        // Debug_MiscVar[0].x = 56;
        // Debug_MiscVar[0].x = 56;
        
       // Debug_MiscVar[0].x = GhostTest1.normal.x;
       // Debug_MiscVar[0].y = GhostTest1.normal.y;
       // Debug_MiscVar[0].z = GhostTest1.normal.z;
       // Debug_MiscVar[1].x = tempRotation;

}


u8 ghostAnim = 0;

float startingHeight = 675.0f;
float maxHeight = 825.0f;
float currentHeight = 675.0f;
u8 descend = 0;
u8 animLastUpdate = 0;
float currentSpeed = 0.01f;
float maxSpeed = 2.0f;

u8 spotted = 0;

void RenderEnemies(u8 LOD){
        
    if(GhostTest1.hp > 0 && GhostTest1.isActive == 1)
        SpawnLocalEnemies(&GhostTest1);
        
    if(GhostTest2.hp >0 && GhostTest2.isActive == 1)        
        SpawnLocalEnemies(&GhostTest2);
        
    if(GhostTest3.hp >0 && GhostTest3.isActive == 1)        
        SpawnLocalEnemies(&GhostTest3);   
    
    
    if(spotted == 0)
    {
        PlaySfxVolume(FX_SPOTTED, 175);
        spotted = 1;
    }
        
 
}



void SpawnYellowSpirit(EnemyObject *enemy, float x, float y, float z){

       enemy->isActive = 1;
       enemy->hp = 2;
       enemy->enemyType = YELLOW_SPIRIT;
       enemy->animFloatMin = z;
       enemy->animFloatMax = z+150;
       enemy->animFloat = z;
       
       enemy->currentSpeed = 0.01f;
       enemy->maxSpeed = 2.0f;
       
       SetVector3(&enemy->obj.pos, x, y, z);
       SetVector3(&enemy->obj.rot, .01f, .01f, 90.0f);
       SetVector3(&enemy->obj.scl, 2, 2, 2);
       SetAnimator(&enemy->animator, &Ghost_Yellow_PolyList, 0, 0);
       SetAnimator(&enemy->animator2, &Ghost_Yellow_Particle_PolyList, 0, 0); 

}
