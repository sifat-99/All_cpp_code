#include <iostream>
using namespace std;

class car
{
public:
    string brand, model;
    int year;
    double mileage;

    car()
    {
        brand="Apple";
        model="m1";
        year= 2003;
        mileage= 2004.5;




    }
    ~car()
    {
        cout<<"Brand name: "<<brand<<"\nModel no:"<<model<<"\nYear: "<<year<<"\nMileage: "<<mileage<<endl;
    }
};

int main()
{
    car ob;
}
