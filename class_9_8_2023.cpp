#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;
    public:
    void get_data()
    {
        cout<<"Enter data: "<<endl;
        cin>>id>>name;
    }
    void put_data()
    {
        cout<<"Employee Id & Name: ";
        cout<<"Employee ID: "<<id<<"\nEmployee name: "<<name<<endl;
    }
};

int main()
{
    employee obj[10];
    int numberOfEmployee,i;
    cout<<"How many employee?"<<endl;
    cin>>numberOfEmployee;
    for(i=0; i<numberOfEmployee;i++)
    {
        obj[i].get_data();
    }
    for(i=0; i<numberOfEmployee;i++)
    {
        obj[i].put_data();
    }
}