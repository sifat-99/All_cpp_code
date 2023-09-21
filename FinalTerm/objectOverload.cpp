#include<iostream>
using namespace std;

class Abc{
int n;
public:
void input(int x)
{
    n=x;
}
void output()
    {
        cout<<n<<endl;
    }
    Abc operator+(Abc &ob)
    {
        Abc o;
        o.n = this->n+ob.n;
        return o;
    }
};

int main()
{
    Abc ob1,ob2,sum;
    ob1.input(10);
    ob2.input(20);
    sum = ob1+ob2;
    sum.output();
}