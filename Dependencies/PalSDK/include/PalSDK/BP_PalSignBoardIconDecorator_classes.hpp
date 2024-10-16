#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSignBoardIconDecorator.BP_PalSignBoardIconDecorator_C
// 0x0000 (0x0038 - 0x0038)
class UBP_PalSignBoardIconDecorator_C final : public UPalRichTextIconDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSignBoardIconDecorator_C">();
	}
	static class UBP_PalSignBoardIconDecorator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSignBoardIconDecorator_C>();
	}
};
static_assert(alignof(UBP_PalSignBoardIconDecorator_C) == 0x000008, "Wrong alignment on UBP_PalSignBoardIconDecorator_C");
static_assert(sizeof(UBP_PalSignBoardIconDecorator_C) == 0x000038, "Wrong size on UBP_PalSignBoardIconDecorator_C");

}

