#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionSandTornado.BP_ActionSandTornado_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionSandTornado_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	void OnStartProcessAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSandTornado_C">();
	}
	static class UBP_ActionSandTornado_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSandTornado_C>();
	}
};
static_assert(alignof(UBP_ActionSandTornado_C) == 0x000010, "Wrong alignment on UBP_ActionSandTornado_C");
static_assert(sizeof(UBP_ActionSandTornado_C) == 0x0002C0, "Wrong size on UBP_ActionSandTornado_C");

}

