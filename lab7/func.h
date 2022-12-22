#pragma once

#include <fstream>
#include <string>

#include "circle.h"

int lines(const char *f);

void swap(circle &C1, circle &C2);

int select(circle *circles, int dim_circles, int *codices, int dim_codices);