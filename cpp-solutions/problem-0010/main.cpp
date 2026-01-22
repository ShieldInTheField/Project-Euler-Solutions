#include <cmath>
#include <iostream>
#include <vector>
#include <chrono>

using std::cout;
using std::endl;
using std::sqrt;
using std::vector;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

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
  auto start_time = high_resolution_clock::now();

  const int upper_limit{2000000};
  vector<int> primes = prime_numbers(upper_limit);
  long long sum{0};
  for (int prime : primes) {
    sum += prime;
  }
  cout << "Sum of all primes below " << upper_limit << " is: " << sum << endl;    

  auto end_time = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(end_time - start_time);
  cout << "Execution time: " << duration.count() << " milliseconds" << endl;
}