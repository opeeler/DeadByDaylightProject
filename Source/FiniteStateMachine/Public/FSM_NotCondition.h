#pragma once
#include "CoreMinimal.h"
#include "FSM_Condition.h"
#include "FSM_NotCondition.generated.h"

UCLASS(EditInlineNew)
class UFSM_NotCondition : public UFSM_Condition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UFSM_Condition* _condition;
    
public:
    UFSM_NotCondition();
};

