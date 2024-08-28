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

    char countVeh;

    std::cout << "Count overstaying vehicles? (Y/N): ";
    std::cin >> countVeh;

    if(countVeh = 'Y') {
        std::cout << "Amount of overstaying vehicles: " << parking.countOverstayingVehicles(10) << std::endl;
    }


    return 0;
}