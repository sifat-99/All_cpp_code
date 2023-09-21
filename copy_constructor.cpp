#include <iostream>
using namespace std;
class salary
{
public:
    int SalaryMoney, TotalWorkTime;
    float TotalSalary;
    salary()
    {
        cout << "Enter the amount of salary of Employee 1: ";
        cin >> SalaryMoney;
        cout << "Enter The Working time of employee 1: ";
        cin >> TotalWorkTime;
    }
    salary(salary &o)
    {
        cout << "Enter the amount of salary of Employee 2: ";
        cin >> o.SalaryMoney;
        cout << "Enter The Working time of employee 2: ";
        cin >> o.TotalWorkTime;
    }
    float CalcSalary()
    {
        TotalSalary = SalaryMoney * TotalWorkTime;
        return TotalSalary;
    }
};
void compare(int Employee1, int Employee2)
{
    if (Employee1 > Employee2)
    {
        cout << "Employee 1 has maximum Salary" << endl;
    }
    else
    {
        cout << "Employee 2 has maximum Salary" << endl;
    }
}

int main()
{
    salary Employee_1;
    salary Employee_2 = Employee_1;
    int Employee1 = Employee_1.CalcSalary();
    int Employee2 = Employee_2.CalcSalary();
    compare(Employee1, Employee2);
}
