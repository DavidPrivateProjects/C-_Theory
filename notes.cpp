#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    
    srand(time(0));
    int randNum = rand() % 2 + 1;

    switch(randNum){
        case 1: std::cout << "You win a bumper sticker!";
                break;
        case 2: std::cout << "You win NOTHING!";
                break;

    }

    return 0;
}