#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include <string>

class AirFleet
{
private:

    AirCraft **fleet;
    
public:
    
    AirFleet();
    AirCraft ** get_fleet();
    
};

#endif