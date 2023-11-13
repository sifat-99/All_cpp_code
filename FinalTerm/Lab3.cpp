#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int id;
    private:
    void getData()
    {
        cout<<"Enter Student Information: "<<endl;
        cout<<"Enter name ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
    }

    void showData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID "<<id<<endl;
    }
};
class course: public student
{
    private:
    int courseID;
    protected:
    void getData()
    {

    }
};