#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
    int sum;

    sum = 0;

    if(!(n<1)) {
        

        for (int i = 0; i < n; i++) {
            sum = sum + array[i];
        }

        for (int i = 0; i < n; i++) {
            sum = sum + secondarray[i];
        }
    }

    return sum;
}