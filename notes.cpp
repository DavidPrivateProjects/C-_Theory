#include <iostream>
#include <vector>

// new identifier usually ends with _t.
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
// typedef was replaced with the using keyword
using text_t = std::string;
using number_t = int;

int main(){

    pairlist_t pairlist;
    text_t firstName = "Bro";
    std::cout << firstName << '\n';
    std::cout << age << std::endl;
    return 0;
}