#include <iostream>

extern int median_array(int array[], int n);

int main() {
  int array[5] = {1, 10, 20, 7, 3};
  std::cout << "The min element is: " << median_array(array, 5) << std::endl;
  return 0;
}