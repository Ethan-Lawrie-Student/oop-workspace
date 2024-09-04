#include "AirCraft.h"
#include <iostream>


int main() {

    AirCraft myAircraft(2000);

    myAircraft.fly(5, 30);

    std::cout << myAircraft.get_numberOfFlights() << std::endl;

    return 0;
}