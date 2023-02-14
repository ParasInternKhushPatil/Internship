A = [1 0 0.5; 1 1 0.5; 1.5 0 0.5; 2 1.5 1];
B = [350; 500; 950];
C = [825; 1325; 1000; 2400]
Ans = A*B

D = isequal(C,Ans);
% checking the condition 
   if (D == 1)
      % if condition is true then print the following 
      fprintf('Calculations are verified' );
   else
      % if condition is false then print the following 
      fprintf('Calculations are not verified' );
   end