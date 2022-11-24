#include <iostream>

bool is_friend(int n, int m)
{
    int n_div = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            n_div += i;
        }
    }

    if (m == n_div)
    {
        return true;
    }

    return false;
}

int main()
{
    int r,s;

    std::cout << "Insert r: ";
    std::cin >> r;
    std::cout << "Insert s: ";
    std::cin >> s;

    if (r > 0 && s > 0)
    {
        for (int i = 0; i <= r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (is_friend(i, j))
                {
                    std::cout << "(" << i << "," << j << ")" << std::endl; 
                }
            }
        }
    }
    else
    {
        std::cout << "Both numbers should be non-negative integers." << std::endl;
    }

    return 0;
}