#include<iostream>
using namespace std;
class dataLabel
{
public:
    double length;
    double width;
    friend class input;
};
class input
{
public:
    dataLabel get_in(dataLabel &in)
    {
        cout << "Enter Length & Width: ";
        cin >> in.length >> in.width;
        return in;
    }
    friend void area(dataLabel in);
};
void area(dataLabel in)
{
    double area1, area2;
    area1 = in.length * in.width;
    area2 = in.length * in.length;
    cout << "Area of Rectangle = " << area1 << endl;
    cout << "Area of Square = " << area2 << endl;
    if (area1 > area2)
        cout << "Area of Rectangle large";
    else
        cout << "Area of Square large";
}
int main()
{
    dataLabel ob1;
    input ob2;
    ob2.get_in(ob1);
    area(ob1);
    return 0;
}