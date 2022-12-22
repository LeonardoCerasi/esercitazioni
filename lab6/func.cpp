#include "func.h"

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

void swap(complex &x, complex &y)
{
    complex t = x;
    x = y;
    y = t;
}

int selection(complex *numbers, int dim)
{
    int t = dim - 1;

    for (int i = 0; i <= t; i++)
    {
        if (numbers[i].real < 0)
        {
            swap(numbers[i], numbers[t]);

            i--;
            t--;
        }
    }

    return t;
}

void sort(complex *numbers, int dim)
{
    for (int i = 0; i < dim - 1; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (numbers[j].real < numbers[i].real)
            {
                swap(numbers[i], numbers[j]);
            }
        }
    }
}