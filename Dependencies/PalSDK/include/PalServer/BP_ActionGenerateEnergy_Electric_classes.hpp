#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionGenerateEnergy_Electric.BP_ActionGenerateEnergy_Electric_C
// 0x0020 (0x0160 - 0x0140)
class UBP_ActionGenerateEnergy_Electric_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 _______________;                                   // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      SpawnedEffect;                                     // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionGenerateEnergy_Electric(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnCompleted_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnNotifyBegin_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);
	void OnNotifyEnd_A4DA4EDD4B8DD41C2D78A1B27DF1132F(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionGenerateEnergy_Electric_C">();
	}
	static class UBP_ActionGenerateEnergy_Electric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionGenerateEnergy_Electric_C>();
	}
};
static_assert(alignof(UBP_ActionGenerateEnergy_Electric_C) == 0x000010, "Wrong alignment on UBP_ActionGenerateEnergy_Electric_C");
static_assert(sizeof(UBP_ActionGenerateEnergy_Electric_C) == 0x000160, "Wrong size on UBP_ActionGenerateEnergy_Electric_C");
static_assert(offsetof(UBP_ActionGenerateEnergy_Electric_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionGenerateEnergy_Electric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionGenerateEnergy_Electric_C, _______________) == 0x000148, "Member 'UBP_ActionGenerateEnergy_Electric_C::_______________' has a wrong offset!");
static_assert(offsetof(UBP_ActionGenerateEnergy_Electric_C, SpawnedEffect) == 0x000150, "Member 'UBP_ActionGenerateEnergy_Electric_C::SpawnedEffect' has a wrong offset!");

}

