#pragma once

#include "Basic.hpp"


namespace PalSDK
{

// ScriptStruct UObjectPlugin.MyPluginStruct
// 0x0010 (0x0010 - 0x0000)
struct FMyPluginStruct final
{
public:
	class FString                                 TestString;                                        // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMyPluginStruct) == 0x000008, "Wrong alignment on FMyPluginStruct");
static_assert(sizeof(FMyPluginStruct) == 0x000010, "Wrong size on FMyPluginStruct");
static_assert(offsetof(FMyPluginStruct, TestString) == 0x000000, "Member 'FMyPluginStruct::TestString' has a wrong offset!");

}

