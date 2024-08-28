#include "Motorbike.h"
#include "Bus.h"
#include "Vehicle.h"
#include "Car.h"
#include "ParkingLot.h"

#include <iostream>

int main(){

    int vehicleAmount = 3;

    ParkingLot parking = ParkingLot(vehicleAmount);

    

    for (int i = 0; i < vehicleAmount; i++) {
        int vehicleID;
        std::cout << "ID of Vehicle number " << i + 1<< ": ";
        std::cin >> vehicleID;

        std::string vehicleType;
        std::cout << "Type of vehicle: ";
        std::cin >> vehicleType;

        if(vehicleType == "Car") {
            Car car = Car(vehicleID);
            parking.parkVehicle(&car);
        } else if (vehicleType == "Bus") {
            Bus bus = Bus(vehicleID);
            parking.parkVehicle(&bus);
        } else {
            Motorbike motorbike = Motorbike(vehicleID);
            parking.parkVehicle(&motorbike);
        }
        
    }

    int IDRemove;

    std::cout << "ID of vehicle to remove: ";
    std::cin >> IDRemove;

    parking.unparkVehicle(IDRemove);

    // for (int i = 0; i < vehicleAmount; i++) {
    //     std::cout << "Vehicle ID: " << vehicles[i].getID() << ", Time Parked: " << vehicles[i].getParkingDuration() << "s " << std::endl;
        
    // }

    return 0;
}