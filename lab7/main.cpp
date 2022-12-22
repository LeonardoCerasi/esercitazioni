#include <iostream>
#include <fstream>

#include "circle.h"
#include "func.h"

int main()
{
    std::ofstream output;
    output.open("output.txt");

    int dim_circles = lines("cerchi.in");
    int dim_codices = lines("codici.in");

    circle *circles = new circle[dim_circles];
    int *codices = new int[dim_codices];

    set_circles(circles, dim_circles);
    set_codices(codices, dim_codices);

    std::cout << "\nCodices:" << std::endl;

    for (int i = 0; i < dim_codices; i++)
    {
        std::cout << codices[i] << std::endl;
    }
    std::cout << std::endl;

    int index = select(circles, dim_circles, codices, dim_codices);

    std::cout << (dim_circles - index) << " circles were eliminated and " << (index + 1) << " circles remain.\n"
              << std::endl;

    for (int i = 0; i < dim_codices; i++)
    {
        int number = 0;
        float x, y = 0;

        std::cout << codices[i] << ": ";

        for (int j = 0; j <= index; j++)
        {
            if (circles[j].c == codices[i])
            {
                number++;
                x += circles[j].x;
                y += circles[j].y;
            }
        }

        float bar_x = x / number;
        float bar_y = y / number;

        std::cout << number << std::endl;
        std::cout << "B(" << bar_x << "," << bar_y << ")\n"
                  << std::endl;

        output << codices[i] << ": " << number << std::endl
               << std::endl;

        float d;

        for (int j = 0; j <= index; j++)
        {
            if (circles[j].c == codices[i])
            {
                d = dist(circles[j].x, circles[j].y, bar_x, bar_y);

                print_to_file(output, circles[j], d);
            }
        }

        output << std::endl;
    }

    output.close();

    return 0;
}