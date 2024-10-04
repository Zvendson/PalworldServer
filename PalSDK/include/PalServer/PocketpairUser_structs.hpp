#pragma once

#include "Basic.hpp"


namespace PalServer
{

// Enum PocketpairUser.JoinSessionResultType
// NumValues: 0x0007
enum class EJoinSessionResultType : uint8
{
	Success                                  = 0,
	SessionIsFull                            = 1,
	SessionDoesNotExist                      = 2,
	CouldNotRetrieveAddress                  = 3,
	AlreadyInSession                         = 4,
	UnknownError                             = 5,
	JoinSessionResultType_MAX                = 6,
};

// Enum PocketpairUser.ELoginStatusType
// NumValues: 0x0004
enum class ELoginStatusType : uint8
{
	NotLoggedIn                              = 0,
	UsingLocalProfile                        = 1,
	LoggedIn                                 = 2,
	ELoginStatusType_MAX                     = 3,
};

// ScriptStruct PocketpairUser.PocketpairInventoryItem
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FPocketpairInventoryItem final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Num;                                               // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPocketpairInventoryItem) == 0x000008, "Wrong alignment on FPocketpairInventoryItem");
static_assert(sizeof(FPocketpairInventoryItem) == 0x000010, "Wrong size on FPocketpairInventoryItem");
static_assert(offsetof(FPocketpairInventoryItem, ItemId) == 0x000008, "Member 'FPocketpairInventoryItem::ItemId' has a wrong offset!");
static_assert(offsetof(FPocketpairInventoryItem, Num) == 0x00000C, "Member 'FPocketpairInventoryItem::Num' has a wrong offset!");

// ScriptStruct PocketpairUser.SocialId
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FSocialId final
{
public:
	uint8                                         Pad_0[0x4];                                        // 0x0000(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSocialId) == 0x000004, "Wrong alignment on FSocialId");
static_assert(sizeof(FSocialId) == 0x000004, "Wrong size on FSocialId");

// ScriptStruct PocketpairUser.PocketpairTelemetry
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FPocketpairTelemetry final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPocketpairTelemetry) == 0x000008, "Wrong alignment on FPocketpairTelemetry");
static_assert(sizeof(FPocketpairTelemetry) == 0x000040, "Wrong size on FPocketpairTelemetry");

// ScriptStruct PocketpairUser.PocketpairTelemetry_Stat
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FPocketpairTelemetry_Stat final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPocketpairTelemetry_Stat) == 0x000004, "Wrong alignment on FPocketpairTelemetry_Stat");
static_assert(sizeof(FPocketpairTelemetry_Stat) == 0x00000C, "Wrong size on FPocketpairTelemetry_Stat");

// ScriptStruct PocketpairUser.PocketpairInventory
// 0x0018 (0x0018 - 0x0000)
struct FPocketpairInventory final
{
public:
	TArray<struct FPocketpairInventoryItem>       Items;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPocketpairInventory) == 0x000008, "Wrong alignment on FPocketpairInventory");
static_assert(sizeof(FPocketpairInventory) == 0x000018, "Wrong size on FPocketpairInventory");
static_assert(offsetof(FPocketpairInventory, Items) == 0x000000, "Member 'FPocketpairInventory::Items' has a wrong offset!");

}

