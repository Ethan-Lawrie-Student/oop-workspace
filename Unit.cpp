#include "Unit.h"

// a constructor that takes: the value, number of bedrooms, and the size
Unit::Unit(int unit_val, int num_beds, double unit_size){
    if(unit_val < 0) {
        unit_val = 0;
    }
    if(num_beds < 0) {
        num_beds = 0;
    }
    if(unit_size < 0) {
        unit_size = 0;
    }



    market_value = unit_val;
    num_bedrooms = num_beds;
    area = unit_size;
}   

int Unit::get_Num_Bedrooms(){
    return num_bedrooms;
}

int Unit::get_Value(){
    return market_value;
}

double Unit::get_Area(){
    return area;
}