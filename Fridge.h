#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance
{
private:
    double volume;
public:
    Fridge() : Appliance() {};
    Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {} ;
    
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();
};




#endif