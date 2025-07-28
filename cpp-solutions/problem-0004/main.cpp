#include <iostream>

using std::cout;
using std::endl;

bool Palindrome(int number) {
  if (number < 0)
    return false; // Negative numbers are not palindromes

  int original{number};
  int reversed{0};

  while (number > 0) {
    reversed = reversed * 10 + (number % 10);
    number /= 10;
  }

  return reversed == original;
}

const int upper_limit{999};
const int lower_limit{100};

int main() {
  int max_palindrome{0};

  for (int first_factor = upper_limit; first_factor >= lower_limit;
       --first_factor) {
    for (int second_factor = upper_limit; second_factor >= lower_limit;
         --second_factor) {
      int product = first_factor * second_factor;

      if (product <= max_palindrome)
        break; // No larger palindrome possible for this i

      if (Palindrome(product)) {
        max_palindrome = product;
      }
    }
  }
  cout << max_palindrome << endl;
  return 0;
}