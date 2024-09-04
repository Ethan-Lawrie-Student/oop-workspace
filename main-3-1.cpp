#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <iostream>


int main() {

    AirFleet theAirFleet = AirFleet();

    std::cout << theAirFleet.getFleet() << std::endl;

    return 0;
}