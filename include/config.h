#ifndef N64_CONFIG_H
#define N64_CONFIG_H

    extern int img_buf[];
    extern int ptr_buf[];
    extern int tune_buf[];
    extern int sfx_buf[];
    
    void Rom2Ram(void *from_addr, void *to_addr, s32 seq_size);
	
 /*=================================
           Sound code segments
    =================================*/
    
    // Code segment start and end
    extern char _codeSegmentStart[];
    extern char _codeSegmentEnd[];
    extern u8 _texturesSegmentStart[];
    extern u8 _texturesSegmentEnd[];
    extern u8 _texturesSegmentRomStart[];
    extern u8 _texturesSegmentRomEnd[];
    
    extern u8 _objectsSegmentStart[];
    extern u8 _objectsSegmentEnd[];
    extern u8 _objectsSegmentRomStart[];
    extern u8 _objectsSegmentRomEnd[];
    
    extern u8 _playerSegmentStart[];
    extern u8 _playerSegmentEnd[];
    extern u8 _playerSegmentRomStart[];
    extern u8 _playerSegmentRomEnd[];
    

    // Segment arrays
    extern u8 _wbankSegmentRomStart[];
    extern u8 _pbankSegmentRomStart[];
    extern u8 _pbankSegmentRomEnd[];
    extern u8 _song1SegmentRomStart[];
    extern u8 _song1SegmentRomEnd[];    
    extern u8 _sfxSegmentRomStart[];
    extern u8 _sfxSegmentRomEnd[];

    // Segment macros
    
    //texture segment arrays
    #define OBJS_START   _objectsSegmentStart
    #define OBJS_END     _objectsSegmentEnd
    #define OBJSROM_START   _objectsSegmentRomStart
    #define OBJSROM_END     _objectsSegmentRomEnd
    
    //instanced objects segment arrays
    #define TEXTURE_START   _texturesSegmentStart
    #define TEXTURE_END     _texturesSegmentEnd
    #define TEXTUREROM_START   _texturesSegmentRomStart
    #define TEXTUREROM_END     _texturesSegmentRomEnd
    
    //Player Object segment arrays 
    #define PLAYER_START   _playerSegmentStart
    #define PLAYER_END     _playerSegmentEnd
    #define PLAYERROM_START   _playerSegmentRomStart
    #define PLAYERROM_END     _playerSegmentRomEnd
    
    #define WBANK_START	    _wbankSegmentRomStart
    #define PBANK_START	    _pbankSegmentRomStart
    #define PBANK_END	    _pbankSegmentRomEnd
    #define MUSIC1_START	    _song1SegmentRomStart
    #define MUSIC1_END	    _song1SegmentRomEnd
    #define SFX_START	    _sfxSegmentRomStart
    #define SFX_END		    _sfxSegmentRomEnd

#endif