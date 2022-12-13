#include <iostream>

#include "geometry.h"

int main()
{
    int dim = 10;

    point points[dim];
    set_points(points, dim);

    circle C;
    set_circle(C);

    std::cout << "Of all the points you inserted, the following lie within the circle you inserted:" << std::endl;

    for (int i = 0; i < dim; i++)
    {
        if(in_circle(points[i], C))
        {
            get_point(points[i]);
            std::cout << std::endl;
        }
    }

    float distance = max_dist(points, dim, C);

    std::cout << "\nWithin these points, the maximum distance is: " << distance << std::endl;
    std::cout << "The following points are separated by the maximum distance: " << std::endl;

    for (int i = 0; i < dim - 1; i++)
    {
        for (int j = i + 1; j < dim; j++)
        {
            if (dist(points[i], points[j]) == distance && in_circle(points[i], C) && in_circle(points[j]))
            {
                get_point(points[i]);
                std::cout << " - ";
                get_point(points[j]);
                std::cout << std::endl;
            }
        }
    }

    return 0;
}