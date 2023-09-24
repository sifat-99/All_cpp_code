#include<iostream>
using namespace std;
class fraction{
   int num1;
public:

fraction(int x){
    num1=x;
    // cout<<num1;
}
fraction(){
}
void output(){
cout<<num1;
}
operator float()
{
    fraction ob;
  return float(this->num1)/float(ob.num1);
}

};
int main(){
  fraction ob1(10),ob2(2);
float value=ob1/ob2;
 cout<<value;

}