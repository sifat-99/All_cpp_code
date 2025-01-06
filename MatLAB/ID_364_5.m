n = input("Enter the size of Natural number: ");

function result = function_NaturalNumber(n)

  result = 0;
for i = 1:n
  result = result + i;
end

endfunction

function SecondResult = MultplicationTable(m)
  SecondResult = 5;
  for i=1:m
    SecondResult = 5*i;
    disp(SecondResult);
  endfor

 endfunction

Result = function_NaturalNumber(n);

disp(Result);

m = input("Enter the size of Natural number: ");

MultplicationTable(m);
