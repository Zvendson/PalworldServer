#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_ThunderStrikeBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.ExecuteUbergraph_BP_ThunderStrikeBase
// 0x00D0 (0x00D0 - 0x0000)
struct BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_MyHitComponent;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherHitActor;                  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherHitComponent;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_FoliageIndex;                   // 0x0058(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase) == 0x000008, "Wrong alignment on BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase");
static_assert(sizeof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase) == 0x0000D0, "Wrong size on BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, EntryPoint) == 0x000000, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_MyHitComponent) == 0x000040, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_OtherHitActor) == 0x000048, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_OtherHitComponent) == 0x000050, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_FoliageIndex) == 0x000058, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_HitLocation) == 0x000068, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CustomEvent_HitCount) == 0x000080, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_IsApplicableDamage_ReturnValue) == 0x000084, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_ComponentBoundEvent_PSystem) == 0x000088, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000090, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A8, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000B8, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0000C0, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000C8, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x0000CC, "Member 'BP_ThunderStrikeBase_C_ExecuteUbergraph_BP_ThunderStrikeBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.OnHitDelegate_01
// 0x0048 (0x0048 - 0x0000)
struct BP_ThunderStrikeBase_C_OnHitDelegate_01 final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderStrikeBase_C_OnHitDelegate_01) == 0x000008, "Wrong alignment on BP_ThunderStrikeBase_C_OnHitDelegate_01");
static_assert(sizeof(BP_ThunderStrikeBase_C_OnHitDelegate_01) == 0x000048, "Wrong size on BP_ThunderStrikeBase_C_OnHitDelegate_01");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, MyHitComponent) == 0x000000, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, OtherHitActor) == 0x000008, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, OtherHitComponent) == 0x000010, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, FoliageIndex) == 0x000018, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, HitLocation) == 0x000028, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_OnHitDelegate_01, HitCount) == 0x000040, "Member 'BP_ThunderStrikeBase_C_OnHitDelegate_01::HitCount' has a wrong offset!");

// Function BP_ThunderStrikeBase.BP_ThunderStrikeBase_C.SetThuderSize
// 0x0170 (0x0170 - 0x0000)
struct BP_ThunderStrikeBase_C_SetThuderSize final
{
public:
	float                                         CallFunc_GetUnscaledSphereRadius_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUnscaledCapsuleSize_OutRadius;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUnscaledCapsuleSize_OutHalfHeight;     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0050(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast; // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetCapsuleSize_InHalfHeight_ImplicitCast; // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetCapsuleSize_InRadius_ImplicitCast;     // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThunderStrikeBase_C_SetThuderSize) == 0x000008, "Wrong alignment on BP_ThunderStrikeBase_C_SetThuderSize");
static_assert(sizeof(BP_ThunderStrikeBase_C_SetThuderSize) == 0x000170, "Wrong size on BP_ThunderStrikeBase_C_SetThuderSize");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_GetUnscaledSphereRadius_ReturnValue) == 0x000000, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_GetUnscaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_GetUnscaledCapsuleSize_OutRadius) == 0x000010, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_GetUnscaledCapsuleSize_OutRadius' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_GetUnscaledCapsuleSize_OutHalfHeight) == 0x000014, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_GetUnscaledCapsuleSize_OutHalfHeight' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue) == 0x000018, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000028, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000030, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000050, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000138, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000140, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x000148, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast) == 0x00014C, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000150, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2) == 0x000158, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3) == 0x000160, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_SetCapsuleSize_InHalfHeight_ImplicitCast) == 0x000168, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_SetCapsuleSize_InHalfHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThunderStrikeBase_C_SetThuderSize, CallFunc_SetCapsuleSize_InRadius_ImplicitCast) == 0x00016C, "Member 'BP_ThunderStrikeBase_C_SetThuderSize::CallFunc_SetCapsuleSize_InRadius_ImplicitCast' has a wrong offset!");

}

