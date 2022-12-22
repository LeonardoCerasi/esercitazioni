#pragma once

#include <iostream>
#include <cmath>

#include "math.h"

struct point
{
    float x,y;
};

struct circle
{
    point center;
    float radius;
};

void set_point(point &P);

void set_circle(circle &C);

void set_points(point points[], int n);

void print_point(point P);

void print_circle(circle C);

void print_points(point points[], int dim);

float dist(point P, point Q);

bool in_circle(point P, circle C);

float max_dist(point points[], int dim, circle C);