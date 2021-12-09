#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ActorVariationElements.h"
#include "ActorVariationSpawner.generated.h"

class AActor;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UActorVariationSpawner : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Visualization;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FActorVariationElements> Variations;
    
private:
    UPROPERTY(Transient)
    UClass* _toSpawn;
    
public:
    UActorVariationSpawner();
};

