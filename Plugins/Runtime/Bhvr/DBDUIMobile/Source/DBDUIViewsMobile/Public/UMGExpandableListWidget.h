#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGExpandableListWidget.generated.h"

class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;
class UUserWidget;
class UExpandableArea;

UCLASS(Abstract, EditInlineNew)
class UUMGExpandableListWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool ShouldHideExpandableListIfEmpty;
    
    UPROPERTY(EditInstanceOnly)
    bool IsExtendedAtStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UUMGBaseButtonWidget* ExpansionButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UVerticalBox* ItemContainer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* CategorieName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemCount;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UExpandableArea* ExpandableArea;
    
    UPROPERTY(EditInstanceOnly)
    FText HeaderTitle;
    
private:
    UPROPERTY(Export)
    TArray<UUserWidget*> _childWidgets;
    
protected:
    UFUNCTION()
    void ToggleExpansion();
    
public:
    UUMGExpandableListWidget();
};

