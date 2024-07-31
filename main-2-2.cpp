#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);


int main() {
    int array[3] = {1,0,1};

    cout << binary_to_int(array, 3)<< endl;

    return 0;
}