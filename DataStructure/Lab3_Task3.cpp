#include <bits/stdc++.h>
using namespace std;

bool isHaveAllAlphabets(string input)
{
    int count = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (input.find(ch) != string::npos)
        {
            count++;
        }
    }
    if (count == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    if (isHaveAllAlphabets(input))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
