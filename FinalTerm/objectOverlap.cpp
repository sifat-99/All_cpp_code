
// subtraction using object overload..

#include<iostream>
using namespace std;
class sum{
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
sum operator-(sum &ob)
{
    sum object;
    object.n = this ->n-ob.n;
    return object;
}
};
int main()
{
    sum ob1,ob2,ob3,ob4,ob5;
    ob1.input(20);
    ob2.input(10);
    ob3.input(5);
    ob4 = ob1-ob2;
    ob5= ob4-ob3;
    ob5.output();
}


