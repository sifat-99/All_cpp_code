#include <iostream>
#include <string>
using namespace std;

string solveGame(size_t n, const string& s) {
  int countUp = 0;
  for (char c : s) {
    if (c == 'U') {
      countUp++;
    }
  }
  if (countUp % 2 == 1) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << solveGame(n, s) << endl;
  }

  return 0;
}