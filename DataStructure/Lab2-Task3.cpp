#include<bits/stdc++.h>
using namespace std;
int main()
{
    string Input1;
    int UpperCount = 0;
    int lowerCount = 0;
    cin>>Input1;
    for(size_t i=0; i<Input1.length(); i++)
    {
        if(Input1[i]>=65&& Input1[i]<=90)
        {
            UpperCount++;
        }
        if(Input1[i]>=97&& Input1[i]<=122)
        {
            lowerCount++;
        }
    }

    if(UpperCount>lowerCount)
    {
      for(size_t i=0; i<Input1.length(); i++)
    {
        
        if (int(Input1[i]) >= 97)
        {
            int nam = int (Input1[i]-32);
            cout<<char (nam);
        }
        else

        {
            cout << (Input1[i]);
        }
    }  
    }

    else{

        for(size_t i=0; i<Input1.length(); i++)
    {
        
        if (int(Input1[i]) >= 65 && Input1[i]<=90)
        {
            int nam = int (Input1[i]+32);
            cout<<char (nam);
        }
        else

        {
            cout << (Input1[i]);
        }
    }  
    }

}