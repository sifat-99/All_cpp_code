// #include<bits/stdc++.h>
// using namespace std;
// template<typename T>
// void GreaterValue(T a, T b, T c)
// {
//         if(a>b&&b>c)
//         {
//             cout<<a<<" a is greater than "<<c<<" and "<< b<<endl;
//         }
//         else if(b>a&&b>c)
//         {
//             cout<<b<<" b is greater than "<<c<<" and "<< a<<endl;
//         }
//         else
//         {
//             cout<<c<<" C greater than "<<a<<" and "<< b<<endl;
//         }
// }
// int main()
// {
//     GreaterValue<int>(4,5,6);
//     GreaterValue<int>(50,40,6);
//     GreaterValue<float>(4.0,5.6,5.4);
//     GreaterValue<float>(41.4,12.5,5.4);
// }


#include<bits/stdc++.h>
using namespace std;

template<typename T, typename U>

T GreaterValue(T a[], T m)
{

float sum=0;

for(int i=0;i<m;i++)
{
    sum = sum+a[i];
}

return sum;


}

int main()
{
    
    int length,i;
    cin>>length;

    float arr[length];
    for( i =0; i<length;i++)
    {
            cin>>arr[i];
    }

    cout<<GreaterValue<float,int>(arr,length)<<endl;
}