#include <iostream>
using namespace std;
class partTimeJob
{
    int salaryPerDay, days;

public:
    void setSalaryPerDay()
    {
        cout << "Set salary per day: ";
        cin >> salaryPerDay;
    }
    void setDays()
    {
        cout << "Set days: ";
        cin >> days;
    }
    friend class totalSalary;
};
class fullTimeJob
{
protected:

public:
    int fullTimeSalary;
    void setFullTimeSalary()
    {
        cout << "Set full time salary: ";
        cin >> fullTimeSalary;
    }
    friend class totalSalary;
};
class totalSalary
{
    int total;

public:
    void calculateTotal(partTimeJob obj, fullTimeJob object1)
    {
        total = obj.salaryPerDay * obj.days;
        cout << total << endl;
        cout << object1.fullTimeSalary << endl;
    }
};

int main()
{
    partTimeJob object;
    fullTimeJob object1;
    totalSalary finalObject;
    object.setSalaryPerDay();
    object.setDays();
    object1.setFullTimeSalary();
    finalObject.calculateTotal(object, object1);
}