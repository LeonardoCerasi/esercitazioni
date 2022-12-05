#include <iostream>

int main()
{
    float M[3][3];

    std::cout << "Insert the components of a 3x3-matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Insert the element M(" << i << "," << j << "): ";
            std::cin >> M[i][j];
        }
    }

    float x[3];

    std::cout << "Insert the componenets of a 3-vector:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cin >> x[i];
    }

    float prod[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            prod[i] += M[i][j] * x[j];
        }
    }

    std::cout << "\nTheir product has components:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << prod[i] << "  ";
    }

    return 0;
}