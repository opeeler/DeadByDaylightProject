#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OfferingSequenceManager.generated.h"

class AOfferingSequenceAssets;
class UDBDGameInstance;
class ACameraActor;
class ADBDLobbyHud;
class UOfferingHandler;
class APlayerController;

UCLASS()
class DEADBYDAYLIGHT_API AOfferingSequenceManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    APlayerController* _localPlayerController;
    
    UPROPERTY(Transient)
    UOfferingHandler* _offeringHandler;
    
    UPROPERTY(Transient)
    AOfferingSequenceAssets* _sequenceAssets;
    
    UPROPERTY(Transient)
    ADBDLobbyHud* _hud;
    
    UPROPERTY(Transient)
    ACameraActor* _offeringCamera;
    
public:
    AOfferingSequenceManager();
private:
    UFUNCTION()
    void FadeInScreen();
    
};

