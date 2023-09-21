#include<iostream>
using namespace std;


class square
{
public:
    int a;
    square()
    {
        a=30;
        cout<<a<<'\n';
    }
    void add (){
        int sum=a+100;
        cout<<sum<<'\n';
    }
    
};

int main()
{
    square ob;
    ob.add();
}