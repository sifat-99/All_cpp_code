#include<bits/stdc++.h>
using namespace std;

const int mod = 998244353;
const int N = 3e5 + 5;

int T, n, m, fail[N], dp[N], sum[N];
char p[N], q[N];

void init() {
    memset(fail, 0, sizeof(fail));
    memset(dp, 0, sizeof(dp));
    memset(sum, 0, sizeof(sum));
}

void build_fail() {
    for (int i = 2, j = 0; i <= n; i++) {
        while (j && p[j + 1] != p[i]) j = fail[j];
        if (p[j + 1] == p[i]) j++;
        fail[i] = j;
    }
}

void solve() {
    init();
    scanf("%s%s", p + 1, q + 1);
    n = strlen(p + 1), m = strlen(q + 1);
    build_fail();
    for (int i = 1, j = 0; i <= m; i++) {
        while (j && p[j + 1] != q[i]) j = fail[j];
        if (p[j + 1] == q[i]) j++;
        dp[i] = sum[j];
        sum[j] = (sum[j] + dp[j - 1] + 1) % mod;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++) ans = (ans + dp[i]) % mod;
    printf("%d\n", ans);
}

int main() {
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}
