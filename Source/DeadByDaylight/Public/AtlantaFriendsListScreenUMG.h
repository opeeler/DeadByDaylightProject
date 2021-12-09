#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaFriendsListScreenUMG.generated.h"

class UUMGAtlantaFriendListScreen;

UCLASS()
class UAtlantaFriendsListScreenUMG : public UScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UUMGAtlantaFriendListScreen* _atlantaFriendListScreen;
    
    UFUNCTION()
    void HandleResearchButtonClicked(const FText& searchInput);
    
    UFUNCTION()
    void HandleClosedButtonClicked();
    
public:
    UAtlantaFriendsListScreenUMG();
};

