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

const double PI = 2 * acos(0.0);

struct Person
{
  int x, y;
};

double calculateCircumference(const vector<Person> &individuals)
{
  double maxDistance = 0.0;
  for (const Person &person : individuals)
  {
    double distance = sqrt(person.x * person.x + person.y * person.y);
    maxDistance = max(maxDistance, distance);
  }
  return 2 * PI * maxDistance;
}


int main()
{
  fast_cin();
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    int N;
    cin >> N;

    vector<Person> individuals(N);
    for (int i = 0; i < N; i++)
    {
      cin >> individuals[i].x >> individuals[i].y;
    }

    double circumference = calculateCircumference(individuals);
    cout << fixed;
    cout.precision(6);
    cout << circumference << endl;
  }
  return 0;
}