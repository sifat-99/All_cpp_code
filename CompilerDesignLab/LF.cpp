#include <bits/stdc++.h>
using namespace std;

void SplitTheString(string input)
{
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    vector<string> first;
    vector<string> second;
    vector<string> CommonPart;
    vector<string> afterCommonPartFirst;
    vector<string> afterCommonPartSecond;
    size_t i = 0;
    while (i < input.size() && input[i] != '|')
    {
        first.push_back(string(1, input[i]));
        i++;
    }
    i++;
    while (i < input.size())
    {
        second.push_back(string(1, input[i]));
        i++;
    }

    size_t minLength = min(first.size(), second.size());
    size_t commonLength = 0;

    for (size_t i = 0; i < minLength; i++)
    {
        if (first[i] == second[i])
        {
            CommonPart.push_back(first[i]);
            commonLength++;
        }
        else
        {
            break;
        }
    }

    for (size_t i = commonLength; i < first.size(); i++)
    {
        afterCommonPartFirst.push_back(first[i]);
    }

    for (size_t i = commonLength; i < second.size(); i++)
    {
        afterCommonPartSecond.push_back(second[i]);
    }

    cout << "A-> ";
    for (size_t i = 0; i < CommonPart.size(); i++)
    {
        cout << CommonPart[i];
    }
    cout << "A'" << endl;

    cout << "A'-> ";
    if (afterCommonPartFirst.empty())
    {
        cout << " # ";
    }
    else
    {
        for (size_t i = 0; i < afterCommonPartFirst.size(); i++)
        {
            cout << afterCommonPartFirst[i];
        }
    }
    cout << " | ";
    if (afterCommonPartSecond.empty())
    {
        cout << " # ";
    }
    else
    {
        for (size_t i = 0; i < afterCommonPartSecond.size(); i++)
        {
            cout << afterCommonPartSecond[i];
        }
    }
    cout << endl;
}

int main()
{
    string input;
    getline(cin, input);

    SplitTheString(input);
}
