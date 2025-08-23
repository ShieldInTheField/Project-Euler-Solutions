#include <iostream>

using std::cout;
using std::endl;

const int lower_bound{1};
const int upper_bound{100};

int main() {
  long long int sum_of_the_squares{};
  long long int squares_of_the_sum{};

  for (int number{lower_bound}; number <= upper_bound; ++number) {
    sum_of_the_squares += number * number;
    squares_of_the_sum += number;
  }

  squares_of_the_sum *= squares_of_the_sum;

  cout << "Sum of the squares: " << sum_of_the_squares << endl;
  cout << "Square of the sum: " << squares_of_the_sum << endl;
  cout << "Difference: " << squares_of_the_sum - sum_of_the_squares << endl;

  return 0;
}