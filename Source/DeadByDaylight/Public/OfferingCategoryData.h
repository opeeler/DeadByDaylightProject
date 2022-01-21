#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "EOfferingCategory.h"
#include "ItemUIData.h"
#include "OfferingCategoryData.generated.h"

USTRUCT()
struct FOfferingCategoryData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOfferingCategory OfferingCategory;
    
    UPROPERTY(EditAnywhere)
    TArray<EPlayerRole> Role;
    
    UPROPERTY(EditAnywhere)
    FItemUIData UIData;
    
    DEADBYDAYLIGHT_API FOfferingCategoryData();
};

