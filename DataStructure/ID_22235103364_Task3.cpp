#include<bits/stdc++.h>
using namespace std;
void stringLength( string input)
{
    if(input.length()<10)
    {
        cout<<input;
    }
    else{
         cout<<endl<< input[0]<<input.length()-2<<input[input.length()-1]<<endl<<endl;
    }
}
int main()
{
    string input;
    cout<<"Input: ";
    cin>>input;
    stringLength(input);
}