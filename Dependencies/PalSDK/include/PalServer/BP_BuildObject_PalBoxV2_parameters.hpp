#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ExecuteUbergraph_BP_BuildObject_PalBoxV2
// 0x0178 (0x0178 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOptionSubsystem*                    CallFunc_GetWorldSubsystem_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionWorldSettings                CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x0010(0x0160)(ConstParm)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2) == 0x000008, "Wrong alignment on BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2) == 0x000178, "Wrong size on BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2, EntryPoint) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2, CallFunc_GetOptionWorldSettings_ReturnValue) == 0x000010, "Member 'BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2::CallFunc_GetOptionWorldSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2, K2Node_Event_DeltaSeconds) == 0x000170, "Member 'BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BuildObject_PalBoxV2_C_ReceiveTick");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_ReceiveTick) == 0x000004, "Wrong size on BP_BuildObject_PalBoxV2_C_ReceiveTick");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.UpdateVisibleAreaRange
// 0x0020 (0x0020 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange final
{
public:
	bool                                          bVisibleAreaRange;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectGetModelOutPinType               CallFunc_TryGetConcreteModel_OutputPin;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         CallFunc_TryGetConcreteModel_ConcreteModel;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectBaseCampPoint*             K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Point; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameGuildInLocalPlayer_ReturnValue;     // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange) == 0x000008, "Wrong alignment on BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange) == 0x000020, "Wrong size on BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, bVisibleAreaRange) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::bVisibleAreaRange' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, CallFunc_TryGetConcreteModel_OutputPin) == 0x000001, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::CallFunc_TryGetConcreteModel_OutputPin' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, CallFunc_TryGetConcreteModel_ConcreteModel) == 0x000008, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::CallFunc_TryGetConcreteModel_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Point) == 0x000010, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Point' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, CallFunc_IsSameGuildInLocalPlayer_ReturnValue) == 0x00001A, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::CallFunc_IsSameGuildInLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, K2Node_SwitchEnum_CmpSuccess) == 0x00001B, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001C, "Member 'BP_BuildObject_PalBoxV2_C_UpdateVisibleAreaRange::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetBaseCampPointMeshComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent final
{
public:
	class UStaticMeshComponent*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent) == 0x000008, "Wrong alignment on BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent) == 0x000008, "Wrong size on BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent, ReturnValue) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent::ReturnValue' has a wrong offset!");

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetFastTravelLocalTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform) == 0x000010, "Wrong alignment on BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform) == 0x0000C0, "Wrong size on BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform, ReturnValue) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetWorkerSpawnLocalTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform) == 0x000010, "Wrong alignment on BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform");
static_assert(sizeof(BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform) == 0x0000C0, "Wrong size on BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform, ReturnValue) == 0x000000, "Member 'BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

}

