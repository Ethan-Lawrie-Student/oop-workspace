#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
public:

    Motorbike(int ID) : Vehicle(ID) {};

    int getParkingDuration() {
        int timeTaken = (time(0) - getTime()) * 0.85;
        return timeTaken;
    }
    
};

#endif
