#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//     string name;
//     cin >> name;
//         if (int(name[0]) >= 97)
//         {
//             int nam = int (name[0]-32);
//             cout<<char (nam);
//         }
//         else
//         {
//             cout << (name[0]);
//         }
    
//     for(size_t i = 1; i<name.length(); i++)
//     {
//         cout<<name[i];
//     }
//     cout<<endl;
    
// }

int main()
{
    string name;
    cin>>name;
    name[0] = toupper(name[0]);
    cout<<name<<endl;
}