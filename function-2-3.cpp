#include <math.h>

#include <iostream>

using namespace std;

int is_palindrome(int integers[], int length) {
  int isPal = 1;
  if (length <= 0) {
    return -1;
  } else {
    if (length % 2 == 0) {
      for (int i = 0; i < length / 2; i++) {
        if (integers[length / 2 - 1 - i] != integers[length / 2 + i]) {
          isPal = 0;
        }
      }
    } else if (length % 2 == 1) {
      for (int i = 0; i < length / 2; i++) {
        if (integers[length / 2 - 1 - i] != integers[length / 2 + 1 + i]) {
          isPal = 0;
        }
      }
    }
    if (isPal == 0) {
      return 0;
    } else {
      return 1;
    }
  }
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  if (is_palindrome(integers, length) == 1) {
    return sum_array_elements(integers, length);
  } else {
    return -2;
  }
}
