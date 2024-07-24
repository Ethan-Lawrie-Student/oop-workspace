#include <iostream>

extern int count_evens(int number);


int main() {
    std::cout << "The number of evens: " << count_evens(5) << std::endl;
    return 0;
}