#include <iostream>
using namespace std;
class square
{
int length,width;
public:
    square()
    {
        length = 10, width = 20;
    }
    void area()
    {
        cout << length * length;
    }
    friend int area_rectangle(square ob);
};

int area_rectangle(square ob)
{
    return  ob.length * ob.width;
}

int main()
{
    square ob;
    int output;
    output = area_rectangle(ob);
    cout << output;
}