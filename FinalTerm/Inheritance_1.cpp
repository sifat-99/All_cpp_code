/**
 * main class is super class
 * child class is sub class
 *
 */

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//   float base1,base2;
//   float height,height2;
//   float area1, area2;
//   A()
//   {
//     cout << "Enter base and height of first triangle: ";
//     cin >> base1 >> height;
//     cout<<"Enter base and height of second triangle: ";
//     cin>>base2>>height2;
//     area1 = 0.5 * base1 * height;
//     area2 = 0.5 * base2 * height2;
//   } 
// };
// class B : public A
// {
// public:
//   void output()
//   {
//     if (area1 > area2)
//     {
//       cout << "Area 1 is greater then Area 2"<<endl;
//     }
//     else
//     {
//       cout << "Area 2 is greater then Area 1"<<endl;
//     }
//   }
// };
// int main()
// {
//   B ob;
//   ob.output();
// }


// #include<iostream>
// using namespace std;
// class Account{
//   public:
//   string name;
//   int id,balance;
//   Account()
//   {
//     balance = 50000;
//   }
// };
// class Withdraw{
//   public:
//   int WithdrawAmount;
//   Withdraw()
//   {
//     cout<<"Enter Withdraw amount  : ";
//     cin>>WithdrawAmount;
//   }
// };

// class Eligible : public Withdraw , public Account{
//   public:
// void show()
// {
//   cout<<"Bank Balance : "<<balance<<endl;
//   if(balance>=WithdrawAmount)
// {
//   cout<<"Eligible"<<endl;
//   int remaining = balance - WithdrawAmount;
//   cout<<"Remaining Balance : ";
//   cout<<remaining;
// }else
// {
//   cout<<"Not Eligible";
// }
// }
// };

// int main()
// {
//   Eligible ob;
//   ob.show();
// }

#include<iostream>
using namespace std;
class A{
public:
int array[5];
int sum;
A(){
  sum = 0;
  cout<<"Enter first array"<<endl;
  for(int i = 0; i<5; i++)
{
  cin>>array[i];
  sum = sum+array[i];
}}
};
class B: public A{
public:
int ary[5];
int sum2;
B(){
  sum2 = 0;
  cout<<"Enter second array"<<endl;
  for(int i=0; i<5; i++)
  {
  cin>>ary[i];
  sum2 = sum2+ary[i];}}
};
class C: public B{
public:
int array3[5];
int sum3;
  C(){
  sum3 = 0;
  cout<<"Enter Third array"<<endl;
  for(int i=0; i<5; i++)
  {
  cin>>array3[i];
  sum3 +=array3[i];
  }
}
void show()
{
  int difference = (sum*sum2)- sum3;
  cout<<"Sum 1 : "<<sum<<endl<<"Sum 2: "<<sum2<<endl<<"Sum 3: "<<sum3<<endl;
  cout<<"Difference of {(sum1*sum2)-sum3} : "<<difference<<endl;
}
};
int main()
{
  C object;
  object.show();
}