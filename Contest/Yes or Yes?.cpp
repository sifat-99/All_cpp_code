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
 string str = "yes";
int test;
cin>>test;

string str2;

while(test--){

cin>>str2;

transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

if(str2 == str){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;

}
}
 return 0;
 

}