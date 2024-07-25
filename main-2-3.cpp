#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  two_five_nine(array, 5);
  return 0;
}