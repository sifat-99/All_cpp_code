A = [1, 2, 3;
     4, 5, 6;
     7, 8, 9];

element = A(2, 3);
disp("Displayed Elemnt: ")
disp(element);
x = input("Print the number to replace:")
A(1, 2) = x;
SUM = sum(A(:, 3));
disp('Modified Matrix:');
disp(A);
disp('Sum of elements in the third column:');
disp(SUM);

