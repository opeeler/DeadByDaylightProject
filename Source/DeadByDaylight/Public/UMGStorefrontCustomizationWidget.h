#pragma once
#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGStorefrontCustomizationWidget.generated.h"

class UCanvasPanel;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGStorefrontCustomizationWidget : public UUMGPromoPackItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CustomizationQuantityText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* CustomizationQuantityPanel;
    
public:
    UUMGStorefrontCustomizationWidget();
};

