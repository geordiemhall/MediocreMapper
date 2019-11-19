
#include "CoreMinimal.h"
#include "Structs.generated.h"

/*
* This struct header is temporary until I can convert the rest of the blueprints over to C++
*/

USTRUCT(BlueprintType)
struct FSectionStat
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		float RedBlueRatio;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> RedPositionProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> BluePositionProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> RedAngleProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> BlueAngleProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		float StreamRating;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		int32 FirstColor;

	FSectionStat()
	{
		RedBlueRatio = 0.0f;
		StreamRating = 0.0f;
		FirstColor = 0;
	}
};

