#include <iostream>

bool is_descending(int array[], int n) {
  bool descended;
  descended = true;

  if (n > 1) {
    for (int i = 1; i < n; i++) {
      //   std::cout << "works" << std::endl;
      if (array[i] > array[i - 1]) {
        descended = false;

        break;
      }
    }

  } else {
    descended = false;
  }

  return descended;
}