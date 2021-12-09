#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActivatorComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(BlueprintType)
class ACTIVATION_API UActivatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool _searchForActivatableSubAnimInstances;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetObjectState(UGameplayTagContainerComponent* objectState);
    
    UActivatorComponent();
};

