#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include "Vehicle.h"
#include <iostream>

class ParkingLot {
private:
    Vehicle *vehicles;
    int maxCap;
    int curNum;

public:
    ParkingLot(int max) {
        maxCap = max;
        vehicles = new Vehicle[maxCap];
        curNum = 0;
    }

    int getCount(){
        return curNum;
    }

    void parkVehicle(Vehicle *theVehicle) {
        if(curNum < maxCap) {
            vehicles[curNum] = *theVehicle;
        } else {
            std::cout << "The lot is full" << std::endl;
        }
        

        curNum++;
    }

    void unparkVehicle(int ID) {
        bool hasFoundVehicle = false;
        
        for(int i = 0; i < curNum; i++) {
            
            if(ID == vehicles[i].getID()) {
                
                hasFoundVehicle = true;

                for(int j = i; j < curNum - 1; j++) {
                    vehicles[j] = vehicles[j+1];
                }

                // delete &vehicles[curNum];
                hasFoundVehicle = true;
                curNum = curNum - 1;
            }
        }

        if(hasFoundVehicle == false) {
            std::cout << "Vehicle not in the lot " << std::endl;
        } 
    }

    int countOverstayingVehicles(int maxParkingDuration){
        int overstayAmount = 0;
        
        for(int i = 0; i < curNum; i++) {
            if(vehicles[i].getParkingDuration() > maxParkingDuration) {
                overstayAmount++;
            }
        }
        return overstayAmount;
    }
    
};

#endif
