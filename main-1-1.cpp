#include "Motorbike.h"
#include "Bus.h"
#include "Vehicle.h"
#include "Car.h"

#include <iostream>

int main(){

    int vehicleAmount;

    std::cout << "How many vehicles are you going to park: ";
    std::cin >> vehicleAmount;

    Vehicle *vehicles = new Vehicle[vehicleAmount];

    for (int i = 0; i < vehicleAmount; i++) {
        int 
        std::cout << "ID of Vehicle number " << vehicleAmount << ": ";
        std::cin >> vehicleAmount;
    }

    // std::cout << "This much vehicles: " << vehicleAmount << std::endl;

    return 0;
}