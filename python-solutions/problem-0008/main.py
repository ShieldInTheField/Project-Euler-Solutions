digits = []
with open("number.txt", "r") as digits_file:
    for line in digits_file:
        digits.extend([int(char) for char in line.strip() if char.isdigit()])

max_product = 1
for index in range(len(digits) - 12):
    product = 1
    for offset in range(13):
        product *= digits[index + offset]
        if product == 0:
            break
    if product > max_product:
        max_product = product

print(max_product)
