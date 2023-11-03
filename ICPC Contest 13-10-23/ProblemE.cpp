#include <bits/stdc++.h>
using namespace std;

int cntNONsub(vector<int> Ary) {
    int n = Ary.size();
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int j = i;
        while (j + 1 < n && Ary[j + 1] == Ary[i]) {
            j++;
        }

        int len = j - i + 1;
        cnt += len * (len + 1) / 2;

        i = j;
    }

    return n * (n + 1) / 2 - cnt;
}

int main() {
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; test++) {
        int N;
        cin >> N;
        vector<int> Ary(N);
        for (int i = 0; i < N; i++) {
            cin >> Ary[i];
        }
        int ShowResult = cntNONsub(Ary);

        cout << "Case " << test << ": " << ShowResult << endl;
    }

    return 0;
}