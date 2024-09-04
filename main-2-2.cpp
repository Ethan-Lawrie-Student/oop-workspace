#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main(){

    TV myTV = TV(100, 20);
    
    std::cout << myTV.getPowerConsumption() << std::endl;
    return 0;
}