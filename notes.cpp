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
    else if(age < 0){
        std::cout << "You haven't been born yet!";
    }
    else if(age >= 100){
        std::cout << "You are too old to enter this site!";
    }
    else {
        std::cout << "You are not allowed to enter!" << std::endl;
    }

    return 0;
}