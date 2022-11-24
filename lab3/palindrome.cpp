#include <iostream>
#include <string>

int main()
{
    std::string string;

    std::cout << "Insert a string: ";
    std::cin >> string;

    bool flag = true;
    
    for (int i = 0; i < string.length(); i++)
    {
        if (string[i] != string[string.length()-1-i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        std::cout << "\nThis string is palindromic." << std::endl;
    }
    else
    {
        std::cout << "\nThis string is not palindromic." << std::endl;
    }

    return 0;
}