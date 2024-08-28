#ifndef BUS_H
#define BUS_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include "Vehicle.h"

class Bus : public Vehicle {
private:
public:

    Bus(int ID) : Vehicle(ID) {};

    int getParkingDuration() {
        int timeTaken = (time(0) - getTime()) * 0.85;
        return timeTaken;
    }
    
};

#endif
