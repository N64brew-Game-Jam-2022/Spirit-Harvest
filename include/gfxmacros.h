#define COMBINE_HEX(U, V) ((((s32)U) << 16) & 0xFFFF0000) | (((s32)V) & 0x0000FFFF)

//Custom shaders
#define G_CC_SHADEFADEA             0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT
#define	G_CC_DECALFADE              0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT
#define	G_CC_DECALFADEA             0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0
#define	G_CC_TRANSTEXTUREFOG        TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0
#define	G_CC_TRANSTEXTUREFOG2 		0, 0, 0, COMBINED, 0, 0, 0, COMBINED

#define	G_CC_LIGHTSHAFT        TEXEL0, 0, SHADE, 0, SHADE, PRIMITIVE, 1, 0
#define	G_CC_LIGHTSHAFT2 		0, 0, 0, COMBINED, 0, 0, 0, COMBINED


#define G_CC_VTXSHADER				0,	0, PRIMITIVE,	ENVIRONMENT,	0, 0, PRIMITIVE, ENVIRONMENT
#define G_CC_MULPRIMSHADE           PRIMITIVE,0,SHADE,0,PRIMITIVE,0,SHADE,0		

#define MY_MORPH TEXEL1, TEXEL0, PRIMITIVE_ALPHA, TEXEL0, TEXEL1, TEXEL0, PRIMITIVE, TEXEL0
#define	G_RM_PASS2		GBL_c2(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
		

//------------------Typical Texture Resolution (RES) Sizes------------------
#define RES_32x32 32,32
#define RES_64x64 64,64
#define RES_32x64 32,64
#define RES_32x128 32,128
#define RES_64x32 64,32
#define RES_64x16 64,16
#define RES_128x32 128,32
#define RES_136x16 136,16


//------------------Typical Scale/Mask (SCL) Sizes------------------
//Specifies the wrap position of your texture. Think of it as an artboard scale for your texture (as related to S,T coordinates)
//To wrap a 32x32 texture, you would set to SCL_5x5 (2^5 x 2^5)
//To wrap a 32x128 texture, you would set to SCL_5x7 (2^5 x 2^7)
//Like an artboard, you can use this to mask/crop a larger image as well. 
//If you want to mask/crop a 64x64 texture to 32x64, you can set to SCL_5x6 (2^5 x 2^6)
//You can use this in conjunction with LOD to get precision positioning and a large number of wraps
//If your 64x64 texture is applied to a model with SCL_5x5 (32x32 px) S,T coordinates, 
//you can then left bitshift once in order to correct the wrap and scale

#define SCL_0x0 0,0
#define SCL_1x1 1,1 //2x2
#define SCL_2x2 2,2 //4x4
#define SCL_3x3 3,3 //8x8
#define SCL_4x4 4,4 //16x16
#define SCL_5x5 5,5 //32x32
#define SCL_6x6 6,6 //64x64
#define SCL_7x7 7,7

#define SCL_5x6 5,6
#define SCL_5x7 5,7
#define SCL_5x8 5,8
#define SCL_4x6 4,6
#define SCL_4x7 4,7
#define SCL_4x8 4,8

#define SCL_6x5 6,5
#define SCL_7x5 7,5
#define SCL_8x5 8,5
#define SCL_6x4 6,4
#define SCL_7x4 7,4
#define SCL_8x4 8,4

//------------------Typical Level of Detail (LOD) Bitshift for S,T coordinates------------------
//Bit shift the S,T coordinates for your model. 0-10 is a right shift 11-15 is a left shift
//This can be used for mip mapping or as a means of getting higher levels of precision in your texture mapping
#define RSFT_0_0 	G_TX_NOLOD, G_TX_NOLOD
#define RSFT_1_1 	1, 1
#define RSFT_2_2 	2, 2
#define RSFT_3_3 	3, 3
#define RSFT_4_4 	4, 4
#define RSFT_5_5 	5, 5

#define RSFT_0_1 	0, 1
#define RSFT_0_2 	0, 2
#define RSFT_0_3 	0, 3
#define RSFT_0_4 	0, 4

#define RSFT_1_0    1, 0
#define RSFT_1_1    1, 1
#define RSFT_1_2    1, 2
#define RSFT_2_1    2, 1

#define LSFT_1_1	15, 15
#define LSFT_2_2	14, 14
#define LSFT_3_3 	13, 13
#define LSFT_4_4 	12, 12
#define LSFT_5_5 	11, 11

