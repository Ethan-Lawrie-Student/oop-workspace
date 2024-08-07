#include "workshop.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    // part1();
    // double x = 31;
    // cout << x << endl;
    // changeValue(&x);
    // cout << x << endl;

    // double array[4] = {1,4,12,3};

    // cout << arrayMax(array, 4) << endl;

    double *reference = dynamicArray(5, 22);

    // cout << arrayMax(reference, 5) << endl;

    // delete[] reference;

    cout << "\n";

    for (int i = 0; i < 5; i++) {
        
        cout << reference[i] << endl;
    }



    return 0;
}