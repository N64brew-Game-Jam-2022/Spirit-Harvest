//audio
#include <nusys.h>
#include <ultra64.h>
#include <nualstl_n.h>
#include "config.h"
#include "audioDefs.h"
#include "audio.h"


//handle for background
static musHandle sndBgHandle[7];

AudioEffects audioEffects = 
{
    40,
    0
};

//static musHandle sndBgHandle1;
//static musHandle sndBgHandle2;
//static musHandle sndBgHandle3;
//static musHandle sndBgHandle4;


//handle for obne shot sound effects
static musHandle sndFxHandle;
static musHandle seqHandle;
static musHandle sndStepFxHandle;

void initAudio(void)
{
    musConfig c;

    c.control_flag	    = 0;                                // Set to MUSCONTROL_RAM if wbk file also placed in RAM
    c.channels		    = NU_AU_CHANNELS;                   // Maximum total number of channels
    c.sched		        = NULL;                             // The address of the Scheduler structure. NuSystem uses NULL
    c.thread_priority	= NU_AU_MGR_THREAD_PRI;             // thread priority (highest)
    c.heap		        = (unsigned char*)NU_AU_HEAP_ADDR;  // Heap address
    c.heap_length	    = NU_AU_HEAP_SIZE;                  // Heap size
    c.ptr		        = NULL;                             // Allows you to set a default ptr file
    c.wbk		        = NULL;                             // Allows you to set a default wbk file
    c.default_fxbank	= NULL;                             // Allows you to set a default bfx file
    c.fifo_length	    = NU_AU_FIFO_LENGTH;                // The size of the library's FIFO buffer
    c.syn_updates	    = NU_AU_SYN_UPDATE_MAX;             // Specifies the number of updates usable by the synthesizer.
    c.syn_output_rate	= 44100;                            // Audio output rate. The higher, the better quality
    c.syn_rsp_cmds	    = NU_AU_CLIST_LEN;                  // The maximum length of the audio command list.
    c.syn_retraceCount	= 1;                                // The number of frames per retrace message
    c.syn_num_dma_bufs	= NU_AU_DMA_BUFFER_NUM;             // Specifies number of buffers Audio Manager can use for DMA from ROM.
    c.syn_dma_buf_size	= NU_AU_DMA_BUFFER_SIZE;            // The length of each DMA buffer

    // Initialize the Audio Manager.
    nuAuStlMgrInit(&c);

    // Register the PRENMI function.
    nuAuPreNMIFuncSet(nuAuPreNMIProc);
}




// unsigned short *DuplicateLookUp(musHandle handle)
  // {
    // int i, count;
    // unsigned short *src, *dest;

    // count = MusHandleWaveCount(handle);
    // dest = MemMalloc(sizeof(unsigned short)*count);
    // src = MusHandleWaveAddress(handle);

    // for (i=0; i<count; i++)
      // dest[i]=src[i];

    // return (dest);
  // }







u8 introPlayed = 0;
u8 loop = 1;
int tempPan = 0;
int townAABBL = 0;
int townAABBR = 0;
int townAABBLTimer = 0;


s32 target_marker = 1024;

       s32 count; 
       u16 *lookup, swap;
       
float startTime = 0;
float targetTime = 17;
float currentTime = 0;


