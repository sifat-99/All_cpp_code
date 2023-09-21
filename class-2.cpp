// #include <iostream>
// using namespace std;

// class employee
// {
//     int id;
//     string name;
//     public:
//     employee()
//     {
//         cout<<"Enter data: "<<endl;
//         cin>>id>>name;
//     }
//     void put_data()
//     {
//         cout<<"Employee Id & Name: "<<endl;
//         cout<<"Employee ID: "<<id<<"\nEmployee name: "<<name<<endl;
//     }
// };

// int main()
// {

//     int numberOfEmployee,i;
//     cout<<"How many employee?"<<endl;

//     cin>>numberOfEmployee;
//     employee obj[numberOfEmployee];

//     for(i=0; i<numberOfEmployee;i++)
//     {
//         obj[i].put_data();
//     }
// }
#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;

public:
    employee(int i, string n)
    {
        // cout<<"Enter data: "<<endl;
        // cin>>id>>name;
        id = i;
        name = n;
    }
    void put_data()
    {
        cout << "Employee Id & Name: " << endl;
        cout << "Employee ID: " << id << "\nEmployee name: " << name << endl;
    }
};

int main()
{
    employee obj[employee(i,n)];
    int numberOfEmployee, i;
    // cout<<"How many employee?"<<endl;
    
    // cin>>numberOfEmployee;
    // employee obj[numberOfEmployee];
    for (i = 0; i < numberOfEmployee; i++)
    {
        cin >>obj.id>>obj.name;
        
    }
    for (i = 0; i < numberOfEmployee; i++)
    {
        obj[i].put_data();
    }
}