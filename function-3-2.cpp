#include <iostream>

int median_array(int array[], int n) {
  int median;

  if (n > 1) {
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
        if (array[j] < array[j - 1]) {
          int temp = array[j - 1];
          array[j - 1] = array[j];
          array[j] = temp;
        }
      }
        }
    median = array[n / 2];
  } else if (n == 1) {
    median = array[0];
  } else {
    median = 0;
  }

  return median;
}