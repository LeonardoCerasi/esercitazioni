#pragma once

#include <iostream>
#include <fstream>
#include <cmath>

struct circle
{
    float x,y,r,c;
};

void set_circles(circle *circles, int dim);

void set_codices(int *codices, int dim);

void print_circle(circle C);

void print_to_file(std::ofstream &output, circle C, float d);

bool exists_code(circle C, int *codices, int dim);

float dist(float x1, float y1, float x2, float y2);