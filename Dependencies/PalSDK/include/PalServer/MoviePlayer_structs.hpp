#pragma once

#include "Basic.hpp"


namespace PalServer
{

// Enum MoviePlayer.EMoviePlaybackType
// NumValues: 0x0004
enum class EMoviePlaybackType : uint8
{
	MT_Normal                                = 0,
	MT_Looped                                = 1,
	MT_LoadingLoop                           = 2,
	MT_MAX                                   = 3,
};

}

