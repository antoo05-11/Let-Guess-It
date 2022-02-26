#include <iostream>
void getValidYesOrNo(std::string s) {
    do {
        getline(std::cin, s);
    }
    while (s !="y" or s != "n");
}