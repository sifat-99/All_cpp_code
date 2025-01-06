n = input('Enter number of data:');
x = zeros(1, n);
y = zeros(1, n);
fprintf('Enter data:\n');
for i = 1:n
    x(i) = input(['x[' num2str(i) '] = ']);
    y(i) = input(['y[' num2str(i) '] = ']);
end

xp =1.5;

yp = 0;
for i = 1:n
    p = 1;
    for j = 1:n
        if i ~= j
            p = p * (xp - x(j)) / (x(i) - x(j));
        end
    end
    yp = yp + p * y(i);
end
fprintf('Interpolated value is %.3f.\n',yp);
