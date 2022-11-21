#include <iostream>

int main()
{
    int n;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
        std::cout << std::endl;
    }
    while (n <= 0);

    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << "*";
            }

            std::cout << std::endl;
        }
    }

    return 0;
}