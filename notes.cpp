#include <iostream>

int main(){

    // determines the size in bytes of an object
    double gpa = 2.5;
    std::string name = "Bro Code";
    char grade = "F";

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";

    return 0;

}

