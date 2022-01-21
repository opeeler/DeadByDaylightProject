#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "ItemUIData.h"
#include "ItemAvailability.h"
#include "CustomizationData.generated.h"

USTRUCT()
struct FCustomizationData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ID;
    
    UPROPERTY(EditAnywhere)
    int32 AssociatedCharacter;
    
    UPROPERTY(EditAnywhere)
    EPlayerRole AssociatedRole;
    
    UPROPERTY(EditAnywhere)
    EItemRarity Rarity;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    UPROPERTY(EditAnywhere)
    FItemAvailability Availability;
    
    DEADBYDAYLIGHT_API FCustomizationData();
};

