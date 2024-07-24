#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
  int array[4] = {2, 3, 3, 2};

  if (is_fanarray(array, 4) == 0) {
    std::cout << "Is a fan array?: false" << std::endl;
  } else {
    std::cout << "Is a fan array?: true" << std::endl;
  }
  return 0;
}