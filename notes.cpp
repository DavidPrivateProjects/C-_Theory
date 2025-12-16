#include <iostream>
#include <cmath>

int main()
{
    
    // do while loop

    int number;

    std::cout << "Enter a positive #: ";
    std::cin >> number;

    while (number < 0){
        std::cout << "Enter a positive #";
        std::cin >> number;
    }

    std::cout << "The # is: " << number;

    return 0;
}