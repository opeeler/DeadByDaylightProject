#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DBDAtlantaDesignTunables.generated.h"

class UUMGAtlantaNavigationScreen;
class UDBDAtlantaStructuredData;
class UUMGLoadingScreenWidget;
class UGeneratorIndicatorWidget;
class UNoiseIndicatorWidget;
class USharedAuthenticationComponent;
class USafeZoneManagerWidget;
class UExitOpenedIndicatorWidget;
class UUMGAtlantaFriendListScreen;
class UHookedIndicatorWidget;
class UKillerNoiseIndicatorWidget;
class UUMGAtlantaRitualsScreen;
class UBaseIndicatorWidget;
class UMobileBaseUserWidget;
class UTerrorRadiusIndicatorWidget;
class UUMGRoleSelectionScreen;
class UUMGAtlantaTutorialScreen;
class UUMGInboxScreen;
class UUMGSwitcherScreen;
class UUMGLobbyScreen;
class UStaticMesh;
class UUMGCustomizationScreenWidget;
class UUMGCommandDebugButton;
class UMaterialInstanceConstant;
class UUMGGenericPopup;
class UUMGAtlantaLevelUpPopup;
class UUMGAtlantaTallyScreen;
class UUMGSplashScreen;
class UUMGAtlantaLegalMenuScreen;
class UAtlantaObjectiveWidget;
class UUMGAtlantaStoreScreen;
class UUMGAtlantaSettingScreen;
class UUMGPerkSelectionPopup;
class UUMGBloodStoreMysteryBoxPopup;
class UUMGCloseTooltipWidget;
class UUMGToastNotificationScreen;
class UDBDRankDesignTunables;
class UUMGStreamVideoWidget;
class UDBDCurrencyConversionTunables;
class UMediaPlayer;

UCLASS(BlueprintType, Transient, Config=Design)
class DEADBYDAYLIGHT_API UDBDAtlantaDesignTunables : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear)
    TSoftClassPtr<UDBDAtlantaStructuredData> AtlantaStructuredDataClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDBDAtlantaStructuredData* AtlantaStructuredData;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UNoiseIndicatorWidget> CloseNoiseIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UExitOpenedIndicatorWidget> ExitOpenedIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UGeneratorIndicatorWidget> GeneratorIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UHookedIndicatorWidget> HookedIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UKillerNoiseIndicatorWidget> KillerCuesIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UBaseIndicatorWidget> GlobalSoundIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UTerrorRadiusIndicatorWidget> DirectionalTerrorRadiusIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UNoiseIndicatorWidget> LoudNoiseIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UNoiseIndicatorWidget> StealthBrokenIndicatorTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<USafeZoneManagerWidget> SafeZoneManagerTemplate;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGRoleSelectionScreen> UMGRoleSelectionScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaTutorialScreen> UMGAtlantaTutorialScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaNavigationScreen> UMGNavigationScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGInboxScreen> UMGInboxScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<USharedAuthenticationComponent> SharedAuthenticationComponent;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGSwitcherScreen> UMGPanelScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGLobbyScreen> UMGLobbyScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftObjectPtr<UStaticMesh> AtlantaChaseVignetteStaticMesh;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftObjectPtr<UMaterialInstanceConstant> AtlantaChaseVignetteMaterialInstance;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGGenericPopup> UMGGenericPopupClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaLevelUpPopup> UMGLevelUpPopupClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGGenericPopup> UMGTutorialPopupClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaTallyScreen> UMGTallyScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGLoadingScreenWidget> UMGLoadingScreenWidgetClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGSplashScreen> UMGSplashScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCommandDebugButton> UMGCommandDebugButtonClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UAtlantaObjectiveWidget> UMGAtlantaObjectiveClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaStoreScreen> UMGStoreScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCustomizationScreenWidget> UMGCustomizationScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaSettingScreen> UMGOverlayMenuScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGPerkSelectionPopup> UMGPerkSelectionPopupClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGBloodStoreMysteryBoxPopup> UMGBloodStoreMysteryBoxPopupClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaRitualsScreen> UMGRitualScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UMobileBaseUserWidget> UMGLoadingWidgetClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGCloseTooltipWidget> UMGCloseTooltipWidgetClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaFriendListScreen> UMGAtlantaFriendListScreen;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGToastNotificationScreen> UMGToastNotificationScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGAtlantaLegalMenuScreen> UMGAtlantaLegalMenuScreenClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UDBDRankDesignTunables> RankDesignTunableClass;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftClassPtr<UUMGStreamVideoWidget> UMGStreamVideoWidgetClass;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath AtlantaTransitionLightEffectsScreen;
    
    UPROPERTY(EditAnywhere, NoClear)
    UDBDCurrencyConversionTunables* CurrencyConversionTunables;
    
    UPROPERTY(EditAnywhere, NoClear)
    TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset;
    
    UDBDAtlantaDesignTunables();
};

