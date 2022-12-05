#include <iostream>

int main()
{
    int numbers[10];

    std::cout << "Insert 10 integers:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }

    int p;

    do
    {
        std::cout << "\nInsert a non-negative integer less than 10: ";
        std::cin >> p;
        std::cout << std::endl;
    }
    while (p < 0);

    int support[10];
    for (int i = 0; i < 10; i++)
    {
        support[i] = numbers[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if ((i - p) < 0)
        {
            numbers[i] = support[10 + (i - p)];
        }
        else
        {
            numbers[i] = support[i - p];
        }
    }

    std::cout << "The p-shifted array is: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << "  ";
    }

    return 0;
}