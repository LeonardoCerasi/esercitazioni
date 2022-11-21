#include <iostream>

int main()
{
    int x;

    std::cout << "Int x: ";
    std::cin >> x;
    std::cout  << std::endl;

    int y = 0;

    y += x % 10;
    y += (x - x % 10)/10 * 16;

    std::cout << y << std::endl;

    return 0;
}