#include "Reverse.h"
#include <iostream>
#include <string>

Reverse::Reverse() {}

int Reverse::reverseDigit(int digit) {
    if (digit < 0) {
        return -1;
    }
    int reversed = 0;
    while (digit > 0) {
        reversed = reversed * 10 + digit % 10;
        digit /= 10;
    }
    return reversed;
}

std::string Reverse::reverseString(std::string str) {
    std::string reversed = "";
    if (str == "") {
        return "ERROR";
    }
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}