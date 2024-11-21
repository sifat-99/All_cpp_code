#include <bits/stdc++.h>
using namespace std;
int main() {
    long long h1, b1, c1;
    cin >> h1 >> b1 >> c1;
    long long h2, b2, c2;
    cin >> h2 >> b2 >> c2;
    long long time_mike = 0, time_jake = 0;
    long long totalTime = 0;
    while (true) {
        if (h1 <= 0 && h2 <= 0) {
            cout << "DRAW" << endl;
            break;
        }
        if (h1 <= 0 && h2 > 0) {
            cout << "JAKE PAUL" << endl;
            break;
        }
        if (h2 <= 0 && h1 > 0) {
            cout << "MIKE TYSON" << endl;
            break;
        }
        if (totalTime == time_mike) {
            h2 -= b1;
            time_mike += c1;
        } else {
            h2 -= b1;
        }
        if (totalTime == time_jake) {
            h1 -= b2;
            time_jake += c2;
        } else {
            h1 -= b2;
        }
        totalTime++;
    }

    return 0;
}
