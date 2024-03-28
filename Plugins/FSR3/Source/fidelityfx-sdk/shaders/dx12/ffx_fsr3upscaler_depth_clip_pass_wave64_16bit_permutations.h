#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9.h"
#include "ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c.h"

typedef union ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_IndirectionTable[] = {
    4,
    4,
    4,
    4,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    6,
    6,
    6,
    6,
    3,
    3,
    3,
    3,
    1,
    1,
    1,
    1,
    5,
    5,
    5,
    5,
    7,
    7,
    7,
    7,
    4,
    4,
    4,
    4,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    6,
    6,
    6,
    6,
    3,
    3,
    3,
    3,
    1,
    1,
    1,
    1,
    5,
    5,
    5,
    5,
    7,
    7,
    7,
    7,
};

static const ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationInfo g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_5da5fd5b7c86c6e36a776f049f8df419_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_3cacd0fe2643f5981870c9dcd2864483_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_b05d8a8c30d6e4c001841a2814e06572_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_d9d7ae72ed15b478ea1de380230f33ab_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_44c97170495554d6c6818187dbbdd184_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_2ef6c93bb35cabf56cb0047c273e4b10_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_0dc6083c5b776842eef78d631e9460a9_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_size, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_wave64_16bit_87289c9fd14d4f36b628b69bd2c3d06c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};
