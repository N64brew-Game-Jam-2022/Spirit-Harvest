#include "engineTools.h"

float lerp(float val_1, float val_2, float time)
{
    return (1-time)*val_1 + time*val_2;
}

float lerpInt(int val_1, int val_2, float time)
{

    int newInt = (1-time)*val_1 + time*val_2;    
    
        if (newInt == val_1)
            if( val_2 < val_1)
                newInt--;
            else if( val_2 > val_1)
                newInt++;
        
     return newInt;
  // return (1-time)*val_1 + time*val_2;
}


/*--------------------------------------------------------------------------*/
/*-----------------------------FPS and DeltaTime----------------------------*/
/*--------------------------------------------------------------------------*/

s32 cpuCount = 0;
u32 microsec = 0;
int sec = 0;
float secf = 0;
int FPS_6 = 0;
int FPS_12 = 0;
int FPS_24 = 0;
int FPS_20 = 0;
int FPS_30 = 0;
int FPS_40 = 0;
int FPS_60 = 0;

int lastSec = 0;
int min = 0;
int frames = 0;
int lastFPS = 0;

f32	PreviousTime;		/* The time in previous frame time */
f32	DeltaTime;		/* The time passed since last frame time */
float inverseDeltaTime;


OSTime	StartTime;		/* Start time of the game */
OSTime	NowTime;		/* The current time */

OSTime	NowPauseTime;	/* For keeping time at the pause */
OSTime	LapTime;		/* Elapsed time */

#define START_TIME 100

void FrameCount()
{
    frames +=1;
}

void FPSCalc()
{
    lastFPS = frames;
    frames = 0;
}

int GetFPS()
{
    return lastFPS;
}

void CalcSysTime()
{	
    // Update time
    NowTime = osGetTime();
    NowPauseTime = NowTime - StartTime;
    LapTime = START_TIME + OS_CYCLES_TO_USEC(NowTime - StartTime);
    LapTime *= 0.001;
    sec = (LapTime*0.001)-(min*60);
    secf = (LapTime*0.001)-(min*60);
	FPS_6 = ((LapTime*0.001)-(min*60))*6;  //NOTE: this is for animation and will update 6 times per second
	FPS_12 = ((LapTime*0.001)-(min*60))*12; //NOTE: this is for animation and will update 12 times per second
	FPS_20 = ((LapTime*0.001)-(min*60))*20; //NOTE: this is for animation and will update 20 times per second
	FPS_24 = ((LapTime*0.001)-(min*60))*24; //NOTE: this is for animation and will update 24 times per second
	FPS_30 = ((LapTime*0.001)-(min*60))*30; //NOTE: this is for animation and will update 30 times per second
	FPS_40 = ((LapTime*0.001)-(min*60))*40; //NOTE: this is for animation and will update 40 times per second
	FPS_60 = ((LapTime*0.001)-(min*60))*60; //NOTE: this is for animation and will update 60 times per second

    //-(min*60)

    if(sec > 59)
        min += 1;

    if(lastSec != sec)
    {
        lastSec = sec;
        FPSCalc();
    }

    //DeltaTime = (osGetTime() - PreviousTime)/45752803.40349305;
	DeltaTime = (osGetTime() - PreviousTime);
	
	if(DeltaTime >= 0.00)
	{
		DeltaTime = DeltaTime/45752803.40349305;
		inverseDeltaTime = 1/(DeltaTime);
	}

    PreviousTime = osGetTime();
}

void initTimer()
{
    StartTime = osGetTime();
    NowTime = osGetTime();
}

int GetSeconds()
{
    return sec;
}

float GetSecondsF()
{
    return secf;
}

int GetFPS_6() // animation, physics check, or event occuring at 6 fps
{
	return FPS_6;
}

int GetFPS_12() // animation, physics check, or event occuring at  12 fps
{
	return FPS_12;
}

int GetFPS_20() // animation, physics check, or event occuring at 24 fps
{
	return FPS_20;
}

int GetFPS_24() // animation, physics check, or event occuring at 24 fps
{
	return FPS_24;
}

int GetFPS_30() // animation, physics check, or event occuring at 24 fps
{
	return FPS_30;
}

int GetFPS_40() // animation, physics check, or event occuring at 24 fps
{
	return FPS_40;
}

int GetFPS_60() // animation, physics check, or event occuring at 24 fps
{
	return FPS_60;
}



f32 GetDeltaTime()
{
    return DeltaTime; // return the amount of time since hte previous frame
}

float getInvDeltaTime(void)
{
    return inverseDeltaTime;
}

OSTime getLapTime(void)
{
    return LapTime;
}

OSTime GetNowTime()
{
    //return OS_CYCLES_TO_USEC(NowTime) /= 1000;
}


float adjustAnimRate = 1.0f; // used across animations to update movement as frame rate increases or decreases  
float adjustCamRate = 1.0f; // used in view.c to adjust camera speed based on platform.
float SetAdjustAnimRate()
{

    float currentFPS = 30;


  // //  adjustAnimRate = 
    currentFPS = GetFPS();
    
    if (currentFPS >= 56)
        {
        adjustAnimRate = 1;
        adjustCamRate = 1;
        }
        
        else if (currentFPS >= 48)
            {
                adjustAnimRate = 1.25;
                adjustCamRate = 1.1;
            }
            
            else if( currentFPS >= 38)
            {
                adjustAnimRate = 1.6;
                adjustCamRate = 1.3;
            }
                
                    else if( currentFPS >= 28)
                        {
                        adjustAnimRate = 2.15;
                        adjustCamRate = 1.75;
                        }
                        
                        else if( currentFPS >= 24)
                        {
                            adjustAnimRate = 2.5;
                            adjustCamRate = 2.0;
                        }
                        
                            else if(currentFPS >= 20)
                                {
                                    adjustAnimRate = 3;
                                    adjustCamRate = 2.25;
                                }
                                
                                else if(currentFPS >= 16)
                                {
                                    adjustAnimRate = 3.75;
                                    adjustCamRate = 2.7;
                                }
                                
                                    else if(currentFPS >= 12)
                                        {
                                        adjustAnimRate = 4;
                                        adjustCamRate = 3;
                                        }
                                        
                                        else
                                        {
                                            adjustAnimRate = 1;
                                            adjustCamRate = 1.0f; // used in view.c to adjust camera speed based on platform.
                                        }
}


u8 NextCharAnimFrame(u8 transitionIn, u8 loopStart, u8 loopEnd, u8 transitionOut, u8 frameRate)
{
    //TRANSITION IN - Animation should start at frame 0. When 'transitionIn' is reached, the animation's start or transition is complete and the loop will start. 
                        if(playerAvatar.animRig.animFrame < transitionIn)
                            playerAvatar.animRig.animFrame += frameRate;
                    
                        else if((playerAvatar.animRig.animFrame + frameRate) < loopEnd	)	
                            playerAvatar.animRig.animFrame += frameRate;

                        else if((playerAvatar.animRig.animFrame + frameRate) > loopEnd )
                            animFrame = loopStart +((playerAvatar.animRig.animFrame + frameRate) - loopEnd);
                        
                       // else if(playerAvatar.animRig.animFrame >= 32)		
                        else
                            playerAvatar.animRig.animFrame = loopStart; 

}


/*
int randomRange(int low, int high)
{
	int randomInt = guRandom();
	
	
	
	//if(randomInt <= high && randomInt >= low)
		//return randomInt;
	
	if(randomInt > high)
}*/



/*END--------------------------FPS and DeltaTime----------------------------*/

