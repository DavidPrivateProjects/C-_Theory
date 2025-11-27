#include <iostream>
#include <vector>

// new identifier usually ends with _t.
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

int main(){

    pairlist_t pairlist;
    text_t firstName = "Bro";
    std::cout << firstName << '\n';
    return 0;
}