#include "circle.h"

// Set methods

void set_circles(circle *circles, int dim)
{
    std::ifstream input;
    input.open("cerchi.in");

    for (int i = 0; i < dim; i++)
    {
        input >> circles[i].x;
        input >> circles[i].y;
        input >> circles[i].r;
        input >> circles[i].c;
    }

    input.close();
}

void set_codices(int *codices, int dim)
{
    std::ifstream input;
    input.open("codici.in");

    for (int i = 0; i < dim; i++)
    {
        input >> codices[i];
    }

    input.close();
}

// Print methods

void print_circle(circle C)
{
    std::cout << "C(" << C.x << "," << C.y << ")\t" << C.r << "\t" << C.c << std::endl;
}

void print_to_file(std::ofstream &output, circle C, float d)
{
    output << "C(" << C.x << "," << C.y << ")\t" << C.r << "\t" << C.c << "\t" << d << std::endl;
}

// Other methods

bool exists_code(circle C, int *codices, int dim)
{
    bool flag = false;

    for (int i = 0; i < dim; i++)
    {
        if (codices[i] == C.c)
        {
            flag = true;
        }
    }

    return flag;
}

float dist(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}