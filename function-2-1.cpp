#include <iostream>

using namespace std;

int *readNumbers() {
  int *numArray = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numArray[i];
  }

  return numArray;
}

void hexDigits(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    string hex;
    if (numbers[i] <= 9) {
      hex = std::to_string(numbers[i]);
    } else {
      switch (numbers[i]) {
        case 10:
          hex = "A";
          break;
        case 11:
          hex = "B";
          break;
        case 12:
          hex = "C";
          break;
        case 13:
          hex = "D";
          break;
        case 14:
          hex = "E";
          break;
        case 15:
          hex = "F";
          break;
      }
    }
    cout << i << " " << numbers[i] << " " << hex << endl;
  }

  delete[] numbers;
}