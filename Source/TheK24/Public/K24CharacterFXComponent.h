#pragma once
#include "CoreMinimal.h"
#include "OnPowerLevelChangedFX.h"
#include "Components/ActorComponent.h"
#include "OnKillerHitZombie.h"
#include "OnKillerContaminatedSurvivor.h"
#include "K24CharacterFXComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24CharacterFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPowerLevelChangedFX OnPowerLevelChangedFx;
    
    UPROPERTY(BlueprintAssignable)
    FOnKillerHitZombie Local_OnKillerHitZombie;
    
    UPROPERTY(BlueprintAssignable)
    FOnKillerContaminatedSurvivor Local_OnKillerContaminatedSurvivor;
    
    UK24CharacterFXComponent();
private:
    UFUNCTION()
    void Local_OnKillerPowerLevelChanged(int32 powerLevel);
    
};

