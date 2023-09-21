#include <iostream>
#include <vector>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}
vector<int> generate_permutation(int n) {
    vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
        permutation[i] = i + 1;
    }
    return permutation;
}
void solve() {
    int n;
    cin >> n;

    vector<int> permutation = generate_permutation(n);
    swap(permutation[n - 1], permutation[n - 2]);

    for (int i = 0; i < n; i++) {
        cout << permutation[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
