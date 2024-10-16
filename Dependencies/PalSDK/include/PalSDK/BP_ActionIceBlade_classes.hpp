#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionIceBlade.BP_ActionIceBlade_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionIceBlade_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionIceBlade_C;                // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionIceBlade(int32 EntryPoint);
	void OnBeginAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect_0);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionIceBlade_C">();
	}
	static class UBP_ActionIceBlade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionIceBlade_C>();
	}
};
static_assert(alignof(UBP_ActionIceBlade_C) == 0x000010, "Wrong alignment on UBP_ActionIceBlade_C");
static_assert(sizeof(UBP_ActionIceBlade_C) == 0x0002C0, "Wrong size on UBP_ActionIceBlade_C");
static_assert(offsetof(UBP_ActionIceBlade_C, UberGraphFrame_BP_ActionIceBlade_C) == 0x0002B8, "Member 'UBP_ActionIceBlade_C::UberGraphFrame_BP_ActionIceBlade_C' has a wrong offset!");

}

