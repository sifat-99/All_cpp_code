#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    int ar[n];
    while (i<n)
    {
      cin>>ar[i];
      i++;
    } 
    while (i<n)
    {
      cout<<ar[i]<<" ";
      i++;
    }
    int x;
    cout<<"Enter value:";
    cin>>x;
    int ld=0,ud=n-1;
    int mid= (ld+ud)/2;
    while (ld<=ud)
    {
        if (ar[mid]==x)
        {
            if(ar[mid]==x)
            cout<<mid<<"\n";
            else
            cout<<"-1";
            break;
        }
        else if (x>ar[mid])
        {
            mid= ((mid+1)+ud)/2;
             if(ar[mid]==x)
            cout<<mid<<"\n";
            else
            cout<<"-1";
            break;
        }
        else if(x<ar[mid]){
            mid= (0+(mid-1))/2;
            if(ar[mid]==x)
            cout<<mid<<"\n";
            else
            cout<<"-1";
            break;
        }
        else{
            cout<<"-1\n";
        }

        
    }
    }