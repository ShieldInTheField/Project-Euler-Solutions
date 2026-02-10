import time

start_time = time.time()

with open("grid.txt") as f:
    grid = [[int(element) for element in line.split()] for line in f]

N = len(grid)
element_count = 4
max_product = 0

for row in range(N - element_count + 1):
    for col in range(N - element_count + 1):

        max_product = max(
            max_product,
            grid[row][col]
            * grid[row][col + 1]
            * grid[row][col + 2]
            * grid[row][col + 3],
            grid[row][col]
            * grid[row + 1][col]
            * grid[row + 2][col]
            * grid[row + 3][col],
            grid[row][col]
            * grid[row + 1][col + 1]
            * grid[row + 2][col + 2]
            * grid[row + 3][col + 3],
            grid[row][col + 3]
            * grid[row + 1][col + 2]
            * grid[row + 2][col + 1]
            * grid[row + 3][col],
        )

print(max_product)

print(f"Execution time: {(time.time() - start_time) * 1000} milliseconds")
