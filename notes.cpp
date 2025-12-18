#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    // pseudo-random 

    srand(time(NULL)); // use current calender time as seed

    int num1 = (rand() % 20) + 1;
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 20) + 1;

    std::cout << num1;
    std::cout << num2;
    std::cout << num3;




    return 0;
}