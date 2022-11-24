#include <iostream>

int main()
{
    int n, max = 0, min = 0;

    for (int i = 1; i != 0; i++)
    {
        std::cout << "Insert an integer (0 to terminate): ";
        std::cin >> n;

        if (i == 1)
        {
            max = n;
            min = n;
        }

        if (n == 0)
        {
            break;
        }

        if (n > max)
        {
            max = n;
        }

        if (n < min)
        {
            min = n;
        }
    }

    std::cout << "Max: ";
    std::cout << max << std::endl;
    std::cout << "Min: ";
    std::cout << min << std::endl;    

    return 0;
}