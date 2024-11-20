#include <bits/stdc++.h>
using namespace std;

bool isMagicNumber(const string& number) {
    for (char c : number) {
        if (c != '3' && c != '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string N;
    cin >> N;

    if (isMagicNumber(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
