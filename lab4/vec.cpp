#include <iostream>

int main()
{
    float A[10];

    std::cout << "Insert the components of a 10-dimensional vector:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> A[i];
    }

    float B[10];

    std::cout << "Insert the components of a 10-dimensional vector:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> B[i];
    }

    float sum[10];

    for (int i = 0; i < 10; i++)
    {
        sum[i] = A[i] + B[i];
    }

    std::cout << "The components of their sum are:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << sum[i] << std::endl;
    }

    float inner_product = 0;

    for (int i = 0; i < 10; i++)
    {
        inner_product += A[i] * B[i];
    }

    std::cout << "Their inner product is: " << inner_product << std::endl;

    return 0;
}