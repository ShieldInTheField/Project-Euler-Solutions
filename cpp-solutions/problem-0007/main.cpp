#include <cmath>
#include <iostream>

using std::cout;
using std::endl;
using std::sqrt;

bool is_prime(int number) {
  if (number < 2) {
    return false;
  }
  for (int divisor{2}; divisor <= sqrt(number); divisor++) {
    if (number % divisor == 0) {
      return false;
    }
  }
  return true;
}

int nth_prime_number(int target) {
  int primes_numbers_count{0};
  int number{1};
  while (primes_numbers_count < target) {
    number++;
    if (is_prime(number)) {
      primes_numbers_count++;
    }
  }
  return number;
}

int main() {
  int target{10001};
  int result{};
  result = nth_prime_number(target);
  cout << result << endl;
  return 0;
}