#include <iostream>
#include <math.h>

using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits) {

    int integer = 0;

    for(int i = 0; i < number_of_digits; i++) {
        integer = integer + binary_digits[i] * pow(2,(number_of_digits - i -1));  
    }

    return integer;

}