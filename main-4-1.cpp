#include <iostream>

using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main() {
  // std::cout << secondSmallestSum(readNumbers(),10) << std::endl;
  //   int array1[4] = {1, 2, 3, 4};

  int *array1 = readNumbers();

  cout << secondSmallestSum(array1, 10) << endl;

  return 0;
}