#define LSFT_0_1 	0, 15


//TO DONOTE: 10/10/2021  Create TEX_8B_IA_Effect for glowing elements of power suit and re-export torso with these new glow effects 
//The following is Intensity textures (doubles as alpha value) good for effects like mist, fog, blood etc





#define TEXTURE_4B_TLUT(dl, texture, pal, scale, lod) {\
 	gDPPipeSync(dl++);\
    gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP, G_TX_WRAP,	scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_BILERP(dl, texture, pal, scale, lod) {\
 	gDPPipeSync(dl++);\
    gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP, G_TX_WRAP,	scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_BILERP);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_POINT(dl, texture, pal, scale, lod) {\
    gDPPipeSync(dl++);\
    gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP, G_TX_WRAP,	scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_POINT);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}




//Textured 
#define TEXTURE_4B_TLUT_VTXCOL(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_WRAP, G_TX_WRAP,	scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_VTXCOL_V2(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI, resolution, 0, G_TX_WRAP, G_TX_WRAP, scale, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_MIRRORX(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_MIRROR, G_TX_WRAP,	scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_CLAMP(texture, pal, scale, lod) {\
	gDPPipeSync(glistp++); gSPTexture(glistp++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(glistp++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(glistp++, 0, pal);\
	gDPLoadTextureBlock_4b(glistp++,texture,	G_IM_FMT_CI,	64, 64,	0, G_TX_CLAMP, G_TX_CLAMP,	scale, scale, lod, lod);\
	gDPSetCombineMode(glistp++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(glistp++, G_TF_BILERP);\
	gDPSetRenderMode(glistp++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_CLAMP_V2(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(glistp++); gSPTexture(glistp++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(glistp++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(glistp++, 0, pal);\
	gDPLoadTextureBlock_4b(glistp++,texture,	G_IM_FMT_CI,	RES,	0, G_TX_CLAMP, G_TX_CLAMP,	SCL, SFT);\
	gDPSetCombineMode(glistp++,G_CC_MODULATERGB, G_CC_PASS2);\
	gDPSetTextureFilter(glistp++, G_TF_BILERP);\
	gDPSetRenderMode(glistp++,G_RM_FOG_SHADE_A, G_RM_ZB_OPA_SURF2)\
}

#define TEXTURE_4B_TLUT_TRANSP(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,\
		resolution,	0, G_TX_WRAP, G_TX_WRAP,\
		scale, scale, lod, lod);\
	gDPSetCombineMode(dl++,G_CC_TRANSTEXTUREFOG, G_CC_TRANSTEXTUREFOG2);\
	gDPSetTextureFilter(dl++, G_TF_BILERP);\
	gDPSetPrimColor(dl++, 0, 255, 255, 255, 255, 90);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A,G_RM_AA_ZB_XLU_SURF2)\
}

#define TEXTURE_4B_TLUT_TRANSP_V2(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,\
		resolution,	0, G_TX_WRAP, G_TX_WRAP,\
		scale, lod);\
	gDPSetCombineMode(dl++,G_CC_TRANSTEXTUREFOG, G_CC_TRANSTEXTUREFOG2);\
	gDPSetTextureFilter(dl++, G_TF_BILERP);\
	gDPSetPrimColor(dl++, 0, 255, 255, 255, 255, 90);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A,G_RM_AA_ZB_XLU_SURF2)\
}





/*------------------------------------START---------------------------------*/
/*-------------------------------Primitive Colors---------------------------*/
/*------Ideal for flexible objects such as arm folds and some effects-------*/
/*--------------------------------------------------------------------------*/


//USAGE NOTE: Only use the following primitive color settings if you are not using textures 
#define PRIM_COLORS(dl) {\
	gDPSetCycleType(dl++,G_CYC_1CYCLE);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);\
	gSPClearGeometryMode(dl++,(G_SHADE|G_SHADING_SMOOTH|G_LIGHTING|G_TEXTURE_GEN|G_TEXTURE_GEN_LINEAR|G_CULL_BOTH|G_FOG));\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_CULL_BACK | G_SHADE | G_SHADING_SMOOTH | G_LIGHTING );\
	gDPSetCombineMode(dl++,G_CC_PRIMITIVE, G_CC_PRIMITIVE);\
	gDPSetColorDither(dl++,G_CD_BAYER)\
}
#define PRIM_COLORS_STATIC \
	gsDPSetCycleType(G_CYC_1CYCLE),\
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),\
	gsSPClearGeometryMode((G_SHADE|G_SHADING_SMOOTH|G_LIGHTING|G_TEXTURE_GEN|G_TEXTURE_GEN_LINEAR|G_CULL_BOTH|G_FOG)),\
	gsSPSetGeometryMode( G_ZBUFFER | G_CULL_BACK | G_SHADE | G_SHADING_SMOOTH | G_LIGHTING ),\
	gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),\
	gsDPSetColorDither(G_CD_BAYER)\


