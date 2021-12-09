#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "IridescentCoinAddon.generated.h"

class UStatusEffect;

UCLASS()
class UIridescentCoinAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UStatusEffect* _exposedStatusEffect;
    
public:
    UIridescentCoinAddon();
};

