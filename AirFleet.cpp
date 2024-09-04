#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

#include "AirFleet.h"
#include "AirFleet.h"

AirFleet::AirFleet()
{
    fleet = new AirCraft * [5];

    Airplane Airplane1 = Airplane(20, 10);
    Helicopter helicopter1 = Helicopter(10000, "BlackHawk"); 
    AirCraft airCraft =AirCraft(5000);
    Helicopter helicopter2 = Helicopter(100, "WhiteHawk");
    Airplane Airplane2 =Airplane(15, 20);

    fleet[0] = &Airplane1;
    fleet[1] = &helicopter1;
    fleet[2] = &airCraft;
    fleet[3] = &helicopter2;
    fleet[4] = &Airplane2;

}

AirCraft **AirFleet::get_fleet()
{
    return fleet;
}