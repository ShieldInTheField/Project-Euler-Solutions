dividend = 600851475143
devisor = 2

while dividend > 1:
    if dividend % devisor == 0:
        dividend = dividend / devisor
        largest_prime_factor = devisor
    else:
        devisor += 1

print(largest_prime_factor)
