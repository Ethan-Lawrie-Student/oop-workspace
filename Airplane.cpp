#include "AirCraft.h"
#include "Airplane.h"

#include "Airplane.h"
Airplane::Airplane()
{
}


void Airplane::reducePassengers(int x)
{
    numPassengers = numPassengers - x;
    if(numPassengers < 0) {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes)
{
    double fuelPerMinute = 0.3;

    if(headwind > 60) {
        fuelPerMinute = 0.5;
    }

    fuelPerMinute += 0.001 * numPassengers;

    double fuelLeft = get_fuel() - (fuelPerMinute * minutes);

    if(fuelLeft >= 20) {
        set_fuel(fuelLeft);
        set_numberOfFlights(get_numberOfFlights() + 1);
    }
}

int Airplane::get_numPassengers()
{
    return numPassengers;
}
