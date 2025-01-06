p= input("Enter Diameter: ");
function r = radius(x)
  r=x/2;
endfunction

function [c,a]= cal(y)
  c=2*pi*y;
  a=pi*y^2;
endfunction

r= radius(p);
[w,q]=cal(r);
fprintf("Circumference =%f\n",w);
fprintf("Area= %f ",q);
