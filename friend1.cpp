#include <iostream>
using namespace std;
class calculator
{
    int num1, num2;

public:
    calculator()
    {
        cout << "\tThe Numbers are: " << endl;
        cin >> num1 >> num2;
    }
    void product()
    {
        cout << "Product: " << num1 * num2 << endl;
    }
    void quotient()
    {
        cout << "Quotient: " << num1 / num2 << endl;
    }
    void remainder()
    {
        cout << "Remainder: " << num1 % num2 << endl;
    }
    friend void sum(calculator ob);
};
void sum(calculator object)
{
    cout << "\tThe Output is: " << endl;
    cout << "Sum: " << object.num1 + object.num2 << endl;
    object.product();
    object.quotient();
    object.remainder();
}
int main()
{
    calculator ob;
    sum(ob);
}
