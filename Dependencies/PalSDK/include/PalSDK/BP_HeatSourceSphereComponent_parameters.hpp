#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_HeatSourceSphereComponent.BP_HeatSourceSphereComponent_C.Begin
// 0x0108 (0x0108 - 0x0000)
struct BP_HeatSourceSphereComponent_C_Begin final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_HeatSourceSphereComponent_C_Begin) == 0x000008, "Wrong alignment on BP_HeatSourceSphereComponent_C_Begin");
static_assert(sizeof(BP_HeatSourceSphereComponent_C_Begin) == 0x000108, "Wrong size on BP_HeatSourceSphereComponent_C_Begin");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, OverlappedComponent) == 0x000000, "Member 'BP_HeatSourceSphereComponent_C_Begin::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, OtherActor) == 0x000008, "Member 'BP_HeatSourceSphereComponent_C_Begin::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, OtherComp) == 0x000010, "Member 'BP_HeatSourceSphereComponent_C_Begin::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, OtherBodyIndex) == 0x000018, "Member 'BP_HeatSourceSphereComponent_C_Begin::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, bFromSweep) == 0x00001C, "Member 'BP_HeatSourceSphereComponent_C_Begin::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_Begin, SweepResult) == 0x000020, "Member 'BP_HeatSourceSphereComponent_C_Begin::SweepResult' has a wrong offset!");

// Function BP_HeatSourceSphereComponent.BP_HeatSourceSphereComponent_C.End
// 0x0020 (0x0020 - 0x0000)
struct BP_HeatSourceSphereComponent_C_End final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeatSourceSphereComponent_C_End) == 0x000008, "Wrong alignment on BP_HeatSourceSphereComponent_C_End");
static_assert(sizeof(BP_HeatSourceSphereComponent_C_End) == 0x000020, "Wrong size on BP_HeatSourceSphereComponent_C_End");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_End, OverlappedComponent) == 0x000000, "Member 'BP_HeatSourceSphereComponent_C_End::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_End, OtherActor) == 0x000008, "Member 'BP_HeatSourceSphereComponent_C_End::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_End, OtherComp) == 0x000010, "Member 'BP_HeatSourceSphereComponent_C_End::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_End, OtherBodyIndex) == 0x000018, "Member 'BP_HeatSourceSphereComponent_C_End::OtherBodyIndex' has a wrong offset!");

// Function BP_HeatSourceSphereComponent.BP_HeatSourceSphereComponent_C.ExecuteUbergraph_BP_HeatSourceSphereComponent
// 0x01E8 (0x01E8 - 0x0000)
struct BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHeatSourceModule*                   CallFunc_GetModule_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent_1;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor_1;                   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp_1;                    // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x0050(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalHeatSourceInfo                     K2Node_MakeStruct_PalHeatSourceInfo;               // 0x0178(0x0008)(NoDestructor)
	class UPalHeatSourceModule*                   CallFunc_GetModule_ReturnValue_1;                  // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHeatSourceModule*                   CallFunc_GetModule_ReturnValue_2;                  // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHeatSourceModule*                   CallFunc_GetModule_ReturnValue_3;                  // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CallFunc_GetOverlappingComponents_OutOverlappingComponents; // 0x01A0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTemperatureComponent*               K2Node_DynamicCast_AsPal_Temperature_Component;    // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent) == 0x000008, "Wrong alignment on BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent");
static_assert(sizeof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent) == 0x0001E8, "Wrong size on BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, EntryPoint) == 0x000000, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetModule_ReturnValue) == 0x000008, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OverlappedComponent_1) == 0x000030, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherActor_1) == 0x000038, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherComp_1) == 0x000040, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherBodyIndex_1) == 0x000048, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_bFromSweep) == 0x00004C, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_SweepResult) == 0x000050, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OverlappedComponent) == 0x000138, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherActor) == 0x000140, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherComp) == 0x000148, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CustomEvent_OtherBodyIndex) == 0x000150, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetOwner_ReturnValue) == 0x000158, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetObjectName_ReturnValue) == 0x000160, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_Conv_StringToName_ReturnValue) == 0x000170, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_MakeStruct_PalHeatSourceInfo) == 0x000178, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_MakeStruct_PalHeatSourceInfo' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetModule_ReturnValue_1) == 0x000180, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetModule_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetModule_ReturnValue_2) == 0x000188, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetModule_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetModule_ReturnValue_3) == 0x000190, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetModule_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_IsServer_ReturnValue) == 0x000198, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetOverlappingComponents_OutOverlappingComponents) == 0x0001A0, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetOverlappingComponents_OutOverlappingComponents' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_Array_Get_Item) == 0x0001B0, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_Array_Length_ReturnValue) == 0x0001B8, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_DynamicCast_AsPal_Temperature_Component) == 0x0001C0, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_DynamicCast_AsPal_Temperature_Component' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0001C9, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, CallFunc_GetOwner_ReturnValue_1) == 0x0001D0, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001D8, "Member 'BP_HeatSourceSphereComponent_C_ExecuteUbergraph_BP_HeatSourceSphereComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}

