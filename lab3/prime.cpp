#include <iostream>

int main()
{
    int n;

    std::cout << "Insert n: ";
    std::cin >> n;

    bool flag = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }

    if (flag)
    {
        std::cout << "It's a prime number." << std::endl;
    }
    else
    {
        std::cout << "It's not a prime number." << std::endl;
    }
}