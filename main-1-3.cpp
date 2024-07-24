#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[6] = {4,5,6,7,8,5};
    std::cout << "The number " << 5 << " appears this many times: " << num_count(array, 6, 5) << std::endl;
    return 0;
}