#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_BlizzardLanceBase_C_BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.ExecuteUbergraph_BP_BlizzardLanceBase
// 0x00D0 (0x00D0 - 0x0000)
struct BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_MyHitComponent;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherHitActor;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherHitComponent;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_CustomEvent_FoliageIndex;                   // 0x0060(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_HitCount;                       // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase) == 0x000008, "Wrong alignment on BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase");
static_assert(sizeof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase) == 0x0000D0, "Wrong size on BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, EntryPoint) == 0x000000, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000030, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_MyHitComponent) == 0x000048, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_OtherHitActor) == 0x000050, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_OtherHitComponent) == 0x000058, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_FoliageIndex) == 0x000060, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_HitLocation) == 0x000070, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CustomEvent_HitCount) == 0x000088, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CustomEvent_HitCount' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_IsApplicableDamage_ReturnValue) == 0x00008C, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_ComponentBoundEvent_PSystem) == 0x000090, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000098, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A0, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000B0, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x0000C0, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000C8, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x0000CC, "Member 'BP_BlizzardLanceBase_C_ExecuteUbergraph_BP_BlizzardLanceBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

// Function BP_BlizzardLanceBase.BP_BlizzardLanceBase_C.OnHitDelegate_01
// 0x0048 (0x0048 - 0x0000)
struct BP_BlizzardLanceBase_C_OnHitDelegate_01 final
{
public:
	class UPrimitiveComponent*                    MyHitComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherHitActor;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherHitComponent;                                 // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 FoliageIndex;                                      // 0x0018(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                HitLocation;                                       // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HitCount;                                          // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BlizzardLanceBase_C_OnHitDelegate_01) == 0x000008, "Wrong alignment on BP_BlizzardLanceBase_C_OnHitDelegate_01");
static_assert(sizeof(BP_BlizzardLanceBase_C_OnHitDelegate_01) == 0x000048, "Wrong size on BP_BlizzardLanceBase_C_OnHitDelegate_01");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, MyHitComponent) == 0x000000, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::MyHitComponent' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, OtherHitActor) == 0x000008, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::OtherHitActor' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, OtherHitComponent) == 0x000010, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::OtherHitComponent' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, FoliageIndex) == 0x000018, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::FoliageIndex' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, HitLocation) == 0x000028, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_BlizzardLanceBase_C_OnHitDelegate_01, HitCount) == 0x000040, "Member 'BP_BlizzardLanceBase_C_OnHitDelegate_01::HitCount' has a wrong offset!");

}

