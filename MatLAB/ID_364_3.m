n= input("Enter the Number: ");

function result = factorial_loop(n)

    if ~isscalar(n) || n < 0 || n ~= floor(n)
        error('Input must be a non-negative integer.');
    end

    result = 1;

    for i = 1:n
        result = result * i;
    end
end

Result = factorial_loop(n);
disp(Result);
