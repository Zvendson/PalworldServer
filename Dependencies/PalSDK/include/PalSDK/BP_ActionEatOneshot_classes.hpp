#pragma once

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionEatOneshot.BP_ActionEatOneshot_C
// 0x0000 (0x0170 - 0x0170)
class UBP_ActionEatOneshot_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionEatOneshot_C">();
	}
	static class UBP_ActionEatOneshot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionEatOneshot_C>();
	}
};
static_assert(alignof(UBP_ActionEatOneshot_C) == 0x000010, "Wrong alignment on UBP_ActionEatOneshot_C");
static_assert(sizeof(UBP_ActionEatOneshot_C) == 0x000170, "Wrong size on UBP_ActionEatOneshot_C");

}

