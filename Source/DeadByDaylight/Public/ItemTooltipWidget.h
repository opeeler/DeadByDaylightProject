#pragma once
#include "CoreMinimal.h"
#include "BaseTooltipWidget.h"
#include "ItemTooltipWidget.generated.h"

class UTextBlock;
class UUMGHtmlRichText;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UItemTooltipWidget : public UBaseTooltipWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RarityLabel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* WarningText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HeaderSmoke;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HeaderBackground;
    
public:
    UItemTooltipWidget();
};

