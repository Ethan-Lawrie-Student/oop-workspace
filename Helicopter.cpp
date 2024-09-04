#include "AirCraft.h"
#include "Helicopter.h"
#include "Helicopter.h"

Helicopter::Helicopter()
{
}

void Helicopter::fly(int headwind, int minutes)
{
    double fuelPerMinute = 0.2;

    if(headwind > 40) {
        fuelPerMinute = 0.4;
    }

    if(get_weight() > 5670) {
        fuelPerMinute += (get_weight() - 5670) * 0.01;
    }

    double fuelLeft = get_fuel() - (fuelPerMinute * minutes);

    if(fuelLeft >= 20) {
        set_fuel(fuelLeft);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}
