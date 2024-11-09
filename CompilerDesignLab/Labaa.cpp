#include<bits/stdc++.h>
using namespace std;

bool isAccepted( string str, string pattern) {
    if (pattern == "a*") {
        for(size_t i = 0; i < str.size(); i++) {
            if (str[i] != 'a') {
                return false;
            }
        }
        return true;
    } else if (pattern == "a*b") {
        size_t i = 0;
        while (i < str.size() && str[i] == 'a') {
            i++;
        }
        return (i == str.size() - 1 && str[i] == 'b');
    } else if (pattern == "abb") {
        return str == "abb";
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isAccepted(input, "a*")) {
        cout << input << " is accepted under rule a*" << endl;
    } else if (isAccepted(input, "a*b")) {
        cout << input << " is accepted under rule a*b" << endl;
    } else if (isAccepted(input, "abb")) {
        cout << input << " is accepted under rule abb" << endl;
    } else {
        cout << input << " not recognized" << endl;
    }

    return 0;
}
