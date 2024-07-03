#include<bits/stdc++.h>

using namespace std;

int getDecimalValue(const string& s) {
  int decimalValue = 0;
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    decimalValue = decimalValue * 2 + (c - '0');
  }
  return decimalValue;
}

int main() {
  vector<pair<string, size_t> > candidates;

  for (size_t i = 0; i < 3; i++) {
    string s;
    cin >> s;
    candidates.push_back({s, i + 1});
  }

  sort(candidates.begin(), candidates.end(), [](const auto& a, const auto& b) {
    return getDecimalValue(a.first) > getDecimalValue(b.first);
  });

  cout << candidates[0].second << endl;

  return 0;
}
