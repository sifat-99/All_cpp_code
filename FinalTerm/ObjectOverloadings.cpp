// increment/ decrement using object overloading
#include<iostream>
using namespace std;
class abc{
    int n;
    public:
    int m=1;
    void input(int x)
    {
        n=x;
    }
    void output()
    {
        cout<<n<<endl;
    }
    abc operator++()
    {
        abc o;
        o.n = this->n+m;
        return o;
    }
    abc operator++(int)
    {
        abc y;
        y.n = this->n+m;
        return y;
    }

};
int main()
{
    abc ob1,ob2,ob3;
    int number;
    cin>> number;
    ob1.input(number);
    ob2= ++ob1;
    ob3 = ob1++;
    ob2.output();
    ob3.output();
}