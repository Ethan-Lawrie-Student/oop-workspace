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
    Vehicle() {
        timeOfEntry = time(0);
        this->ID = 0;
    }

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

    virtual int getParkingDuration(){ 
        int timeTaken = (time(0) - getTime());
        return timeTaken;
    };
    
    
};

#endif