#define PRIM_COLORS_SHADED(dl) {\
	gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2);\
	gSPClearGeometryMode(dl++,(G_SHADE|G_SHADING_SMOOTH|G_LIGHTING|G_TEXTURE_GEN|G_TEXTURE_GEN_LINEAR|G_CULL_BOTH|G_FOG));\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_CULL_BACK | G_SHADE | G_SHADING_SMOOTH | G_LIGHTING );\
	gDPSetCombineMode(dl++,G_CC_PRIMITIVE, G_CC_PRIMITIVE);\
	gDPSetColorDither(dl++,G_CD_BAYER)\
}

/*-------------------------------------END----------------------------------*/
/*-------------------------------Primitive Colors---------------------------*/







/*------------------------------------START---------------------------------*/
/*------------------------------Transparent Objects-------------------------*/
/*------Ideal for lights, spells, liquids, 2D Sprites and other effects-----*/
/*--------------------------------------------------------------------------*/

//NOTE: The following are Intensity textures (doubles as alpha value) good for effects like mist, fog, blood etc

    /*-------------------Transparent Textures - TIPS---------------------
        If you are having issues getting the visuals to look right:
        
        Problem 1: Rainbow colored instead of the colors of my texture. 
            - Likely Fix 1: Make sure when you export your model for use as an 
            edge texture that you have it set to UV Colors not to Normals.
        
        Problem 2: There is no transparency, there is a solid color background 
        when it should be transparent.   
            Likely Fix 2: Double check your texture's tlut to make sure 
            that your transparent area is set to 0x0000 not 0xFFFF
        
        Problem 3: The rendering order is strange, the transparent texture 
        appears to be behind an object that it's actually in front of or the
        color blending is not correct.
            Likely Fix 3: Transparent objects should be the last things rendered
            in your game's graphical functions. The best rendering order 
            generally is: 
            1) Game World / Environment 
            2) Enemies/NPCs/Player 
            3) Decal/Edge Transparency "cut-out" textures
            4) Transluscent/Transparent textures
    ---------------------------------------------------------------------------*/


    /*-------------------Intensity Textures - USAGE NOTES---------------------
        /* The following are Intensity textures (doubles as alpha value).
        - This works well for effects such as mist, blood, shadows etc
    ---------------------------------------------------------------------------*/
    
#define TEX_4B_I_EFFECT(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(dl++);\
	gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	gDPSetTextureLUT(dl++, G_TT_IA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_I,\
		RES,	0, G_TX_WRAP, G_TX_WRAP,\
		SCL, SFT);\
	gDPSetCombineLERP(dl++,	TEXEL0, 0, PRIMITIVE, 0,\
						TEXEL0, 0, TEXEL0, 0,\
						1, 0, 0, COMBINED,\
						TEXEL0, 0, 0, COMBINED);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2)\
}

#define TEX_8B_I_EFFECT(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(dl++);\
	gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	gDPSetTextureLUT(dl++, G_TT_IA16);\
	gDPLoadTextureBlock(dl++,texture,	G_IM_FMT_I, G_IM_SIZ_8b,\
		RES,	0, G_TX_WRAP, G_TX_WRAP,\
		SCL, SFT);\
	gDPSetCombineLERP(dl++,	TEXEL0, 0, PRIMITIVE, 0,\
						TEXEL0, 0, TEXEL0, 0,\
						1, 0, 0, COMBINED,\
						TEXEL0, 0, 0, COMBINED);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2)\
}


    /*----------------4B Color Index Translucency - USAGE NOTES-----------------
        /* The following is for a partially transparent textures. 
        - Alpha is controlled by fog and primitive color alpha.   
        - Primitive color default is set here of:
            125 for TEX_4B_CI_LIQUID, 0 for TEX_4B_CI_LIGHTSHAFT. 
        - To tweak these effect, adjust your gDPSetPrimColor settings
        and gDPSetFogColor settings immediately after this Macro is used.
    ---------------------------------------------------------------------------*/
