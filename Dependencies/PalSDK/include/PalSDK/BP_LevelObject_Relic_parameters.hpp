#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.ExecuteUbergraph_BP_LevelObject_Relic
// 0x0014 (0x0014 - 0x0000)
struct BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalLevelObjectObtainable* Self)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic) == 0x000004, "Wrong alignment on BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic");
static_assert(sizeof(BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic) == 0x000014, "Wrong size on BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic");
static_assert(offsetof(BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic, EntryPoint) == 0x000000, "Member 'BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_LevelObject_Relic_C_ExecuteUbergraph_BP_LevelObject_Relic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.OnUpdatePickupStatus
// 0x0008 (0x0008 - 0x0000)
struct BP_LevelObject_Relic_C_OnUpdatePickupStatus final
{
public:
	class APalLevelObjectObtainable*              LevelObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_Relic_C_OnUpdatePickupStatus) == 0x000008, "Wrong alignment on BP_LevelObject_Relic_C_OnUpdatePickupStatus");
static_assert(sizeof(BP_LevelObject_Relic_C_OnUpdatePickupStatus) == 0x000008, "Wrong size on BP_LevelObject_Relic_C_OnUpdatePickupStatus");
static_assert(offsetof(BP_LevelObject_Relic_C_OnUpdatePickupStatus, LevelObject) == 0x000000, "Member 'BP_LevelObject_Relic_C_OnUpdatePickupStatus::LevelObject' has a wrong offset!");

// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.SetActiveSelf
// 0x0010 (0x0010 - 0x0000)
struct BP_LevelObject_Relic_C_SetActiveSelf final
{
public:
	class APalLevelObjectObtainable*              LevelObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_Relic_C_SetActiveSelf) == 0x000008, "Wrong alignment on BP_LevelObject_Relic_C_SetActiveSelf");
static_assert(sizeof(BP_LevelObject_Relic_C_SetActiveSelf) == 0x000010, "Wrong size on BP_LevelObject_Relic_C_SetActiveSelf");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, LevelObject) == 0x000000, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::LevelObject' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, bActive) == 0x000008, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::bActive' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, Temp_bool_Variable) == 0x000009, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, Temp_byte_Variable) == 0x00000A, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, Temp_byte_Variable_1) == 0x00000B, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_SetActiveSelf, K2Node_Select_Default) == 0x00000D, "Member 'BP_LevelObject_Relic_C_SetActiveSelf::K2Node_Select_Default' has a wrong offset!");

// Function BP_LevelObject_Relic.BP_LevelObject_Relic_C.GetObtainFXLocation
// 0x0030 (0x0030 - 0x0000)
struct BP_LevelObject_Relic_C_GetObtainFXLocation final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelObject_Relic_C_GetObtainFXLocation) == 0x000008, "Wrong alignment on BP_LevelObject_Relic_C_GetObtainFXLocation");
static_assert(sizeof(BP_LevelObject_Relic_C_GetObtainFXLocation) == 0x000030, "Wrong size on BP_LevelObject_Relic_C_GetObtainFXLocation");
static_assert(offsetof(BP_LevelObject_Relic_C_GetObtainFXLocation, ReturnValue) == 0x000000, "Member 'BP_LevelObject_Relic_C_GetObtainFXLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelObject_Relic_C_GetObtainFXLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000018, "Member 'BP_LevelObject_Relic_C_GetObtainFXLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

