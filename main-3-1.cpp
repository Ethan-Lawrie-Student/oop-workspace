#include <iostream>
#include "Appliance.h"
#include "House.h"
#include "Fridge.h"
#include "TV.h"


int main(){

    // std::cout << "test1" << std::endl;

    House myHouse(2); 

    // std::cout << "test2" << std::endl;
    
    Fridge fridge1 = Fridge(10,100);
    Fridge fridge2 = Fridge(20,200);
    TV tv = TV(20,60);
    TV tv2 = TV(20,60);

    // std::cout << "test3" << std::endl;

    std::cout << myHouse.addAppliance(&tv) << std::endl;
    std::cout << myHouse.addAppliance(&fridge1) << std::endl;
    myHouse.addAppliance(&fridge2);
    std::cout << myHouse.addAppliance(&tv2) << std::endl;

    std::cout << myHouse.getTotalPowerConsumption() << std::endl;
    return 0;
}