#define TEX_4B_CI_LIQUID(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(dl++);\
	gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH );\
	gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,\
		RES,	0, G_TX_WRAP, G_TX_WRAP,\
		SCL, SFT);\
	gDPSetCombineMode(dl++,G_CC_TRANSTEXTUREFOG, G_CC_TRANSTEXTUREFOG2);\
	gDPSetTextureFilter(dl++, G_TF_AVERAGE);\
	gDPSetColorDither(dl++, G_CD_NOISE);\
	gDPSetAlphaDither(dl++, G_CD_NOISE);\
	gDPSetPrimColor(dl++, 0, 255, 255, 255, 255, 125);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A,G_RM_ZB_XLU_SURF2)\
}
#define TEX_4B_CI_LIGHTSHAFT(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(dl++);\
	gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH );\
	gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
	gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++,texture,	G_IM_FMT_CI,\
		RES,	0, G_TX_WRAP, G_TX_WRAP,\
		SCL, SFT);\
	gDPSetCombineMode(dl++,G_CC_LIGHTSHAFT, G_CC_LIGHTSHAFT2);\
	gDPSetTextureFilter(dl++, G_TF_BILERP);\
	gDPSetColorDither(dl++, G_CD_NOISE);\
	gDPSetAlphaDither(dl++, G_CD_NOISE);\
	gDPSetPrimColor(dl++, 0, 255, 255, 255, 255, 0);\
	gDPSetRenderMode(dl++,G_RM_FOG_SHADE_A,G_RM_ZB_XLU_SURF2)\
}

    /*------------------TEX_4B_CI_EDGETRANSP - USAGE NOTES---------------------
        - The following is for a single bit of alpha. 
        - The texture is a "cut-out" and is either 0% opacity or 100% opacity.
        - This is useful for objects like 2D sprites. (Ex fences, UI elements, 
        ammo pick-ups, object detail decals etc. 
        - It has generally better performance than an object with varying 
        amounts of transparency.
    ---------------------------------------------------------------------------*/
/*#define TEX_4B_CI_EDGETRANSP(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH );\
	gDPSetCycleType(dl++, G_CYC_1CYCLE);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
    gDPLoadTLUT_pal16(dl++, 0, pal);\
    gDPLoadTextureBlock_4b(dl++, texture, G_IM_FMT_CI,\
		resolution, 0, G_TX_WRAP, G_TX_WRAP,\
		scale, scale, lod, lod );\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2)\
}*/



    /*----------------4B Color Edge Transparency - USAGE NOTES-----------------
        - The following is for a single bit of alpha. 
        - The texture is a "cut-out" and is either 0% opacity or 100% opacity.
        - This is useful for objects like 2D sprites. (Ex fences, UI elements, 
        ammo pick-ups, object detail decals etc. 
        - It has generally better performance than an object with varying 
        amounts of transparency.
    ---------------------------------------------------------------------------*/

#define TEXTURE_4B_EDGE(dl, texture, pal, resolution, scale, lod) {\
	gDPPipeSync(dl++);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
    gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++, texture, G_IM_FMT_CI,\
		resolution, 0, G_TX_WRAP, G_TX_WRAP,\
		scale, scale, lod, lod );\
	gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH );\
    gDPSetCycleType(dl++, G_CYC_1CYCLE);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2)\
}

#define TEXTURE_4B_EDGE_V2(dl, texture, pal, RES, SCL, SFT) {\
	gDPPipeSync(dl++);\
	gDPSetTextureLUT(dl++, G_TT_RGBA16);\
    gDPLoadTLUT_pal16(dl++, 0, pal);\
	gDPLoadTextureBlock_4b(dl++, texture, G_IM_FMT_CI,\
		RES, 0, G_TX_WRAP, G_TX_WRAP,\
		SCL, SFT );\
	gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	gSPSetGeometryMode(dl++, G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH );\
    gDPSetCycleType(dl++, G_CYC_1CYCLE);\
	gSPTexture(dl++,0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON);\
	gDPSetCombineMode(dl++,G_CC_MODULATERGBDECALA, G_CC_MODULATERGBDECALA);\
	gDPSetRenderMode(dl++,G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2)\
}



/*-------------------------------------END----------------------------------*/
/*------------------------------Transparent Objects-------------------------*/