void PlayTownLoop(u8 track, int volume)
{
    
    MusHandleSetVolume(sndBgHandle[0], volume);
    MusHandleSetVolume(sndBgHandle[1], volume);    
       

    if(volume == 0)
    {
        startTime = 0;
        currentTime = 0;
        townAABBL = 0;
        sndBgHandle[0] = 0;
        introPlayed = 0;
        
    }    
       
    if(volume != 0)
    {
    
        startTime = GetSecondsF();
        
        if(startTime != 0)
        {
            currentTime = GetSecondsF();

            Debug_MiscVar[2].x = currentTime;
            Debug_MiscVar[2].y = targetTime;
            
            
            // if(targetTime >= 60.0f)
                // targetTime -= 60.0f;
                
            if (currentTime >= 60.0f)
            {
                targetTime -= 60.0f;
                currentTime = currentTime - 60.0f;
            }
            
            
        }
        
        if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 0)
        {
        //FX_INLEFT
//FX_INRIGHT
        
            townAABBL = 1;
            
            if(introPlayed == 0) //This should only be played once when you first enter the area or load the game
            {
                targetTime = currentTime + 11.2;
                MusHandleStop(sndBgHandle[0], 0);
                MusHandleStop(sndBgHandle[1], 0);
                
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_INLEFT);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_INRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
                
                introPlayed = 1;
            }
        }
        
        
       // else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 1)
        else if(currentTime > targetTime && townAABBL == 1)
        {
            townAABBL = 2;
            targetTime = currentTime + 11.2;
            
            //currentTime = GetSeconds();
            
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            if(loop == 1){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_ALEFT);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_ARIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_XLEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_XRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
            }
        }
        
        
        
        else if(currentTime > targetTime && townAABBL == 2)
        {
            townAABBL = 3;
            targetTime = currentTime + 11.2;
            
            //currentTime = GetSeconds();
            
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
             if(loop == 1){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_ALEFT);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_ARIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_XLEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_XRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
            }
        }
        
        
        else if(currentTime > targetTime && townAABBL == 3)
        {   
            townAABBL = 4;        
            targetTime = currentTime + 5.5;
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
             if(loop == 1){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_B1LEFT);
                //sndBgHandle[0] = nuAuStlSndPlayerPlay(track+1);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_B1RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_YLEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_YRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
            }
        }
        
        else if(currentTime > targetTime && townAABBL == 4)
        {
        
            townAABBL = 5;
            targetTime = currentTime + 6.1;
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            if(loop == 1){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_B2LEFT);
                //sndBgHandle[0] = nuAuStlSndPlayerPlay(track+1);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_B2RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_Y2LEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_Y2RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
            }
        }
        
        else if(currentTime > targetTime && townAABBL == 5)
        {        
            townAABBL = 6;
            targetTime = currentTime + 5.5;
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            if(loop == 1){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_C1LEFT);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_C1RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_ZLEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_ZRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
            }
        }
        
        else if(currentTime > targetTime && townAABBL == 6)
        {        
            townAABBL = 0;
            targetTime = currentTime + 6.2;
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            if(loop == 1){ 
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_B2LEFT);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_B2RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
                loop = 2;
            }
            
            else if(loop == 2){
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_Z2LEFT);
                MusHandleSetVolume(sndBgHandle[0], volume+10);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_Z2RIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume+10);
                
                loop = 1;
            }
        }
 
        
        
        
        
        
        // /*TESTING VERSION:*/
        
            // else if(currentTime > targetTime && townAABBL == 3)
            // {   
                // townAABBL = 4;        
                
                // MusHandleStop(sndBgHandle[0], 0);
                // MusHandleStop(sndBgHandle[1], 0);
                
                // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+2);
               // // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                // MusHandleSetVolume(sndBgHandle[0], volume);
                
                // sndBgHandle[1] = nuAuStlSndPlayerPlay(track+3);
                // MusHandleSetVolume(sndBgHandle[1], volume);
            
            // }
            
            // else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 4)
            // {
            
                // townAABBL = 5;
                // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+4);
               // // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                // MusHandleSetVolume(sndBgHandle[0], volume);
                
                // sndBgHandle[1] = nuAuStlSndPlayerPlay(track+5);
                // MusHandleSetVolume(sndBgHandle[1], volume);
            // }
            
            // else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 5)
            // {        
                // townAABBL = 6;
                // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+6);
               // // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                // MusHandleSetVolume(sndBgHandle[0], volume);
                
                // sndBgHandle[1] = nuAuStlSndPlayerPlay(track+7);
                // MusHandleSetVolume(sndBgHandle[1], volume);
            // }
            
            // else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 6)
            // {        
                // townAABBL = 0;
                // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+4);
               // // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                // MusHandleSetVolume(sndBgHandle[0], volume);
                
                // sndBgHandle[1] = nuAuStlSndPlayerPlay(track+5);
                // MusHandleSetVolume(sndBgHandle[1], volume);
            // }
 
        
    }
    return;
}

