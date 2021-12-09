#pragma once
#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "HideInSnowmanInteraction.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew)
class UHideInSnowmanInteraction : public UInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool _shouldRunOutOfSnowman;
    
    UPROPERTY(Replicated, Transient)
    bool _isSnowmanShieldDamaged;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToEnterSnowman;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minimumTimeToRunAndExit;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _cameraZoomBack;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToZoomEnter;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _timeToZoomExit;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StopControllingSnowman(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartControllingSnowman(ACamperPlayer* survivor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnAbleToRunAndExitSnowmanStart();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHideInSnowmanInteraction();
};

