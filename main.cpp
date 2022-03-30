#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>

int main() {
    Reverse reverse;
    std::cout << reverse.reverseDigit(123) << std::endl;
    std::cout << reverse.reverseString("Hello World") << std::endl;
    
    Truckloads truckloads;
    std::cout << truckloads.numTrucks(10, 4) << std::endl;
    std::cout << truckloads.numTrucks(15, 1) << std::endl;
    std::cout << truckloads.numTrucks(1024, 5) << std::endl;


    return 0;
}