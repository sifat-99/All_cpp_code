#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int countVampireSubMatrices(vector<vector<int> >& grid, int n, int m) {
    vector<vector<int> > dp(n, vector<int>(m, 0));
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1])) + 1;
                }
                count += dp[i][j];
            }
        }
    }

    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int caseNum = 1; caseNum <= t; ++caseNum) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        vector<vector<int> > grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                scanf("%d", &grid[i][j]);
            }
        }
        int result = countVampireSubMatrices(grid, n, m);
        printf("Case %d: %d\n", caseNum, result);
    }
    return 0;
}
