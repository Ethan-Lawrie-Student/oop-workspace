#include <iostream>

extern void print_pass_fail(char grade);

int main() {
  int array[6] = {1, 2, 1, 4, 1, 3};
  // std::cout << "The sum is: " << print_pass_fail << std::endl;
  print_pass_fail('D');
  return 0;
}