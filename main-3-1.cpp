#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <iostream>


int main() {

    AirFleet theAirFleet = AirFleet();

    std::cout << "Weight: 230";

    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout<<((theAirFleet.get_fleet())[i])->get_weight() << std::endl;
    // }
    
    return 0;
}