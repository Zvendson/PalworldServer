#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// Enum FSR2TemporalUpscaling.EFSR2QualityMode
// NumValues: 0x0006
enum class EFSR2QualityMode : uint32
{
	Unused                                   = 0,
	Quality                                  = 1,
	Balanced                                 = 2,
	Performance                              = 3,
	UltraPerformance                         = 4,
	EFSR2QualityMode_MAX                     = 5,
};

// Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
// NumValues: 0x0003
enum class EFSR2HistoryFormat : uint32
{
	FloatRGBA                                = 0,
	FloatR11G11B10                           = 1,
	EFSR2HistoryFormat_MAX                   = 2,
};

// Enum FSR2TemporalUpscaling.EFSR2DeDitherMode
// NumValues: 0x0004
enum class EFSR2DeDitherMode : uint32
{
	Off                                      = 0,
	Full                                     = 1,
	HairOnly                                 = 2,
	EFSR2DeDitherMode_MAX                    = 3,
};

// Enum FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
// NumValues: 0x0004
enum class EFSR2LandscapeHISMMode : uint32
{
	Off                                      = 0,
	AllStatic                                = 1,
	StaticWPO                                = 2,
	EFSR2LandscapeHISMMode_MAX               = 3,
};

}

