#include <iostream>

int main(){
    int age = 21;
    int year = 2023;
    double days = 7.5;
    double gpa = 2.5;
    double temperature = 25.1;
    double price = 10.99;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool student_2 = false;

    // object that represents a sequence of text
    std::string name = "David";
    std::cout << name;
    std::string address = "123 Fake St.";


    std::cout << initial;
    std::cout << "Hello " << name << std::endl;

    return 0;
}