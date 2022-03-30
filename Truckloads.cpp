#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads() {}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    int numTrucks = 0;
    while (numCrates >= loadSize) {
        numCrates -= loadSize;
        numTrucks++;
    }
    return numTrucks;
}
