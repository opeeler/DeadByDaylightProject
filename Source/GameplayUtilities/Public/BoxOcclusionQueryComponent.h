#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoxOcclusionQueryComponent.generated.h"

UCLASS(EditInlineNew)
class GAMEPLAYUTILITIES_API UBoxOcclusionQueryComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUntilOccluded;
    
    UFUNCTION(BlueprintPure)
    float GetVisiblePercentOfScreen() const;
    
    UFUNCTION(BlueprintPure)
    float GetNumberOfVisiblePixels() const;
    
    UFUNCTION(BlueprintPure)
    float GetEstimatedRenderedPixelCount() const;
    
    UBoxOcclusionQueryComponent();
};

