#include <iostream>

int min_element(int array[], int n) {
    int min;

    min = array[0];

    if(!(n<1)) {
       for(int i = 0; i < n; i++) {
            if(array[i] < min) {
                min = array[i];
            }
       }
    } else {
        min = 0;
    }

    return min;
}