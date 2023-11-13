#include<iostream>
using namespace std;
class shape{
public:
    int height,width,Triangle;
   double Rectangle;
};
class rectangle:public shape{
public:
   double calculation(){
      int Rectangle;
      int height=4;
      int width=5;
     Rectangle=height*width;
       cout<<Rectangle<<endl;
    return Rectangle;
   }
};
class triangle:public shape{
public:
 double calculation(){
      double Triangle;
      int height=4;
      int width=5;
     Triangle=0.5*height*width;
       cout<<Triangle<<endl;
    return Triangle;
   }
};
class compare: virtual public rectangle,virtual public triangle{
    public:
    void show(int a1,double a2){
     if(a1>a2){
        cout<<"triangle is large";
     }
    else if(a2>a1){
        cout<<"rectangle is large"<<endl;
    }
    else{
       cout<<"both are equal"<<endl;
    }
    }
};
int main(){
    compare *p=new compare();
double a1=p->triangle::calculation();
double a2=p->rectangle::calculation();
p->show(a1,a2);
}