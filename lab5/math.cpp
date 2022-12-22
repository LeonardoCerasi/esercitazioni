#include "math.h"

float get_positive()
{
    float x;

    do
    {
        std::cin >> x;
    } while (x <= 0);

    return x;
}