#include <iostream>

extern double arrayMin(double* array, int size);

using namespace std;

int main(){
    double array[5] = {1,4,2,-3,5};
    cout << arrayMin(array, 5) << endl;
    return 0;
}