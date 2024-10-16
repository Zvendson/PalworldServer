#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// Enum AndroidFileServer.EAFSActiveType
// NumValues: 0x0005
enum class EAFSActiveType : uint8
{
	None                                     = 0,
	USBOnly                                  = 1,
	NetworkOnly                              = 2,
	Combined                                 = 3,
	EAFSActiveType_MAX                       = 4,
};

}

