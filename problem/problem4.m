syms x y z 
v = [1, -2, 5];
a = [1, 1, 1];
b = [1, 2, 3];
c = [2, -1, 1];
eqn = a*x + b*y + c*z == v;
[solx, soly, solz] = solve(eqn, x, y, z)
