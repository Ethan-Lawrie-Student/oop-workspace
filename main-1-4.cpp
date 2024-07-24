#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);


int main() {
    int array[5] = {4,1,6,7,8};
    int array2[5] = {3,5,2,1,2};
    std::cout << "The sum of both arrays is: " << sum_two_arrays(array, array2, 5) << std::endl;
    return 0;
}