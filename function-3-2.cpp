#include <iostream>

using namespace std;
int *readNumbers() {
  int *numArray = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numArray[i];
  }

  return numArray;
}

bool equalsArray(int *numbers1, int *numbers2, int length) {
  bool isEqual = true;

  if (length < 1) {
    isEqual = false;
  } else {
    for (int i = 0; i < length; i++) {
      if (*(numbers1 + i) != *(numbers2 + i)) {
        // cout << *(numbers1+i) << ", " << *(numbers2+i) <<endl;
        isEqual = false;
      }
    }
  }

  return isEqual;

  delete[] numbers1;
  delete[] numbers2;
}

int *reverseArray(int *numbers1, int length) {
  int *newArray = new int[length];
  for (int i = 0; i < length; i++) {
    newArray[i] = numbers1[length - i - 1];
  }
  return newArray;
}