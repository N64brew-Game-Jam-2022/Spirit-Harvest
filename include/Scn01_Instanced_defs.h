#ifndef SCN01_INSTANCED_DEFS_H 
#define SCN01_INSTANCED_DEFS_H 

extern u8 Ghost_Face_Textures_BG[];
extern u16 Ghost_Face_Textures_BG_tlut[];

extern u8 Ghost_Face_Textures[];
extern u16 Ghost_Face_Textures_tlut[];

extern u8 Ghost_small[];
extern u16 Ghost_small_tlut[];

extern u8 Title_Harvest[];
extern u16 Title_Harvest_tlut[];

extern u8 Title_Spirit[];
extern u16 Title_Spirit_tlut[];

    extern void ghost_small_PolyList( u8 animFrame );

//>-- Obj00: START ------------------------------------------ Ghost_Yellow -------------------------------------------------

   extern Vtx Ghost_Yellow_VertList_0 [];
   extern void Ghost_Yellow_PolyList( u8 animFrame );

//>-- Obj00: END ------------------------------------------- Ghost_Yellow -------------------------------------------------


//>-- Obj01: START ------------------------------------------ Ghost_Yellow_Particle -------------------------------------------------

   extern Vtx Ghost_Yellow_Particle_VertList_0 [];
   extern void Ghost_Yellow_Particle_PolyList( u8 animFrame );

//>-- Obj01: END ------------------------------------------- Ghost_Yellow_Particle -------------------------------------------------


//>-- Obj00: START ------------------------------------------ rock_small -------------------------------------------------

   extern Vtx rock_small_VertList_0 [];
   extern Gfx rock_small_Static_PolyList_0[];

//>-- Obj00: END ------------------------------------------- rock_small -------------------------------------------------


//>-- Obj01: START ------------------------------------------ rock_large -------------------------------------------------

   extern Vtx rock_large_VertList_0 [];
   extern Gfx rock_large_Static_PolyList_0[];

//>-- Obj01: END ------------------------------------------- rock_large -------------------------------------------------


//>-- Obj02: START ------------------------------------------ rock_split -------------------------------------------------

   extern Vtx rock_split_VertList_0 [];
   extern Gfx rock_split_Static_PolyList_0[];

//>-- Obj02: END ------------------------------------------- rock_split -------------------------------------------------

#endif