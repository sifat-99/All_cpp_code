A = input('Enter Coefficient Matrix: ');
B = input('Enter Source Vector: ');
P = input('Enter Initial Guess Vector: ');
n = input('Enter Number of Iterations: ');
N = length(B);

% Initialize solution vector
X = zeros(N, 1);

for j = 1:n
    for i = 1:N
        % Update X(i) using the Jacobi formula
        X(i) = (B(i) - A(i, :) * P + A(i, i) * P(i)) / A(i, i);
    end
    % Display the current iteration and solution
    fprintf('Iteration %d:\n', j);
    disp(X);

    % Update P for the next iteration
    P = X;
end

