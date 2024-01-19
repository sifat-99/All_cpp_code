#include <bits/stdc++.h>
using namespace std;
int INDEX(string text, string pattern)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        bool flag = true;
        for (size_t j = 0; j < pattern.length(); j++)
        {
            if (text[i + j] == pattern[j])
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            continue;
        }
        else
        {

            return i;
        }
    }
    return -1;
}

int main()
    {
        string text, pattern;
        getline(cin, text);
        getline(cin, pattern);
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        transform(pattern.begin(), pattern.end(), pattern.begin(), ::tolower);
        cout<<INDEX(text,pattern)<<endl;
    }