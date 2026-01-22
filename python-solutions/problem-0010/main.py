import time

start_time = time.time()


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


upper_bound = 2000000
prime_sum = 0
for prime in prime_numbers(upper_bound):
    prime_sum += prime

print(f"Sum of all prime numbers below {upper_bound} is: {prime_sum}")

print(f"Execution time: {(time.time() - start_time) * 1000} milliseconds")
