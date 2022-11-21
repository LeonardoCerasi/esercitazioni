#include <iostream>

int main()
{
    double a,b,c,d;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    std::cout << "d: ";
    std::cin >> d;

    if ((a - b) == (b - c))
    {
        if ((b - c) == (c - d))
        {
            std::cout << "This arithmetic progression has common difference: ";
            std::cout << abs(a - b) << std::endl;
        }
    }
    else
    {
        std::cout << "This is not an arithmetic progression." << std::endl;
    }

    return 0;
}