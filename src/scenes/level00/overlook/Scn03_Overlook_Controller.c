#include "common.h"
#include "objectDefs.h"
#include "level00.h"
#include "collisionDefs.h"
#include "Scn03_Overlook_defs.h"

/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 3 | Overlook-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Overlook LOD0----------------------------*/ 

 
/*--------------------------Overlook LOD1----------------------------*/ 

   StaticEnvObject Overlook_Scn03_overlook_cliff_LOD1;
 
/*--------------------------Overlook Collision Objects ----------------------------*/ 

   TriggerBox Overlook_SceneTrig[6] = {
   {2708, -3561, -285, 7648, -1598, 1057, 0}, //AABB Scene Object: SceneTrig_Cave_01
   {5206, -4647, -749, 7648, -3562, 1057, 0}, //AABB Scene Object: SceneTrig_Cave_03
   {6040, -6928, -749, 8166, -4645, 1226, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_03
   {6040, -8787, -749, 8528, -6912, 1694, 0}, //AABB Scene Object: SceneTrig_Landing_Pad_02
   {2769, -8252, 270, 6152, -5158, 1679, 0}, //AABB Scene Object: SectorTrig_Landing_Pad_02
   {2769, -8252, -312, 6152, -5158, 270, 0}, //AABB Scene Object: SectorTrig_Landing_Pad_01
   };
   TriggerBox Overlook_SectorTrig[3] = {
   {6148, -6685, -347, 8324, -5546, 1294, 0}, //AABB Sector Object: SectorTrig_Overlook_01
   {6148, -7584, -347, 8324, -6685, 1294, 0}, //AABB Sector Object: SectorTrig_Overlook_02
   {6148, -9086, -347, 8324, -7584, 1294, 0}, //AABB Sector Object: SectorTrig_Overlook_03
   };
 
/*--------------------------Overlook Manager----------------------------*/ 

   SceneManager scene_Overlook; 
