#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

class Helicopter : public AirCraft
{
private:
    std::string name;
public:
    Helicopter();
    Helicopter(int w, std::string n) : AirCraft(w), name(n){};

    void fly(int headwind, int minutes);

    std::string get_name() {return name;}
    void set_name(std::string newName) {
        name = newName;
    };
    
};

#endif