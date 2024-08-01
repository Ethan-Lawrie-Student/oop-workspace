#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

extern int is_palindrome(int integers[], int length);

extern int sum_array_elements(int integers[], int length);

int main() {
  int array[5] = {1, 3, 3, 3, 1};

  cout << sum_if_palindrome(array, 5) << endl;

  return 0;
}