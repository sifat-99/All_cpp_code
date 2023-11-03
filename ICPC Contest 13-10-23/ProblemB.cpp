#include <bits/stdc++.h>
using namespace std;
int cntNONsub(vector<int> Ary)
{
    int n = Ary.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int isBeauty = 1;
            for (int k = i + 1; k <= j; k++)
            {
                if (Ary[k] != Ary[i])
                {
                    isBeauty = 0;
                    break;
                }
            }
            if (!isBeauty)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        int N;
        cin >> N;
        vector<int> Ary(N);
        for (int i = 0; i < N; i++)
        {
            cin >> Ary[i];
        }
        int ShowResult = cntNONsub(Ary);

        cout << "Case " << test << ": " << ShowResult << endl;
    }

    return 0;
}