#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_SimpleLog.WBP_SimpleLog_C
// 0x0040 (0x0460 - 0x0420)
class UWBP_SimpleLog_C final : public UPalLogWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SlideIn;                                           // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemGet_C*                         WBP_ItemGet;                                       // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ElapsedTimeBySpawn;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SelfDestroyTime;                                   // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         State;                                             // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SimpleLog(int32 EntryPoint);
	void OnFinishClose();
	void OnFinishOpen();
	void OnInitialized();
	void OnLoaded_E9D9449849BBF69D84DD6485CBEECF9A(class UObject* Loaded);
	void OverrideBgColor(EPalLogContentToneType ToneType);
	void RequestInAnime();
	void RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr);
	void RequestOutAnime();
	void SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData);
	void SetLogText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SimpleLog_C">();
	}
	static class UWBP_SimpleLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SimpleLog_C>();
	}
};
static_assert(alignof(UWBP_SimpleLog_C) == 0x000008, "Wrong alignment on UWBP_SimpleLog_C");
static_assert(sizeof(UWBP_SimpleLog_C) == 0x000460, "Wrong size on UWBP_SimpleLog_C");
static_assert(offsetof(UWBP_SimpleLog_C, UberGraphFrame) == 0x000420, "Member 'UWBP_SimpleLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, Default_In) == 0x000428, "Member 'UWBP_SimpleLog_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, FadeOut) == 0x000430, "Member 'UWBP_SimpleLog_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, SlideIn) == 0x000438, "Member 'UWBP_SimpleLog_C::SlideIn' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, WBP_ItemGet) == 0x000440, "Member 'UWBP_SimpleLog_C::WBP_ItemGet' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, ElapsedTimeBySpawn) == 0x000448, "Member 'UWBP_SimpleLog_C::ElapsedTimeBySpawn' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, SelfDestroyTime) == 0x000450, "Member 'UWBP_SimpleLog_C::SelfDestroyTime' has a wrong offset!");
static_assert(offsetof(UWBP_SimpleLog_C, State) == 0x000458, "Member 'UWBP_SimpleLog_C::State' has a wrong offset!");

}