void PlayAmbientLoop(u8 track, int volume)
{

       
    MusHandleSetVolume(sndBgHandle[0], volume);
    MusHandleSetVolume(sndBgHandle[1], volume);    
       

    if(volume == 0)
    {
        startTime = 0;
        currentTime = 0;
        townAABBL = 0;
        sndBgHandle[0] = 0;
        introPlayed = 0;
        
    }    
       
    if(volume != 0)
    {
    
        
    
    
        startTime = GetSecondsF();
        
        if(startTime != 0)
        {
            currentTime = GetSecondsF();

            Debug_MiscVar[2].x = currentTime;
            Debug_MiscVar[2].y = targetTime;
            
            
            // if(targetTime >= 60.0f)
                // targetTime -= 60.0f;
                
            if (currentTime >= 60.0f)
            {
                targetTime -= 60.0f;
                currentTime = currentTime - 60.0f;
            }
            
            
        }
        
        if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 0)
        {
        //FX_INLEFT
//FX_INRIGHT
        
        
            townAABBL = 1;
            
            if(introPlayed == 0) //This should only be played once when you first enter the area or load the game
            {
                targetTime = currentTime + 11.2;
                MusHandleStop(sndBgHandle[0], 0);
                MusHandleStop(sndBgHandle[1], 0);
                
                sndBgHandle[0] = nuAuStlSndPlayerPlay(FX_INLEFT);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(FX_INRIGHT);
                MusHandleSetVolume(sndBgHandle[1], volume);
                
                introPlayed = 1;
            }
        }
        
        
       // else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 1)
        else if(currentTime > targetTime && townAABBL == 1)
        {
            townAABBL = 2;
            targetTime = currentTime + 11.2;
            
            //currentTime = GetSeconds();
            
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            
            sndBgHandle[0] = nuAuStlSndPlayerPlay(track);
            //sndBgHandle[0] = nuAuStlSndPlayerPlay(track+1);
            MusHandleSetVolume(sndBgHandle[0], volume);
            
            sndBgHandle[1] = nuAuStlSndPlayerPlay(track+1);
            MusHandleSetVolume(sndBgHandle[1], volume);
        }
        
        
        
        else if(currentTime > targetTime && townAABBL == 2)
        {
            townAABBL = 3;
            targetTime = currentTime + 11.2;
            
            //currentTime = GetSeconds();
            
            MusHandleStop(sndBgHandle[0], 0);
            MusHandleStop(sndBgHandle[1], 0);
            
            
            sndBgHandle[0] = nuAuStlSndPlayerPlay(track);
            //sndBgHandle[0] = nuAuStlSndPlayerPlay(track+1);
            MusHandleSetVolume(sndBgHandle[0], volume);
            
            sndBgHandle[1] = nuAuStlSndPlayerPlay(track+1);
            MusHandleSetVolume(sndBgHandle[1], volume);
        }
        
        
        
        /*TESTING VERSION:*/
        
            else if(currentTime > targetTime && townAABBL == 3)
            {   
                townAABBL = 4;        
                
                MusHandleStop(sndBgHandle[0], 0);
                MusHandleStop(sndBgHandle[1], 0);
                
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track+2);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[1], volume);
            
            }
            
            else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 4)
            {
            
                townAABBL = 5;
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track+4);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(track+5);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 5)
            {        
                townAABBL = 6;
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track+6);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(track+7);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
            
            else if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && townAABBL == 6)
            {        
                townAABBL = 0;
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track+4);
               // sndBgHandle[0] = nuAuStlSndPlayerPlay(track+3);
                MusHandleSetVolume(sndBgHandle[0], volume);
                
                sndBgHandle[1] = nuAuStlSndPlayerPlay(track+5);
                MusHandleSetVolume(sndBgHandle[1], volume);
            }
 
        
    }
    return;
    
}


