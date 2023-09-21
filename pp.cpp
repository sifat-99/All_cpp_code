#include<iostream>
#include<string>
using namespace std;

class BAT
{
private:
    float height;
public:
    float set_height()
    {

        height=width();

    }
};
float width()
{
    float x;
    cin>>x;
    cout<<x*x;
}

int main()
{
    float a;

    BAT ob;
    ob.set_height();
    width();
    return 0;
}