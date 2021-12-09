#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "CharacterInfoScreen.generated.h"

UCLASS()
class UCharacterInfoScreen : public UScreenBase {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnBackButtonClick();
    
public:
    UCharacterInfoScreen();
};

