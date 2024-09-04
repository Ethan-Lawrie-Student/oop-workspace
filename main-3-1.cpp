#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <iostream>


int main() {

    AirFleet theAirFleet = AirFleet();

    std::cout << theAirFleet.get_fleet() << std::endl;

    return 0;
}