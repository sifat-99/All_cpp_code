#include<iostream>
using namespace std;
class Sum1{
    public:
    int sum1;

    void sum(int num)
    {

    }

};
class Sum2{
    public:
    int sum2;
    void total()
    {

    }
};


int main()
{
    int n,num,num2;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        cin>>num;
        Sum1 ob[i];
        ob[i].sum(num);
    }
    for(int i=1; i<n; i++)
    {
        cin>>num2;
        Sum2 obj[i];
        obj[i].total(num2);
        
    }
}