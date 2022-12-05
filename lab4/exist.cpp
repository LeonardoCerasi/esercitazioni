#include <iostream>

int main()
{
    int numbers[10];

    std::cout << "Insert 10 integers:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }

    int n;

    std::cout << "Insert an integer: ";
    std::cin >> n;
    std::cout << std::endl;

    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == n)
        {
            count++;
        }
    }

    if (count > 0)
    {
        std::cout << n << " was inserted " << count << " times." << std::endl;
    }
    else
    {
        std::cout << n << " wasn't inserted." << std::endl;
    }

    return 0;
}