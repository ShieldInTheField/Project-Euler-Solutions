def is_prime(number):
    if number <= 1:
        return False
    for divisor in range(2, int(number**0.5) + 1):
        if number % divisor == 0:
            return False
    return True


def prime_numbers(upper):
    primes_list = []
    for num in range(2, upper + 1):
        if is_prime(num):
            primes_list.append(num)
    return primes_list


upper_bound = 20
evenly_divisible_product = 1

for prime in prime_numbers(upper_bound):
    product = 1
    while (
        product * prime <= upper_bound
    ):  # For a range [lower_bound, upper_bound], where lower_bound > 1, it must be tested whether there exists a multiple of the next power inside This only works for lower_bound = 1.
        product *= prime
    evenly_divisible_product *= product


print(
    f"Smallest evenly divisible number in range 1 to {upper_bound} is: {evenly_divisible_product}"
)
