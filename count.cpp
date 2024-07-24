#include <iostream>
#include <cmath>

int count(int array[], int n) {
    int evenNum;

    evenNum = 0;

    for (int i = 0; i < n; i++) {
        if(remainder(array[i],2) == 0) {
            evenNum++;
        }
    }

    return evenNum;
}