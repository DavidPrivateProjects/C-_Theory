#include <iostream>
#include <cmath>

int main()
{
    
    // do while loop

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number;

    return 0;
}