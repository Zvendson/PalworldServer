#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C.ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02
// 0x0028 (0x0028 - 0x0000)
struct BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02) == 0x000008, "Wrong alignment on BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02");
static_assert(sizeof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02) == 0x000028, "Wrong size on BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02");
static_assert(offsetof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02, EntryPoint) == 0x000000, "Member 'BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02, K2Node_CustomEvent_Model) == 0x000008, "Member 'BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'BP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C.OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel, Model) == 0x000000, "Member 'BP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel::Model' has a wrong offset!");

}

