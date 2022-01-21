#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "UObject/NoExportTypes.h"
#include "PhantomTrap.generated.h"

class ASlasherPlayer;
class UTerrorRadiusEmitterComponent;
class AActor;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API APhantomTrap : public AInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;
    
    UPROPERTY(EditAnywhere)
    float _lineOfSightTraceMinInterval;
    
public:
    APhantomTrap();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsTrapSet() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeTerrorRadiusEmitter(ASlasherPlayer* OwningSlasher);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateLineOfSight(const FVector& start, const FVector& end, const AActor* ignoredActor);
    
};

