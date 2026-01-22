sum_abc = 1000

for c in range(335, sum_abc // 2):
    max_a = (sum_abc - c) // 2
    for a in range(1, max_a):
        b = sum_abc - a - c
        if a * a + b * b == c * c:
            product = a * b * c
            print(f"Product abc: {product}")
            print(f"Values are a={a}, b={b}, c={c}")
            break
