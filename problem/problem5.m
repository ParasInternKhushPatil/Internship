A = [1.2 1.6;0.3 0.4; 0.5 0.6];
B = [3 8 6 9;6 2 4 3];
C = A*B;
rowNames = {'Raw Components','Labor','Miscellaneous'};
colNames = {'Q1','Q2','Q3','Q4'};
sTable2 = array2table(C,'RowNames',rowNames,'VariableNames',colNames)
