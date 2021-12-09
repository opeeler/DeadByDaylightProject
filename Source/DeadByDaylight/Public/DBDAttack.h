#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EAttackType.h"
#include "EAttackSubstate.h"
#include "AttackSubstateRequestResult.h"
#include "StatProperty.h"
#include "EDetectionZone.h"
#include "DBDAttackTargetTracker.h"
#include "EHitValidatorConfigName.h"
#include "DBDAttack.generated.h"

class ACharacter;
class UDBDAttackSubstate;
class ADBDPlayer;
class UAttackableComponent;

UCLASS()
class DEADBYDAYLIGHT_API UDBDAttack : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EAttackType _attackType;
    
    UPROPERTY(EditDefaultsOnly)
    bool _useMontage;
    
    UPROPERTY(EditDefaultsOnly)
    EDetectionZone _damageZone;
    
    UPROPERTY(EditDefaultsOnly)
    EDetectionZone _lockZone;
    
    UPROPERTY(EditDefaultsOnly)
    EDetectionZone _obstructionZone;
    
    UPROPERTY(EditDefaultsOnly)
    FStatProperty _maxAccelerationMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDAttackTargetTracker _targetTracker;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EAttackSubstate, TSubclassOf<UDBDAttackSubstate>> _stateClasses;
    
    UPROPERTY(Transient)
    TArray<ACharacter*> _localAlreadyHitTargets;
    
private:
    UPROPERTY(Transient)
    TMap<EAttackSubstate, UDBDAttackSubstate*> _states;
    
    UPROPERTY(Transient)
    TArray<ADBDPlayer*> _hitTargets;
    
    UPROPERTY(Transient)
    TSet<ADBDPlayer*> _targetsAwaitingServerValidation;
    
    UPROPERTY(EditAnywhere)
    EHitValidatorConfigName _hitValidationConfigName;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestStateChange(const EAttackSubstate state);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HitTarget(ADBDPlayer* target, const float targetLocationTimestamp);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HitAttackableComponent(UAttackableComponent* attackableComponent);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ClearTargets();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RequestStateChange(const EAttackSubstate state);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_HitTarget(ADBDPlayer* target);
    
public:
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_HitAttackableComponent(UAttackableComponent* attackableComponent);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ClearTargets();
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveHitResult(ADBDPlayer* target, bool isValid);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveAttackSubstateRequestResult(const FAttackSubstateRequestResult result);
    
public:
    UDBDAttack();
};

