import numpy as np

A = [[1.0, 0, 0.5],
[1.0, 1.0, 0.5],
[0.5, 0, 0.6],
[2.0, 1.5, 1.0]]

B = [[350.00],
[500.00],
[950.00]]

C = [[825.00],
[1325.00],
[1000.00],
[2400.00]]

result = np.dot(A, B)
for r in result:
    print(r)

#Calculating the no of rows and columns present in the first matrix
r1 = len(result);
c1 = len(result[0]);
print(r1);
print(c1);
#Calculating the no. of rows and columns present in the second matrix
r2 = len(C);
c2 = len(C[0]);
print(r2);
print(c2);
#Checking whether the dimensions of both the matrices are equal
if(r1 != r2 or c1 != c2):
   print("The two matrices, result and C, are not equal");
else:
   print("The two matrices, result and C, are equal");
   
