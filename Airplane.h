#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"
#include <string>

class Airplane : public AirCraft
{
private:
    int numPassengers;               // number of passengers on the Airplane

public:
    Airplane();                       
    Airplane(int w, int p) : AirCraft(w), numPassengers(p){};           // Create Airplane with weight w and passengers p

    
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);  
    
};

#endif