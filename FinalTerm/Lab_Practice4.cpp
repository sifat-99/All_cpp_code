#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
};
class Employee:public Person
{
    public:
    int employeeID;
};
class Manager: public Employee
{
    public:
    string department;
    Manager ()
    {
        cout<<"Enter name, age,Employee Id, department: ";
        cin>>name>>age>>employeeID>>department;

        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Id: "<<employeeID<<endl<<"Department: "<<department<<endl;
    }
};

int main()
{
    cout<<"Enter the Amount of Employee: ";
    int size;
    cin>>size;
    for(int i=1; i<=size; i++)
    {
        cout<<"Enter the Data of Employee "<<i<<": "<<endl;
        Manager ob[i];
    }
}