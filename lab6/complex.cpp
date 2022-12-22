#include "complex.h"

// Set methods

void set_complex(complex &z)
{
    std::cout << "Insert real and imaginary part of a complex number" << std::endl;
    std::cout << "Real: ";
    std::cin >> z.real;
    std::cout << "Imaginary: ";
    std::cin >> z.imag;
    std::cout << "\n"
              << std::endl;
}

// Print methods

void print_complex(complex z)
{
    std::cout << z.real;
    if (z.imag < 0)
    {
        std::cout << z.imag << "i";
    }
    else if (z.imag > 0)
    {
        std::cout << "+" << z.imag << "i";
    }
}

void print_to_file(std::ofstream &output, complex z)
{
    output << z.real << " " << z.imag;
}

// Mathematical methods

complex sum(complex z, complex w)
{
    complex sum;

    sum.real = z.real + w.real;
    sum.imag = z.imag + w.imag;

    return sum;
}

complex product(complex z, complex w)
{
    complex product;

    product.real = (z.real * w.real) - (z.imag * w.imag);
    product.imag = (z.real * w.imag) + (z.imag * w.real);

    return product;
}

complex conjugate(complex z)
{
    complex conjugate;

    conjugate.real = z.real;
    conjugate.imag = -z.imag;

    return conjugate;
}

float modulus(complex z)
{
    return sqrt(pow(z.real, 2) + pow(z.imag, 2));
}