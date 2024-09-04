#include "Appliance.h"

Appliance::Appliance()
{
    isOn = false;
    powerRating = 0;
}

Appliance::Appliance(int powerRating)
{
    this->powerRating = powerRating;
    isOn = false;
}

void Appliance::set_powerRating(int thePowerRating){
    powerRating = thePowerRating;
}

void Appliance::turnOn()
{
    isOn = true;
}

void Appliance::turnOff()
{
    isOn = false;
}

double Appliance::getPowerConsumption()
{
    return 0.0;
}
