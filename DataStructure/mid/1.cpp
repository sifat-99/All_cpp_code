#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    string t[] = {"btw", "brb", "n8", "rofl", "lol"};

    for (size_t i = 0; i < s.length(); ++i)
    {
        s[i] = tolower(s[i]);
    }

    int count = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        for (size_t j = 0; j < t->length(); j++)
        {
            for (size_t k = 0; k < t[j].length(); k++)
            {
                if (s[i] == t[j][k])
                {
                    count++;
                    break;
                }
            }
        }
    }


    if(count>=2)
    {
        return true;
    }
    else{
        cout<<count;
        return false;
    }




}

int main()
{
    string s;
    getline(cin, s);
    check(s)  ? cout << "YES" : cout << "NO";
}
