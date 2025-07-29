upper_limit = 999
lower_limit = 100
max_palindrome = 0


def Palindrome(number):
    return str(number) == str(number)[::-1]


for first_factor in range(upper_limit, lower_limit - 1, -1):
    for second_factor in range(
        first_factor, lower_limit - 1, -1
    ):  # Avoid duplicate pairs
        product_result = first_factor * second_factor
        if product_result <= max_palindrome:  # No need to check smaller products
            break
        if Palindrome(product_result):
            max_palindrome = product_result

print(max_palindrome)
