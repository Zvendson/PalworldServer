#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_CharaCre_ScrollBoxContentBase_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C
// 0x00A0 (0x04C8 - 0x0428)
class UWBP_CharaCre_ScrollBoxContent_Voice_C final : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               WrapBox_Body;                                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedVoiceID;                                  // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UAkAudioEvent*>                  SampleVoiceArray;                                  // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, int32>                            PlayVoiceMap;                                      // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         VoiceCount;                                        // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AC[0x4];                                      // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_CharaCre_BodyTypeButton_C*> VoiceButtons;                                      // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_CharaCre_BodyTypeButton_C*         LastClickedVoiceTypeButton;                        // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice(int32 EntryPoint);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnChangedVoiceID__DelegateSignature(int32 VoiceID);
	void OnClickedVoiceTypeButton(class UWBP_CharaCre_BodyTypeButton_C* Widget);
	void Play_Sample_Voice(int32 VoiceID);
	void GetTopFocusTarget(class UWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContent_Voice_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContent_Voice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContent_Voice_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContent_Voice_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContent_Voice_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContent_Voice_C) == 0x0004C8, "Wrong size on UWBP_CharaCre_ScrollBoxContent_Voice_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, UberGraphFrame) == 0x000428, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, WrapBox_Body) == 0x000430, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::WrapBox_Body' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, OnChangedVoiceID) == 0x000438, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::OnChangedVoiceID' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, SampleVoiceArray) == 0x000448, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::SampleVoiceArray' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, PlayVoiceMap) == 0x000458, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::PlayVoiceMap' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, VoiceCount) == 0x0004A8, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::VoiceCount' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, VoiceButtons) == 0x0004B0, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::VoiceButtons' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Voice_C, LastClickedVoiceTypeButton) == 0x0004C0, "Member 'UWBP_CharaCre_ScrollBoxContent_Voice_C::LastClickedVoiceTypeButton' has a wrong offset!");

}

