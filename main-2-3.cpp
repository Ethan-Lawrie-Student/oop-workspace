#include <iostream>

extern void two_five_nine(int array[], int n);


int main() {
    int array[5] = {4,5,6,7,8};
    // std::cout << "The max element is: " << max_element(array, 5) << std::endl;
    two_five_nine(array, 5);
    return 0;
}