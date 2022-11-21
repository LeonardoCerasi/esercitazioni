#include <iostream>
#include <cmath>

int main()
{
    float PI = 3.14159265358979323;

    float r;
    
    std::cout << "r: ";
    std::cin >> r;
    
    if (r > 0)
    {
        std::cout << "Area: ";
        std::cout << PI * pow(r,2) << std::endl;
        std::cout << "Perimeter: ";
        std::cout << PI * 2 * r << std::endl;
    }
    else if (r == 0)
    {
        std::cout << "Degenerate circle." << std::endl;
    }
    else if (r < 0)
    {
        std::cout << "The radius cannot be negative." << std::endl;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }

    return 0;
}