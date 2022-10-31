#ifndef PLAYER_PLAYER_DEFS_H 
#define PLAYER_PLAYER_DEFS_H 

extern Lights2 player_lighting;



//>-- OBJECT 0: START ------------------------------------------ player_chest_glow -------------------------------------------------

extern Vtx player_chest_glow_VertList_0 [];
//extern RigAnimation player_chest_glow_anim[];
//extern RigAnimList player_chest_glow_anim[3];
extern void player_chest_glow_UpdateFrame(  );
extern void player_chest_glow_PolyList(  );

//>-- OBJECT 0: END ------------------------------------------- player_chest_glow -------------------------------------------------





//>-- OBJECT 0: START ------------------------------------------ player_foot_L -------------------------------------------------

extern Vtx player_foot_L_VertList_0 [];
extern RigAnimList player_foot_L_anim[];
extern void player_foot_L_UpdateFrame( );
extern void player_foot_L_PolyList( );

//>-- OBJECT 0: END ------------------------------------------- player_foot_L -------------------------------------------------


//>-- OBJECT 1: START ------------------------------------------ player_foot_R -------------------------------------------------

extern Vtx player_foot_R_VertList_0 [];
extern RigAnimList player_foot_R_anim[];
extern void player_foot_R_UpdateFrame( );
extern void player_foot_R_PolyList( );

//>-- OBJECT 1: END ------------------------------------------- player_foot_R -------------------------------------------------


//>-- OBJECT 2: START ------------------------------------------ player_left_arm_lower -------------------------------------------------

extern Vtx player_left_arm_lower_VertList_0 [];
extern RigAnimation player_left_arm_lower_anim[];
extern void player_left_arm_lower_UpdateFrame( );
extern void player_left_arm_lower_PolyList( );

//>-- OBJECT 2: END ------------------------------------------- player_left_arm_lower -------------------------------------------------


//>-- OBJECT 3: START ------------------------------------------ player_chest -------------------------------------------------

extern Vtx player_chest_VertList_0 [];
extern RigAnimation player_chest_anim[];
extern void player_chest_UpdateFrame( );
extern void player_chest_PolyList( );

//>-- OBJECT 3: END ------------------------------------------- player_chest -------------------------------------------------


//>-- OBJECT 4: START ------------------------------------------ player_head -------------------------------------------------

extern Vtx player_head_VertList_0 [];
extern RigAnimation player_head_anim[];
extern void player_head_UpdateFrame( );
extern void player_head_PolyList( );

//>-- OBJECT 4: END ------------------------------------------- player_head -------------------------------------------------


//>-- OBJECT 5: START ------------------------------------------ player_left_leg -------------------------------------------------

extern Vtx player_left_leg_VertList_0 [];
extern RigAnimation player_left_leg_anim[];
extern void player_left_leg_UpdateFrame( );
extern void player_left_leg_PolyList( );

//>-- OBJECT 5: END ------------------------------------------- player_left_leg -------------------------------------------------


//>-- OBJECT 6: START ------------------------------------------ player_left_leg_lower -------------------------------------------------

extern Vtx player_left_leg_lower_VertList_0 [];
extern RigAnimation player_left_leg_lower_anim[];
extern void player_left_leg_lower_UpdateFrame( );
extern void player_left_leg_lower_PolyList( );

//>-- OBJECT 6: END ------------------------------------------- player_left_leg_lower -------------------------------------------------


//>-- OBJECT 7: START ------------------------------------------ player_right_arm_lower -------------------------------------------------

extern Vtx player_right_arm_lower_VertList_0 [];
extern RigAnimation player_right_arm_lower_anim[];
extern void player_right_arm_lower_UpdateFrame( );
extern void player_right_arm_lower_PolyList( );

//>-- OBJECT 7: END ------------------------------------------- player_right_arm_lower -------------------------------------------------


//>-- OBJECT 8: START ------------------------------------------ player_right_leg -------------------------------------------------

extern Vtx player_right_leg_VertList_0 [];
extern RigAnimation player_right_leg_anim[];
extern void player_right_leg_UpdateFrame( );
extern void player_right_leg_PolyList( );

//>-- OBJECT 8: END ------------------------------------------- player_right_leg -------------------------------------------------


//>-- OBJECT 9: START ------------------------------------------ player_right_leg_lower -------------------------------------------------

extern Vtx player_right_leg_lower_VertList_0 [];
extern RigAnimation player_right_leg_lower_anim[];
extern void player_right_leg_lower_UpdateFrame( );
extern void player_right_leg_lower_PolyList( );

//>-- OBJECT 9: END ------------------------------------------- player_right_leg_lower -------------------------------------------------


//>-- OBJECT 10: START ------------------------------------------ player_left_arm -------------------------------------------------

extern Vtx player_left_arm_VertList_0 [];
extern RigAnimation player_left_arm_anim[];
extern void player_left_arm_UpdateFrame( );
extern void player_left_arm_PolyList( );

//>-- OBJECT 10: END ------------------------------------------- player_left_arm -------------------------------------------------


//>-- OBJECT 11: START ------------------------------------------ player_right_arm -------------------------------------------------

extern Vtx player_right_arm_VertList_0 [];
extern RigAnimation player_right_arm_anim[];
extern void player_right_arm_UpdateFrame( );
extern void player_right_arm_PolyList( );

//>-- OBJECT 11: END ------------------------------------------- player_right_arm -------------------------------------------------

extern Vtx Player_Shadow_VertList_0 [];
extern  void Player_Shadow_PolyList();
  void Player_Shadow_UpdateFrame();
#endif