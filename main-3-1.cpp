#include <iostream>

extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main() {
    int array1[5] = {1,2,3,4,5}; 
    int array2[5] = {1,2,3,4,5};
    std::cout << equalsArray(array1,array2,5) << std::endl;
    return 0;
}