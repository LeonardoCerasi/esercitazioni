#include <iostream>
#include <cmath>

int main()
{
    float a,b,c;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c:";
    std::cin >> c;

    float d = pow(b,2) - 4 * a * c;

    if (d > 0)
    {
        std::cout << "There are two distinct real solutions: " << std::endl;
        std::cout << (-b - sqrt(d)) / (2 * a) << std::endl;
        std::cout << (-b + sqrt(d)) / (2 * a) << std::endl;
    }
    else if (d == 0)
    {
        std::cout << "There is one real solution: " << std::endl;
        std::cout << (-b) / (2 * a) << std::endl;
    }
    else if (d < 0)
    {
        std::cout << "There are no real solutions." << std::endl;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }

    return 0;
}