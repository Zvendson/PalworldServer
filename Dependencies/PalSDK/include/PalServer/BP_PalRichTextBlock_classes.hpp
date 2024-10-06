#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRichTextBlock.BP_PalRichTextBlock_C
// 0x0000 (0x0C90 - 0x0C90)
class UBP_PalRichTextBlock_C final : public UPalRichTextBlockBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRichTextBlock_C">();
	}
	static class UBP_PalRichTextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRichTextBlock_C>();
	}
};
static_assert(alignof(UBP_PalRichTextBlock_C) == 0x000010, "Wrong alignment on UBP_PalRichTextBlock_C");
static_assert(sizeof(UBP_PalRichTextBlock_C) == 0x000C90, "Wrong size on UBP_PalRichTextBlock_C");

}

