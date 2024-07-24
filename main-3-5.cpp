#include <iostream>

extern double sum_even(double array[], int n);

int main() {
  double array[5] = {4, 5, 6, 7, 8};
  std::cout << "The sum of the even indexes is: " << sum_even(array, 5)
            << std::endl;
  return 0;
}