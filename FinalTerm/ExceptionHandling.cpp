#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x;
    cin>>y;
    cout << "Before try: " << endl;
    try
    {
        cout << "Inside try" << endl;
        if (y == 0)
        {
            throw "try";
            cout << "throw block" << endl;
        }
    }
    catch (int y)
    {
        cout << "Exception occurred" << endl;
    }
    catch (...)
    {
        cout<<"Trowed the word and it says the division value is infinity"<<endl;
    }
    cout << "finished";
    return 0;
}


