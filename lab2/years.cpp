#include <iostream>

int main()
{
    float mercury = 0.2408467;
    float mars = 1.8808158;
    float uranus = 84.016846;
    float neptune = 164.79132;

    float years;

    std::cout << "How old are you? [years] ";
    std::cin >> years;

    std::cout << "On Mercury you are ";
    std::cout << years/mercury;
    std::cout << " years old." << std::endl;

    std::cout << "On Mars you are ";
    std::cout << years/mars;
    std::cout << " years old." << std::endl;

    std::cout << "On Uranus you are ";
    std::cout << years/uranus;
    std::cout << " years old." << std::endl;

    std::cout << "On Neptune you are ";
    std::cout << years/neptune;
    std::cout << " years old." << std::endl;

    return 0;
}