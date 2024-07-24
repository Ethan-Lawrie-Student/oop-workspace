#include <iostream>

int max_element(int array[], int n) {
    int max;

    max = array[0];

    if(!(n<1)) {
       for(int i = 0; i < n; i++) {
            if(array[i] > max) {
                max = array[i];
            }
       }
    } else {
        max = 0;
    }

    return max;
}