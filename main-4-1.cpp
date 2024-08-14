#include <iostream>

extern int *readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main() {
  // std::cout << secondSmallestSum(readNumbers(),10) << std::endl;
  int array1[4] = {1, 2, 3, 4};
  secondSmallestSum(array1, 4);
  return 0;
}