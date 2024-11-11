#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        long long N;
        int P;
        cin >> N >> P;

        string winner;
        if (N % 2 == 1) {
            winner = (P == 1) ? "Evenius" : "Oddius";
        } else { 
            winner = (P == 2) ? "Oddius" : "Evenius";
        }

        cout << "Case " << i << ": " << winner << endl;
    }

    return 0;
}
