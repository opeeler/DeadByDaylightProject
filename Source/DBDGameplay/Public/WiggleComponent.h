#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargeableProgressSource.h"
#include "ESkillCheckCustomType.h"
#include "WiggleComponent.generated.h"

class UChargeableComponent;
class ASlasherPlayer;
class UInputComponent;
class ADBDPlayer;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleComponent : public UActorComponent, public IChargeableProgressSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UChargeableComponent* _wiggleProgress;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _killerWigglingFrom;
    
    UPROPERTY(Export, Transient)
    UInputComponent* _inputComponent;
    
public:
    UWiggleComponent();
private:
    UFUNCTION(Reliable, Server)
    void Server_OnWiggleEnd();
    
    UFUNCTION()
    void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnWiggleInput();
    
    UFUNCTION()
    void OnWiggleEnd();
    
    UFUNCTION()
    void OnPlayerPickedUpStart(ADBDPlayer* picker);
    
    UFUNCTION()
    void OnPlayerPickedUpEnd(ADBDPlayer* picker);
    
    UFUNCTION()
    void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnKeyBindingsChanged();
    
    UFUNCTION()
    void OnHideWiggleSkillCheck(ESkillCheckCustomType type);
    
    UFUNCTION()
    void OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
public:
    UFUNCTION(BlueprintPure)
    UChargeableComponent* GetWiggleChargeable() const;
    
    UFUNCTION(BlueprintCallable)
    void Authority_AddWiggleCharge(float chargeAmount);
    
    
    // Fix for true pure virtual functions not being implemented
};

