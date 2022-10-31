/*--------------------------------------------------------------------------*/
/*----------------------------SCENE 0 | Landing_Pad-----------------------------*/
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
 
/*--------------------------Landing_Pad LOD0----------------------------*/ 

   StaticEnvObject Scn04_Ship_Glow;
   StaticEnvObject Scn04_Ship;
   EnvObject Scn04_Light_Ray;
   StaticEnvObject Scn04_Landing_Ground2;
   StaticEnvObject Scn04_Landing_Walls;
   StaticEnvObject Scn04_Landing_Ground;
   StaticEnvObject Scn04_Landing_Platform;
   StaticEnvObject Scn04_Landing_Stone_Door;
   StaticEnvObject Scn04_Landing_Spires;
 
/*--------------------------Landing_Pad LOD1----------------------------*/ 

   StaticEnvObject Scn04_Landing_LOD1;
 
/*--------------------------Landing_Pad Manager----------------------------*/ 

   SceneManager scene_Landing_Pad; 

/*--------------------------------------------------------------------------*/

void init_Scene_Landing_Pad(){ 
   scene_Landing_Pad.isActive   = 0; //Set scene Landing_Pad to inactive by default
   scene_Landing_Pad.sceneInit   = init_Scene_Landing_Pad;
   scene_Landing_Pad.envObjInit   = init_EnvObjects_Landing_Pad;
   scene_Landing_Pad.renderEnvObj   = render_EnvObjects_Landing_Pad;
   scene_Landing_Pad.renderTranspEnvObj   = renderTransp_EnvObjects_Landing_Pad;
   scene_Landing_Pad.sceneTriggers   = SceneTriggers_Landing_Pad;
   scene_Landing_Pad.sectorTriggers   = SectorTriggers_Landing_Pad;
   scene_Landing_Pad.wallColObj   = wall01_Landing_Pad;
   scene_Landing_Pad.groundColObj   = ground01__Landing_Pad;

} 
/*--------------------------Landing_Pad Manager----------------------------*/ 


void init_EnvObjects_Landing_Pad(){ 

 
/*--------------------------Landing_Pad LOD0----------------------------*/ 

   SetVector3(&Scn04_Ship_Glow.obj.pos, 4720, -6540,92);
   SetVector3(&Scn04_Ship_Glow.obj.rot, 0, 0,-108);
   SetVector3(&Scn04_Ship_Glow.obj.scl, 1, 1,1);
   Scn04_Ship_Glow.staticModel.displayList = Scn04_Ship_Glow_Polylist;

   SetVector3(&Scn04_Ship.obj.pos, 4720, -6540,92);
   SetVector3(&Scn04_Ship.obj.rot, 0, 0,-108);
   SetVector3(&Scn04_Ship.obj.scl, 1, 1,1);
   Scn04_Ship.staticModel.displayList = Scn04_Ship_Polylist;

   SetVector3(&Scn04_Light_Ray.obj.pos, 3523, -3223,8);
   SetVector3(&Scn04_Light_Ray.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Light_Ray.obj.scl, 1, 1,1);
   SetAnimator(&Scn04_Light_Ray.animator, &Scn04_Light_Ray_Polylist, 0,0);

   SetVector3(&Scn04_Landing_Ground2.obj.pos, 3523, -3223,0);
   SetVector3(&Scn04_Landing_Ground2.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Ground2.obj.scl, 1, 1,1);
   Scn04_Landing_Ground2.staticModel.displayList = Scn04_Landing_Ground2_Polylist;

   SetVector3(&Scn04_Landing_Walls.obj.pos, 3523, -3223,8);
   SetVector3(&Scn04_Landing_Walls.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Walls.obj.scl, 1, 1,1);
   Scn04_Landing_Walls.staticModel.displayList = Scn04_Landing_Walls_Polylist;

   SetVector3(&Scn04_Landing_Ground.obj.pos, 3523, -3223,0);
   SetVector3(&Scn04_Landing_Ground.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Ground.obj.scl, 1, 1,1);
   Scn04_Landing_Ground.staticModel.displayList = Scn04_Landing_Ground_Polylist;

   SetVector3(&Scn04_Landing_Platform.obj.pos, 4632, -6501,0);
   SetVector3(&Scn04_Landing_Platform.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Platform.obj.scl, 1, 1,1);
   Scn04_Landing_Platform.staticModel.displayList = Scn04_Landing_Platform_Polylist;

   SetVector3(&Scn04_Landing_Stone_Door.obj.pos, 3935, -7382,767);
   SetVector3(&Scn04_Landing_Stone_Door.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Stone_Door.obj.scl, 1, 1,1);
   Scn04_Landing_Stone_Door.staticModel.displayList = Scn04_Landing_Stone_Door_Polylist;

   SetVector3(&Scn04_Landing_Spires.obj.pos, 4632, -6501,0);
   SetVector3(&Scn04_Landing_Spires.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_Spires.obj.scl, 1, 1,1);
   Scn04_Landing_Spires.staticModel.displayList = Scn04_Landing_Spires_Polylist;

 
/*--------------------------Landing_Pad LOD1----------------------------*/ 

   SetVector3(&Scn04_Landing_LOD1.obj.pos, 3523, -3223,0);
   SetVector3(&Scn04_Landing_LOD1.obj.rot, 0, 0,0);
   SetVector3(&Scn04_Landing_LOD1.obj.scl, 1, 1,1);
   Scn04_Landing_LOD1.staticModel.displayList = Scn04_Landing_LOD1_Polylist;


}
 # Current Length 2

 # Compare: [854, 950] [900, 1000]
