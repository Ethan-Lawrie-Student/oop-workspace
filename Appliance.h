#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
private:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();

    int get_powerRating() {return powerRating;}
    void set_powerRating(int thePowerRating);
    int get_isOn() {return isOn;}
};




#endif