void PlayAmbientLoopOLD(u8 track, int volume)
{




    //sndBgHandle[0] = MusStartEffect()
    //seqHandle = MusStartSong(tune_buf);
	//if(nuAuStlSndPlayerGetSndState(sndBgHandle[handle]) == 0)

        if(townAABBL == 0)
            townAABBL = 1;
        if(townAABBR == 0)
            townAABBR = 1;

    
	if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0 && track == 4)
	{
            if(townAABBL == 1)
            {
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track);
                MusHandleSetVolume(sndBgHandle[0], volume);
                townAABBL = 2;
            }
            
            else if(townAABBL == 2)
            {
                sndBgHandle[0] = nuAuStlSndPlayerPlay(track+2);
                MusHandleSetVolume(sndBgHandle[0], volume);
                townAABBL = 1;
            }
            
           // townAABB = 2;
    }
        
        // else if(townAABB == 2)
        // {
            // sndBgHandle[0] = nuAuStlSndPlayerPlay(track + 2);
            // MusHandleSetVolume(sndBgHandle[0], volume);
            
            // townAABB = 1;
        // }

        			// sndBgHandle[handle] = nuAuStlSndPlayerPlay(track);
			// MusHandleSetVolume(sndBgHandle[handle], (int)(volume * dist));
	
    
    if(nuAuStlSndPlayerGetSndState(sndBgHandle[1]) == 0 && track == 5)
	{
        if(townAABBR == 1)
        { 
            sndBgHandle[1] = nuAuStlSndPlayerPlay(track);
            MusHandleSetVolume(sndBgHandle[1], volume);
            townAABBR = 2;
        }

        			// sndBgHandle[handle] = nuAuStlSndPlayerPlay(track);
			// MusHandleSetVolume(sndBgHandle[handle], (int)(volume * dist));
	}
    
    
    
    // if(tempPan < 256)
        // tempPan += 0.01f;
    // else
        // tempPan = 0.0f;
        
    if(nuAuStlSndPlayerGetSndState(sndBgHandle[2]) == 0)
	{
        // if(tempPan == 256)
            // tempPan = 0;
        // else
            // tempPan = 256;
    
        // sndBgHandle[2] = nuAuStlSndPlayerPlay(0);
        // MusHandleSetVolume(sndBgHandle[2], volume);
        // MusHandleSetPan(sndBgHandle[2], tempPan);
    }
    
    else
    {
        //MusHandleSetPan(sndBgHandle[2], tempPan);
    }
    return;
    
}

u8 testPan = 0;
Vector3 normalSoundPos = {0.0f,0.0f,0.0f};
Vector3 normalCamPos = {0.0f,0.0f,0.0f};
Vector3 normalPlayerPos =  {0.0f,0.0f,0.0f};
Vector3 relSoundPos = {0.01f,0.01f,0.01f};
float camToSound;
extern Vector3 Debug_MiscVar[4];
//----- NOTE ----- PlayAmbientLoopLocal increases the volume of the audio clip based on how close the camera is to the object (it does not have stereo panning)
void PlayAmbientLoopLocal(u8 track, int handle, int volume, int range, Vector3 position)
{
	// MusHandleSetPan(sfx->handle, scale);
	// MusHandleSetFreqOffset(sfx->handle, (float)(sfx->pitch-128)/10.0);
	// MusHandleSetTempo(sfx->handle, sfx->pitch);
            // if(testPan <= 255)
                // testPan += 1;
            // else
                // testPan = 0;

        
    
	if(nuAuStlSndPlayerGetSndState(sndBgHandle[handle]) == 0)
	{
    	float distance = vectorDistance(mainCamera.obj.pos, position);
        //float camToSound;
		float squareRange = range*range;
        float tempCam = mainCamera.audioOrbit;
        float cam = mainCamera.audioOrbit;
        float posPan = 0.0f;   
        int pan = 0;

        
		if (distance < squareRange)
		{
			float dist = 1-((1.0f/squareRange)*distance);
			dist = dist*dist*dist*dist;
			sndBgHandle[handle] = nuAuStlSndPlayerPlay(track);
			MusHandleSetVolume(sndBgHandle[handle], (int)(volume * dist));
            
            
            MusHandleSetPan(sndBgHandle[handle], pan);
		}
	}
	else
	{
    	float distance = vectorDistance(mainCamera.obj.pos, position);
        float camToSound = mainCamera.cameraOrbit;
		float squareRange = range*range;
        float tempCam = mainCamera.audioOrbit;
        float cam = mainCamera.audioOrbit;
        float posPan = 0.0f;   
        
        int pan = 0;
        
        
        
        
        normalSoundPos = position;
        normalSoundPos.z = 0.01f; 
        normalCamPos = mainCamera.obj.pos;   
        normalCamPos.z = 0.01f;  
        
        if(normalCamPos.y > normalSoundPos.y && normalCamPos.x > normalSoundPos.x){
            //As the .y position Swap the direction of the sound
            tempCam -= 90;
        }
        
        else if(normalCamPos.y > normalSoundPos.y && normalCamPos.x < normalSoundPos.x){
            //As the .y position Swap the direction of the sound
            tempCam += 90;
        }
        
        if (tempCam > 180)
            tempCam -= 180;
        else 
            tempCam = (180-tempCam);
        tempCam = tempCam*(256.0/180.0);
        pan = (int)tempCam;        
        
        
    
        // Debug_MiscVar[0].x = camToSound;         
        // Debug_MiscVar[0].y = posPan;
        // Debug_MiscVar[0].z = pan;
        
        // Debug_MiscVar[1].x = relSoundPos.x;         
        // Debug_MiscVar[1].y = relSoundPos.y;
        // Debug_MiscVar[1].z = relSoundPos.z;
        
        

		if (distance < squareRange)
		{
			float dist = 1-((1.0f/squareRange)*distance);
			dist = dist*dist*dist*dist;
			MusHandleSetVolume(sndBgHandle[handle], (int)(volume * dist));
            MusHandleSetPan(sndBgHandle[handle], pan);
		}
		else
			MusHandleStop(sndBgHandle[handle],0);
            
        
	}
    
    
}



