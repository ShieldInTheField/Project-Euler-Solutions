#include <iostream>

using std::cout;
using std::endl;

int main() {

  int sum {0};
  int upper_limit {1000}; // Change this value to set the upper limit.
  
  for (int natural_number {1}; natural_number < upper_limit; natural_number++) {
    if (natural_number % 3 == 0 || natural_number % 5 == 0) {
      sum = sum + natural_number;
    }
  }
  cout << sum << endl;
  return 0;
}