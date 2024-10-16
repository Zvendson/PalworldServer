#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// Enum HttpNetworkReplayStreaming.EHttpReplayResult
// NumValues: 0x0009
enum class EHttpReplayResult : uint8
{
	Success                                  = 0,
	FailedJsonParse                          = 1,
	DataUnavailable                          = 2,
	InvalidHttpResponse                      = 3,
	CompressionFailed                        = 4,
	DecompressionFailed                      = 5,
	InvalidPayload                           = 6,
	Unknown                                  = 7,
	EHttpReplayResult_MAX                    = 8,
};

}

