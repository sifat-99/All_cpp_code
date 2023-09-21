#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int l = 0, r = n - 1;
    while(l < n && a[l] == b[l]) l++;
    while(r >= 0 && a[r] == b[r]) r--;
    if(l >= r){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else{
        reverse(a + l, a + r + 1);
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "yes" << endl;
            cout << l + 1 << " " << r + 1 << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}
