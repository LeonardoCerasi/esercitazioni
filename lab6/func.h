#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "complex.h"

int lines(const char *f);

void swap(complex &x, complex &y);

int selection(complex *numbers, int dim);

void sort(complex *numbers, int dim);