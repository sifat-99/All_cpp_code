% Define the function
f = @(x) x^3 - 4*x - 9;

% Define the interval [a, b]
a = 2;
b = 3;

% Define the tolerance
tol = 1e-4;

% Bisection Method
while (b - a) / 2 > tol
    c = (a + b) / 2; % Midpoint
    if f(c) == 0
        break; % c is a root
    elseif f(a) * f(c) < 0
        b = c; % Root is in the left subinterval
    else
        a = c; % Root is in the right subinterval
    end
end

% The root is approximately at the midpoint of the final interval
root = (a + b) / 2;

% Display the result
fprintf('The root is approximately: %.5f\n', root);
