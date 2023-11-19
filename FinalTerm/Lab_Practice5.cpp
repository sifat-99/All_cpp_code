#include <iostream>
using namespace std;
 class Shape
{
    public:
    int width,height;
    float area;
};
 class Triangle: virtual public Shape
{
    public:
    virtual float show()
    {
        width=10;
        height = 5;
        area = 0.5*width*height;
        return area;
    }
};
 class Rectangle: virtual public Shape
{
    public:
    virtual float show()
    {
        width=10;
        height = 10;
        area = width*height;
        return area;
    }
};
class Compare:virtual public Triangle,virtual public Rectangle{
    public:
    virtual void Output(float areaTri, float araRec )
    {
        if(areaTri>araRec)
        {
            cout<<"Triangle is bigger than Rectangle";
        }
        else if(araRec>areaTri)
        {
            cout<<"Triangle is smaller than Rectangle";
        }
        else
        {
            cout<<"Both Area is Equal";
        }
    }
};

int main()
{

    Compare *p = new Compare();
    float areaTri = p->Triangle::show();
    float araRec = p->Rectangle::show();
    cout<<"Area of Triangle: "<<areaTri<<endl;
    cout<<"Area of Rectangle: "<<araRec<<endl;
    p->Output(areaTri,araRec);
}





class per;
class student : public person
class faculty : public person
class TA:public student,public faculty

int main()
{
    TA ob;
}



// ambagious. problem