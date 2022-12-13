#include <iostream>
#include <fstream>
#include <string>

#include "complex.h"
#include "func.h"

int main()
{
    int dim = lines("input.txt");

    if (dim == -1)
    {
        return -1;
    }

    std::ifstream input;
    input.open("input.txt");

    std::ofstream output;
    output.open("output.txt");

    complex* numbers = new complex[dim];

    for (int i = 0; i < dim; i++)
    {
        input >> numbers[i].real;
        input >> numbers[i].imag;
    }

    output << "Conjugate of numbers with modulus greater than 3:\n";

    for (int i = 0; i < dim; i++)
    {
        if (modulus(numbers[i]) > 3)
        {
            print_to_file(output, numbers[i]);

            output << "\n";
        }
    }

    output << "\n\nSum of all numbers with negative real part:\n";

    complex z;

    for (int i = 0; i < dim; i++)
    {
        if (numbers[i].real < 0)
        {
            z = sum(numbers[i], z);
        }
    }

    print_to_file(output, z);

    output << "\n\nProduct of first three numbers:\n";

    complex w = product(product(numbers[0], numbers[1]), numbers[2]);

    print_to_file(output, w);

    int select = selection(numbers, dim);

    sort(numbers, select + 1);

    output << "\n\nFirst three numbers after selecting and sorting:\n";

    for (int i = 0; i < 3; i++)
    {
        print_to_file(output, numbers[i]);

        output << "\n";
    }

    output << "\n\nLast three numbers after selecting and sorting:\n";

    for (int i = 0; i < 3; i++)
    {
        print_to_file(output, numbers[select - i]);

        output << "\n";
    }

    input.close();
    output.close();

    return 0;
}