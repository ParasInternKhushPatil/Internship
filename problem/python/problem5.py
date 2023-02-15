import numpy as np
import pandas as pd

A = [[1.2, 1.6],
[0.3, 0.4],
[0.5,0.6]]

B = [[3, 8, 6, 9],
[6, 2, 4, 3]]
result = np.dot(A, B)
column_names = []
row_names    = []

for r in result:
    print(r)

# Create a 3×4 matrix
matrix = result

# Create a pandas dataframe from the matrix
df = pd.DataFrame(matrix, columns=['Q1', 'Q2', 'Q3', 'Q4'])

# Name the rows
df.index = ['Raw Components', 'Labour', 'Misc']

# Print the dataframe
print(df)




