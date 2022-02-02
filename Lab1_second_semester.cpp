#include <iostream>
#include <algorithm>
#include <ctime>
#include "Class.h"
int main()
{
    srand(time(0));
    MyArray x;
    int choice,n;
    while(true)
    {
        std::cout << "Enter command(1 - generate array, 4,5,7,10,11 - operations with array, 9 - exit):";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "Lenght:";
            std::cin >> n;
            x.fill_array(n);
            break;
        case 5:
            x.f5();
            break;
        case 4:
            x.f4();
            break;
        case 7:
            x.f7();
            break;
        case 9:
            return 0;
        case 10:
            std::cout << "Add:";
            std::cin >> n;
            x.f10(n);
            break;
        case 11:
            std::cout << "Add:";
            std::cin >> n;
            x.f11(n);
            break;
        }
        std::cout << "\n";
    }
}
