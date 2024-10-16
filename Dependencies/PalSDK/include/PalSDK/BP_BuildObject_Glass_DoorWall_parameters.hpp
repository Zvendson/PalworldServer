#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.ExecuteUbergraph_BP_BuildObject_Glass_DoorWall
// 0x0028 (0x0028 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetRotateDoor_RotateAngle_ImplicitCast;   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall) == 0x000028, "Wrong size on BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall, EntryPoint) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall, K2Node_Event_ConcreteModel) == 0x000018, "Member 'BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall, CallFunc_SetRotateDoor_RotateAngle_ImplicitCast) == 0x000020, "Member 'BP_BuildObject_Glass_DoorWall_C_ExecuteUbergraph_BP_BuildObject_Glass_DoorWall::CallFunc_SetRotateDoor_RotateAngle_ImplicitCast' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.OnReadySwitchModule
// 0x0038 (0x0038 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   Module;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSwitchModule*              SwitchModule;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSwitchModule*              CallFunc_GetSwitchModule_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalMapObjectSwitchModule* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule) == 0x000038, "Wrong size on BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, Model) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, Module) == 0x000008, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, SwitchModule) == 0x000010, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::SwitchModule' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, CallFunc_GetSwitchModule_ReturnValue) == 0x000018, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::CallFunc_GetSwitchModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_BuildObject_Glass_DoorWall_C_OnReadySwitchModule::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.OnUpdateSwitchState
// 0x0038 (0x0038 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState final
{
public:
	class UPalMapObjectSwitchModule*              Module;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0008(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0020(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAvailable_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectSwitchState                      CallFunc_GetSwitchState_ReturnValue;               // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState) == 0x000038, "Wrong size on BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, Module) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, Temp_delegate_Variable) == 0x000008, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, CallFunc_PostEvent_ReturnValue) == 0x00001C, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, Temp_delegate_Variable_1) == 0x000020, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, CallFunc_PostEvent_ReturnValue_1) == 0x000030, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, CallFunc_IsAvailable_ReturnValue) == 0x000034, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::CallFunc_IsAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, CallFunc_GetSwitchState_ReturnValue) == 0x000035, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::CallFunc_GetSwitchState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState, K2Node_SwitchEnum_CmpSuccess) == 0x000036, "Member 'BP_BuildObject_Glass_DoorWall_C_OnUpdateSwitchState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.SetRotateDoor
// 0x0118 (0x0118 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_SetRotateDoor final
{
public:
	class UStaticMeshComponent*                   Mesh;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        RotateAngle;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_SetRotateDoor");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor) == 0x000118, "Wrong size on BP_BuildObject_Glass_DoorWall_C_SetRotateDoor");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor, Mesh) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_SetRotateDoor::Mesh' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor, RotateAngle) == 0x000008, "Member 'BP_BuildObject_Glass_DoorWall_C_SetRotateDoor::RotateAngle' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'BP_BuildObject_Glass_DoorWall_C_SetRotateDoor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000028, "Member 'BP_BuildObject_Glass_DoorWall_C_SetRotateDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_SetRotateDoor, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000110, "Member 'BP_BuildObject_Glass_DoorWall_C_SetRotateDoor::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.GetStaticMeshComponents
// 0x0020 (0x0020 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents final
{
public:
	TArray<class UStaticMeshComponent*>           OutComponents;                                     // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents) == 0x000020, "Wrong size on BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents, OutComponents) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents::OutComponents' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_BuildObject_Glass_DoorWall_C_GetStaticMeshComponents::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_BuildObject_Glass_DoorWall.BP_BuildObject_Glass_DoorWall_C.GetStaticMeshInfos
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos final
{
public:
	TArray<struct FPalStaticMeshImposterStaticMeshInfo> OutStaticMeshInfo;                                 // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos) == 0x000008, "Wrong alignment on BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos");
static_assert(sizeof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos) == 0x000010, "Wrong size on BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos");
static_assert(offsetof(BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos, OutStaticMeshInfo) == 0x000000, "Member 'BP_BuildObject_Glass_DoorWall_C_GetStaticMeshInfos::OutStaticMeshInfo' has a wrong offset!");

}

