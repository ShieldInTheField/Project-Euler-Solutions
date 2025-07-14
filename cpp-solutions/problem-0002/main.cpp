#include <iostream>

using std::cout;
using std::endl;

int main() {
  int term{1};
  int temp_term{term};
  int sum_of_evens{0};
  int upper_limit{4000000};

  while (term < upper_limit) {
    if (term % 2 == 0) {
        sum_of_evens = sum_of_evens + term;
    }
    // cout << "Current Fibonacci term: " << term << endl; // Uncomment for printing each Fibonacci term
    term = term + temp_term;
    temp_term = term - temp_term;
  }

    cout << "The sum of even Fibonacci numbers up to " << upper_limit 
         << " is: " << sum_of_evens << endl;
}