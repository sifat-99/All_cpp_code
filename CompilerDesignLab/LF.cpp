#include <bits/stdc++.h>
using namespace std;

void SplitTheString(string input)
{
    vector<string> first;
    vector<string> second;
    vector<string> CommonPart;
    vector<string> afterCommonPart;

    size_t i = 0;
    while (i >= 0 && input[i] != '|')
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

    for (size_t i = 0; i < first.size(); i++)
    {
        for (size_t j = 0; j < second.size(); j++)
        {
            if (first[i] == second[j])
            {
                CommonPart.push_back(first[i]);
            }

        }
    }

    for (size_t i = 0; i < first.size(); i++)
    {
        if (find(CommonPart.begin(), CommonPart.end(), first[i]) == CommonPart.end())
        {
            afterCommonPart.push_back(first[i]);
        }

        if(find(CommonPart.begin(), CommonPart.end(), second[i]) == CommonPart.end())
        {
            afterCommonPart.push_back(second[i]);
        }

    }
    cout<<"A->";
    for(size_t i=0; i<CommonPart.size(); i++)
    {
        cout << CommonPart[i];
    }
    cout<<"X"<<endl;
    cout<<"X->";
    for(size_t i=0; i<afterCommonPart.size(); i++)
    {
        cout << afterCommonPart[i];
        if(i%2==0)
        {
            cout<<"|";
        }
    }

    cout<<endl;

}

int main()
{

    string input;
    getline(cin, input);

    SplitTheString(input);
}
