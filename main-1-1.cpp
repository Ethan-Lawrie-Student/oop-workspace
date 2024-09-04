#include <iostream>
#include "Appliance.h"

int main(){

    Appliance myAppliance = Appliance(20);


    std::cout << "Appliance on: " << myAppliance.get_isOn() <<std::endl;
    myAppliance.turnOn(); 
    std::cout << "Appliance on: " << myAppliance.get_isOn() <<std::endl;
    std::cout << myAppliance.get_powerRating() << std::endl;
    return 0;
}