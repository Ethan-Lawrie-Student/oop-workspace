#include <iostream>

using namespace std;

int *readNumbers() {
  int *numArray = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numArray[i];
  }

  return numArray;
}

int secondSmallestSum(int *numbers, int length) {
  int arrLength = (length * (length + 1)) / 2;

  int sumArray[arrLength];
  int index;

  cout << " ";
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i; j++) {
      int sum = 0;
      for (int k = j; k < j + i + 1; k++) {
        sum += numbers[k];
      }
      sumArray[index] = sum;
      index++;
    }
  }

  for (int i = 0; i < arrLength; i++) {
    cout << sumArray[i] << ", ";
  }

  return 89;
}