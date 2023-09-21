#include <iostream>
using namespace std;
class demo
{
    int num1, num2;
public:
    demo()
    {
        num1=13578;
        num2=77334;
        cout<<"numberOne= '"<<num1<<"' & numberTwo= '"<<num2<<"' is initialized in this calculator constructor class."<<endl;
    }
    ~demo()
    {
        cout<<"numberOne & numberTwo is being destroyed"<<endl;
    }
};
int main()
{
    demo ob;
}