#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << "Before try: " << endl;
    try
    {

        cout << "Inside try" << endl;
        if (x < 0)
        {
            throw x;
            cout << "throw block" << endl;
        }
    }
    catch (int x)
    {
        cout << "Exception occurred" << endl;
    }
    cout << "finished";
    return 0;
}