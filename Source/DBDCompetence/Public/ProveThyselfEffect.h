#pragma once
#include "CoreMinimal.h"
#include "RemoveOnOriginatingSurvivorGoneStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyselfEffect.generated.h"

class ACamperPlayer;

UCLASS()
class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _proveThyselfRange;
    
    UPROPERTY(EditDefaultsOnly)
    float _speedPercentageAddedPerSurvivorRepairingInRange;
    
protected:
    UFUNCTION()
    void OnInRangeOfOriginatorChanged(const bool inRange, ACamperPlayer* survivor);
    
public:
    UProveThyselfEffect();
};

