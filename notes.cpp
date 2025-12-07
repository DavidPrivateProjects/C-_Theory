#include <iostream>
#include <cmath>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are allowed to enter!" << std::endl;
    }
    else {
        std::cout << "You are not allowed to enter!" << std::endl;
    }

    return 0;
}