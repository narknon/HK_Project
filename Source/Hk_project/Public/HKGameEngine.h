#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "HKGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class UHKGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UHKGameEngine();
};

