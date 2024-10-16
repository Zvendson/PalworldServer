#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.ExecuteUbergraph_BP_BuildObject_CampFire
// 0x0004 (0x0004 - 0x0000)
struct BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire) == 0x000004, "Wrong alignment on BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire");
static_assert(sizeof(BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire) == 0x000004, "Wrong size on BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire");
static_assert(offsetof(BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire, EntryPoint) == 0x000000, "Member 'BP_BuildObject_CampFire_C_ExecuteUbergraph_BP_BuildObject_CampFire::EntryPoint' has a wrong offset!");

// Function BP_BuildObject_CampFire.BP_BuildObject_CampFire_C.SetActive_Internal
// 0x0005 (0x0005 - 0x0000)
struct BP_BuildObject_CampFire_C_SetActive_Internal final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_CampFire_C_SetActive_Internal) == 0x000001, "Wrong alignment on BP_BuildObject_CampFire_C_SetActive_Internal");
static_assert(sizeof(BP_BuildObject_CampFire_C_SetActive_Internal) == 0x000005, "Wrong size on BP_BuildObject_CampFire_C_SetActive_Internal");
static_assert(offsetof(BP_BuildObject_CampFire_C_SetActive_Internal, bOn) == 0x000000, "Member 'BP_BuildObject_CampFire_C_SetActive_Internal::bOn' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_CampFire_C_SetActive_Internal, Temp_bool_Variable) == 0x000001, "Member 'BP_BuildObject_CampFire_C_SetActive_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_CampFire_C_SetActive_Internal, Temp_byte_Variable) == 0x000002, "Member 'BP_BuildObject_CampFire_C_SetActive_Internal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_CampFire_C_SetActive_Internal, Temp_byte_Variable_1) == 0x000003, "Member 'BP_BuildObject_CampFire_C_SetActive_Internal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_CampFire_C_SetActive_Internal, K2Node_Select_Default) == 0x000004, "Member 'BP_BuildObject_CampFire_C_SetActive_Internal::K2Node_Select_Default' has a wrong offset!");

}

