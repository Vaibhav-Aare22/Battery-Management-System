#include "range.h"

float CalculateRange(float soc,
                     float maxRange)
{
    return (soc * maxRange) / 100.0f;
}
