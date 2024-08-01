#include <iostream>

using namespace std;

extern int sum_min_max(int integers[], int length);

extern int array_max(int integers[], int length);

extern int array_min(int integers[], int length);

int main() {
  int array[5] = {1, 4, 7, 3, 1};

  cout << sum_min_max(array, 5) << endl;

  return 0;
}