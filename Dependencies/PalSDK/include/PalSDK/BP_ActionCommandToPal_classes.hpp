#pragma once

#include "Basic.hpp"

#include "BP_ActionSimpleMonoMontage_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionCommandToPal.BP_ActionCommandToPal_C
// 0x0040 (0x01B0 - 0x0170)
class UBP_ActionCommandToPal_C final : public UBP_ActionSimpleMonoMontage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionCommandToPal_C;            // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                               TargetRotation;                                    // 0x0170(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                        ElapsedTime;                                       // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CurrentRotation;                                   // 0x0190(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void TickAction(float DeltaTime);
	void OnEndAction();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionCommandToPal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionCommandToPal_C">();
	}
	static class UBP_ActionCommandToPal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionCommandToPal_C>();
	}
};
static_assert(alignof(UBP_ActionCommandToPal_C) == 0x000010, "Wrong alignment on UBP_ActionCommandToPal_C");
static_assert(sizeof(UBP_ActionCommandToPal_C) == 0x0001B0, "Wrong size on UBP_ActionCommandToPal_C");
static_assert(offsetof(UBP_ActionCommandToPal_C, UberGraphFrame_BP_ActionCommandToPal_C) == 0x000168, "Member 'UBP_ActionCommandToPal_C::UberGraphFrame_BP_ActionCommandToPal_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommandToPal_C, TargetRotation) == 0x000170, "Member 'UBP_ActionCommandToPal_C::TargetRotation' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommandToPal_C, ElapsedTime) == 0x000188, "Member 'UBP_ActionCommandToPal_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UBP_ActionCommandToPal_C, CurrentRotation) == 0x000190, "Member 'UBP_ActionCommandToPal_C::CurrentRotation' has a wrong offset!");

}

