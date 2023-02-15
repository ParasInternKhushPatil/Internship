syms k
a = [8 4 1 k];
b = [2 -4 k k];

l = a.'; 
m = b.';

eqn = dot(l,m) == 0;
solx = solve(eqn,k)