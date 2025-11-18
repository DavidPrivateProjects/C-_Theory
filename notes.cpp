#include <iostream>
#include <cmath>

using namespace std;
// work on this tomorrow!

int main() {
    int file_size = 100; // Snake Case?
    int FileSize; // Pascal Case
    int fileSize; // Camel Case
    double sales = 9.99;
    file_size = 100;
    std::cout << "Hello, World!" << std::endl;
    std::cout << file_size << std::endl;

    // declare a constant
    const double pi = 3.14;

    // mathematical expressions
    int x = 10;
    int y = 3;
    int z = x + y;
    std::cout << z << std::endl;
    double z = double(x) / y;
    int p = x % y;
    x++;
    x--;
    int k = x++; //k wil be x then increment
    int m = ++x; //first increment then assign
    return 0;
}

int print_x() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl
        << "y = " << y;
    return 0;
}

int swap(int a, int b) {
    int holder = a;
    a = b;
    b = holder;
    return 0;
}

int math_exp() {
    double x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    std::cout << z << std::endl;
    return 0;
}

int calc_tax() {
    const double sales = 95000;
    const double state_tax = 0.04;
    double county_tax = 0.02;
    double net_income = sales / (state_tax + county_tax);
    std::cout << "The full income is: " << net_income << std::endl;
}

int train_input() {
    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}


// Start exploration of cmath library

int circle_area() {
    cout << "Enter radius: ";
    double radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << area;
    return 0;
}

// Fundamental Data Types in C++
// Build-in types
// Numbers
// Boolean values
// Characters and strings

// C++ is a statically typed language
/*
int -> 4 Bytes -> -2B to 2B
short -> 2 Bytes -> -32000 to +32000
long -> 4 Bytes -> same as int
long long -> 8 Bytes

double -> 8 Bytes
float -> 4 Bytes
long double -> 8 Bytes
bool -> 1 Bytes true / false
char -> 1 Byte 
*/

int data_types_func() {
    int number {1};
    cout << number;
    return 0;
}

int binary_func() {
    // number 255 as binary
    unsigned int number = 0b11111111;
    // number as hexadecimal number
    unsigned int number = 0Xff;
    return 0;
}

