#include <bits/stdc++.h>
using namespace std;

int compareStrings( string &Input1,  string &Input2)
{
    string lowerInput1 = Input1;
    string lowerInput2 = Input2;
    for (size_t i = 0; i < lowerInput1.length(); ++i)
    {
        lowerInput1[i] = tolower(lowerInput1[i]);
    }
    for (size_t i = 0; i < lowerInput2.length(); ++i)
    {
        lowerInput2[i] = tolower(lowerInput2[i]);
    }
    if (lowerInput1 < lowerInput2)
    {
        return -1;
    }
    else if (lowerInput1 > lowerInput2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string Input1, Input2;
    cin >> Input1;
    cin >> Input2;
    int result = compareStrings(Input1, Input2);
    cout<<result<<endl;

    return 0;
}
