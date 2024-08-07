#include <iostream>

extern double* duplicateArray(double* array, int size);

using namespace std;

int main(){
    double array[5] = {1,4,2,-3,5};
    double *arrRef = duplicateArray(array, 5);

    for (int i = 0; i < 5; i++) {
        cout << arrRef[i] << " ";
    }
    cout << "\n";

    return 0;
}