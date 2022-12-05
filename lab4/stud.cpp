#include <iostream>
#include <string>

struct student
{
    std::string name;
    std::string surname;
    int id;
};

int main()
{
    student students[5];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Insert the name of student " << (i+1) << ":";
        std::cin >> students[i].name;

        std::cout << "Insert the surname of student " << (i+1) << ":";
        std::cin >> students[i].surname;

        std::cout << "Insert the id of student " << (i+1) << ":";
        std::cin >> students[i].id;

        std::cout << std::endl;
    }

    student homonymes[5];
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        //check if already present
        bool flag = true;
        for (int j = 0; j < 5 && flag; j++)
        {
            if (!(homonymes[j].surname.empty()) && students[i].surname == homonymes[j].surname)
            {
                flag = false;
            }
        }
        //
        if (flag)
        {
            int count = 0;
            for (int j = 0; j < 5; j++)
            {
                if (students[i].surname == students[j].surname)
                {
                    homonymes[index] = students[j];
                    index++;
                    count++;
                }
            }
            if (count > 0)
            {
                homonymes[index] = students[i];
                index++;
            }
        }
    }

    std::cout << "These students are homonymes:" << std::endl;
    for (int i = 0; i < index; i++)
    {
        std::cout << homonymes[i].name << " " << homonymes[i].surname << " " << homonymes[i].id << std::endl;
    }

    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (students[i].id > students[max].id)
        {
            max = i;
        }
    }

    std::cout << "The student(s) with the max id is(are):" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        if (students[i].id == students[max].id)
        {
            std::cout << students[i].name << " " << students[i].surname << " " << students[i].id << std::endl;
        }
    }

    return 0;
}