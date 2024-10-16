#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C
// 0x0010 (0x02D0 - 0x02C0)
class UBP_Action_ParabolaBallBase_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_ParabolaBallBase_C;       // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        Const_ShootDelay;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    MainEffect;                                        // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint);
	void GetTaegetLocation(struct FVector* Pos);
	void OnStartProcessAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_ParabolaBallBase_C">();
	}
	static class UBP_Action_ParabolaBallBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_ParabolaBallBase_C>();
	}
};
static_assert(alignof(UBP_Action_ParabolaBallBase_C) == 0x000010, "Wrong alignment on UBP_Action_ParabolaBallBase_C");
static_assert(sizeof(UBP_Action_ParabolaBallBase_C) == 0x0002D0, "Wrong size on UBP_Action_ParabolaBallBase_C");
static_assert(offsetof(UBP_Action_ParabolaBallBase_C, UberGraphFrame_BP_Action_ParabolaBallBase_C) == 0x0002B8, "Member 'UBP_Action_ParabolaBallBase_C::UberGraphFrame_BP_Action_ParabolaBallBase_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_ParabolaBallBase_C, Const_ShootDelay) == 0x0002C0, "Member 'UBP_Action_ParabolaBallBase_C::Const_ShootDelay' has a wrong offset!");
static_assert(offsetof(UBP_Action_ParabolaBallBase_C, MainEffect) == 0x0002C8, "Member 'UBP_Action_ParabolaBallBase_C::MainEffect' has a wrong offset!");

}

