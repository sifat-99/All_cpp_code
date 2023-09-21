#include <iostream>
using namespace std;
class shape
{

public:
    string shape_name;
    float width, length;
    friend void choice(shape object);
};
void choice(shape object)
{
    if (object.shape_name == "triangle")
    {
        cout << "Enter the width and length of triangle: ";
        cin >> object.width >> object.length;
        cout << "\nTriangle area: ";
        cout << 0.5 * object.width * object.length<<endl;
    }
    else if (object.shape_name == "square")
    {
        cout << "Enter the width and length of square: ";
        cin >> object.width;
        cout << "\nSquare area: ";
        cout << object.width * object.width<<endl;
    }
    else if (object.shape_name == "rectangle")
    {
        cout << "Enter the width and length of rectangle: ";
        cin >> object.width >> object.length;
        cout << "\nRectangle area: ";
        cout << object.width * object.length<<endl;
    }
}
int main()
{
    shape object;
    cin >> object.shape_name;
    choice(object);
}

