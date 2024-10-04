#pragma once

#include "Basic.hpp"


namespace PalServer
{

// Enum AssetTags.ECollectionScriptingShareType
// NumValues: 0x0004
enum class ECollectionScriptingShareType : uint8
{
	Local                                    = 0,
	Private                                  = 1,
	Shared                                   = 2,
	ECollectionScriptingShareType_MAX        = 3,
};

}

