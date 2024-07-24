#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
  int array[5] = {8, 6, 4, 3, 2};

  if (is_descending(array, 5) == 0) {
    std::cout << "Is in descending order?: false" << std::endl;
  } else {
    std::cout << "Is in descending order?: true" << std::endl;
  }

  return 0;
}