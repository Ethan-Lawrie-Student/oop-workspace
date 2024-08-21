#include "Unit.h"
#include <iostream>

int main(){

    Unit myUnit(300000,4,2000);

    std::cout << "Unit Size: " << myUnit.get_Area() << ", Unit Bedroom Number: " << myUnit.get_Num_Bedrooms() << ", Unit Value: " << myUnit.get_Value() << std::endl; 


    return 0;
}