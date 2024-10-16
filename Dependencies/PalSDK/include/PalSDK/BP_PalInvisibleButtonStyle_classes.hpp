#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalInvisibleButtonStyle.BP_PalInvisibleButtonStyle_C
// 0x0000 (0x07B0 - 0x07B0)
class UBP_PalInvisibleButtonStyle_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalInvisibleButtonStyle_C">();
	}
	static class UBP_PalInvisibleButtonStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalInvisibleButtonStyle_C>();
	}
};
static_assert(alignof(UBP_PalInvisibleButtonStyle_C) == 0x000010, "Wrong alignment on UBP_PalInvisibleButtonStyle_C");
static_assert(sizeof(UBP_PalInvisibleButtonStyle_C) == 0x0007B0, "Wrong size on UBP_PalInvisibleButtonStyle_C");

}

