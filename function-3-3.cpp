#include <iostream>

extern int num_count(int array[], int n, int number);

double weighted_average(int array[], int n) {
  double average;

  average = 0;

  if (!(n < 1)) {
    for (int i = 0; i < n; i++) {
      average =
          average + ((num_count(array, n, array[i]) * array[i]) / (1.0 * n));
    }
  }

  return average;
}