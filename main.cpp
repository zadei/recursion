#include "Reverse.h"
#include "Truckloads.h"
#include <iostream>
#include <string>

int main() {
    //Testing for Reverse.cpp
    Reverse reverse;
    std::cout << reverse.reverseDigit(123) << std::endl;
    std::cout << reverse.reverseString("Hello World") << std::endl;
    
    //Testing for Truckloads.cpp
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(14, 3) << std::endl;
    std::cout << truckloads.numTrucks(15, 1) << std::endl;
    std::cout << truckloads.numTrucks(1024, 5) << std::endl;
}