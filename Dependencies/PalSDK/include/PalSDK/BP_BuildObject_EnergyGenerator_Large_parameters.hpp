#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_EnergyGenerator_Large.BP_BuildObject_EnergyGenerator_Large_C.OnEndGenerate
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate) == 0x000001, "Wrong alignment on BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate");
static_assert(sizeof(BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate) == 0x000001, "Wrong size on BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate");
static_assert(offsetof(BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BuildObject_EnergyGenerator_Large_C_OnEndGenerate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_EnergyGenerator_Large.BP_BuildObject_EnergyGenerator_Large_C.OnStartGenerate
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate) == 0x000008, "Wrong alignment on BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate");
static_assert(sizeof(BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate) == 0x000010, "Wrong size on BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate");
static_assert(offsetof(BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000008, "Member 'BP_BuildObject_EnergyGenerator_Large_C_OnStartGenerate::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");

}

