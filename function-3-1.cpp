#include <cmath>
#include <iostream>

bool is_fanarray(int array[], int n) {
  bool isFan;

  isFan = true;
  bool isEven, isEqual;

  isEven = true;
  isEqual = true;

  if (n > 1) {
    if (remainder(n, 2) == 0) {
      if (n == 2) {
        if (array[1] == array[2]) {
          isFan = true;
        }
      } else {
        for (int i = n / 2 - 2; i >= 0; i--) {
          if (array[i] > array[i + 1]) {
            isFan = false;
          }
          if (array[i] != array[n - 1 - i]) {
            isEqual = false;
            break;
          }
        }
        if (isEqual == false) {
          isFan = false;
        }
      }
    } else {
      for (int i = n / 2 - 1; i >= 0; i--) {
        if (array[i] > array[i + 1]) {
          isFan = false;
        }
        if (array[i] != array[n - 1 - i]) {
          isEqual = false;
          break;
        }
      }

      if (isEqual == false) {
        isFan = false;
      }
    }
  } else {
    isFan = false;
  }

  return isFan;
}