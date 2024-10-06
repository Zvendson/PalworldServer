#pragma once

#include "Basic.hpp"


namespace PalServer
{

// Enum LocalFileNetworkReplayStreaming.ELocalFileReplayResult
// NumValues: 0x0009
enum class ELocalFileReplayResult : uint8
{
	Success                                  = 0,
	InvalidReplayInfo                        = 1,
	StreamChunkIndexMismatch                 = 2,
	DecompressBuffer                         = 3,
	CompressionNotSupported                  = 4,
	DecryptBuffer                            = 5,
	EncryptionNotSupported                   = 6,
	Unknown                                  = 7,
	ELocalFileReplayResult_MAX               = 8,
};

}

