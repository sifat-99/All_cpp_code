// #include <iostream>
// using namespace std;
// class Shape
// {
//     public:
//     int height,width;
//     virtual float area() = 0;
//     void set_height(float i)
//     {
//         height=i;

//     }
//     void set_width(float j)
//     {
//         width=j;
//     }

// };

// class Rectangle:public Shape
// {
//     public:

//     float area()
//     {
//         return height*width;
//     }

// };
// class Triangle:public Shape
// {
//     public:
//    float area()
//     {
//         return 0.5*height*width;
//     }

// };

// int main()
// {
//     Rectangle ob;
//     Triangle obj;
//     ob.set_height(5);
//     ob.set_width(10);
//     cout<<"Rectangle: "<<ob.area()<<endl;
//     obj.set_height(5);
//     obj.set_width(10);
//     cout<<"Triangle: "<<obj.area()<<endl;

// }
// #include <iostream>
// using namespace std;
// class Flower
// {
// public:
//     virtual void showItem() = 0;
// };

// class Rose : public Flower
// {
// public:
//     virtual void showItem()
//     {
//         cout<<"Sell Rose"<<endl;
//     }
// };
// class Marigold : public Flower
// {
// public:
// virtual void showItem()
//     {
//         cout<<"Sell Marigold"<<endl;
//     }
// };

// int main()
// {
//     Flower *p = new Rose();
//     p->showItem();
//     Flower *q = new Marigold();
//     q->showItem();
// }
// #include <iostream>
// using namespace std;

// class multiply
// {

// public:
//     int m, n;

//     virtual void sum() = 0;
//     multiply()
//     {
//         cin >> m >> n;
//     }
// };

// class Result : public multiply
// {
// public:
//     Result()
//     {
//         cout << m + n << endl;
//     }
//     virtual void sum()
//     {
//     }
// };

// int main()
// {
//     Result object;
// }
#include <iostream>
using namespace std;
class Area
{
public:
    int height, width;
    virtual float A() = 0;
    Area()
    {
        cin >> height >> width;
    }
};
class Rectangle1 : public Area
{
    public:
    float A()
    {
        return height*width;
    }
};
class Rectangle2 : public Area
{
    public:
    float A()
    {
        return height*width;
    }
};

int main()
{
    Rectangle1 ob;
    float area1 = ob.A();
    Rectangle2 obj;
    float area2 = obj.A();

    if(area1>area2)
    {
        cout<<"Area of Rectangle 1 is bigger"<<endl;
    }
    else if(area1==area2)
    {

        cout<<"Area of Rectangles are equal"<<endl;
    }
    else
    {
        cout<<"Area of Rectangle 2 is bigger"<<endl;
    }
}