#include <iostream>
using namespace std;
class show
{
private:
    string data1, data2;
public:
    show()
    {
        data1="Data-1";
        data2="Data-2";
    }
    ~show()
    {
        cout<<"dataOne & dataTwo is being destroyed"<<endl;
    }
};
int main()
{
    show ob;
}


