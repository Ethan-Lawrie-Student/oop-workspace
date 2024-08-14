#include <iostream>

using namespace std;

int *reverseArray(int *numbers1,int length) {
    int *newArray = new int[length];
    for (int i = 0; i < length; i++) {
        newArray[i] = numbers1[length-i-1];
    }
    return newArray;
}