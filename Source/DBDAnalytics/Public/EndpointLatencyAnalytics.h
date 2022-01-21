#pragma once
#include "CoreMinimal.h"
#include "EndpointLatencyData.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EndpointLatencyAnalytics.generated.h"

USTRUCT()
struct FEndpointLatencyAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FEndpointLatencyData> Endpoints;
    
    DBDANALYTICS_API FEndpointLatencyAnalytics();
};

