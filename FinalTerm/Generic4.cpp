#include <bits/stdc++.h>
using namespace std;
class Data
{
public:
    int a, b;
    Data()
    {
        cin >> a >> b;
    }
    void add()
    {
        cout << a + b << endl;
    }
};
template <class T>
T show(T o)
{
    o.add();
}

int main()
{
    Data ob;
    show(ob);
    // show<int>(5);
}
