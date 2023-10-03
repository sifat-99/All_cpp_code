/**
 * Create a class Person with attributes name and age. Derive class Student from Person with additional attribute like studentID. Now use a friend function of student class to print name age and ID.
*/
#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person()
    {
        name = "Abdur Rahman Sifat";
        age = 23;
        // cin>>name>>age;
    }
};

class Student : public Person
{
    public:
    int studentID;
    Student()
    {
        // studentID = 364;
        cin>>studentID;
    }

    friend void Show(Student ob);
};

void Show(Student ob)
{
    cout<<"Name: "<<ob.name<<endl;
    cout<<"Age: "<<ob.age<<endl;
    cout<<"Id: "<<ob.studentID<<endl;

}

int main()
{
    Student ob;
    Show(ob);
}