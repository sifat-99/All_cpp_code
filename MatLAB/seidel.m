A = input('Enter Coefficient Matrix: ');
B = input('Enter Source Vector: ');
P = input('Enter Initial Guess Vector: ');
n = input('Enter Number of Iterations: ');
N = length(B);

% Initialize solution vector
X = zeros(N, 1);

for j = 1:n
    for i = 1:N
        % Compute the sum of known and unknown components
        sum1 = A(i, 1:i-1) * X(1:i-1); % Known values (already updated in current iteration)
        sum2 = A(i, i+1:N) * P(i+1:N); % Unknown values (from the previous iteration)

        % Update X(i) using the Gauss-Seidel formula
        X(i) = (B(i) - sum1 - sum2) / A(i, i);
    end
    % Display the current iteration and solution
    fprintf('Iteration %d:\n', j);
    disp(X);

    % Update P for the next iteration
    P = X;
end

