#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalItemIconBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalCommonItemIcon.WBP_PalCommonItemIcon_C
// 0x0020 (0x0460 - 0x0440)
class UWBP_PalCommonItemIcon_C final : public UWBP_PalItemIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonItemIcon_C;            // 0x0440(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_96;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PalCommonItemIcon(int32 EntryPoint);
	void OnEmpty();
	void OnInitialized();
	void OnLoaded(class UTexture2D* LoadedTexture);
	void OnStartLoad();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonItemIcon_C">();
	}
	static class UWBP_PalCommonItemIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonItemIcon_C>();
	}
};
static_assert(alignof(UWBP_PalCommonItemIcon_C) == 0x000008, "Wrong alignment on UWBP_PalCommonItemIcon_C");
static_assert(sizeof(UWBP_PalCommonItemIcon_C) == 0x000460, "Wrong size on UWBP_PalCommonItemIcon_C");
static_assert(offsetof(UWBP_PalCommonItemIcon_C, UberGraphFrame_WBP_PalCommonItemIcon_C) == 0x000440, "Member 'UWBP_PalCommonItemIcon_C::UberGraphFrame_WBP_PalCommonItemIcon_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemIcon_C, CircularThrobber_96) == 0x000448, "Member 'UWBP_PalCommonItemIcon_C::CircularThrobber_96' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemIcon_C, IconImage) == 0x000450, "Member 'UWBP_PalCommonItemIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonItemIcon_C, DynamicMaterial) == 0x000458, "Member 'UWBP_PalCommonItemIcon_C::DynamicMaterial' has a wrong offset!");

}

