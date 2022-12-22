#include "geometry.h"

// Set methods

void set_point(point &P)
{
    std::cout << "Creating a point" << std::endl;
    std::cout << "Insert the x and y coordinates" << std::endl;
    std::cout << "x: ";
    std::cin >> P.x;
    std::cout << "y: ";
    std::cin >> P.y;
    std::cout << "\n"
              << std::endl;
}

void set_circle(circle &C)
{
    std::cout << "Creating a circle" << std::endl;
    std::cout << "Insert the coordinates of the center and the radius" << std::endl;
    std::cout << "C_x: ";
    std::cin >> C.center.x;
    std::cout << "C_y: ";
    std::cin >> C.center.y;
    std::cout << "r: ";
    C.radius = get_positive();
    std::cout << "\n"
              << std::endl;
}

void set_points(point points[], int n)
{
    std::cout << "Creating an array of " << n << " points\n"
              << std::endl;
    for (int i = 0; i <= n; i++)
    {
        set_point(points[i]);
    }
}

// Print methods

void print_point(point P)
{
    std::cout << "(" << P.x << "," << P.y << ")";
}

void print_circle(circle C)
{
    print_point(C.center);
    std::cout << "\nr: " << C.radius << std::endl;
}

void print_points(point points[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        print_point(points[i]);
        std::cout << std::endl;
    }
}

// Other methods

float dist(point P, point Q)
{
    return sqrt(pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}

bool in_circle(point P, circle C)
{
    return (dist(P, C.center) <= C.radius);
}

float max_dist(point points[], int dim, circle C)
{
    float distance = 0;

    for (int i = 0; i < dim && (in_circle(points[i], C)); i++)
    {
        for (int j = 0; j < dim && (in_circle(points[j], C) && dist(points[i], points[j]) > distance); j++)
        {
            distance = dist(points[i], points[j]);
        }
    }

    return distance;
}