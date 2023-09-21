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
    ~square()
    {
        cout<<"destructor";
    }
    
};

int main()
{
    square ob;
    // cout<<ob.a<<'\n';
    // cout<<ob.a<<'\n';
}