#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalMonsterInframeRender.WBP_PalMonsterInframeRender_C
// 0x0058 (0x0460 - 0x0408)
class UWBP_PalMonsterInframeRender_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Captured;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*             CaptureCamera;                                     // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCaptureEveryFrame;                               // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CaptureSetClass;                                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CaptureInterval;                                   // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CaptureSceneTimerHandle;                           // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RenderTargetMaterial;                              // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterInframeRendererSoundPlayer_C* SoundPlayerActor;                                  // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreFinalizeWhenDestruct;                        // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddRotation(const struct FRotator& Rotator);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_PalMonsterInframeRender(int32 EntryPoint);
	void Finalize();
	void GetCaptureCameraActor(class ABP_PalMonsterCaptureSet_C** CameraActor);
	void Initialize(int32 TextureSize);
	void Initialize_FreeSize(int32 TextureSizeX, int32 TextureSizeY);
	void Initialize_Internal(int32 TextureSizeX, int32 TextureSizeY);
	void OnCompleteCapture();
	void OnTimer_CaptureScene();
	void PlayNowDisplayingPalCry(class FName EmoStateName);
	void PlayNowDisplayingPalCryRandom();
	void RequestCapture(class FName CharacterID);
	void Reset();
	void ResetRotation();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalMonsterInframeRender_C">();
	}
	static class UWBP_PalMonsterInframeRender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalMonsterInframeRender_C>();
	}
};
static_assert(alignof(UWBP_PalMonsterInframeRender_C) == 0x000008, "Wrong alignment on UWBP_PalMonsterInframeRender_C");
static_assert(sizeof(UWBP_PalMonsterInframeRender_C) == 0x000460, "Wrong size on UWBP_PalMonsterInframeRender_C");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalMonsterInframeRender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, Image_Captured) == 0x000410, "Member 'UWBP_PalMonsterInframeRender_C::Image_Captured' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, CaptureCamera) == 0x000418, "Member 'UWBP_PalMonsterInframeRender_C::CaptureCamera' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, RenderTarget) == 0x000420, "Member 'UWBP_PalMonsterInframeRender_C::RenderTarget' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, IsCaptureEveryFrame) == 0x000428, "Member 'UWBP_PalMonsterInframeRender_C::IsCaptureEveryFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, CaptureSetClass) == 0x000430, "Member 'UWBP_PalMonsterInframeRender_C::CaptureSetClass' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, CaptureInterval) == 0x000438, "Member 'UWBP_PalMonsterInframeRender_C::CaptureInterval' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, CaptureSceneTimerHandle) == 0x000440, "Member 'UWBP_PalMonsterInframeRender_C::CaptureSceneTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, RenderTargetMaterial) == 0x000448, "Member 'UWBP_PalMonsterInframeRender_C::RenderTargetMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, SoundPlayerActor) == 0x000450, "Member 'UWBP_PalMonsterInframeRender_C::SoundPlayerActor' has a wrong offset!");
static_assert(offsetof(UWBP_PalMonsterInframeRender_C, IgnoreFinalizeWhenDestruct) == 0x000458, "Member 'UWBP_PalMonsterInframeRender_C::IgnoreFinalizeWhenDestruct' has a wrong offset!");

}

