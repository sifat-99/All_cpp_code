//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll MOD = 998244353;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
//-------------------------------------------------------------------------------------------------
 
void solve(){
 
 
}
 
int main()
{
 fast_cin();
 ll t;
 
 cin >> t;
 while(t--)
 {
 ll n;
 cin>>n;
 string str;
 cin>>str;

ll ary[27] = {0};
ll count=0;
for(ll i = 0; i < n; i++){
    ary[str[i] - 'A']++;
    

 
 }
 for(ll j=0;j<26;j++){
  ary[j]+=1;
     if(ary[j]>1){
  
         count+=ary[j];
         
     }

 }

 cout<<count<<endl;
 }
 return 0;
}