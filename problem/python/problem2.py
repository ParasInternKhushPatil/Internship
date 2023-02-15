import sympy
from sympy import symbols, solve
from sympy.abc import x
import numpy as np
arr1 = np.array([[2, 4, 1, x]])
a = arr1.transpose()
print(f'aT = Transposed Array:\n{a}')
arr2 = np.array([[x, 2, 4, 5]])
b = arr2.transpose() 
print(f'bT = Transposed Array:\n{b}')   
eqn = np.sum(a * b) 
sol = solve(eqn)
sol
print(f'the value of k is:\n{sol}')
