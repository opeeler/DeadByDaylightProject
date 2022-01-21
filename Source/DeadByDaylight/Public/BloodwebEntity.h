#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BloodwebEntity.generated.h"

class UDBDGameInstance;
class UDBDBloodwebDefinitionBase;
class IDBDBloodwebDefinitionBase;
class UBloodwebTunables;

UCLASS()
class UBloodwebEntity : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UDBDGameInstance* _gameInstance;
    
    UPROPERTY(Transient)
    UBloodwebTunables* _bloodwebTunables;
    
    UPROPERTY(Transient)
    TScriptInterface<IDBDBloodwebDefinitionBase> _bloodWebDefinition;
    
public:
    UBloodwebEntity();
};

