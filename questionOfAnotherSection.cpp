#include <iostream>
using namespace std;
class dataLabel
{
public:
    int length, width;
};
class giveInput
{
public:
    giveInput(dataLabel &obj)
    {
        cout << "Enter the length and width of the rectangle: ";
        cin >> obj.length >> obj.width;
    }
    friend void area(dataLabel object);
};
void area(dataLabel obj)
{
    int areaRectangle = obj.length * obj.width;
    int areaSquare = obj.length * obj.length;
    cout << areaSquare << endl;
    cout << areaRectangle << endl;
    if (areaRectangle > areaSquare)
    {
        cout << "Rectangle has a larger area" << endl;
    }
    else
    {
        cout << "Square has a larger area" << endl;
    }
}
int main()
{
    dataLabel object;
    giveInput object2(object);
    area(object);
    return 0;
}