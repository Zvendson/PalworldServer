#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalCharacterIconBase.WBP_PalCharacterIconBase_C
// 0x0068 (0x0470 - 0x0408)
class UWBP_PalCharacterIconBase_C : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnLoadedTexture;                                   // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnStartLoadTexture;                                // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetEmpty;                                        // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UPalIndividualCharacterParameter> BindParameter;                                     // 0x0440(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Destruct();
	void ExecuteUbergraph_WBP_PalCharacterIconBase(int32 EntryPoint);
	void LoadIconEvent_Internal(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void OnLoaded_2131D8E64037785EDD84EFACA46D7EBC(class UObject* Loaded);
	void OnLoadedTexture__DelegateSignature(class UTexture2D* LoadedTexture);
	void OnSetEmpty__DelegateSignature();
	void OnStartLoadTexture__DelegateSignature();
	void OnUpdateSkinName(const class FName& NewSkinName);
	void SetEmpty();
	void Setup(class FName CharacterID);
	void SetupByHandle(class UPalIndividualCharacterHandle* IndividualHandle);
	void SetupByParameter(class UPalIndividualCharacterParameter* Parameter);
	void UnbindEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalCharacterIconBase_C">();
	}
	static class UWBP_PalCharacterIconBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalCharacterIconBase_C>();
	}
};
static_assert(alignof(UWBP_PalCharacterIconBase_C) == 0x000008, "Wrong alignment on UWBP_PalCharacterIconBase_C");
static_assert(sizeof(UWBP_PalCharacterIconBase_C) == 0x000470, "Wrong size on UWBP_PalCharacterIconBase_C");
static_assert(offsetof(UWBP_PalCharacterIconBase_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalCharacterIconBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterIconBase_C, OnLoadedTexture) == 0x000410, "Member 'UWBP_PalCharacterIconBase_C::OnLoadedTexture' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterIconBase_C, OnStartLoadTexture) == 0x000420, "Member 'UWBP_PalCharacterIconBase_C::OnStartLoadTexture' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterIconBase_C, OnSetEmpty) == 0x000430, "Member 'UWBP_PalCharacterIconBase_C::OnSetEmpty' has a wrong offset!");
static_assert(offsetof(UWBP_PalCharacterIconBase_C, BindParameter) == 0x000440, "Member 'UWBP_PalCharacterIconBase_C::BindParameter' has a wrong offset!");

}

