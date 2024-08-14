#include <iostream>

extern int *readNumbers();
extern void hexDigits(int *numbers, int length);

int main() {
  int *numbers = readNumbers();
  hexDigits(numbers, 10);
  return 0;
}