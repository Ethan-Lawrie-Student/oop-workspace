#include <iomanip>
#include <iostream>

extern double array_mean(int array[], int n);

int main() {
  int array[2] = {4, 5};

  std::cout << std::setprecision(2);
  std::cout << "The mean is: " << array_mean(array, 2) << std::endl;
  return 0;
}