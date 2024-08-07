#include <stdio.h>
#include <iostream>

void part1() {
    double value = 10;
    char character = 'a';
    double *valueRef;
    char *charRef;

    valueRef = &value;
    charRef = &character;

    // std::cout << value << ", " << valueRef << std::endl;
    printf("value: %f, valueRef: %p\n",value, valueRef);
    printf("char: %c, charRef: %p\n",character, charRef);
}

void changeValue(double* doubleVal) {
    *doubleVal = 42; 
}

void printArray(double* array, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    cout << "\n";
}

double arrayMax(double* array, int size) {
    double max = array[0];

    for(int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

double* dynamicArray(int N, double M) {
    double *array = new double[N];
    for (int i = 0; i<N; i++) {
        
        array[i] = M;
        // std::cout << array[i] << std::endl;
    } 

    return array;  
}
