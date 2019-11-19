
#include "CoreMinimal.h"
#include "Enums.generated.h"



UENUM(BlueprintType)
enum class EAction : uint8
{
	Create,
	Delete,
	Update,
	Move
};

UENUM(BlueprintType)
enum class EColorType : uint8
{
	Red,
	Blue,
	Alternating,
	Double
};

UENUM(BlueprintType)
enum class EDifficulty : uint8
{
	Easy,
	Normal,
	Hard,
	Expert,
	ExpertPlus
};

UENUM(BlueprintType)
enum class EUndoType : uint8
{
	Note,
	Wall,
	Event,
	Break
};