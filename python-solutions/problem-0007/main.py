def is_prime(number):
    if number <= 1:
        return False
    for divisor in range(2, int(number**0.5) + 1):
        if number % divisor == 0:
            return False
    return True


def nth_prime_number(target):
    primes_numbers_count = 0
    number = 1
    while primes_numbers_count < target:
        number += 1
        if is_prime(number):
            primes_numbers_count += 1
    print(number)


target = 10001
nth_prime_number(target)
