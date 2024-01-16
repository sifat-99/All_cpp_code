#include<bits/stdc++.h>
using namespace std;
bool isPalindrome( string& input) {

   for (size_t i = 0; i < input.length(); ++i)
    {
        input[i] = tolower(input[i]);
    }
    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        if (input[left] != input[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
