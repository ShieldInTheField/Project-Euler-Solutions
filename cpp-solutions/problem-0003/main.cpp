#include <iostream>

using std::cout;
using std::endl;

int main() {
  long long largest_prime_divisor = {2};
  long long dividend = {600851475143LL};

  for (long long divisor = 2; divisor <= dividend; ++divisor) {
    while (dividend % divisor == 0) {
        largest_prime_divisor = divisor;
        dividend /= divisor;
    }
  }

  cout << "Largest prime divisor: " << largest_prime_divisor << endl;
  return 0;
}