#include <iostream>

int main()
{
    int n;

    std::cout << "Insert n: ";
    std::cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (n % i != 0)
        {
            std::cout << "The smallest non-divisor of n is: " << i << std::endl;
            break;
        }
    }

    return 0;
}