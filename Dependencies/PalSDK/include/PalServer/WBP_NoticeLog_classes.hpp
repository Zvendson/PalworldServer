#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_NoticeLog.WBP_NoticeLog_C
// 0x0020 (0x0440 - 0x0420)
class UWBP_NoticeLog_C final : public UPalLogWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Notice_C*                          WBP_Notice;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPalLogContentToneType                        LogToneType;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Close_Internal();
	void ExecuteUbergraph_WBP_NoticeLog(int32 EntryPoint);
	void OnFinished();
	void OnFinishedClose();
	void OnInitialized();
	void OnLoaded_19AB6838498B19451FE6AEAD31DEA803(class UObject* Loaded);
	void Open_Internal();
	void RequestInAnime();
	void RequestLoadIconTexture(const TSoftObjectPtr<class UTexture2D>& SoftTexturePtr);
	void RequestOutAnime();
	void SetAdditionalData(const struct FPalLogAdditionalData& InAdditionalData);
	void SetLogText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NoticeLog_C">();
	}
	static class UWBP_NoticeLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NoticeLog_C>();
	}
};
static_assert(alignof(UWBP_NoticeLog_C) == 0x000008, "Wrong alignment on UWBP_NoticeLog_C");
static_assert(sizeof(UWBP_NoticeLog_C) == 0x000440, "Wrong size on UWBP_NoticeLog_C");
static_assert(offsetof(UWBP_NoticeLog_C, UberGraphFrame) == 0x000420, "Member 'UWBP_NoticeLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NoticeLog_C, Default_In) == 0x000428, "Member 'UWBP_NoticeLog_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_NoticeLog_C, WBP_Notice) == 0x000430, "Member 'UWBP_NoticeLog_C::WBP_Notice' has a wrong offset!");
static_assert(offsetof(UWBP_NoticeLog_C, LogToneType) == 0x000438, "Member 'UWBP_NoticeLog_C::LogToneType' has a wrong offset!");

}

