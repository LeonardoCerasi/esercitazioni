#include <iostream>

int main()
{
    double voto;
    double cfu;

    double somma_voti_pesati = 0;
    double somma_cfu = 0;

    double voto_minimo = 18;
    double cfu_minimi = 2;

    do
    {
        std::cout << "Voto: ";
        std::cin >> voto;
        std::cout << "CFU: ";
        std::cin >> cfu;

        if (voto >= voto_minimo && cfu >= cfu_minimi)
        {
            somma_voti_pesati += voto * cfu;
            somma_cfu += cfu;
        }
    }
    while (voto != 0);

    if (somma_cfu > 0)
    {
        std::cout << "La media pesata dei tuoi voti è: ";
        std::cout << (somma_voti_pesati / somma_cfu) << std::endl;
    }

    return 0;
}