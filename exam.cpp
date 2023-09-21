#include <iostream>
using namespace std;
class Box1
{
public:
    double area;
    Box1()
    {
        cin >> area;
    }
    friend class Box2;
};
class Box2
{
public:
    double area;
    Box2()
    {
        cin >> area;
    }
    friend void Compare(Box1 obj, Box2 ob);
};

void Compare(Box1 obj, Box2 ob)
{
    if (obj.area > ob.area)
    {
        cout << "Success";
    }
    else
    {
        cout << "opps";
    }
}

int main()
{
    Box1 obj;
    Box2 ob;
    Compare(obj, ob);
}