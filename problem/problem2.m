syms k
a = [2 4 1 k];
b = [k 2 4 5];

l = a.'; 
m = b.';

eqn = dot(l,m) == 0;
solx = solve(eqn,k)
