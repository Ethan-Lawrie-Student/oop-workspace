#ifndef VEHICLE_H
#define VEHICLE_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>

class Vehicle {
private:
    time_t timeOfEntry;
    int ID;

public:

    Vehicle(int ID) {
        timeOfEntry = time(0);
        this->ID = ID;
    }

    int getID(){
        return ID;
    }

    time_t getTime() {
        return timeOfEntry;
    }

    
    
};

#endif
