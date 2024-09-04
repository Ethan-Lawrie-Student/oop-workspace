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
    Airplane Airplane2 =Airplane(43, 20);

    Airplane * Airplane1Ptr = &Airplane1;
    Helicopter * helicopter1Ptr = &helicopter1;
    AirCraft * airCraftPtr = &airCraft;
    Helicopter * helicopter2Ptr = &helicopter2;
    Airplane * Airplane2Ptr = &Airplane2;

    fleet[0] = Airplane1Ptr;
    fleet[1] = helicopter1Ptr;
    fleet[2] = airCraftPtr;
    fleet[3] = helicopter2Ptr;
    fleet[4] = Airplane2Ptr;

}

AirCraft **AirFleet::get_fleet()
{
    return fleet;
}