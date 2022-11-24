#include <iostream>

bool is_prime(int n)
{
    if(n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    std::cout << "Insert n: ";
    std::cin >> n;
    std::cout << std::endl;

    for (int i = 0; i <= n; i++)
    {
        std::cout << i << ":\t";

        for (int j = 0; j <= i; j++)
        {
            if (is_prime(j))
            {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}