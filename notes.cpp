#include <iostream>
#include <cmath>

int main()
{
    // break and continue

    for(int i = 1; i <= 20; i++){
        if (i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

}