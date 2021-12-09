#pragma once
#include "CoreMinimal.h"
#include "PromoPackSelectedItemData.generated.h"

class UTexture2D;
class UUMGPromoPackItemWidget;

USTRUCT(BlueprintType)
struct FPromoPackSelectedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* ItemTypeIcon;
    
    UPROPERTY(BlueprintReadWrite)
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite)
    FText ItemSubTitle;
    
    UPROPERTY(BlueprintReadWrite)
    FText ItemDescription;
    
    UPROPERTY(Export)
    UUMGPromoPackItemWidget* Widget;
    
    DEADBYDAYLIGHT_API FPromoPackSelectedItemData();
};