/*void PlayAmbientLoop(u8 track)
{
	if(nuAuStlSndPlayerGetSndState(sndBgHandle[0]) == 0)
		sndBgHandle[0] = nuAuStlSndPlayerPlay(track);
}*/

void PlaySfx(u8 track)
{
	sndFxHandle = nuAuStlSndPlayerPlay(track);
}

void PlaySfx_Footstep(u8 track)
{
	if(nuAuStlSndPlayerGetSndState(sndStepFxHandle) == 0)
	{	
        //MusStartEffect2(track, 50, 255, 0, -1);
		sndStepFxHandle = MusStartEffect(track);
		MusHandleSetVolume(sndStepFxHandle, 45);
		        MusHandleSetFreqOffset(sndStepFxHandle, -(guRandom()%50)*0.05f);
	}
}

void StopSfx_Footstep(u8 track)
{
    //MusHandleStop(track);
    MusHandleStop(sndStepFxHandle,track);
}

u8 currentTrack = 50;
void PlaySfxVolume(u8 track, int volume)
{   
    
   // musHandle *ptrsndFxHandle = &sndFxHandle;
  //  MusFxBankSetSingle(ptrsndFxHandle);
  
    // if(track != currentTrack)
    // {
        // MusHandleStop(sndFxHandle, 0);
        // currentTrack = track;
    // }
    
    // if(nuAuStlSndPlayerGetSndState(sndFxHandle) == 0 && track == currentTrack)
    // {
        // sndFxHandle = MusStartEffect(track);    
        // //sndFxHandle = MusStartEffect(track);
        // MusHandleSetVolume(sndFxHandle, volume);
    // }
    
   if(nuAuStlSndPlayerGetSndState(sndFxHandle) == 0){
   
       // if(currentTrack != track){
            sndFxHandle = MusStartEffect(track);    
            MusHandleSetVolume(sndFxHandle, volume);
            //currentTrack = track;
       // }
   }
    
	//MusHandleSetFreqOffset(sndFxHandle, -(guRandom()%100)*0.05f);
}


// void PlaySfxVolumeOLD(u8 track, int volume)
// { 
	// sndFxHandle = MusStartEffect(track);
	// MusHandleSetVolume(sndFxHandle, volume);
	// MusHandleSetFreqOffset(sndFxHandle, -(guRandom()%100)*0.05f);
// }

void Play3dSfx(u8 track, int volume, int range, Vector3 position)
{

	float distance = vectorDistance(mainCamera.obj.pos, position);
	float squareRange = range*range;
	//calculate volume multiplier - inverselerp?
    if (distance < squareRange)
	{
		//distance = (range-distance)*(65536.0/range);
		float dist = 1-((1.0f/squareRange)*distance);
		//volume = (int)(volume * dist);
		
		sndFxHandle = MusStartEffect(track);
		MusHandleSetVolume(sndFxHandle, (int)(volume * dist));
	}
    
}