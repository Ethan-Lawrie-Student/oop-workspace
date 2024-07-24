#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
  int array[5] = {4, 6, 6, 7, 8};

  if (is_ascending(array, 5) == 0) {
    std::cout << "Is in ascending order?: false" << std::endl;
  } else {
    std::cout << "Is in ascending order?: true" << std::endl;
  }

  return 0;
}