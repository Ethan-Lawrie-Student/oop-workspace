#include "House.h"
#include "Appliance.h"
#include <iostream>

House::House()
{
    // std::cout << "default caled" << std::endl;
}

House::House(int numAppliances)
{
    // std::cout << "house caled" << std::endl;
    curAppliances = 0;
    this->numAppliances = numAppliances;
    appliances = new Appliance *[numAppliances];
}

bool House::addAppliance(Appliance *appliance)
{
    if(curAppliances < numAppliances) {
        appliances[curAppliances] = appliance;
        curAppliances = curAppliances + 1;
        return true;
    } else {
        return false;
    }
    
}

double House::getTotalPowerConsumption()
{
    double powerConsumption = 0;
    for (int i = 0; i < curAppliances; i++)
    {
        powerConsumption += appliances[i]->getPowerConsumption();
    }
    
    return powerConsumption;
}

House::~House()
{
    delete[] appliances;
}
