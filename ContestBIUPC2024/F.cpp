#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        int countNotPerfectSquare = 0;
        for (int i = 0; i < n; ++i) {
            if (!isPerfectSquare(numbers[i])) {
                countNotPerfectSquare++;
            }
        }

        cout << countNotPerfectSquare << endl;
    }

    return 0;
}
