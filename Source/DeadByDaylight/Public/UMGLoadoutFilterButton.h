#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutFilterClickedEvent.h"
#include "UMGLoadoutFilterButton.generated.h"

class UTexture2D;
class UButton;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutFilterButton : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* ActionButton;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadoutFilterClickedEvent OnLoadoutFilterButtonClicked;
    
    UUMGLoadoutFilterButton();
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSelected(bool isSelected);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetIcon(const TSoftObjectPtr<UTexture2D>& icon);
    
public:
    UFUNCTION()
    void OnActionButtonClick();
    
    UFUNCTION(BlueprintCallable)
    void InitFilterButton(const FName& filterName, const TSoftObjectPtr<UTexture2D> filterTexture);
    
};

