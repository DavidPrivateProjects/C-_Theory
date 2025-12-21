#include <iostream>
#include <cmath>
#include <ctime>

void happyBirthday(std::string name);

int main()
{
    
    // function = a block of reusable code

    happyBirthday("Bro");
    happyBirthday("Bro");
    happyBirthday("Bro");

    return 0;
}


void happyBirthday(std::string name){
    std::cout << "Happy Birthday to you!" << name << "\n";
}