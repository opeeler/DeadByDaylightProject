#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/ReflectionCaptureComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDReflectionCaptureSpawnerComponent.generated.h"

class UReflectionCaptureComponent;
class UTextureCube;
class AReflectionCapture;

UCLASS(BlueprintType)
class GFXUTILITIES_API UDBDReflectionCaptureSpawnerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EReflectionSourceType ReflectionSourceType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTextureCube* Cubemap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SourceCubemapAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Brightness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ContributionFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IBLMultiplicator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanBeTinted;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FVector CaptureOffset;
    
protected:
    UPROPERTY(Transient)
    TArray<AReflectionCapture*> SpawnedReflectionCaptures;
    
    UPROPERTY(Export, Transient)
    TArray<UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIBLMultiplicator(float NewIBLMultiplicator);
    
    UFUNCTION(BlueprintCallable)
    void SetContributionFactor(float NewContributionFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float NewBrightness);
    
    UDBDReflectionCaptureSpawnerComponent();
};

