#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int ar[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int flag=0;
        for (int j= 0; j <n-1; j++)
        {
        
            if (ar[j]>ar[j+1])
            {
              swap(ar[j],ar[j+1]);
               flag=1;
            }
            if(flag==0) break;
        }
    }


    
    cout<<"Sorted Array: ";
    for (int i = 0; i <n; i++)
    {
      cout<<ar[i]<<" ";
    }
    cout<<endl;
    
}



int main(){
    int n,count=0;
    cout<<"Enter size: ";
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Applying Bubble Sort: \n";
    BubbleSort(ar,n);

    
    

}