#include <iostream>

using namespace std;

int *readNumbers() {
  int *numArray = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numArray[i];
  }

  return numArray;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    cout << i << " " << numbers[i] << endl;
  }

  delete[] numbers;
}