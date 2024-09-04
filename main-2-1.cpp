#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main(){

    Fridge myFridge = Fridge(100, 20);
    
    std::cout << myFridge.getPowerConsumption() << std::endl;
    return 0;
}