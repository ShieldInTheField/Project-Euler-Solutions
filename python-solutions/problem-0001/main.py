final_sum = 0
upper_limit = 1000  # This is the upper limit for the range of natural numbers

for natural_number in range(1, upper_limit):
    if natural_number % 3 == 0 or natural_number % 5 == 0:
        final_sum += natural_number

print(final_sum)
