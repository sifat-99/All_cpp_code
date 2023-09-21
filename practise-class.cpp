#include<iostream>
using namespace std;


class summation
{
public:
    int number1;
    int number2;

    summation()
    {
        number1=50;
        number2=60;
        int sum=number1+number2;
        cout<<sum<<'\n';
    }
    // ~summation()
    // {
    //     cout<<"destructor";
    // }
    
};

int main()
{
    summation ob;
    // cout<<ob.a<<'\n';
    // cout<<ob.a<<'\n';
}