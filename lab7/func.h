#pragma once

#include <fstream>
#include <string>


#include "circle.h"

int lines(const char *f)
{
    std::ifstream input;
    input.open(f);

    if (!input)
    {
        return -1;
    }

    int lines = 0;

    std::string line;
    getline(input, line);
    while (!input.eof())
    {
        lines++;

        getline(input, line);
    }

    input.close();

    return lines;
}

void swap(circle& C1, circle& C2)
{
    circle C = C1;
    C1 = C2;
    C2 = C;
}

int select(circle* circles, int dim_circles, int* codices, int dim_codices)
{
    int t = dim_circles - 1;

    for (int i = 0; i <= t; i++)
    {
        if (!exists_code(circles[i], codices, dim_codices))
        {
            swap(circles[i], circles[t]);

            i--;
            t--;
        }
    }

    return t;
}