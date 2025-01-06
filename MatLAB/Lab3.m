heightFeet = input("Enter height in feet: ");
heightIn = input("Enter height In INCH: ");

weight = input("Enter Weight: ");


HeightInCM = heightFeet*30.48 + heightIn*2.54;
HeightInInch = HeightInCM/2.54;

weightInKG =  weight/2.20462 ;

fprintf("Height In Cm : %f \n", HeightInCM);
fprintf("Height In InCH: %f \n", HeightInInch);
fprintf("Weight In KG : %f \n", weightInKG);


