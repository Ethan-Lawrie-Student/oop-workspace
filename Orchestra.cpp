// #include "Musician.h"

// Musician::Musician() {
//     instrument = "null";
//     experience = 0;
// }

// Musician::Musician(std::string s_instrument, int s_experience) {
//     instrument = s_instrument;
//     experience = s_experience;
// }

// std::string Musician::get_instrument(){
//     return instrument;
// }

// int Musician::get_experience() {
//     return experience;
// }
#include "Orchestra.h"
#include "Musician.h"
#include <iostream>

Orchestra::Orchestra() {
    cur_size = 0;
    size = 0;
}

Orchestra::Orchestra(int s_size) {
    cur_size = 0;
    size = s_size;
}

int Orchestra::get_current_number_of_members() {
    return cur_size;
}

Musician *Orchestra::get_members(){
    return musicians;
}

bool Orchestra::has_instrument(std::string s_instrument){
    bool containsInst = false; 
    for(int i = 0; i < Orchestra::get_current_number_of_members(); i++) {
        if(musicians[i].get_instrument() == s_instrument) {
            containsInst = true;
        }
    }
    return containsInst;
}

bool Orchestra::add_musician(Musician new_musician){
    if(cur_size < size) {
        
        Musician *new_array = new Musician[size];
        for (int i = 0; i < cur_size; i++)
        {
            new_array[i] = musicians[i];
        }

        new_array[cur_size] = new_musician;

        musicians = new_array;

        cur_size = cur_size + 1;

        return true; 
    } else {
        return false;
    }
}

Orchestra::~Orchestra(){
    delete[] musicians;
}