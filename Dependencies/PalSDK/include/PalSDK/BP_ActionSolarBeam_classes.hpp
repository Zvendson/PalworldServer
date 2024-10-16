#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionSolarBeam.BP_ActionSolarBeam_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionSolarBeam_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                         Pad_2B3[0x5];                                      // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionSolarBeam_C;               // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_ActionSolarBeam(int32 EntryPoint);
	void OnBreakAction();
	void OnEndAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSolarBeam_C">();
	}
	static class UBP_ActionSolarBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSolarBeam_C>();
	}
};
static_assert(alignof(UBP_ActionSolarBeam_C) == 0x000010, "Wrong alignment on UBP_ActionSolarBeam_C");
static_assert(sizeof(UBP_ActionSolarBeam_C) == 0x0002C0, "Wrong size on UBP_ActionSolarBeam_C");
static_assert(offsetof(UBP_ActionSolarBeam_C, UberGraphFrame_BP_ActionSolarBeam_C) == 0x0002B8, "Member 'UBP_ActionSolarBeam_C::UberGraphFrame_BP_ActionSolarBeam_C' has a wrong offset!");

}

