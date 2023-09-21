#include <iostream>
using namespace std;
class boxes
{
public:
    int height, width;
    boxes(int i, int j)
    {
        height = i;
        width = j;
    }
    int area()
    {
        return height * width;
    }
    void compare(boxes ob)
    {
        if (this->area() > ob.area())
        {
            cout << "First box is bigger";
        }
        else
        {
            cout << "second box is bigger";
        }
    }
};
int main()
{
    boxes box1(10, 20), box2(40, 30);
    box1.compare(box2);
}