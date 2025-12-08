#include <iostream>
#include <cmath>

int main()
{
    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1: 
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        default:
            std::cout << "I don't know what month it is!";
            break;
    }

    return 0;
}