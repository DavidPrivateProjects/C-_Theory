#include <iostream>
#include <cmath>
#include <ctime>

double square(double length);

int main()
{
    
    double length = 5.0;
    double area = square(length);

    std::cout << "Area: " << area;

    return 0;
}

double square(double length){
    double result = length * length;
    return result;
}
