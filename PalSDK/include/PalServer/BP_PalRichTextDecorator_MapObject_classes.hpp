#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRichTextDecorator_MapObject.BP_PalRichTextDecorator_MapObject_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PalRichTextDecorator_MapObject_C final : public UPalRichTextDecorator_TagText
{
public:
	class FString GetTagName();
	class FString GetTextStringInternal(const class UObject* WorldContextObject, class FName ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRichTextDecorator_MapObject_C">();
	}
	static class UBP_PalRichTextDecorator_MapObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalRichTextDecorator_MapObject_C>();
	}
};
static_assert(alignof(UBP_PalRichTextDecorator_MapObject_C) == 0x000008, "Wrong alignment on UBP_PalRichTextDecorator_MapObject_C");
static_assert(sizeof(UBP_PalRichTextDecorator_MapObject_C) == 0x000028, "Wrong size on UBP_PalRichTextDecorator_MapObject_C");

}

