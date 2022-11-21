#include <iostream>

int main()
{
    int n;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
        std::cout << std::endl;
    } while (n <= 0);

    if (n > 0)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;

        for (int i = 1; i < n-1; i++)
        {
            std::cout << "*";

            for (int j = 1; j < n-1; j++)
            {
                std::cout << " ";
            }
        
            std::cout << "*";
            std::cout << std::endl;
        }

        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
    }

    return 0;
}