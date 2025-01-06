x0 = 0.05;
iter = 0;

f = @(x) (x^3)-(0.165*x^2)+(3.993*10^(-4));
fprime = @(x) (3*x^2)-(0.33*x);

while iter <3
    Old=x0;
    iter=iter+1;
    x1 = x0 - f(x0)/fprime(x0);
    x0=x1
    New=x0;
    error=abs(((New-Old)/New)*100)
    if error>5
        fprintf('there is no significant digit is correct')
    elseif error<5 && error >0.5
        fprintf('there is at least 1 significant digit is correct')
    elseif error<0.5 && error >0.05
        fprintf('there is at least 2 significant digit is correct')
    else
        fprintf('there is at least 2 significant digit is correct')
end
end
