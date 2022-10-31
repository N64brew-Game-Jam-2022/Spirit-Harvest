#include "common.h"
#include "objectDefs.h"
#include "level00.h"
#include "collisionDefs.h"

   TriggerBox Cave_Entrance_SceneTrig[3] = {
   {-2675, -462, -284, 2511, 689, 997, 0}, //AABB Scene Object: SceneTrig_Courtyard_00
   {-642, -4200, -284, 642, -447, 997, 0}, //AABB Scene Object: SceneTrig_Courtyard_01
   {632, -4198, -285, 1842, -2014, 1046, 0}, //AABB Scene Object: SceneTrig_Courtyard_02
   };
   
   TriggerBox Cave_Entrance_SectorTrig[3] = {
   {-892, -2969, -284, 145, -1895, 997, 0}, //AABB Sector Object: SectorTrig_Cave_Entrance_02   
   {145, -4351, -284, 1466, -1893, 997, 0}, //AABB Sector Object: SectorTrig_Cave_Entrance_00
   {145, -4351, -284, 1466, -1893, 997, 0}, //AABB Sector Object: SectorTrig_Cave_Entrance_01
   };
 
// /*--------------------------Cave_Entrance Manager----------------------------*/ 

  //  SceneManager scene_Cave_Entrance; 