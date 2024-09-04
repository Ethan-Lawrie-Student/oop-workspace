#include "AirCraft.h"
#include "Airplane.h"
#include <iostream>


int main() {

    Airplane theAirplane(5680, 200);

    std::cout << theAirplane.get_fuel() << std::endl;

    theAirplane.fly(45, 30);

    std::cout << theAirplane.get_fuel() << std::endl;

    return 0;
}