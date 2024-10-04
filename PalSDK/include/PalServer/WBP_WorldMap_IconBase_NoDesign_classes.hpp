#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_WorldMap_IconBase_NoDesign.WBP_WorldMap_IconBase_NoDesign_C
// 0x0050 (0x0458 - 0x0408)
class UWBP_WorldMap_IconBase_NoDesign_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGuid                                  LocationId;                                        // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCallInternalClickEvent;                          // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreMask;                                        // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHiding;                                          // 0x0452(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClickEvent();
	void Destruct();
	void ExecuteUbergraph_WBP_WorldMap_IconBase_NoDesign(int32 EntryPoint);
	void GetIsHiding(bool* Hiding);
	void GetLocationPoint(class UPalLocationPoint** LocationPoint);
	void GetLocationPosition(struct FVector* LocationPosition);
	void GetText(class FText* Text);
	void IsIgnoreMask(bool* IsIgnore);
	void OnClicked__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnClicked_Internal();
	void OnHovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void OnUnhovered__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget);
	void SetEnable(bool Enable);
	void SetIgnoreMask(bool IsIgnore);
	void SetIsHiding(bool Hiding);
	void Setup(class UPalLocationPoint* LocationPoint, const struct FGuid& LocationId_0);
	void Setup_Internal(class UPalLocationPoint* LocationPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WorldMap_IconBase_NoDesign_C">();
	}
	static class UWBP_WorldMap_IconBase_NoDesign_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WorldMap_IconBase_NoDesign_C>();
	}
};
static_assert(alignof(UWBP_WorldMap_IconBase_NoDesign_C) == 0x000008, "Wrong alignment on UWBP_WorldMap_IconBase_NoDesign_C");
static_assert(sizeof(UWBP_WorldMap_IconBase_NoDesign_C) == 0x000458, "Wrong size on UWBP_WorldMap_IconBase_NoDesign_C");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, UberGraphFrame) == 0x000408, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, OnHovered) == 0x000410, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, OnUnhovered) == 0x000420, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, OnClicked) == 0x000430, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, LocationId) == 0x000440, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::LocationId' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, IsCallInternalClickEvent) == 0x000450, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::IsCallInternalClickEvent' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, IgnoreMask) == 0x000451, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::IgnoreMask' has a wrong offset!");
static_assert(offsetof(UWBP_WorldMap_IconBase_NoDesign_C, IsHiding) == 0x000452, "Member 'UWBP_WorldMap_IconBase_NoDesign_C::IsHiding' has a wrong offset!");

}

