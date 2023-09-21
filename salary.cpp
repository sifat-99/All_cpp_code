#include <iostream>
using namespace std;
class salary
{
public:
    int totalSalary;
    int totalSalary2;
    int first, second;
    salary()
    {
        cin >> totalSalary;
        cin >> totalSalary2;
    }
    salary(salary &employee2)
    {
        first = employee2.totalSalary;
        second = employee2.totalSalary2;
    }
    void calculate()
    {
        if (first > second)
        {
            cout << "First Employee with Higher Salary";
        }
        else
        {
            cout << "second Employee with Higher Salary";
        }
    }
};

int main()
{
    salary employee1;
    salary employee2(employee1);
    employee2.calculate();
}