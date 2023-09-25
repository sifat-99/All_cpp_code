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
//     cin >> base1 >> height>>base2>>height2;
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
//       cout << "Area 1";
//     }
//     else
//     {
//       cout << "Area 2";
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
//   if(balance>=WithdrawAmount)
// {
//   cout<<"Eligible"<<endl;
//   int remaining = balance - WithdrawAmount;
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
int array[10];
int sum;
A()
{
  sum = 0;
  cout<<"Enter first array"<<endl;
  for(int i = 0; i<10; i++)
{
  cin>>array[i];
  sum = sum+array[i];
}
}
};
class B: public A{
public:
int ary[10];
int sum2;
B()
{
  sum2 = 0;
  cout<<"Enter second array"<<endl;
  for(int i=0; i<10; i++)
  {
    cin>>ary[i];
  sum2 = sum2+ary[i];
  }
}
};
class C: public B{
public:
int array3[10];
int sum3;
C()
{
  sum3 = 0;
  cout<<"Enter Third array"<<endl;
  for(int i=0; i<10; i++)
  {
    cin>>array3[i];
  sum3 +=array3[i];
  }
}
void show()
{
  int difference = sum3 -  (sum*sum2);
  cout<<sum<<endl<<sum2<<endl<<sum3<<endl;
  cout<<difference;
}
};
int main()
{
  C object;
  object.show();
}