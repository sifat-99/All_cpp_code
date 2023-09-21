// // # writte a program to sum 2 objects of class complex with the help of friend function   
// #include<iostream>
// using namespace std;
// class complex
// {
//     int real,imag;
//     public:
//     void getData()
//     {
//         cout<<"Enter the real and imaginary part of complex number"<<endl;
//         cin>>real>>imag;
//     }
//     void showData()
//     {
//         cout<<"The complex number is "<<real<<" + "<<imag<<"i"<<endl;
//     }
//     friend complex sum(complex,complex);
// };
// complex sum(complex c1,complex c2)
// {
//     complex c3;
//     c3.real=c1.real+c2.real;
//     c3.imag=c1.imag+c2.imag;
//     return c3;
// }
// int main()
// {
//     complex c1,c2,c3;
//     c1.getData();
//     c2.getData();
//     c3=sum(c1,c2);
//     c3.showData();
//     return 0;
// }
// # write a program to compare 2 box area using object overloading using friend function
// #include<iostream>
// using namespace std;
// class box
// {
//     int l,b,h;
//     public:
//     void getData()
//     {
//         cout<<"Enter the length breadth and height of box"<<endl;
//         cin>>l>>b>>h;
//     }
//     void showData()
//     {
//         cout<<"The area of box is "<<l*b*h<<endl;
//     }
//     friend void compare(box,box);
// };
// void compare(box b1,box b2)
// {
//     if(b1.l*b1.b*b1.h>b2.l*b2.b*b2.h)
//     {
//         cout<<"The area of box 1 is greater than box 2"<<endl;
//     }
//     else
//     {
//         cout<<"The area of box 2 is greater than box 1"<<endl;
//     }
// }
// int main()
// {
//     box b1,b2;
//     b1.getData();
//     b2.getData();
//     compare(b1,b2);
//     return 0;
// }
// # write a program to compare 2 box area using object overloading using friend function which has two class of two different box
// #include<iostream>
// using namespace std;
// class box2;
// class box1
// {
//     int l,b,h;
//     public:
//     void getData()
//     {
//         cout<<"Enter the length breadth and height of box 1"<<endl;
//         cin>>l>>b>>h;
//     }
//     void showData()
//     {
//         cout<<"The area of box 1 is "<<l*b*h<<endl;
//     }
//     friend void compare(box1,box2);
// };
// class box2
// {
//     int l,b,h;
//     public:
//     void getData()
//     {
//         cout<<"Enter the length breadth and height of box 2"<<endl;
//         cin>>l>>b>>h;
//     }
//     void showData()
//     {
//         cout<<"The area of box 2 is "<<l*b*h<<endl;
//     }
//     friend void compare(box1,box2);
// };
// void compare(box1 b1,box2 b2)
// {
//     if(b1.l*b1.b*b1.h>b2.l*b2.b*b2.h)
//     {
//         cout<<"The area of box 1 is greater than box 2"<<endl;
//     }
//     else
//     {
//         cout<<"The area of box 2 is greater than box 1"<<endl;
//     }
// }
// int main()
// {
//     box1 b1;
//     box2 b2;
//     b1.getData();
//     b2.getData();
//     compare(b1,b2);
//     return 0;
// }
