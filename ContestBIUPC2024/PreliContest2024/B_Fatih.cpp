#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;

vector<long long> fact, invFact;

long long modInverse(long long a, long long m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}

void precomputeFactorials(int maxN) {
    fact.resize(maxN + 1);
    invFact.resize(maxN + 1);
    fact[0] = 1;
    for (int i = 1; i <= maxN; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[maxN] = modInverse(fact[maxN], MOD);
    for (int i = maxN - 1; i >= 0; --i) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

long long nCr(int n, int r) {
    if (r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

int main() {
    int t;
    cin >> t;
    int maxN = 0;
    vector<pair<int, int> > queries(t);
    for (int i = 0; i < t; ++i) {
        cin >> queries[i].first >> queries[i].second;
        maxN = max(maxN, queries[i].first);
    }
    precomputeFactorials(maxN);
    for (int i = 0; i < t; ++i) {
        int n = queries[i].first;
        int r = queries[i].second;
        long long result = 0;
        for (int j = r; j <= n; ++j) {
            result = (result + nCr(j, r)) % MOD;
        }
        cout << result << endl;
    }
    return 0;
}
