#include <cmath>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::sqrt;
using std::vector;

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

vector<int> prime_numbers(int upper) {
  vector<int> prime_list;
  for (int number{2}; number <= upper; number++) {
    if (is_prime(number))
      prime_list.push_back(number);
  }
  return prime_list;
}

int main() {
  int upper_bound{20};
  int evenly_divisible{1};
  vector<int> primes_list = prime_numbers(upper_bound);
  for (int prime : primes_list) {
    int product{1};
    while (product * prime <= upper_bound) {
      product *= prime;
    }
    evenly_divisible *= product;
  }
  cout << evenly_divisible << endl;
}