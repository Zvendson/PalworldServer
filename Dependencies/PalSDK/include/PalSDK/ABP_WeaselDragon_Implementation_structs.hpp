#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK
{

// ScriptStruct ABP_WeaselDragon_Implementation.ABP_WeaselDragon_Implementation_C.AnimBlueprintGeneratedConstantData
// 0x00EF (0x00F0 - 0x0001)
struct ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_36;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_37;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_38;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_39;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_40;                               // 0x0028(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_41;                                 // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_42;                                 // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0058(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D8(0x0018)()
};
static_assert(alignof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData) == 0x0000F0, "Wrong size on ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_36) == 0x000004, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_36' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_37) == 0x00000C, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_37' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_38) == 0x000014, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_38' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_39) == 0x00001C, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_39' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __StructProperty_40) == 0x000028, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__StructProperty_40' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_41) == 0x000048, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_41' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_42) == 0x000050, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_42' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000058, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D8, "Member 'ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABP_WeaselDragon_Implementation.ABP_WeaselDragon_Implementation_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
};
static_assert(alignof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on ABP_WeaselDragon_Implementation::FAnimBlueprintGeneratedMutableData");

}

