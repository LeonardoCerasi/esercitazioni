#pragma once

#include <iostream>
#include <fstream>
#include <cmath>

struct complex
{
    float real = 0;
    float imag = 0;
};

void set_complex(complex &z);

void print_complex(complex z);

void print_to_file(std::ofstream &output, complex z);

complex sum(complex z, complex w);

complex product(complex z, complex w);

complex conjugate(complex z);

float modulus(complex z);