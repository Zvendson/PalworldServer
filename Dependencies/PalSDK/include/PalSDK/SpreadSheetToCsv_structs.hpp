#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// Enum SpreadSheetToCsv.EFetchResult
// NumValues: 0x0004
enum class EFetchResult : uint8
{
	Success                                  = 0,
	HttpFailed                               = 1,
	JSONParsingFailed                        = 2,
	EFetchResult_MAX                         = 3,
};

}

