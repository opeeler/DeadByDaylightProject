#pragma once
#include "CoreMinimal.h"
#include "CustomizationRewardViewData.h"
#include "CoreRewardWidget.h"
#include "CoreCustomizationRewardWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCustomizationRewardWidget : public UCoreRewardWidget {
    GENERATED_BODY()
public:
    UCoreCustomizationRewardWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(const FCustomizationRewardViewData& customizationRewardViewData);
    
};

