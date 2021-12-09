#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerAudioMenuReactionComponent.generated.h"

class ADBDMenuPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UKillerAudioMenuReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnLobbyTimeChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void LobbyKillerReactionSpecificSurvivorSFX(const TArray<ADBDMenuPlayer*>& menuPlayers);
    
public:
    UKillerAudioMenuReactionComponent();
};

