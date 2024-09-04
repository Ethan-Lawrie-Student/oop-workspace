#include "TV.h"

void TV::setScreenSize(double screenSize)
{
    this->screenSize = screenSize; 
}

double TV::getScreenSize()
{
    return screenSize;
}

double TV::getPowerConsumption()
{
    double powerCon;

    powerCon = get_powerRating() * (getScreenSize()/10);

    return powerCon;
}
