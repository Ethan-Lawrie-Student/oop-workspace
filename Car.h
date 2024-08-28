#ifndef CAR_H
#define CAR_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include "Vehicle.h"

class Car : public Vehicle {
private:
public:

    Car(int ID) : Vehicle(ID) {};

    int getParkingDuration() {
        int timeTaken = (time(0) - getTime()) * 0.9-1;
        return timeTaken;
    }
    
};

#endif
