#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0030(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000118, "Wrong size on BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ExecuteUbergraph_BP_MapObject_CommonDropItem3D
// 0x0208 (0x0208 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_EnableTriggerInteract_self_CastInput;     // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_VisualModel;                    // 0x0028(0x0030)(HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0088(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0170(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0188(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         CallFunc_GetLinearDamping_ReturnValue;             // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B5[0x3];                                      // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDropItemModel*             K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model; // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetLinearDamping_InDamping_ImplicitCast;  // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetLinearDamping_InDamping_ImplicitCast_1; // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_CurrentLinearDamping_ImplicitCast; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D) == 0x000208, "Wrong size on BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, EntryPoint) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_EnableTriggerInteract_self_CastInput) == 0x000018, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_EnableTriggerInteract_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_CustomEvent_VisualModel) == 0x000028, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_CustomEvent_VisualModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ComponentBoundEvent_HitComponent) == 0x000058, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ComponentBoundEvent_OtherActor) == 0x000060, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ComponentBoundEvent_OtherComp) == 0x000068, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000070, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ComponentBoundEvent_Hit) == 0x000088, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_CreateDelegate_OutputDelegate_1) == 0x000170, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_Event_DeltaSeconds) == 0x000180, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, Temp_class_Variable) == 0x000188, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ClassDynamicCast_AsActor) == 0x000190, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_ClassDynamicCast_bSuccess) == 0x000198, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001A0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_CustomEvent_Loaded) == 0x0001A8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_GetLinearDamping_ReturnValue) == 0x0001B0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_GetLinearDamping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_Less_DoubleDouble_ReturnValue) == 0x0001B4, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_HasAuthority_ReturnValue) == 0x0001C0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_Event_ConcreteModel) == 0x0001C8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_CustomEvent_Model) == 0x0001D0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model) == 0x0001D8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_SetLinearDamping_InDamping_ImplicitCast) == 0x0001E4, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_SetLinearDamping_InDamping_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_Delay_Duration_ImplicitCast) == 0x0001E8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001F0, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, CallFunc_SetLinearDamping_InDamping_ImplicitCast_1) == 0x0001F8, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::CallFunc_SetLinearDamping_InDamping_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D, K2Node_VariableSet_CurrentLinearDamping_ImplicitCast) == 0x000200, "Member 'BP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D::K2Node_VariableSet_CurrentLinearDamping_ImplicitCast' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnLoaded_857256B349A5E9E377896489F9AD883E
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E) == 0x000008, "Wrong size on BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E, Loaded) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E::Loaded' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnRep_VisualActorClass
// 0x01D0 (0x01D0 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalItemVisualModelFXInfo>      CallFunc_GetItemVisualModelFX_OutFXInfos;          // 0x0010(0x0010)(ReferenceParm)
	struct FPalItemVisualModelFXInfo              CallFunc_Array_Get_Item;                           // 0x0020(0x0070)(NoDestructor)
	class UStaticMesh*                            CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform; // 0x00A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass; // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface; // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass) == 0x000010, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass) == 0x0001D0, "Wrong size on BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_GetItemVisualModelFX_OutFXInfos) == 0x000010, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_GetItemVisualModelFX_OutFXInfos' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh) == 0x000090, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform) == 0x0000A0, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass) == 0x000100, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface) == 0x000118, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue) == 0x000120, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Location) == 0x000128, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Rotation) == 0x000140, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Scale) == 0x000158, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_SpawnSystemAttached_ReturnValue) == 0x000170, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_SpawnSystemAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Location_1) == 0x000178, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Rotation_1) == 0x000190, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_BreakTransform_Scale_1) == 0x0001A8, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass, CallFunc_Less_IntInt_ReturnValue) == 0x0001C4, "Member 'BP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel) == 0x000008, "Wrong size on BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel, Model) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_OnSetConcreteModel::Model' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_ReceiveTick");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_ReceiveTick) == 0x000004, "Wrong size on BP_MapObject_CommonDropItem3D_C_ReceiveTick");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReleaseObject
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_ReleaseObject final
{
public:
	struct FVector                                Direction;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_ReleaseObject) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_ReleaseObject");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_ReleaseObject) == 0x000030, "Wrong size on BP_MapObject_CommonDropItem3D_C_ReleaseObject");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ReleaseObject, Direction) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_ReleaseObject::Direction' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_ReleaseObject, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000018, "Member 'BP_MapObject_CommonDropItem3D_C_ReleaseObject::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetItemModelInServer
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_SetItemModelInServer final
{
public:
	TSoftClassPtr<class UClass>                   VisualModel;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_SetItemModelInServer) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_SetItemModelInServer");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_SetItemModelInServer) == 0x000030, "Wrong size on BP_MapObject_CommonDropItem3D_C_SetItemModelInServer");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetItemModelInServer, VisualModel) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_SetItemModelInServer::VisualModel' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupStaticMesh
// 0x0030 (0x0030 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_SetupStaticMesh final
{
public:
	class UStaticMesh*                            InStaticMesh;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CenterOfMass;                                      // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material;                                          // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_SetupStaticMesh");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh) == 0x000030, "Wrong size on BP_MapObject_CommonDropItem3D_C_SetupStaticMesh");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh, InStaticMesh) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_SetupStaticMesh::InStaticMesh' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh, CenterOfMass) == 0x000008, "Member 'BP_MapObject_CommonDropItem3D_C_SetupStaticMesh::CenterOfMass' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh, Material) == 0x000020, "Member 'BP_MapObject_CommonDropItem3D_C_SetupStaticMesh::Material' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_MapObject_CommonDropItem3D_C_SetupStaticMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupStaticMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000029, "Member 'BP_MapObject_CommonDropItem3D_C_SetupStaticMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupVisualInServer
// 0x0108 (0x0108 - 0x0000)
struct BP_MapObject_CommonDropItem3D_C_SetupVisualInServer final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDropItemModel*             K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemData                           CallFunc_GetItemData_ReturnValue;                  // 0x0020(0x0010)(ConstParm, NoDestructor)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0030(0x0018)()
	TSoftClassPtr<class UClass>                   CallFunc_GetVisualBlueprintClass_ReturnValue;      // 0x0048(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer) == 0x000008, "Wrong alignment on BP_MapObject_CommonDropItem3D_C_SetupVisualInServer");
static_assert(sizeof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer) == 0x000108, "Wrong size on BP_MapObject_CommonDropItem3D_C_SetupVisualInServer");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, ConcreteModel) == 0x000000, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_GetItemIDManager_ReturnValue) == 0x000008, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model) == 0x000010, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_GetItemData_ReturnValue) == 0x000020, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_GetItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_Conv_NameToText_ReturnValue) == 0x000030, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_GetVisualBlueprintClass_ReturnValue) == 0x000048, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_GetVisualBlueprintClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MapObject_CommonDropItem3D_C_SetupVisualInServer, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'BP_MapObject_CommonDropItem3D_C_SetupVisualInServer::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

