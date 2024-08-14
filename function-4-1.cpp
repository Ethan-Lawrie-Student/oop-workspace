#include <iostream>

using namespace std;

int *readNumbers() {
  int *numArray = new int[10];
  for (int i = 0; i < 10; i++) {
    cin >> numArray[i];
  }

  return numArray;
}

int *bubbleSort(int *sumArray, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 1; j < length; j++) {
      if (sumArray[j] < sumArray[j - 1]) {
        int temp = sumArray[j - 1];
        sumArray[j - 1] = sumArray[j];
        sumArray[j] = temp;
      }
    }
  }

  return sumArray;
}

int secondSmallestSum(int *numbers, int length) {
  int arrLength = (length * (length + 1)) / 2;

  int *sumArray = new int[arrLength];
  int index = 0;

  // cout << " ";
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
  // cout << " " << endl;

  int *newArray = bubbleSort(sumArray, arrLength);

  // for (int i = 0; i < arrLength; i++) {
  //   cout << newArray[i] << ", ";
  // }
  return newArray[1];

  delete[] newArray;
}
