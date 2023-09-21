#include <iostream>
using namespace std;
class employee
{
public:
    long long int id, salary;
    friend void compare(employee employeeOne, employee employeeTwo);
};
void compare(employee employeeOne, employee employeeTwo)
{
    if(employeeOne.salary>employeeTwo.salary)
    {
        cout<<"Employee One has highest salary";
    }
    else{
        cout<<"Employee Two has highest salary";
    }
}
int main()
{
    employee employeeOne, employeeTwo;
    cout << "Enter the Employee one Id & salary: ";
    cin >> employeeOne.id >> employeeOne.salary;
    cout << "Enter the Employee two Id & salary: ";
    cin >> employeeTwo.id >> employeeTwo.salary;
    compare(employeeOne,employeeTwo);
}



