A =     [3,12,1;
        12,0,2;
        0,2,3];
B = [2.36;
    5.26;
    2.77];
x = A\B;

fprintf("Cost for one Apple: %f\n", x(1));
fprintf("Cost for one Banana: %f\n", x(2));
fprintf("Cost for one Cantaloup: %f\n", x(3));
