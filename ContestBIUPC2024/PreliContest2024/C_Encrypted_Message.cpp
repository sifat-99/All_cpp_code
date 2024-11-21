#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char shiftChar(char c, int shift) {
    return 'a' + (c - 'a' + shift) % 26;
}

string encryptMessage(const string &message) {
    string encryptedMessage;
    for (char c : message) {
        if (isVowel(c)) {
            encryptedMessage += shiftChar(c, 1);
        } else {
            encryptedMessage += shiftChar(c, 2);
        }
    }
    return encryptedMessage;
}

int main() {
    string message;
    cin >> message;
    cout << encryptMessage(message) << endl;
    return 0;
}
