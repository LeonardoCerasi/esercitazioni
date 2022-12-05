#include <iostream>
#include <string>

int main()
{
    std::string paragraph[10];

    std::cout << "Insert a paragraph of 10 lines: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        getline(std::cin, paragraph[i]);
    }

    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        if (paragraph[i].length() > paragraph[max].length())
        {
            max = i;
        }
    }

    paragraph[max] = "***" + paragraph[max] + "***";

    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << paragraph[i] << std::endl;
    }

    return 0;
}