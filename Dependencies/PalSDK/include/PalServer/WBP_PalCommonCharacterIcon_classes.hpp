#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalCharacterIconBase_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalCommonCharacterIcon.WBP_PalCommonCharacterIcon_C
// 0x0030 (0x04A0 - 0x0470)
class UWBP_PalCommonCharacterIcon_C final : public UWBP_PalCharacterIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalCommonCharacterIcon_C;       // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber_96;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEmpty;                                           // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x7];                                      // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SphereMaskRadius;                                  // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_PalCommonCharacterIcon(int32 EntryPoint);
	void OnEmpty();
	void OnInitialized();
	void OnLoaded(class UTexture2D* LoadedTexture);
	void OnStartLoad();
	void SetFraction(double Fraction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCommonCharacterIcon_C">();
	}
	static class UWBP_PalCommonCharacterIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCommonCharacterIcon_C>();
	}
};
static_assert(alignof(UWBP_PalCommonCharacterIcon_C) == 0x000008, "Wrong alignment on UWBP_PalCommonCharacterIcon_C");
static_assert(sizeof(UWBP_PalCommonCharacterIcon_C) == 0x0004A0, "Wrong size on UWBP_PalCommonCharacterIcon_C");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, UberGraphFrame_WBP_PalCommonCharacterIcon_C) == 0x000470, "Member 'UWBP_PalCommonCharacterIcon_C::UberGraphFrame_WBP_PalCommonCharacterIcon_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, CircularThrobber_96) == 0x000478, "Member 'UWBP_PalCommonCharacterIcon_C::CircularThrobber_96' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, IconImage) == 0x000480, "Member 'UWBP_PalCommonCharacterIcon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, DynamicMaterial) == 0x000488, "Member 'UWBP_PalCommonCharacterIcon_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, IsEmpty) == 0x000490, "Member 'UWBP_PalCommonCharacterIcon_C::IsEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalCommonCharacterIcon_C, SphereMaskRadius) == 0x000498, "Member 'UWBP_PalCommonCharacterIcon_C::SphereMaskRadius' has a wrong offset!");

}

