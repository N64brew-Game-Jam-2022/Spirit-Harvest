

#ifndef VIEW_H 
#define VIEW_H 

/*
#include <assert.h>
#include <nusys.h>
#include <math.h>

#include "main.h"
#include "graphic.h"
#include "para.h"
*/

#include "common.h"
#include "objectDefs.h"


typedef struct {
    u8 r;
    u8 g;
    u8 b;
}Color;

typedef struct {
	//For use with collision tests
	
	Color backgroundColor; 
    Color fogColor; 
    //Color fogDistance;
    u16 fogNear;
    u16 fogFar;
    u16 farPlane;
    u16 nearPlane;

}ViewSettings;

extern ViewSettings viewSettings;

extern CameraObject mainCamera;

extern void SetGameViewMtx( Dynamic* );
extern void SetMenuViewMtx( Dynamic* dp );

extern void UpdateCameraPosition( Dynamic* dp );
extern void initMainCamera();

extern Vector3 GetCameraPosition();

extern u8 wideScreen;

#endif
