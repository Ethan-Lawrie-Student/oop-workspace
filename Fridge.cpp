#include "Fridge.h"

void Fridge::setVolume(double volume)
{
    this->volume = volume; 
}

double Fridge::getVolume()
{
    return volume;
}

double Fridge::getPowerConsumption()
{
    double powerCon;

    powerCon = get_powerRating() * 24 * (getVolume()/100);

    return powerCon;
}
