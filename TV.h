#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance
{
private:
    double screenSize;
public:
    TV() : Appliance() {};
    TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {} ;
    
    void setScreenSize(double volume);
    double getScreenSize();
    double getPowerConsumption();
};




#endif