/*------------------------------------START---------------------------------*/
/*------------------------------Specialty Commands--------------------------*/
/*-----Various texture, fog, and lighting effect commands commonly used-----*/
/*--------------------------------------------------------------------------*/



        /*------------------Animated Textures - USAGE NOTES------------------------
            - To animate a texture, send the w and h of the texture being displayed
            and the starting S,T coordinate offset. The texWidth and texHeight will be
            added to the offsetS and offsetT coordinates.
            - This can be used to cycle across a larger texture such as water or effects
        ---------------------------------------------------------------------------*/
        
//To animate a texture, send it the w and h of the texture and the starting S,T coordinate offset from 0,0
#define TEX_ANIM_OFFSET(dl, texWidth, texHeight, offsetS, offsetT) {\
	gDPSetTileSize(glistp++, G_TX_RENDERTILE, offsetS, offsetT, offsetS+texWidth, offsetT+texHeight);\
}

    /*---------------Basic fog and light settings - USAGE NOTES-------------------
        - A common set of commands for basic set up of an object with fog color and distance
        - Some of these commands will be overwritten when sending texture commands but are included 
        here in an attempt to prevent the likelihood of lockups if textures not set up correctly. 
    ------------------------------------------------------------------------------*/

//NOTE: Standard lit object material using normals (no vector colors): 
#define MAT_FOG_LIGHT(dl,r,g,b,a,min,max){\
	gDPPipeSync(dl++);\
    gDPSetCycleType(dl++,G_CYC_2CYCLE);\
    gSPSetGeometryMode(dl++,G_FOG);\
	gDPSetFogColor(dl++, r,g,b,a);\
	gSPFogPosition(dl++, min, max)\
}

#define TEXTURE_FOG_LIGHT(dl,r,g,b,a,min,max){\
	gDPPipeSync(dl++);\
    gDPSetCycleType(dl++,G_CYC_2CYCLE);\
    gSPSetGeometryMode(dl++,G_FOG);\
	gDPSetFogColor(dl++, r,g,b,a);\
	gSPFogPosition(dl++, min+130, max+130)\
}

//NOTE: The following is for VTX colors without using lighting
#define TEXTURE_FOG_VTXCOL(dl,r,g,b,a,min,max){\
	gDPPipeSync(dl++);\
    gDPSetCycleType(dl++,G_CYC_2CYCLE);\
    gSPSetGeometryMode(dl++,G_FOG);\
	gDPSetFogColor(dl++, r,g,b,a);\
	gSPFogPosition(dl++, min, max)\
}

#define TEXTURE_FOG_VTXCOL_STATIC(dl,r,g,b,a,min,max){\
	gDPPipeSync(dl++);\
    gDPSetCycleType(dl++,G_CYC_2CYCLE);\
    gSPSetGeometryMode(dl++,G_FOG);\
	gDPSetFogColor(dl++, r,g,b,a);\
	gSPFogPosition(dl++, min, max)\
}

// //NOTE: The following is for VTX colors without using lighting
// #define TEXTURE_FOG_VTXCOL(dl,r,g,b,a,min,max){\
	// gDPPipeSync(dl++);\
	// gSPClearGeometryMode(dl++,0xFFFFFFFF);\
	// gSPSetGeometryMode(dl++, G_ZBUFFER|G_CULL_BACK | G_SHADE | G_FOG | G_SHADING_SMOOTH );\
	// gDPSetCycleType(dl++,G_CYC_2CYCLE);\
	// gDPSetFogColor(dl++, r,g,b,a);\
	// gSPFogPosition(dl++, min, max);\
	// gDPSetColorDither(dl++, G_CD_BAYER);\
	// gDPSetCombineMode(dl++, G_CC_MODULATERGBA, G_CC_PASS2);\
	// gDPSetRenderMode(dl++, G_RM_FOG_SHADE_A, G_RM_RA_ZB_OPA_SURF2)\
// }

/*
#define	FBUF_ADRS(x,y)		(FBUF_TOP+((x)+(y)*SCREEN_WD)*2)
#define	canvas_cursor(x,y)	__cursor = (u16 *)FBUF_ADRS((x),(y))
#define	canvas_center(x,y)	canvas_cursor((SCREEN_WD-(x)*FONT_WSKIP)/2,(y))
#define	canvas_wskip(x)		__cursor += (x);
#define	canvas_putstr(n,fg,bg)	canvas_puts((n), sizeof(n)-1, (fg), (bg))
*/

























