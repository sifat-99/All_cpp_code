/**
 * Create a base class Shape
*/
#include <iostream>
using namespace std;
class Shape
{
public:
    int width, height;
    float area;
    Shape()
    {
        width = 10;
        height = 5;
    }

    
};
class Rectangle : public Shape
{
public:
    void CalculationAndShow()
    {
        // cout << "Enter the width and Height of Rectangle: ";
        // cin >> width >> height;
        cout << "Area of Rectangle: " << width * height << endl;
    }
};
class Triangle : public Shape
{
public:
    void CalculationAndShow()
    {
        // cout << "Enter the width and Height of Triangle: ";
        // cin >> width >> height;
        cout << "Area of Triangle: " << 0.5 * width * height << endl;
    }
};

int main()
{
    Rectangle ob;
    Triangle obj;
    ob.CalculationAndShow();
    obj.CalculationAndShow();
}
