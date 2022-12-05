#include <iostream>

int main()
{
    int numbers[10];

    std::cout << "Insert 10 integers:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << " ";
    }

    int x,y;

    do
    {
        std::cout << "\n\nInsert two integers within dimensional limits of the array:\n";
        std::cin >> x;
        std::cin >> y;
    }
    while (x >= y || x <= 0 || y >= 10);

    int support[y-x+1];

    for(int i = 0; i < y-x+1; i++)
    {
        support[i] = numbers[x+i];
    }

    for (int i = x; i <= y; i++)
    {
        numbers[i] = support[y-x-(i-x)];
    }

    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << " ";
    }

    return 0;
}