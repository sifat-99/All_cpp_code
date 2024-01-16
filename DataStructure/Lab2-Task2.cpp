#include<bits/stdc++.h>
using namespace std;
int compareStrings(const string& input1, const string& input2)
{
    string lowerInput1 = input1;
    string lowerInput2 = input2;
    transform(lowerInput1.begin(), lowerInput1.end(), lowerInput1.begin(), ::tolower);
    transform(lowerInput2.begin(), lowerInput2.end(), lowerInput2.begin(), ::tolower);
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
    string input1, input2;
    cin >> input1 >> input2;
    
    int result = compareStrings(input1, input2);
    cout << result << endl;

    return 0;
}
