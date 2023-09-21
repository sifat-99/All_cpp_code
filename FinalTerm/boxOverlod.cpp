
// Class Practice 2 object area calculate.. using object overloading.

#include<iostream>
using namespace std;
class box{
    public:
    int hight,width,length,volume;
    void Volume(int width,int hight,int length)
    {
        volume = width*length*hight;
    }
    void output()
    {
        cout<<volume<<endl;
    }
    box operator+(box &ob)
    {
        box o;
        o.volume = this->volume+ob.volume;
        return o;
    }
};
int main()
{
    box ob1,ob2,ob3;
    ob1.Volume(2,2,3);
    ob2.Volume(1,2,2);

    ob3 = ob1+ob2;
    ob3.output();
}

