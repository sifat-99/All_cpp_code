#include<iostream>
using namespace std;
class box
{
public:
    int height,width,length,volume;
    void Volume(int height,int length,int width)
    {
        volume=height*length*width;
    }
    void output()
    {

        cout<<volume<<endl;


    }
    box operator>(box &ob)
    {
        box o;
        o.volume =  this->volume > ob.volume;
        return o;
    }
};
    int main()
    {
        box ob1,ob2,ob3;
        ob1.Volume(1,3,2);
        ob2.Volume(2,3,4);
        if(ob1.volume>ob2.volume)
        {
             cout<< "1st volume is big volume"<<endl;
             
        }
        else
        {
            cout<<"not";
        }

    }