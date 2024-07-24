#include <iostream>

bool is_ascending(int array[], int n) {
  bool ascended;
  ascended = true;

  if (n > 1) {
    for (int i = 1; i < n; i++) {
      //   std::cout << "works" << std::endl;
      if (array[i] < array[i - 1]) {
        ascended = false;

        break;
      }
    }

  } else {
    ascended = false;
  }

  return ascended;
}