//-------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
//-------------------------------------------------------------------------------------------------

void solve()
{
}

int main()
{
  fast_cin();
  int t;

  cin >> t;
  while (t--)
  {
    int numbers;
    cin >> numbers;
    if (numbers == 1)
    {
      cout << 0 << endl;
    }
    
    else
    {
      int slices = (numbers + 1) / 2;
      cout << slices << endl;
    }
  }
  return 0;
}

