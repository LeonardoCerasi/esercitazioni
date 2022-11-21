#include <iostream>

int main()
{
    int a,b;
    float c,d;

    std::cout << "Integer a: ";
    std::cin >> a;
    std::cout << "\nInteger b: ";
    std::cin >> b;
    std::cout <<  "\nFloat c: ";
    std::cin >> c;
    std::cout << "\nFloat d: ";
    std::cin >> d;

    float x = a + c;
    float y = b * d;

    std::cout << "\nFloat x: ";
    std::cout << x << std::endl;
    std::cout << "Float y: ";
    std::cout << y << std::endl;

    std::cout << (a/b) << std::endl;
    std::cout << static_cast<float>(a)/b << std::endl;
    std::cout << (c/d) << std::endl;

    return 0;
}