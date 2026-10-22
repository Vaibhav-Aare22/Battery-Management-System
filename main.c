#include <stdio.h>
#include "soc.h"
#include "range.h"

int main(void)
{
    float soc = 80.0f;

    soc = CalculateSOC(
            soc,
            10.0f,
            1.0f,
            100.0f);

    float range =
        CalculateRange(
            soc,
            400.0f);

    printf("SOC = %.2f %%\n", soc);
    printf("Range = %.2f km\n", range);

    return 0;
}
