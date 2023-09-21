#include <iostream>
using namespace std;

class calculator
{
    int num1, num2;

public:
    calculator()
    {
        num1=1205;
        num2=17;
        cout<<"numberOne= '"<<num1<<"' & numberTwo= '"<<num2<<"' is initialized in this calculator constructor class."<<endl;
    }

    void show()
    {
        int sum = num1 + num2;
        int difference = num1 - num2;
        int product = num1 * num2;
        cout << "Sum= " << sum << "\nDifference=" << difference << "\nNo of Product=" << product << endl;
    }
};
int main()
{
    calculator ob;
    ob.show();
}