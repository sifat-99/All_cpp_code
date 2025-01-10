#include <iostream>
using namespace std;
class flower
{
private:
    string color, name;

public:
    friend flower setter(flower ob);
    friend void get(flower ob);
};
flower setter (flower ob)
{
cout<<"enter the flower name: ";






cin>>ob.name;
cout<<"enter the flower color: ";
cin>>ob.color;
return ob;

//return ob;

}
void get(flower ob)
{
cout<<"flower name: "<<ob.name<<endl;
cout<<"flower color: "<<ob.color<<endl;
}
int main()
{
flower ob,ob2;
ob2 = setter(ob);
get(ob2);
}
