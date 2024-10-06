#pragma once

#include "Basic.hpp"

#include "BP_MonsterAIControllerBase_classes.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C
// 0x0020 (0x0570 - 0x0550)
class ABP_MonsterAIController_BaseCamp_C final : public ABP_MonsterAIControllerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MonsterAIController_BaseCamp_C;  // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                SpawnedPosition;                                   // 0x0558(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MonsterAIController_BaseCamp(int32 EntryPoint);
	void FailedFixedAssign();
	void FindFixedAssignableObject(const struct FGuid& WorkId, double Range, bool* bFound, TScriptInterface<class IPalBaseCampAssignableObjectInterface>* FoundObject);
	TSubclassOf<class UPalAIControllerWorkerModule> GetWorkerModuleClass();
	void InterruptPlayWorkerEventAction(class UPalAIActionBase* Action, const EAIRequestPriority Priority);
	void InterruptRecoverHungryAction(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter);
	void InterruptReturnBackToBaseCamp();
	void InterruptSleepActivelyAction(const struct FPalAIActionBaseCampSleepActivelyParameter& Parameter);
	void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
	void NotifyOrderCommandToCurrentRootAction(EPalMapBaseCampWorkerOrderType OrderType);
	void OnDeadDelegate______________0(const struct FPalDeadInfo& DeadInfo);
	void ReceivePossess(class APawn* PossessedPawn);
	void SetAction_BaseCamp(class UClass* AIActionClass, EAIRequestPriority Priority, class UPalAIActionBaseCampBase** Action);
	class UPalAIActionCompositeBase* SetAction_BaseCamp_Worker();
	void SetAction_CapturedStorage();
	void SetAction_DefaultPos();
	void SetAction_Internal(class UPalAIActionComponent* AIActionComponent_0, class UPalAIActionBaseCampBase* NewAction);
	void SetAction_Liftup();
	void SetAction_RecoverHungry(const struct FPalMonsterControllerBaseCampHungryParameter& Parameter, class UPalAIActionBaseCampBase** Action);
	void SetAction_Sleep();
	void SetAction_SleepActively(struct FPalAIActionBaseCampSleepActivelyParameter& Parameter);
	void SetAction_SpawningForWorker();
	void SetAction_WithFixAssignRange(struct FGuid& TargetWorkProgressId, const double Range);
	void SetAction_WorkerEvent(class UPalAIActionBase* Action, EAIRequestPriority Priority);
	void SetBaseCampAction();
	class UPalAIActionBase* SetBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass);
	void SetBaseCampActionLift();
	class UPalAIActionBaseCampSleep* SetBaseCampActionSleep();
	void SetBaseCampActionSleepMedicalBed(const struct FGuid& TargetBedConcreteModelId);
	void SetBaseCampActionSpawningForWork();
	void SetBaseCampActionWithFixAssign(const struct FGuid& TargetWorkProgressId, const float DistanceFixAssignTargetting);
	void SetCapturedStorageAction();
	class UPalAIActionCompositeBase* SetCompositeActionBaseCamp(class UClass* CompositeActionClass);
	void SetDefaultPositionAction();
	void ShowBaseCampLog(const struct FPalMonsterControllerBaseCampLogContent& Content);
	void TerminateBaseCampActionByClass(TSubclassOf<class UPalAIActionBase> ActionClass);
	void TerminateBaseCampActionByClass_Internal(class UClass* ActionClass);

	void GetBaseCampId(struct FGuid* Base_Camp_Id) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonsterAIController_BaseCamp_C">();
	}
	static class ABP_MonsterAIController_BaseCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonsterAIController_BaseCamp_C>();
	}
};
static_assert(alignof(ABP_MonsterAIController_BaseCamp_C) == 0x000008, "Wrong alignment on ABP_MonsterAIController_BaseCamp_C");
static_assert(sizeof(ABP_MonsterAIController_BaseCamp_C) == 0x000570, "Wrong size on ABP_MonsterAIController_BaseCamp_C");
static_assert(offsetof(ABP_MonsterAIController_BaseCamp_C, UberGraphFrame_BP_MonsterAIController_BaseCamp_C) == 0x000550, "Member 'ABP_MonsterAIController_BaseCamp_C::UberGraphFrame_BP_MonsterAIController_BaseCamp_C' has a wrong offset!");
static_assert(offsetof(ABP_MonsterAIController_BaseCamp_C, SpawnedPosition) == 0x000558, "Member 'ABP_MonsterAIController_BaseCamp_C::SpawnedPosition' has a wrong offset!");

}

