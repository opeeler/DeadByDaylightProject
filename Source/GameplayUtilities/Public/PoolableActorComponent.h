#pragma once
#include "CoreMinimal.h"
#include "BasePoolableActorComponent.h"
#include "PoolableActorComponent.generated.h"

UCLASS(EditInlineNew)
class GAMEPLAYUTILITIES_API UPoolableActorComponent : public UBasePoolableActorComponent {
    GENERATED_BODY()
public:
    UPoolableActorComponent();
};

