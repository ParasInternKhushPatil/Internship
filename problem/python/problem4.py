import numpy as np

# Define the vectors
v = np.array([1, -2, 5])
a = np.array([1, 1, 1])
b = np.array([1, 2, 3])
c = np.array([2, -1, 1])

# Stack the vectors into a matrix
A = np.column_stack((a, b, c))

# Solve for the scalar quantities
x, y, z = np.linalg.solve(A, v)

# Print the result
print(f"x = {x}, y = {y}, z = {z}")
