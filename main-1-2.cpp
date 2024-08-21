#include "Unit.h"
#include "ApartmentBuilding.h"
#include <iostream>

int main(){

    ApartmentBuilding s(3);

    Unit Unit1(300000,4,2000);
    Unit Unit2(300000,4,2000);
    Unit Unit3(300000,4,2000);
    Unit Unit4(300000,4,2000);

    std::cout << "Can add: " << s.add_Unit(Unit1) << ", " << s.add_Unit(Unit2) << ", " << s.add_Unit(Unit3) << ", " << s.add_Unit(Unit4) << std::endl;
    

    return 0;
}