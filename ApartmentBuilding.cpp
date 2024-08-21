#include "Unit.h"
#include "ApartmentBuilding.h"

ApartmentBuilding::ApartmentBuilding(){
    max_capacity = 10;
    cur_size = 0;
    units = new Unit[10];
}            

ApartmentBuilding::ApartmentBuilding(int capacity){
    max_capacity = capacity;
    cur_size = 0;
    units = new Unit[capacity];
}

int ApartmentBuilding::get_Capacity(){
    return max_capacity;
}

// returns the current number of units in the apartment building
int ApartmentBuilding::get_Current_Number_of_Units(){
    return cur_size;
} 

// returns a dynamic array of the units in the apartment building
Unit * ApartmentBuilding::get_Contents(){
    return units;
}

// returns true and adds unit to the apartment if there is sufficient space
// otherwise returns false
bool ApartmentBuilding::add_Unit(Unit unit){
    bool can_add = false;
    
    if(cur_size < max_capacity) {
        Unit *new_array = new Unit[max_capacity];

        for(int i = 0; i < cur_size; i++) {
            new_array[i] = units[i];
        }

        new_array[cur_size] = unit;

        units = new_array;

        can_add = true;

        cur_size += 1;
    }

    return can_add;
}

// destructor
ApartmentBuilding::~ApartmentBuilding(){
    delete[] units;
}