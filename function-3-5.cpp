#include <iostream>

double sum_even(double array[], int n) {
  int sum;

  sum = 0;

  if (!(n < 1)) {
    for (int i = 0; i < n; i = i + 2) {
      sum = sum + array[i];
    }
  }

  return sum;
}