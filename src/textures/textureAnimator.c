#include "common.h"

    int animCoordCycleH;
    int animCoordCycleV;
    
    void AnimCycle();
    
    int animCoordTimer = 0;
    
    
    
void AnimCycle()
{
	int tempAnimCoordTimer = GetFPS_30();
	
	if (tempAnimCoordTimer != animCoordTimer)
	{
		animCoordTimer = tempAnimCoordTimer;
		animCoordCycleV += 1;
        animCoordCycleH += 1;
	}

	if (animCoordCycleV > 511)
		animCoordCycleV = 0;		
	else if (animCoordCycleV < 0)
		animCoordCycleV = 512;
        
    if (animCoordCycleH > 511)
		animCoordCycleH = 0;		
	else if (animCoordCycleH < 0)
		animCoordCycleH = 512;
}

