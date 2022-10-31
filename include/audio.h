#ifndef AUDIO_H_   /* Include guard */
#define AUDIO_H_
#include "common.h"


typedef struct {
    
    u8 musicVolume;
    u8 sfxVolume;

}AudioEffects;



extern AudioEffects audioEffects;

void initAudio(void);
void PlayTownLoop(u8 track, int volume);
void PlayAmbientLoop(u8 track, int volume);
void PlayAmbientLoopLocal(u8 track, int handle, int volume, int range, Vector3 position);
void PlaySfx(u8 track);
void PlaySfx_Footstep(u8 track);
void StopSfx_Footstep(u8 track);
void PlaySfxVolume(u8 track, int volume);
void Play3dSfx(u8 track, int volume, int range, Vector3 position);


#define FX_SPIRIT1              0
#define FX_STEPS1               1
#define FX_WIND1                2
#define FX_SEATOWNM             3
#define FX_PROTOAL              4
#define FX_PROTOAR              5
#define FX_PROTOBL              6
#define FX_PROTOBR              7
#define FX_ALEFT                8
#define FX_ARIGHT               9
#define FX_B1LEFT               10
#define FX_B1RIGHT              11
#define FX_B2LEFT               12
#define FX_B2RIGHT              13
#define FX_C1LEFT               14
#define FX_C1RIGHT              15
#define FX_C2LEFT               16
#define FX_C2RIGHT              17
#define FX_INLEFT               18
#define FX_INRIGHT              19
#define FX_BONFIRE              20
#define FX_SHORE1               21
#define FX_GRASS1               22
#define FX_GRASS2               23
#define FX_GRAVEL1              24
#define FX_GRAVEL2              25
#define FX_BRIDGE1              26
#define FX_BRIDGE2              27
#define FX_XLEFT                28
#define FX_XRIGHT               29
#define FX_Y2LEFT               30
#define FX_Y2RIGHT              31
#define FX_YLEFT                32
#define FX_YRIGHT               33
#define FX_Z2LEFT               34
#define FX_Z2RIGHT              35
#define FX_ZLEFT                36
#define FX_ZRIGHT               37
#define FX_WAVES               38
#define FX_SPOTTED              39

#endif // AUDIO_H_