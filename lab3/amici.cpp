#include <iostream>

int main()
{
    int n,m, n_div = 0, m_div = 0;

    std::cout << "Insert n: ";
    std::cin >> n;
    std::cout << "Insert m: ";
    std::cin >> m;

    if (n > 0 && m > 0)
    {
        for (int i = 1; (n <= m && i < m) || (n >= m && i < n); i++)
        {
            if (n % i == 0)
            {
                n_div += i;
            }

            if (m % i == 0)
            {
                m_div += i;
            }
        }

        if (n == m_div)
        {
            std::cout << "m is friend with n" << std::endl;
        }

        if (m == n_div)
        {
            std::cout << "n is friend with m" << std::endl;
        }
    }
    else
    {
        std::cout << "Both numbers should be non-negative integers." << std::endl;
    }
}