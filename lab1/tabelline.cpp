#include <iostream>

int main()
{
    int righe = 12;
    int colonne = 12;

    for (int i = 1; i <= colonne; i++)
    {
        for (int j = 1; j <= righe; j++)
        {
            std::cout << (j*i) << "\t";
        }

        std::cout << std::endl;
    }

    return 0;
}