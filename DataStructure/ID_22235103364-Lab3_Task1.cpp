#include<bits/stdc++.h>
using namespace std;

string SUBSTRING(string str, int initial, int length)
{
    string subst = str.substr(initial, length);
    return subst;
}



void DELETE(string str, int initial, int length)
{
    string str1= SUBSTRING(str,0,initial);
    string str2 = SUBSTRING(str, initial+length, -1);
    cout<<str1+str2<<endl;

}

int main()
{
    string input1;
    cin >> input1 ;
    cout<<"Enter the initial and length"<<endl;
    int initial,length;
    cin>>initial>>length;

    DELETE(input1,initial,length);


    return 0;
}