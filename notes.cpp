#include <iostream>

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
