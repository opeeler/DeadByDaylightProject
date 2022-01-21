#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Highlightable.h"
#include "OnTooltipTriggeredEvent.h"
#include "EPlayerRole.h"
#include "UMGRankBanner.generated.h"

class UUMGTallyRankFrame;
class UButton;
class UImage;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class UUMGRankBanner : public UMobileBaseUserWidget, public IHighlightable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGTallyRankFrame* RankFrameWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* TooltipButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* HighlightImage;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* OnLongPressSound;
    
private:
    UPROPERTY()
    FOnTooltipTriggeredEvent _onLongPressRankTooltipEvent;
    
public:
    UUMGRankBanner();
    UFUNCTION(BlueprintCallable)
    void StopHighlight();
    
    UFUNCTION(BlueprintCallable)
    void StartHighlight();
    
    UFUNCTION(BlueprintCallable)
    void SetData(int32 rank, EPlayerRole playerRole);
    
private:
    UFUNCTION()
    void HandleTooltipLongPressedEvent();
    
    
    // Fix for true pure virtual functions not being implemented
};

