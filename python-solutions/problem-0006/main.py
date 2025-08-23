lower_bound = 1
upper_bound = 100
sum_of_squares = sum(number**2 for number in range(lower_bound, upper_bound + 1))
square_of_sum = sum(range(lower_bound, upper_bound + 1)) ** 2
result = square_of_sum - sum_of_squares
print(result)
