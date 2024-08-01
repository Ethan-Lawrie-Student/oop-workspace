#include <iostream>
#include <string>

using namespace std;

string shift_right(string input) {
  //   int array[32];
  string newArray;
  string inputString;

  //   int index = 0;

  inputString = input;

  //   cout << to_string(input) << endl;

  //   index = inputString.length();

  newArray = inputString.at(0);

  newArray = newArray + inputString;

  newArray.pop_back();

  //   index = log10(input) + 1;

  //   newArray = to_string(array[0]);

  //   cout << to_string(array[1]) << endl;

  //   for (int i = 0; i < index - 1; i++) {
  //     cout << "test ";
  //     newArray = newArray + to_string(array[i]);
  //   }

  return newArray;
}

int main() {
  cout << shift_right("1001") << endl;

  return 0;
}