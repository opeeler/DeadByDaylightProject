#pragma once
#include "CoreMinimal.h"
#include "EZombieState.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "ChangeZombieStateBTTask.generated.h"

UCLASS()
class UChangeZombieStateBTTask : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EZombieState _zombieState;
    
public:
    UChangeZombieStateBTTask();
};

