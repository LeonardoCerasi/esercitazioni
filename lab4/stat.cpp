#include <iostream>
#include <cmath>

int main()
{
    int numbers[10];

    std::cout << "Insert 10 integers:\n";
    
    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }

    double mean = 0;
    
    for (int i = 0; i < 10; i++)
    {
        mean += (numbers[i] / 10.0);
    }

    std::cout << "\nTheir mean is: " << mean << std::endl;

    double variance = 0;

    for (int i = 0; i < 10; i++)
    {
        variance += (pow((numbers[i] - mean), 2) / 10.0);
    }

    std::cout << "Their variance is: " << variance << std::endl;

    std::cout << "\nThis integers are further than 1 standard deviation from the mean:\n";

    for (int i = 0; i < 10; i++)
    {
        if (abs(numbers[i] - mean) > sqrt(variance))
        {
            std::cout << numbers[i] << std::endl;
        }
    }

    return 0;
}