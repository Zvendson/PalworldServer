#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_BlinkedLog.WBP_BlinkedLog_C
// 0x0060 (0x0480 - 0x0420)
class UWBP_BlinkedLog_C final : public UPalLogWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Blink;                                             // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Effect;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Effect_1;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemGet_C*                         WBP_ItemGet;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ElapsedTimeBySpawn;                                // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SelfDestroyTime;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         State;                                             // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               EffectMat;                                         // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        TotalTime;                                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsReverse;                                         // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_BlinkedLog(int32 EntryPoint);
	void OnFinishClose();
	void OnFinishOpen();
	void OnInitialized();
	void OnLoaded_B2F1547C445A710FFB036EAD5D1B3FE1(class UObject* Loaded);
	void OverrideBgColor(EPalLogContentToneType ToneType);
	void RequestInAnime();
	void RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr);
	void RequestOutAnime();
	void SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData);
	void SetLogText(const class FText& InText);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BlinkedLog_C">();
	}
	static class UWBP_BlinkedLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BlinkedLog_C>();
	}
};
static_assert(alignof(UWBP_BlinkedLog_C) == 0x000008, "Wrong alignment on UWBP_BlinkedLog_C");
static_assert(sizeof(UWBP_BlinkedLog_C) == 0x000480, "Wrong size on UWBP_BlinkedLog_C");
static_assert(offsetof(UWBP_BlinkedLog_C, UberGraphFrame) == 0x000420, "Member 'UWBP_BlinkedLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, Blink) == 0x000428, "Member 'UWBP_BlinkedLog_C::Blink' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, CanvasPanel_0) == 0x000430, "Member 'UWBP_BlinkedLog_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, Image_Effect) == 0x000438, "Member 'UWBP_BlinkedLog_C::Image_Effect' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, Image_Effect_1) == 0x000440, "Member 'UWBP_BlinkedLog_C::Image_Effect_1' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, WBP_ItemGet) == 0x000448, "Member 'UWBP_BlinkedLog_C::WBP_ItemGet' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, ElapsedTimeBySpawn) == 0x000450, "Member 'UWBP_BlinkedLog_C::ElapsedTimeBySpawn' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, SelfDestroyTime) == 0x000458, "Member 'UWBP_BlinkedLog_C::SelfDestroyTime' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, State) == 0x000460, "Member 'UWBP_BlinkedLog_C::State' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, EffectMat) == 0x000468, "Member 'UWBP_BlinkedLog_C::EffectMat' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, TotalTime) == 0x000470, "Member 'UWBP_BlinkedLog_C::TotalTime' has a wrong offset!");
static_assert(offsetof(UWBP_BlinkedLog_C, IsReverse) == 0x000478, "Member 'UWBP_BlinkedLog_C::IsReverse' has a wrong offset!");

}

