#include <iostream>
using namespace std;
class area
{
public:
    int Length;
    int Width;
    area(int a, int b)
    {
        Length = a;
        Width = b;
    }
    int multiple()
    {
        return Length * Width;
        // Returning the multiple of length and width
    }

void compare(area ob)
{
    if (this-> multiple() > ob.multiple())

    {
        cout << "Box-1 has highest area"<<endl;
    }
    else
    {
        cout << "Box-2 has highest area"<<endl;
    }
}
};
    int main()
    {
        area box(50, 200),
            box2(40, 50);
        box.compare(box2);
        return 0;
        //Close the program


    }
