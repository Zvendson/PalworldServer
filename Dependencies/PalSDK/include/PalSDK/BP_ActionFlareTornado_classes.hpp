#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionFlareTornado.BP_ActionFlareTornado_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionFlareTornado_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	void OnStartProcessAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFlareTornado_C">();
	}
	static class UBP_ActionFlareTornado_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFlareTornado_C>();
	}
};
static_assert(alignof(UBP_ActionFlareTornado_C) == 0x000010, "Wrong alignment on UBP_ActionFlareTornado_C");
static_assert(sizeof(UBP_ActionFlareTornado_C) == 0x0002C0, "Wrong size on UBP_ActionFlareTornado_C");

}

