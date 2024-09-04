#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>


int main() {

    Helicopter theHelicopter(5680, "Apache 2000");

    theHelicopter.fly(45, 30);

    std::cout << theHelicopter.get_fuel() << std::endl;

    return 0;
}