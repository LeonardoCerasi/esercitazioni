#include <iostream>

int main()
{
    int frequencies[6] = {0, 0, 0, 0, 0, 0};

    int n;

    do
    {
        std::cout << "Insert a non-negative integer: ";
        std::cin >> n;
        
        for (int i = 0; i <= 5; i++)
        {
            if (n == i)
            {
                frequencies[i]++;
            }
        }
    }
    while (n >= 0);

    std::cout << std::endl;
    for (int i = 0; i <= 5; i++)
    {
        std::cout << "The number " << i << " occurred " << frequencies[i] << " times." << std::endl;
    }

    return 0;
}