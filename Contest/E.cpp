#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    int Q;
    cin >> Q;

    while (Q--) {
        int n;
        cin >> n;
        string magicLetters;
        cin.ignore();
        getline(cin, magicLetters);

        vector<int> charCount(26, 0);
        for (char c : S) {
            charCount[c - 'a']++;
        }

        vector<int> magicCount(26, 0);
        for (char c : magicLetters) {
            magicCount[c - 'a']++;
        }

        int maxPalindromeLength = 0;
        for (int i = 0; i < 26; ++i) {
            if (magicCount[i] > 0) {
                maxPalindromeLength += min(charCount[i], magicCount[i]);
            }
        }

        cout << maxPalindromeLength << endl;
    }

    return 0;
}
