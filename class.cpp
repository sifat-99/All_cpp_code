#include <iostream>
using namespace std;
class rectangle
{

public:
    int length, width;
    friend class square;
    rectangle()
    {
        cin >> length >> width;
    }
};
class square
{
public:
    // rectangle object;
    void is_square(rectangle object)
    {
        if (object.length == object.width)
        {
            cout << "square" << endl;
        }
        else
        {
            cout << "not square" << endl;
        }
    }
    
};
int main()
{
    rectangle ob;
    square o;
    o.is_square(ob);
}