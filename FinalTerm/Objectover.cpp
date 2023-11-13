// using object overloading with constructor.
#include<iostream>
using namespace std;
class Abc{
    int c1,c2;
    public:
    Abc(int x, int y)
    {
        c1 = x;
        c2 = y;
    }
    void output() {
        cout << c1 << endl << c2 << endl;
    }
    Abc operator+(Abc &ob) {
        Abc o(0,0);
        o.c1 = this->c1 + ob.c1;
        o.c2 = this->c2 + ob.c2;
        return o;
    }
};
int main()
{
    Abc ob1(10, 20), ob2(20, 30);
    Abc ob3 = ob1 + ob2;
    ob3.output();
    return 0;
}



// Class Practice 2 object area compare.. using object overloading with constructor.

#include<iostream>
using namespace std;
class box{
    int hight,width,length,volume;
    public:
    box()
    {
        cin>>hight;
        cin>>width;
        cin>>length ;
        volume = hight*width*length;
    }
    void output()
    {
        if(volume == 1)
        {
            cout<<"Box 1 has larger area"<<endl;
        }else{
            cout<<"Box 2 has larger area"<<endl;
        }
    }
    box operator>(box &ob)
    {
        box o;
        // cout<<this->volume<<endl<<ob.volume<<endl;
        o.volume = this->volume>ob.volume;
        return o;
    }
};
int main()
{
    box ob1,ob2;
    // ob1.func()
    box ob3;
    ob3 = ob1>ob2;
    ob3.output();
}

