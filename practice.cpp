#include <iostream>
using namespace std;
class marks
{
public:
    int bangla, english, math;
    marks(int i, int j, int k)
    {
        bangla = i;
        english = j;
        math = k;
    }
    int total()
    {
        return bangla + english + math;
    }
    void compare(marks ob)
    {
        if (this ->total() > ob.total())
        {
            cout << "student 1 has highest marks";
        }
        else
        {
            cout << "student 2 has highest marks";
        }
    }
};
int main()
{
    marks st1(10, 20, 30), st2(40, 30, 20);
    st1.compare(st2);
}