#include<iostream>
using namespace std;
class Box2;
class Box1{
    public:
    int width,length,hight,area;
    Box1()
    {
        cout<<"\n\nEnter the width, length and hight of the first box: ";
        cin>>width>>length>>hight;

        area = width*length*hight;
    }
    friend int operator>(Box1,Box2);  
};
class Box2{
    public:
    int width,length,hight,area2;
    Box2()
    {
        cout<<"\n\nEnter the width, length and hight of the second box: ";
        cin>>width>>length>>hight;

        area2 = width*length*hight;
    }
    friend int operator>(Box1,Box2);

};
int operator>(Box1 ob,Box2 oo)
{
    return ob.area>oo.area2;
}
int main()
{
    Box1 object1;
    Box2 ob1;
    if(object1>ob1)
    {
        cout<<"Box 1 is greater than box 2";
    }
    else{
        cout<<"Box 2 is greater than box 1";
    }

}


