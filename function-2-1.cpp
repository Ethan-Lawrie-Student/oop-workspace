#include <iostream>
// #include <math.h>

using namespace std;

void print_binary_str(std::string decimal_number) {
  int current = stoi(decimal_number);
  // string str[9];
  // int current = input;
  int array[30];

  int index = 0;

  while (current > 0) {
    array[index] = current % 2;

    current = current / 2;

    index++;
  }
  for (int i = index - 1; i >= 0; i--) {
    cout << array[i];
  }

  cout << "\n";

  // int outputNum = 0;

  // for (int i = 0; i< index; i++) {
  //     outputNum = outputNum * 10 + array[i];
  // }

  // cout << "\n" << outputNum << endl;
}