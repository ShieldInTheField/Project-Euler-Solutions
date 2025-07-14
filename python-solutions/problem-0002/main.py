fibonacci_term = 1
temp_fibonacci_term = 1
sum_of_even_fibonacci_terms = 0
upper_limit = 4000000

while fibonacci_term < upper_limit:
    if fibonacci_term % 2 == 0:
        sum_of_even_fibonacci_terms += fibonacci_term

    # print(fibonacci_term)

    # Calculate the next Fibonacci term
    fibonacci_term, temp_fibonacci_term = (
        temp_fibonacci_term,
        fibonacci_term + temp_fibonacci_term,
    )

print(f"Sum of even Fibonacci terms up to {upper_limit}: {sum_of_even_fibonacci_terms}")
