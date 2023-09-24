#include<iostream>
using namespace std;
class stringSum{
    public:
    string name1,name2,sum;
    stringSum(string name)
    {
        sum =name;
    }
    stringSum()
    {

    }

    void output()
    {
            cout<<sum<<endl;
    }
    stringSum operator+(stringSum &ob)
    {
        stringSum object;
        object.sum = this->sum+" "+ob.sum;
        return object;
    }
};


int main()
{
    stringSum ob1("Abdur"),ob2("Rahman"),ob3("Sifat"),fullName,newName;

    fullName = ob1 +ob2;
    newName = fullName + ob3;
    newName.output();
}