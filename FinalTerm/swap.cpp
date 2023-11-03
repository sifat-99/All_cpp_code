// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x = 10, y = 8;
//     cout << "X: " << x << ", Y:" << y << endl;
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     cout << "X: " << x << ", Y:" << y << endl;

//     x = x * y;
//     y = x / y;
//     x = x / y;
//     cout << "X: " << x << ", Y:" << y << endl;
//     // int i = 20;
//     // int sum = i++;
//     // cout << sum << endl;
//     // sum = ++i;
//     // cout << sum << endl;
// }
#include <iostream>
#include <locale>

int main() {
    std::locale::global(std::locale("en_US.UTF-8")); // Set the global locale to UTF-8

    // Unicode values for Bangla characters
    wchar_t bangla[] = L"\u0986\u0987\u0988"; // Replace these characters with the desired Bangla text

    // Print Bangla characters
    std::wcout << bangla << std::endl;

    return 0;
}

