#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace PalSDK
{

// ScriptStruct ABP_Umihebi_Implementation.ABP_Umihebi_Implementation_C.AnimBlueprintGeneratedMutableData
// 0x0000 (0x0001 - 0x0001)
struct ABP_Umihebi_Implementation::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
};
static_assert(alignof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on ABP_Umihebi_Implementation::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong size on ABP_Umihebi_Implementation::FAnimBlueprintGeneratedMutableData");

// ScriptStruct ABP_Umihebi_Implementation.ABP_Umihebi_Implementation_C.AnimBlueprintGeneratedConstantData
// 0x00EF (0x00F0 - 0x0001)
struct ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_45;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_46;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_47;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_48;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_49;                                 // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_50;                                 // 0x002C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERefPoseType                                  __ByteProperty_51;                                 // 0x0034(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_52;                               // 0x0038(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0058(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D8(0x0018)()
};
static_assert(alignof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData) == 0x0000F0, "Wrong size on ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_45) == 0x000004, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_45' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_46) == 0x00000C, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_46' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_47) == 0x000014, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_47' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_48) == 0x00001C, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_48' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_49) == 0x000024, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_49' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __NameProperty_50) == 0x00002C, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__NameProperty_50' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __ByteProperty_51) == 0x000034, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__ByteProperty_51' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, __StructProperty_52) == 0x000038, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::__StructProperty_52' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000058, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D8, "Member 'ABP_Umihebi_Implementation::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

