#include<iostream>
using namespace std;
class Box2;
class Box1{
    public:
    int width,length,hight,area;
    Box1()
    {
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
    Box1 object1, object2;
    Box2 ob1,ob2;
    if(object1>ob1)
    {
        cout<<"1";
    }
    else{
        cout<<"2";
    }

}