#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> temperatures(n);
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> temperatures[i];
        sum += temperatures[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
