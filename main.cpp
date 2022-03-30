#include "Reverse.h"
#include <iostream>
#include <string>

int main() {
    Reverse reverse;
    std::cout << reverse.reverseDigit(123) << std::endl;
    std::cout << reverse.reverseString("Hello World") << std::endl;
    return 0;
}