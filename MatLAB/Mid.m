%Bisection

Func= @(x) 3*x-cos(x)-1;
low=0;
upper=1;

if Func(low)*Func(upper)<0
    mid= (low+upper)/2;
    disp(['After iteration 1 ','root is:',num2str(mid)]);
    iter=1;
    while iter<=10
        iter=iter+1;
        if Func(upper)*Func(mid)<0
        low=mid;
        else
            upper=mid;
        end
                mid= (low+upper)/2;
                disp(['After Iteration ',num2str(iter),' the root is:',num2str(mid)]);
    end
else
    disp(['There is no root between',num2str(low),'and',num2str(upper)]);
end



%Newton


func=@(x) (x^3)-(0.165*x^2)+(3.993*10^(-4));
fprime= @(x) (3*x^2)-(0.33*x);
x0=0.05;
iter=0;

while iter<3
  old=x0;
  iter=iter+1;
  x1= x0-(func(x0)/fprime(x0));
  x0=x1;
  new=x0;
  %disp(['After iteration ',num2str(iter),'the root is: ',num2str(x1)]);
  %error=abs((new-old/new)*100)
  error=abs(((new-old)/new)*100)
  if error>5
    disp('No');
  elseif error<5 && error>0.5
    disp('1 Digit');
  elseif error<0.5 && error>0.05
    disp('2 Digit');
  else
    disp('2 Digit or more');
    end
  end




    %%%niyom


  myFunction = @(x) 3*x-cos(x)-1; %function declearation @(x) mane x er value bosiye
%calculu korbo tai @(x) lekha lage niom, eta x/y iccha moto use kora jabe function a

%Upper r lower value dhore niche 0/1 diye eta bole dile sei value dibo 0/1 er jaygay ba ber kore nite hoy
x_lower = 0;
x_upper = 1;
%Function e Lower & Upper value bosiye je man hoy oi 2 tar gun 0 theke choto hote hobe
%otherwise hobena tai nicher line up & lower value F e bosiye 0 er sathe if condition diche
if myFunction(x_lower)*myFunction(x_upper)<0

x_mid = (x_lower + x_upper)/2; %root ber korche mane mid, mider sutro diye
disp (['After iteration 1', ' the root is: ', num2str(x_mid)]); %1st iteration e root print
iter=1;
while iter<=10 % Koto bar looop colbe seta
    iter = iter+1;
    if myFunction(x_mid)*myFunction(x_upper)<0 % f(mid)*f(upper)<0 then lower=mid
    end
    x_lower=x_mid; % f(mid)*f(upper)<0 then lower=mid bosaiche
else
    x_upper=x_mid; % f(mid)*f(upper)>0 then upper=mid
end
x_mid = (x_lower + x_upper)/2; % Again mid/root ber korchi notun lower & upper value diye eta colte thakbe loop porjonto
disp (['After iteration ', num2str(iter), ' the root is: ', num2str(x_mid)]);
end
else  %Function e Lower & Upper value bosiye je man hoy oi 2 tar gun 0 theke boro hole root nai eta ekhane likhce
    disp (['There is no root between ', num2str(x_lower), ' and ', num2str(x_upper)]);
end


%secand methode

f = @(x) 3*x-cos(x)-1;  % Nonlinear equation
% Inputs
x0 =input('Enter first guess: ');
x1 = input('Enter second guess: ');
e =input('Enter tolerable error: ');
N = input('Enter maximum iterations: ');

step = 1;

while true
    f0 = f(x0);
    f1 = f(x1);

    if f0 == f1
        fprintf('Mathematical error.\n');
        return;
    end

    % Secant Method Formula
    x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
    f2 = f(x2);

    fprintf('Iteration-%d: x2 = %.6f and f(x2) = %.6f\n', step, x2, f2);

    % Update values for next iteration
    x0 = x1;
    x1 = x2;

    step = step + 1;

    if abs(f2) <= e
        fprintf('\nRoot is: %.6f\n', x2);
        break;
    elseif step > N
        fprintf('Not convergent.\n');
        break;
    end
end
