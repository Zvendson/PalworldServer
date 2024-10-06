#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalElementIcon.WBP_PalElementIcon_C
// 0x00B8 (0x04C0 - 0x0408)
class UWBP_PalElementIcon_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon_Element;                                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalElementType, class UTexture2D*>      IconMap;                                           // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EPalElementType, class UTexture2D*>      IconMap_L;                                         // 0x0468(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLargeTexture;                                    // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Clear();
	void Construct();
	void ExecuteUbergraph_WBP_PalElementIcon(int32 EntryPoint);
	void SetElement(EPalElementType ElementType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalElementIcon_C">();
	}
	static class UWBP_PalElementIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalElementIcon_C>();
	}
};
static_assert(alignof(UWBP_PalElementIcon_C) == 0x000008, "Wrong alignment on UWBP_PalElementIcon_C");
static_assert(sizeof(UWBP_PalElementIcon_C) == 0x0004C0, "Wrong size on UWBP_PalElementIcon_C");
static_assert(offsetof(UWBP_PalElementIcon_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalElementIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalElementIcon_C, Icon_Element) == 0x000410, "Member 'UWBP_PalElementIcon_C::Icon_Element' has a wrong offset!");
static_assert(offsetof(UWBP_PalElementIcon_C, IconMap) == 0x000418, "Member 'UWBP_PalElementIcon_C::IconMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalElementIcon_C, IconMap_L) == 0x000468, "Member 'UWBP_PalElementIcon_C::IconMap_L' has a wrong offset!");
static_assert(offsetof(UWBP_PalElementIcon_C, IsLargeTexture) == 0x0004B8, "Member 'UWBP_PalElementIcon_C::IsLargeTexture' has a wrong offset!");

}

