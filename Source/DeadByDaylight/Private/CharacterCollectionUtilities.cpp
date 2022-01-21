#include "CharacterCollectionUtilities.h"

class ACamperPlayer;
class UObject;
class ASlasherPlayer;
class ADBDPlayer;
class ACharacter;

int32 UCharacterCollectionUtilities::GetNumberOfInjuredHookedOrDyingSurvivors(const UObject* worldContextObject) {
    return 0;
}

ASlasherPlayer* UCharacterCollectionUtilities::GetKiller(const UObject* worldContextObject) {
    return NULL;
}

TSet<ACamperPlayer*> UCharacterCollectionUtilities::GetInGameSurvivorsByRef(const UObject* worldContextObject) {
    return TSet<ACamperPlayer*>();
}

TArray<ADBDPlayer*> UCharacterCollectionUtilities::GetInGameSurvivorsAsPlayers(const UObject* worldContextObject) {
    return TArray<ADBDPlayer*>();
}

TArray<ACamperPlayer*> UCharacterCollectionUtilities::GetInGameSurvivors(const UObject* worldContextObject) {
    return TArray<ACamperPlayer*>();
}

TArray<ADBDPlayer*> UCharacterCollectionUtilities::GetInGamePlayers(const UObject* worldContextObject) {
    return TArray<ADBDPlayer*>();
}

TArray<ADBDPlayer*> UCharacterCollectionUtilities::GetCharactersByPlayerTeam(EPlayerTeam playerTeam, const UObject* worldContextObject) {
    return TArray<ADBDPlayer*>();
}

TArray<ADBDPlayer*> UCharacterCollectionUtilities::GetAllDBDPlayers(const UObject* worldContextObject) {
    return TArray<ADBDPlayer*>();
}

TSet<ACharacter*> UCharacterCollectionUtilities::GetAllCharacters(const UObject* worldContextObject) {
    return TSet<ACharacter*>();
}

UCharacterCollectionUtilities::UCharacterCollectionUtilities() {
}

