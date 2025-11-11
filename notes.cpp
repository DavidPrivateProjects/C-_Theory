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

    return 0;
}


int swap(int a, int b) {
    int holder = a;
    a = b;
    b = holder;
    return 0;
}

