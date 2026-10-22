#include "soc.h"

float CalculateSOC(float oldSOC,
                   float current,
                   float timeHours,
                   float capacityAh)
{
    float deltaSOC;

    deltaSOC = (current * timeHours * 100.0f)
               / capacityAh;

    return oldSOC - deltaSOC;
}
