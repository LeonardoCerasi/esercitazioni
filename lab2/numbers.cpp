#include <iostream>

int main()
{
    int n;
    int sum_even = 0;
    int n_even = 0;
    int sum_odd = 0;
    int n_odd = 0;

    do
    {
        std::cout << "Insert a number: ";
        std::cin >> n;

        if (n % 2 == 0 && n > 0)
        {
            n_even++;
            sum_even += n;
        }
        if (n % 2 == 1 && n > 0)
        {
            n_odd++;
            sum_odd += n;
        }

    } while (n != 0);

    if (n_even > 0)
    {
        std::cout << "The mean of even numbers is: ";
        std::cout << (sum_even / n_even) << std::endl;
    }
    if (n_odd > 0)
    {
        std::cout << "The mean of odd numbers is:";
        std::cout << (sum_odd / n_odd) << std::endl;
    }

    return 0;     
}