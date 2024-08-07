#include <iostream>

extern void modifyArray(double* array, int size, double value);

using namespace std;

int main(){
    double array[5] = {1,4,2,-3,5};
    modifyArray(array, 5, 1.5);

    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}