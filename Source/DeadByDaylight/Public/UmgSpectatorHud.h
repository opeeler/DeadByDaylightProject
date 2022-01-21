#pragma once
#include "CoreMinimal.h"
#include "OnLeaveSpectateClicked.h"
#include "UmgPlayerHud.h"
#include "OnSpectatePlayer.h"
#include "UmgSpectatorHud.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUmgSpectatorHud : public UUmgPlayerHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnLeaveSpectateClicked OnLeaveSpectateClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpectatePlayer OnPlayerSpectate;
    
    UUmgSpectatorHud();
private:
    UFUNCTION()
    void OnPlayerStatusSelected(const FString& playerName);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLeaveSpectateClicked();
    
};

