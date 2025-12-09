#include <iostream>
#include <cmath>

int main()
{
    
    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = true;
    hungry ? std::cout << "You are hungry" : std::cout << "You are full" << std::endl;

    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}