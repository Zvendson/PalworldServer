#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer
{

// ScriptStruct ABP_Alpaca_Implementation.ABP_Alpaca_Implementation_C.AnimBlueprintGeneratedConstantData
// 0x00EF (0x00F0 - 0x0001)
struct ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_36;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_37;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_38;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_39;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_40;                                 // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_41;                                 // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_42;                               // 0x0038(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0058(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D8(0x0018)()
};
static_assert(alignof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData) == 0x0000F0, "Wrong size on ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_36) == 0x000004, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_36' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_37) == 0x00000C, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_37' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_38) == 0x000014, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_38' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_39) == 0x00001C, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_39' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_40) == 0x000024, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_40' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_41) == 0x00002C, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_41' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, __StructProperty_42) == 0x000038, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::__StructProperty_42' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000058, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D8, "Member 'ABP_Alpaca_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

