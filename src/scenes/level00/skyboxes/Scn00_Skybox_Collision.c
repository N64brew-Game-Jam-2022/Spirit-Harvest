
#include "common.h"

//>-- Obj00: START ------------------------------------------ dummy_col -------------------------------------------------

MeshCollider MColVtx_dummy_col[] = {
   { -3242.13, -6433.68, 647.75, 0, 0, 127}, 
   { -3242.13, -7063.59, 647.75, 0, 0, 127}, 
   { -2965.38, -6433.68, 647.75, 0, 0, 127}, 
};

MeshColliderTri MColTri_dummy_col[] = 
 { 
   {0, 1, 2}, 
}; 

MeshColliderObj MColObj_dummy_col[] = { 
   MColVtx_dummy_col, 
   MColTri_dummy_col, 
   1, 
}; 

//>-- Obj00: END ------------------------------------------- dummy_col -------------------------------------------------
