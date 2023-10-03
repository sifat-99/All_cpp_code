#include <iostream>
using namespace std;
class Vehicle
{
public:
    string model;
    int year;
};
class Property
{
public:
    string color;
    int weight;
};

class car : public Vehicle, public Property
{
public:
    car()
    {
        cout<<"\t\t\t For Car"<<endl;
        cout << "Enter the model no: ";
        cin >> model;
        cout << "Enter publishing year: ";
        cin >> year;
        cout << "Enter color of the car: ";
        cin >> color;
        cout << "Enter the Weight of the car: ";
        cin >> weight;
        cout<<endl;
        cout<<"Model no: "<<model<<endl<<"Year: "<<year<<endl<<"Color: "<<color<<endl<<"Weight :"<<weight<<"KG"<<endl;
    }
};
class truck : public Vehicle, public Property
{
    public:

    truck()
    {
        cout<<"\t\t\t For Truck"<<endl;
        cout << "Enter the model no: ";
        cin >> model;
        cout << "Enter publishing year: ";
        cin >> year;
        cout << "Enter color of the truck: ";
        cin >> color;
        cout << "Enter the Weight of the truck: ";
        cin >> weight;
        cout<<endl;
        cout<<"Model no: "<<model<<endl<<"Year: "<<year<<endl<<"Color: "<<color<<endl<<"Weight :"<<weight<<"KG"<<endl;
    }

};

int main()
{
    car ob;
    truck obj;
}