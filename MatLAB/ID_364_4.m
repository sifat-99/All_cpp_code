A = input('Enter the first number: ');
B = input('Enter the second number: ');
C = input('Enter the third number: ');

if (A >= B) && (A >= C)
    largest = A;
elseif (B >= A) && (B >= C)
    largest = B;
else
    largest = C;
end

fprintf('The largest number is: %0.2f\n', largest);

