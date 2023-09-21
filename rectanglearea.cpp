#include <iostream>
using namespace std;
class rectangle
{
    int height, width;
    public:
    rectangle()
    {
        cin >> height >> width;
    }

    friend void calculateArea(rectangle object);
    friend void calculatePerimeter(rectangle object);
};
void calculateArea(rectangle ob)
{
    int area = ob.height*ob.width;
    cout<<"Rectangle Area: "<<area<<endl;
}
void calculatePerimeter(rectangle ob)
{
    int Perimeter = 2*(ob.height+ob.width);
    cout<<"Rectangle Perimeter: "<<Perimeter<<endl;
}
int main()
{
    rectangle object;
    calculateArea(object);
    calculatePerimeter(object);
}