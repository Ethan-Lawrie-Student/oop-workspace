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
        int vehicleID;
        std::cout << "ID of Vehicle number " << i + 1<< ": ";
        std::cin >> vehicleID;

        std::string vehicleType;
        std::cout << "Type of vehicle: ";
        std::cin >> vehicleType;

        if(vehicleType == "Car") {
            Car car = Car(vehicleID);
            vehicles[i] = car;

        } else if (vehicleType == "Bus") {
            Bus bus = Bus(vehicleID);
            vehicles[i] = bus;
        } else {
            Motorbike motorbike = Motorbike(vehicleID);
            vehicles[i] = motorbike;
        }
        
    }


    for (int i = 0; i < vehicleAmount; i++) {
        std::cout << "Vehicle ID: " << vehicles[i].getID() << ", Time Parked: " << vehicles[i].getParkingDuration() << "s " << std::endl;
        
    }

    return 0;
}